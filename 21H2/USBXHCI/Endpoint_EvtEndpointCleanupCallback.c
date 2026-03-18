/*
 * XREFs of Endpoint_EvtEndpointCleanupCallback @ 0x1C0001A30
 * Callers:
 *     <none>
 * Callees:
 *     XilEndpoint_FreeResources @ 0x1C000192C (XilEndpoint_FreeResources.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C0001944 (WPP_RECORDER_SF_ddqqq.c)
 *     UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x1C0001C20 (UsbDevice_RemoveEndpointFromDeviceEndpointList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C0037688 (XilEndpoint_DestroySecureObject.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C0048B8C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Endpoint_EvtEndpointCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+40h] [rbp-28h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00611A8);
  v3 = (_QWORD *)v2;
  v4 = v2 + 1312;
  if ( *(_BYTE *)(v2 + 1336) )
    XilEndpoint_DestroySecureObject(v2 + 1312);
  result = XilEndpoint_FreeResources(v4);
  v6 = v3[3];
  if ( v6 == a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = (int)v3;
      v12 = *((_DWORD *)v3 + 36);
      WPP_RECORDER_SF_ddqqq(*(_QWORD *)(*v3 + 72LL), *(unsigned __int8 *)(v3[2] + 135LL), v6, 0x16u, v11);
    }
    v7 = *((_DWORD *)v3 + 36);
    if ( v7 != 1 )
    {
      v8 = v7;
      v9 = v3[2];
      if ( v3 == *(_QWORD **)(v9 + 8 * v8 + 168) )
        *(_QWORD *)(v9 + 8 * v8 + 168) = 0LL;
    }
    v10 = v3[33];
    if ( v10 )
    {
      if ( *(_QWORD *)v10 )
      {
        IoFreeIrp(*(PIRP *)v10);
        *(_QWORD *)v3[33] = 0LL;
        v10 = v3[33];
      }
      if ( *(_QWORD *)(v10 + 144) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(v3[33] + 144LL) = 0LL;
        v10 = v3[33];
      }
      ExFreePoolWithTag((PVOID)v10, 0x49434858u);
    }
    result = UsbDevice_RemoveEndpointFromDeviceEndpointList(v3[2], v3[3], v3 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
      return McTemplateK0pppnnn_EtwWriteTransfer(
               (int)v3 + 103,
               (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_DELETE,
               0,
               *(_QWORD *)(*v3 + 8LL),
               v3[1],
               v3[3],
               v12,
               (__int64)(v3 + 12),
               v13,
               (__int64)v3 + 103);
  }
  return result;
}
