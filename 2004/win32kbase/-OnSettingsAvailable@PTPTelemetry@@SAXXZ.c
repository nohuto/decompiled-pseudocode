/*
 * XREFs of ?OnSettingsAvailable@PTPTelemetry@@SAXXZ @ 0x1C01A38D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PTPTelemetry::OnSettingsAvailable(void)
{
  PTPTelemetry::s_SettingsReady = 1;
}
