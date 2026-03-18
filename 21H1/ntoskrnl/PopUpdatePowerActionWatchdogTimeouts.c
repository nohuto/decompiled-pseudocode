/*
 * XREFs of PopUpdatePowerActionWatchdogTimeouts @ 0x1407618A0
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x14037FFB8 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14037FF1C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 */

__int64 PopUpdatePowerActionWatchdogTimeouts()
{
  __int64 result; // rax

  result = Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled();
  if ( (_DWORD)result )
  {
    PopPowerActionTransitioningWatchdogTimeout = 330;
    PopPowerActionResumingWatchdogTimeout = 150;
  }
  else
  {
    PopPowerActionTransitioningWatchdogTimeout = PopPowerActionTransitioningWatchdogTimeoutDefault;
    result = (unsigned int)PopPowerActionResumingWatchdogTimeoutDefault;
    PopPowerActionResumingWatchdogTimeout = PopPowerActionResumingWatchdogTimeoutDefault;
  }
  return result;
}
