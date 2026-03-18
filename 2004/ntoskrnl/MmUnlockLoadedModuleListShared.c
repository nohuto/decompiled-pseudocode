/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x140224598
 * Callers:
 *     MiIsDriverPage @ 0x140224760 (MiIsDriverPage.c)
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     RtlpxLookupFunctionTable @ 0x1402E92F0 (RtlpxLookupFunctionTable.c)
 *     MmIsSessionExecutionValid @ 0x14035CEF0 (MmIsSessionExecutionValid.c)
 *     RtlPcToFileName @ 0x1403C9020 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140535358 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
