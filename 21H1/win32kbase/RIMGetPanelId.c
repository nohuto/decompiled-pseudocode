/*
 * XREFs of RIMGetPanelId @ 0x1C0022628
 * Callers:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C00225C4 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01668BC (RIMGetDeviceLocationInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C00226D8 (RIMGetPointerDevicePDO.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _WORD *a2, ULONG a3)
{
  NTSTATUS DevicePropertyData; // ebx
  int v5; // edx
  int v7; // r9d
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF
  ULONG RequiredSize; // [rsp+78h] [rbp+20h] BYREF

  Type = a3;
  *a2 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1);
  if ( DevicePropertyData >= 0 )
  {
    Type = 0;
    RequiredSize = 114;
    DevicePropertyData = IoGetDevicePropertyData(0LL, &DEVPKEY_Device_PanelId, 0, 0, 0x72u, a2, &RequiredSize, &Type);
    if ( DevicePropertyData == -1073741772 )
    {
      DevicePropertyData = 0;
LABEL_4:
      ObfDereferenceObject(0LL);
      return (unsigned int)DevicePropertyData;
    }
    if ( DevicePropertyData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 3;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v5,
          1,
          22,
          (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids,
          DevicePropertyData);
      }
      goto LABEL_4;
    }
    if ( Type == 18 )
    {
      if ( RequiredSize )
      {
        if ( !a2[((unsigned __int64)RequiredSize >> 1) - 1] )
          goto LABEL_4;
        DevicePropertyData = -1073741823;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v7 = 25;
      }
      else
      {
        DevicePropertyData = -1073741823;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v7 = 24;
      }
    }
    else
    {
      DevicePropertyData = -1073741823;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_4;
      v7 = 23;
    }
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v5, 1, v7, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    goto LABEL_4;
  }
  return (unsigned int)DevicePropertyData;
}
