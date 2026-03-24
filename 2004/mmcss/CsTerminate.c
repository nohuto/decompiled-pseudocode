/*
 * XREFs of CsTerminate @ 0x1C000C494
 * Callers:
 *     CiDriverUnload @ 0x1C000C430 (CiDriverUnload.c)
 *     DriverEntry @ 0x1C000D120 (DriverEntry.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004AFC (CiFreeMemory.c)
 *     WppCleanupKm @ 0x1C000C5A8 (WppCleanupKm.c)
 *     CiSchedulerTerminate @ 0x1C000C8B4 (CiSchedulerTerminate.c)
 */

__int64 CsTerminate()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax

  if ( CiThreadCallbackRegistered )
  {
    PsRemoveCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
    CiThreadCallbackRegistered = 0;
  }
  CiSchedulerTerminate();
  if ( CiKernelExtensionRegistration )
    ExUnregisterExtension();
  while ( 1 )
  {
    Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
      break;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead
      || (v1 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink,
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink->Blink != WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      __fastfail(3u);
    }
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink;
    v1->Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
    CiFreeMemory(Flink[1].Flink);
    CiFreeMemory(&Flink[-1].Blink);
  }
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
  if ( CiNdisThrottleWorkItem )
  {
    IoFreeWorkItem(CiNdisThrottleWorkItem);
    if ( CiNdisDeviceHandle )
      ZwClose(CiNdisDeviceHandle);
  }
  if ( CiLoggerContext )
  {
    EtwUnregister(CiLoggerContext);
    CiLoggerContext = 0LL;
  }
  return WppCleanupKm();
}
