/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1408EEAD4
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408EEB60 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408EECA0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsNetworkRefreshEnabled()
{
  return (PopNetStandbyStateMask & 0x4E) == 0 && (PopNetStandbyStateMask & 0x80u) != 0 && PopEnableDsNetRefresh != 0;
}
