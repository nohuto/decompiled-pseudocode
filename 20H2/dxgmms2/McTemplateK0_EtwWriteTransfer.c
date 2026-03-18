/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C0033360
 * Callers:
 *     VidSchEnableLatencyToleranceTimer @ 0x1C0034060 (VidSchEnableLatencyToleranceTimer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0023D10 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}
