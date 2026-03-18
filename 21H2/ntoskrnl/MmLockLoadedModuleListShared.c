/*
 * XREFs of MmLockLoadedModuleListShared @ 0x1402DC098
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x140297AE0 (RtlpxLookupFunctionTable.c)
 *     MmIsSessionExecutionValid @ 0x1402DBFAC (MmIsSessionExecutionValid.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140595F4C (MiIsAddressInDriverView.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v3; // dl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (v3 + 1)) - 1) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
  *a1 = CurrentIrql;
}
