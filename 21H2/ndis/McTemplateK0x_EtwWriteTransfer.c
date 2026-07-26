/*
 * XREFs of McTemplateK0x_EtwWriteTransfer @ 0x1C005E118
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C005DA40 (ndisWnfPdcCallback.c)
 *     ndisNsiClientParameterChangeHandler @ 0x1C00FE5A0 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005DC5C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0x_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 2u, &v4);
}
