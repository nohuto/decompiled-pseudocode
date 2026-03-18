/*
 * XREFs of MmLockLoadedModuleListShared @ 0x1402247F4
 * Callers:
 *     MiIsDriverPage @ 0x140224760 (MiIsDriverPage.c)
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     RtlpxLookupFunctionTable @ 0x1402E92F0 (RtlpxLookupFunctionTable.c)
 *     MmIsSessionExecutionValid @ 0x14035CEF0 (MmIsSessionExecutionValid.c)
 *     RtlPcToFileName @ 0x1403C9020 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140535358 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v2; // cl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    v2 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v2 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (v2 + 1)) - 1) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
}
