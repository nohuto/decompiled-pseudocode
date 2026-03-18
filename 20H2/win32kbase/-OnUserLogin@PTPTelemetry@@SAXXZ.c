/*
 * XREFs of ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01A1890
 * Callers:
 *     <none>
 * Callees:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A18C8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01A2460 (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 */

void PTPTelemetry::OnUserLogin(void)
{
  PTPTelemetry::s_SettingsReady = 1;
  if ( PTPTelemetry::ShouldPtpSettingFire() )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    if ( PTPTelemetry::s_HasTpDevice )
      PTPTelemetry::s_SettingsFired = 1;
  }
}
