/*
 * XREFs of McTemplateK0zqzt_EtwWriteTransfer @ 0x1C0150908
 * Callers:
 *     EtwFontLoadAttemptEvent @ 0x1C014FD40 (EtwFontLoadAttemptEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001B2C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqzt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        const wchar_t *a6,
        char a7)
{
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-11h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  char *v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  const wchar_t *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v16 = v10;
  v18 = &a5;
  v11 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v17 = 0;
  v15 = a4;
  v19 = 4LL;
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v8 = 2 * v7 + 2;
    v12 = a6 == 0LL;
  }
  v21 = v8;
  v23 = &a7;
  v22 = 0;
  if ( v12 )
    v11 = L"NULL";
  v20 = v11;
  v24 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v11, &FontLoadAttemptEvent, &W32kControlGuid, 5u, &v14);
}
