/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C0038248
 * Callers:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0035A24 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0036AC8 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     DpiDxgkDdiUnload @ 0x1C0057A48 (DpiDxgkDdiUnload.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0266CFC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C02BAC00 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0011B40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}
