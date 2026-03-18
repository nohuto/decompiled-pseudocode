/*
 * XREFs of MiReleaseInPageRefs @ 0x140328D28
 * Callers:
 *     MiInvalidateCollidedIos @ 0x140328AC8 (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // eax
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0);
  v2 = (unsigned __int8)MiLockPageInline(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
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
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    v8 = *(_QWORD *)(a1 + 16);
    if ( qword_140C4DDC0 && (v8 & 0x10) == 0 )
      v8 &= ~qword_140C4DDC0;
    LOBYTE(v9) = MiDereferenceControlAreaPfnList(*(_QWORD *)(v8 >> 16), v8 >> 16, SchedulerAssist, 3LL);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v9) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v9) = KeGetCurrentIrql();
        if ( (unsigned __int8)v9 <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v9 & v11[5]) == 0;
          v11[5] &= v9;
          if ( v7 )
            LOBYTE(v9) = KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    __writecr8(v2);
  }
  return v9;
}
