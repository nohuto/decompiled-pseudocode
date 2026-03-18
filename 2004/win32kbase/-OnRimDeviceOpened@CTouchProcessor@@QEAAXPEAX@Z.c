/*
 * XREFs of ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0195B8C
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C005BFA0 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C01955D4 (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ApiSetEditionCreateEdgePalmRejectionZones @ 0x1C01C72C4 (ApiSetEditionCreateEdgePalmRejectionZones.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceOpened(CTouchProcessor *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        339,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  if ( CTouchProcessor::IsTouchDevice(this, v2) )
    ApiSetEditionCreateEdgePalmRejectionZones(v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        7,
        340,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
}
