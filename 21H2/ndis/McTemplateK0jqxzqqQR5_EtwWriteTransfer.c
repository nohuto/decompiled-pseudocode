/*
 * XREFs of McTemplateK0jqxzqqQR5_EtwWriteTransfer @ 0x1C006C720
 * Callers:
 *     NdisWriteErrorLogEntry @ 0x1C006C920 (NdisWriteErrorLogEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005DC5C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzqqQR5_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        int a9,
        __int64 a10)
{
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h]
  __int64 v16; // [rsp+48h] [rbp-51h]
  char *v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  char *v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  const wchar_t *v21; // [rsp+70h] [rbp-29h]
  int v22; // [rsp+78h] [rbp-21h]
  int v23; // [rsp+7Ch] [rbp-1Dh]
  char *v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  int *v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  __int64 v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]

  v10 = a7;
  v15 = a4;
  v17 = &a5;
  v16 = 16LL;
  v18 = 4LL;
  v19 = &a6;
  v20 = 8LL;
  if ( a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a7[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v22 = v12;
  v23 = 0;
  if ( !a7 )
    v10 = L"NULL";
  v30 = 0;
  v21 = v10;
  v24 = &a8;
  v25 = 4LL;
  v26 = &a9;
  v28 = a10;
  v29 = 4 * a9;
  v27 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &NdisErrorLogEntry, a3, 8u, &v14);
}
