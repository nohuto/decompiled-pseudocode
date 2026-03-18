/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C011EA50
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C000B10C (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     UnloadWin32kCall @ 0x1C011EA74 (UnloadWin32kCall.c)
 *     ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C037B008 (-wil_UninitializeFeatureStaging@@YAXXZ.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  UnloadWin32kCall();
  wil_UninitializeFeatureStaging();
  return 0LL;
}
