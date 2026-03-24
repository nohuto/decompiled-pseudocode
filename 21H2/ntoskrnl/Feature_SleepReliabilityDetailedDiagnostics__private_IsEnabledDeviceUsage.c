/*
 * XREFs of Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage @ 0x1403F8354
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x1407749C4 (PopEnableSystemSleepCheckpoint.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140775730 (PopUpdatePowerActionWatchdogTimeouts.c)
 * Callees:
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback @ 0x1403F838C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback.c)
 */

__int64 Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage()
{
  if ( (Feature_SleepReliabilityDetailedDiagnostics__private_featureState & 0x10) != 0 )
    return Feature_SleepReliabilityDetailedDiagnostics__private_featureState & 1;
  else
    return Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledFallback(
             (unsigned int)Feature_SleepReliabilityDetailedDiagnostics__private_featureState,
             3LL);
}
