/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x14027D5E8
 * Callers:
 *     MiIsDriverPage @ 0x14027D7B0 (MiIsDriverPage.c)
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 *     MmIsSessionExecutionValid @ 0x14031F3E0 (MmIsSessionExecutionValid.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     RtlpxLookupFunctionTable @ 0x14032E430 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x1403C8210 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140534D08 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( (unsigned __int8)v1 < 0xFu )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v5 = (v4 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v4;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v1);
  }
}
