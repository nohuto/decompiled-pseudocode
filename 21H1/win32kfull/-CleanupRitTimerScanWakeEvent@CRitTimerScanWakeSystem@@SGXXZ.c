/*
 * XREFs of ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SGXXZ @ 0xD4684
 * Callers:
 *     _EditionBaseDriverUnloadUninitialize@0 @ 0xD4D88 (_EditionBaseDriverUnloadUninitialize@0.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     <none>
 */

void __stdcall CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent()
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0);
  if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
  {
    Win32FreePool(CRitTimerScanWakeSystem::ritTimerScanWakeEvent);
    CRitTimerScanWakeSystem::ritTimerScanWakeEvent = 0;
  }
  ExReleasePushLockExclusiveEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0);
  KeLeaveCriticalRegion();
}
