/*
 * XREFs of PopPolicyTimeChange @ 0x140767310
 * Callers:
 *     PopPolicyWorkerThread @ 0x1403537B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     PopEventCalloutDispatch @ 0x1403A4ABC (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 */

__int64 PopPolicyTimeChange()
{
  ExAcquireTimeRefreshLock(1u);
  ZwUpdateWnfStateData((__int64)&WNF_PO_SYSTEM_TIME_CHANGED, (__int64)&PopTimeChangeInfo);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
