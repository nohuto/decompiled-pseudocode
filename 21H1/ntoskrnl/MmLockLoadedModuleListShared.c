/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14027D844
 * Callers:
 *     MiIsDriverPage @ 0x14027D7B0 (MiIsDriverPage.c)
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 *     MmIsSessionExecutionValid @ 0x14031F3E0 (MmIsSessionExecutionValid.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     RtlpxLookupFunctionTable @ 0x14032E430 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x1403C8210 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140534D08 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
