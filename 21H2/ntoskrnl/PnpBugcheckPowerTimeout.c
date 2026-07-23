/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x14050DA20
 * Callers:
 *     PopBuildDeviceNotifyListWatchdog @ 0x1409B34D0 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __noreturn PnpBugcheckPowerTimeout()
{
  ULONG_PTR v0; // r9
  ULONG_PTR BugCheckParameter4[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = PnpDelayedRemoveWorkerThread;
  if ( !PnpDelayedRemoveWorkerThread )
  {
    v0 = PnpDeviceEventThread;
    if ( !PnpDeviceEventThread )
      v0 = PnpDeviceActionThread[0];
  }
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = ExWorkerQueue;
  BugCheckParameter4[3] = IoWorkerQueue;
  BugCheckParameter4[0] = 163841LL;
  KeBugCheckEx(0x9Fu, 4uLL, (unsigned int)PopWatchdogSleepTimeout, v0, (ULONG_PTR)BugCheckParameter4);
}
