/*
 * XREFs of PopDeepSleepEnabled @ 0x14035D3F0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14076525C (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408EABA0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408EB090 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
