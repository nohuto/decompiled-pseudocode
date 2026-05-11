/*
 * XREFs of ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000BF40
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000AFA0 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C1D8 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C510 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C704 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C920 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB14 (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000CD88 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E514 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA54 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F010 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F6E4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?RecurseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000C070 (-RecurseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOG.c)
 *     ?RecurseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000C124 (-RecurseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLO.c)
 */

__int64 __fastcall CSidebandDevice::GetBridgePinForDataPin(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        int a3,
        unsigned int *a4)
{
  int v8; // ebx
  ULONG ConnectionsCount; // esi
  int v10; // r11d
  const KSTOPOLOGY_CONNECTION *Connections; // r14
  const struct KSTOPOLOGY_CONNECTION *v12; // r8
  int v13; // eax
  int v15; // [rsp+28h] [rbp-30h]

  v8 = -1073741275;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x56u,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
  ConnectionsCount = a2->ConnectionsCount;
  v10 = 0;
  if ( ConnectionsCount )
  {
    Connections = a2->Connections;
    while ( 1 )
    {
      v12 = &Connections[v10];
      if ( v12->FromNode == -1 && v12->FromNodePin == a3 )
      {
        v13 = CSidebandDevice::RecurseToTerminalForDataFlowInPin(this, a2, v12, a4);
      }
      else
      {
        if ( v12->ToNode != -1 || v12->ToNodePin != a3 )
          goto LABEL_13;
        v13 = CSidebandDevice::RecurseToTerminalForDataFlowOutPin(this, a2, v12, a4);
      }
      v8 = v13;
LABEL_13:
      if ( v8 < 0 && ++v10 < ConnectionsCount )
        continue;
      break;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x57u,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
      v15);
  }
  return (unsigned int)v8;
}
