/*
 * XREFs of PopPolicyTimeChange @ 0x140776340
 * Callers:
 *     PopPolicyWorkerThread @ 0x140324320 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PopEventCalloutDispatch @ 0x1403A6EBC (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
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
