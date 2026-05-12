/*
 * XREFs of McTemplateK0zqjuuuq_EtwWriteTransfer @ 0x1C004542C
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C0017F44 (RaidUnitGetCompatibleIds.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003E98 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuuq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-69h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-59h]
  int v15; // [rsp+48h] [rbp-51h]
  int v16; // [rsp+4Ch] [rbp-4Dh]
  char *v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  char *v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  char *v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  char *v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  char *v27; // [rsp+A0h] [rbp+7h]
  __int64 v28; // [rsp+A8h] [rbp+Fh]

  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = (unsigned int)(2 * v10 + 2);
  }
  else
  {
    v11 = 10LL;
  }
  v15 = v11;
  v16 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v18 = 4LL;
  v14 = a4;
  v17 = &a5;
  v19 = a6;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v20 = 16LL;
  v22 = 1LL;
  v24 = 1LL;
  v26 = 1LL;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v11, &EventSMRUnsupportedError, 0LL, 8u, &v13);
}
