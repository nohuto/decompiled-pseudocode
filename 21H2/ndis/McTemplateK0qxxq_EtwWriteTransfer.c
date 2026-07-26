/*
 * XREFs of McTemplateK0qxxq_EtwWriteTransfer @ 0x1C005DD88
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005B6D8 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005DC5C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qxxq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  int *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 4LL;
  v9 = &v17;
  v12 = 8LL;
  v11 = &a5;
  v14 = 8LL;
  v13 = &a6;
  v16 = 4LL;
  v15 = &a7;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportCsStats, a3, 5u, &v8);
}
