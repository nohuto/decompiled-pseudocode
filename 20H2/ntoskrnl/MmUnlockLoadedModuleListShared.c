/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x140297044
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x140228D50 (RtlpxLookupFunctionTable.c)
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 *     MiIsDriverPage @ 0x140296FB0 (MiIsDriverPage.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     MmIsSessionExecutionValid @ 0x14032D9B0 (MmIsSessionExecutionValid.c)
 *     RtlPcToFileName @ 0x1403CBC60 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140538D28 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
