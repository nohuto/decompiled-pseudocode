/*
 * XREFs of McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpIndicateChildStatus @ 0x1C005EEC0 (DpIndicateChildStatus.c)
 *     DpiMiracastIoCompleteRoutine @ 0x1C0061B90 (DpiMiracastIoCompleteRoutine.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C01950A0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01F0768 (DpiDxgkDdiSetPowerState.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01F3488 (DpiDxgkDdiDisplayDetectControl.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02BD52C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C0356AD0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EP.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C038DA88 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C038DDAC (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C0396E00 (DpiDxgkDdiNotifyAcpiEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013C40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqtqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-39h] BYREF
  va_list v5; // [rsp+40h] [rbp-29h]
  __int64 v6; // [rsp+48h] [rbp-21h]
  va_list v7; // [rsp+50h] [rbp-19h]
  __int64 v8; // [rsp+58h] [rbp-11h]
  va_list v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  va_list v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  va_list v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  __int64 v15; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v17; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D8h] [rbp+6Fh]
  __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  va_list va3; // [rsp+E0h] [rbp+77h]
  va_list va4; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  va_copy(v13, va4);
  v12 = 4LL;
  v14 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 6u, &v4);
}
