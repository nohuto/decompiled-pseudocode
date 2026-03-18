/*
 * XREFs of ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01A47E0
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F5D0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01A3C10 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     <none>
 */

bool PTPTelemetry::ShouldPtpSettingFire(void)
{
  bool result; // al

  result = 0;
  if ( !PTPTelemetry::s_SettingsFired )
    return PTPTelemetry::s_SettingsReady;
  return result;
}
