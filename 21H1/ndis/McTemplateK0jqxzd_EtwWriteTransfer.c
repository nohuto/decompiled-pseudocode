/*
 * XREFs of McTemplateK0jqxzd_EtwWriteTransfer @ 0x1C0098930
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103DC0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D34C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+48h] [rbp-21h]
  char *v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  char *v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  const wchar_t *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  char *v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+88h] [rbp+1Fh]

  v8 = a7;
  v13 = a4;
  v15 = &a5;
  v17 = &a6;
  v14 = 16LL;
  v16 = 4LL;
  v18 = 8LL;
  if ( a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a7[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v20 = v10;
  v21 = 0;
  if ( !a7 )
    v8 = L"NULL";
  v23 = 4LL;
  v19 = v8;
  v22 = &a8;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &ProtocolBindStatus, a3, 6u, &v12);
}
