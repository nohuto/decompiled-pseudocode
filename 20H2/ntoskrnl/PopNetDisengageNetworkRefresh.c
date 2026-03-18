/*
 * XREFs of PopNetDisengageNetworkRefresh @ 0x1408F451C
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F4770 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408F48B0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x1408F47F8 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetDisengageNetworkRefresh()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v1);
  result = PopNetSetResiliencyPhaseBias(0LL);
  PopNetRefreshIntervalActive = 0;
  return result;
}
