/*
 * XREFs of ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01A3C10
 * Callers:
 *     <none>
 * Callees:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A3C48 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01A47E0 (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
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
