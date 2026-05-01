/*
 * XREFs of CrmStateMonitorStateSet @ 0x18002B6B4
 * Callers:
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x18002AD90 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorSebCallback @ 0x18002AE00 (CrmStateMonitorSebCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x18002B440 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x1800365C0 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180037330 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorGPUUsageCSCallback @ 0x180037E30 (CrmStateMonitorGPUUsageCSCallback.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18003B840 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmSuspendNotification @ 0x18003C250 (CrmSuspendNotification.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003C4E4 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18003CE50 (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x18003DC70 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x18003E2D0 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180042E40 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180043580 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x180043810 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorWNFCallback @ 0x180043AC0 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x180043D80 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x180043F00 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x180044160 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x1800445C0 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x180084940 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedAcTimerCallback @ 0x180084B10 (CrmStateMonitorDelayedAcTimerCallback.c)
 *     CrmStateMonitorDelayedCsTimerCallback @ 0x180084BB0 (CrmStateMonitorDelayedCsTimerCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x180084F80 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18002BA64 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18002BC40 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(void **a1, const void *a2, size_t a3, int a4)
{
  unsigned int *i; // rbx
  _BYTE v10[56]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 1);
    *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  }
  CrmStateMonitorLogDataGet(a1, v10, a2);
  memcpy_0(a1[5], a2, a3);
  for ( i = (unsigned int *)a1[3]; i != (unsigned int *)(a1 + 3); i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, const void *))i - 1))(i - 2, *(unsigned int *)a1, a2);
  if ( !a4 )
  {
    *((_DWORD *)a1 + 4) = 0;
    RtlReleaseSRWLockExclusive(a1 + 1);
  }
  return CrmLogStateMonitorStateSet(a1, v10);
}
