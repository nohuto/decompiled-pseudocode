/*
 * XREFs of ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C019B7A0
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C004E600 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C006EDEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C019B2BC (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01AFCD4 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     IsTouchpadDevice @ 0x1C01B17A0 (IsTouchpadDevice.c)
 *     ApiSetEditionDestroyEdgePalmRejectionZones @ 0x1C01CD418 (ApiSetEditionDestroyEdgePalmRejectionZones.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceClosed(CTouchProcessor *this, void *a2)
{
  void *v2; // rbx
  int v3; // edx
  DelayZonePalmRejection *Instance; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        336,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( CTouchProcessor::IsTouchDevice(this, (unsigned __int64)v2) )
    ApiSetEditionDestroyEdgePalmRejectionZones(v2);
  if ( !(unsigned __int8)IsTouchpadDevice(v2) )
  {
    Instance = DelayZonePalmRejection::GetInstance();
    if ( Instance )
      DelayZonePalmRejection::OnDeviceRemoval(Instance, v2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        7,
        337,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
}
