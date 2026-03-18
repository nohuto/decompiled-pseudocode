/*
 * XREFs of HUBFDO_IoctlGetNodeInformation @ 0x1C0076044
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0078740 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000D474 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0030B10 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0075D84 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeInformation(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  int ActivityIdIrp; // eax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  void *v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF

  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C0067198);
  v9 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 0x4CuLL, a3);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
           WdfDriverGlobals,
           a2,
           a3,
           &v16,
           0LL);
    if ( v9 >= 0 )
    {
      memset(v16, 0, a3);
      *(_DWORD *)v16 = 0;
      if ( *(_DWORD *)(v8 + 92) == 100 )
        *((_BYTE *)v16 + 75) = 1;
      HUBFDO_BuildUsb20HubDescriptor(v8, (char *)v16 + 4);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 2520),
        2u,
        3u,
        0x2Bu,
        (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
        v15);
    }
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v12 = (const GUID *)&v17;
      LODWORD(v15) = v9;
      LODWORD(v14) = 0;
      if ( ActivityIdIrp < 0 )
        v12 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_INFORMATION_COMPLETE,
        v12,
        *(_QWORD *)(v8 + 248),
        v14,
        v15);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           76LL);
}
