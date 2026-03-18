/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C011D410
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00C79BC (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     UnloadWin32kCall @ 0x1C011D434 (UnloadWin32kCall.c)
 *     wil_UninitializeFeatureStaging @ 0x1C037C008 (wil_UninitializeFeatureStaging.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  UnloadWin32kCall();
  wil_UninitializeFeatureStaging();
  return 0LL;
}
