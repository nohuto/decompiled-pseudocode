/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1408E8E80
 * Callers:
 *     PopPolicyWorkerThread @ 0x1403537B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x1408EAE04 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
