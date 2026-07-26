/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C005DCBC
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C005DA40 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005DC5C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &EnteringConnectedStandby, a3, 1u, &v4);
}
