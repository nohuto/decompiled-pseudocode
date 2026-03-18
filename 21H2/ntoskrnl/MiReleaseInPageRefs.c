/*
 * XREFs of MiReleaseInPageRefs @ 0x140226D50
 * Callers:
 *     MiInvalidateCollidedIos @ 0x140226AE0 (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 SchedulerAssist; // r8
  __int64 v4; // rcx
  int v5; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v8; // eax
  bool v9; // zf
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 0LL);
  v2 = (unsigned __int8)MiLockPageInline(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v8 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    v4 = *(_QWORD *)(a1 + 16);
    if ( qword_140C50780 && (v4 & 0x10) == 0 )
      v4 &= ~qword_140C50780;
    LOBYTE(v5) = MiDereferenceControlAreaPfnList(*(_QWORD *)(v4 >> 16), v4 >> 16, SchedulerAssist, 3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v5) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v5) = KeGetCurrentIrql();
        if ( (unsigned __int8)v5 <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v5 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v5 & v11[5]) == 0;
          v11[5] &= v5;
          if ( v9 )
            LOBYTE(v5) = KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    __writecr8(v2);
  }
  return v5;
}
