/*
 * XREFs of ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SG_NXZ @ 0xA98AC
 * Callers:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _FreezeThawTimers@0 @ 0xA220C (_FreezeThawTimers@0.c)
 *     _SetProcessTimerDelay@12 @ 0x156204 (_SetProcessTimerDelay@12.c)
 * Callees:
 *     <none>
 */

char __stdcall CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent()
{
  char v0; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0);
  if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
  {
    v0 = 1;
    KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
  }
  else
  {
    v0 = 0;
  }
  ExReleasePushLockSharedEx(&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock, 0);
  KeLeaveCriticalRegion();
  return v0;
}
