/*
 * XREFs of McTemplateK0j_EtwWriteTransfer @ 0x1C00B591C
 * Callers:
 *     ndisNsiClientParameterChangeHandler @ 0x1C00FE3F0 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D9CC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0j_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a4;
  v7 = 16;
  return McGenEventWrite_EtwWriteTransfer(
           NDIS_PROVIDER_ID_Context,
           &ChangeNotificationNetwork,
           (const GUID *)&NDIS_PROVIDER_ID,
           2u,
           &v5);
}
