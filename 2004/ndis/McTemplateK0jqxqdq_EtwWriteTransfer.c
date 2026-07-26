/*
 * XREFs of McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C00A16D4
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BA10 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C0099C24 (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C0099DC4 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D9CC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0jqxqdq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v9; // [rsp+30h] [rbp-61h] BYREF
  _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-51h] BYREF
  __int64 v11; // [rsp+50h] [rbp-41h]
  __int64 v12; // [rsp+58h] [rbp-39h]
  char *v13; // [rsp+60h] [rbp-31h]
  __int64 v14; // [rsp+68h] [rbp-29h]
  char *v15; // [rsp+70h] [rbp-21h]
  __int64 v16; // [rsp+78h] [rbp-19h]
  char *v17; // [rsp+80h] [rbp-11h]
  __int64 v18; // [rsp+88h] [rbp-9h]
  char *v19; // [rsp+90h] [rbp-1h]
  __int64 v20; // [rsp+98h] [rbp+7h]
  int *v21; // [rsp+A0h] [rbp+Fh]
  __int64 v22; // [rsp+A8h] [rbp+17h]

  v11 = a4;
  v13 = &a5;
  v9 = 65537;
  v15 = &a6;
  v12 = 16LL;
  v17 = &a7;
  v19 = &a8;
  v21 = &v9;
  v14 = 4LL;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 7u, &v10);
}
