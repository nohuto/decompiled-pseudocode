/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14031C888
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14021EBB0 (RtlpxLookupFunctionTable.c)
 *     MmIsSessionExecutionValid @ 0x1402CF5C0 (MmIsSessionExecutionValid.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiLockPagableImageSection @ 0x14031C4F0 (MiLockPagableImageSection.c)
 *     MiIsDriverPage @ 0x14031C6C0 (MiIsDriverPage.c)
 *     RtlPcToFileName @ 0x1403CC630 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x14053A828 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
