/*
 * XREFs of McTemplateK0jqxz_EtwWriteTransfer @ 0x1C0097FEC
 * Callers:
 *     NdisCloseAdapter @ 0x1C013A890 (NdisCloseAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D9CC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0jqxz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-21h] BYREF
  __int64 v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  char *v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  char *v16; // [rsp+60h] [rbp+Fh]
  __int64 v17; // [rsp+68h] [rbp+17h]
  const wchar_t *v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+7Ch] [rbp+2Bh]

  v7 = a7;
  v12 = a4;
  v14 = &a5;
  v16 = &a6;
  v13 = 16LL;
  v15 = 4LL;
  v17 = 8LL;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v19 = v9;
  v20 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v18 = v7;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &CloseAdapter, a3, 5u, &v11);
}
