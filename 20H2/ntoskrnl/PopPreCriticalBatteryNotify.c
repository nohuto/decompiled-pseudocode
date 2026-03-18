/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1408EEA90
 * Callers:
 *     PopPolicyWorkerThread @ 0x140324320 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x1408F0A14 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
