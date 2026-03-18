/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1408E7C00
 * Callers:
 *     PopPolicyWorkerThread @ 0x140315930 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x1408E9B84 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
