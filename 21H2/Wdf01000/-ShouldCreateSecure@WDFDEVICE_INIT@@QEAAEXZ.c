/*
 * XREFs of ?ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ @ 0x1C00265EC
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002640C (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 */

unsigned __int8 __fastcall WDFDEVICE_INIT::ShouldCreateSecure(WDFDEVICE_INIT *this)
{
  if ( !this->Security.DeviceClassSet && !this->Security.Sddl )
  {
    if ( !this->DeviceName && (this->Characteristics & 0x80u) == 0 )
      return 0;
    if ( this->InitType == FxDeviceInitTypePdo )
    {
      WPP_IFR_SF_q(this->DriverGlobals, 3u, 0x12u, 0xDu, WPP_FxDeviceInit_cpp_Traceguids, this->Driver);
      return 0;
    }
  }
  return 1;
}
