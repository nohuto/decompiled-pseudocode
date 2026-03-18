/*
 * XREFs of MiReleaseInPageRefs @ 0x14031AF0C
 * Callers:
 *     MiInvalidateCollidedIos @ 0x14031ACAC (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL);
  v4 = (unsigned __int8)MiLockPageInline(a1, v2, v3);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (unsigned int)MI_PFN_IS_PROTO(a1, v5, v6) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v10 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    v12 = *(_QWORD *)(a1 + 16);
    if ( qword_140C4DE80 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140C4DE80;
    LOBYTE(v13) = MiDereferenceControlAreaPfnList(*(_QWORD *)(v12 >> 16), v12 >> 16, SchedulerAssist, (_DWORD *)3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v13) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v13) = KeGetCurrentIrql();
        if ( (unsigned __int8)v13 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v13 & v15[5]) == 0;
          v15[5] &= v13;
          if ( v11 )
            LOBYTE(v13) = KiRemoveSystemWorkPriorityKick(v14);
        }
      }
    }
    __writecr8(v4);
  }
  return v13;
}
