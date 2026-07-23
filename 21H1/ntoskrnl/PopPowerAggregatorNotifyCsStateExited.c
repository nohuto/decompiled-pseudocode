/*
 * XREFs of PopPowerAggregatorNotifyCsStateExited @ 0x1408E9F60
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1408EA110 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x140710A4C (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x1407653C0 (PopBlockSessionSwitch.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FA2B0 (TtmNotifyLowPowerStateExited.c)
 */

ULONG PopPowerAggregatorNotifyCsStateExited()
{
  __int128 v1; // [rsp+20h] [rbp-30h] BYREF
  __int128 v2; // [rsp+30h] [rbp-20h]
  __int64 v3; // [rsp+40h] [rbp-10h]
  unsigned int v4; // [rsp+60h] [rbp+10h] BYREF

  v4 = -1;
  v3 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  PopBlockSessionSwitch(1, &v4);
  if ( TtmpEnabled == 1 )
  {
    TtmNotifyLowPowerStateExited(v4);
  }
  else
  {
    v1 = 5uLL;
    v2 = 0uLL;
    v3 = 0LL;
    PopInvokeWin32Callout(5, (__int64)&v1, 1, (int *)&v4);
  }
  return PopBlockSessionSwitch(0, &v4);
}
