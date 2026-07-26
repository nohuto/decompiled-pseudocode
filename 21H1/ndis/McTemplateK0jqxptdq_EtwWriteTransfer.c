/*
 * XREFs of McTemplateK0jqxptdq_EtwWriteTransfer @ 0x1C00A1154
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BA10 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D34C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0jqxptdq_EtwWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-69h] BYREF
  __int64 v10; // [rsp+40h] [rbp-59h]
  __int64 v11; // [rsp+48h] [rbp-51h]
  char *v12; // [rsp+50h] [rbp-49h]
  __int64 v13; // [rsp+58h] [rbp-41h]
  char *v14; // [rsp+60h] [rbp-39h]
  __int64 v15; // [rsp+68h] [rbp-31h]
  char *v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  char *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  va_list v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  va_list v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]
  __int64 v24; // [rsp+110h] [rbp+77h] BYREF
  va_list va; // [rsp+110h] [rbp+77h]
  va_list va1; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v24 = va_arg(va1, _QWORD);
  v10 = a4;
  v12 = &a5;
  v11 = 16LL;
  v13 = 4LL;
  v14 = &a6;
  v15 = 8LL;
  v16 = &a7;
  v18 = &a8;
  va_copy(v20, va);
  va_copy(v22, va1);
  v17 = 8LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &DoOidRequest, a3, 8u, &v9);
}
