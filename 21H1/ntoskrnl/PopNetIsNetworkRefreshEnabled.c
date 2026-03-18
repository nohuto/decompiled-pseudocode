/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1408ED7E4
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408ED870 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408ED9B0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsNetworkRefreshEnabled()
{
  return (PopNetStandbyStateMask & 0x4E) == 0 && (PopNetStandbyStateMask & 0x80u) != 0 && PopEnableDsNetRefresh != 0;
}
