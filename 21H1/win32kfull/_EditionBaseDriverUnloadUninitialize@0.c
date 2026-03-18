/*
 * XREFs of _EditionBaseDriverUnloadUninitialize@0 @ 0xD4D88
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SGXXZ @ 0xD4684 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SGXXZ.c)
 *     _UnloadWin32kCall@0 @ 0xF8F1A (_UnloadWin32kCall@0.c)
 *     _wil_UninitializeFeatureStaging@0 @ 0x27A000 (_wil_UninitializeFeatureStaging@0.c)
 */

int __stdcall EditionBaseDriverUnloadUninitialize()
{
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  UnloadWin32kCall();
  wil_UninitializeFeatureStaging();
  return 0;
}
