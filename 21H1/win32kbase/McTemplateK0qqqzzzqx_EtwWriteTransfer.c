/*
 * XREFs of McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x1C0131C34
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C006E610 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00A2A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqzzzqx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        char a11)
{
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r9d
  const wchar_t *v16; // rcx
  __int64 v17; // rdx
  int v18; // r9d
  const wchar_t *v19; // rcx
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-81h] BYREF
  int *v23; // [rsp+40h] [rbp-71h]
  __int64 v24; // [rsp+48h] [rbp-69h]
  char *v25; // [rsp+50h] [rbp-61h]
  __int64 v26; // [rsp+58h] [rbp-59h]
  char *v27; // [rsp+60h] [rbp-51h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  const wchar_t *v29; // [rsp+70h] [rbp-41h]
  int v30; // [rsp+78h] [rbp-39h]
  int v31; // [rsp+7Ch] [rbp-35h]
  const wchar_t *v32; // [rsp+80h] [rbp-31h]
  int v33; // [rsp+88h] [rbp-29h]
  int v34; // [rsp+8Ch] [rbp-25h]
  const wchar_t *v35; // [rsp+90h] [rbp-21h]
  int v36; // [rsp+98h] [rbp-19h]
  int v37; // [rsp+9Ch] [rbp-15h]
  char *v38; // [rsp+A0h] [rbp-11h]
  __int64 v39; // [rsp+A8h] [rbp-9h]
  char *v40; // [rsp+B0h] [rbp-1h]
  __int64 v41; // [rsp+B8h] [rbp+7h]
  int v42; // [rsp+F8h] [rbp+47h] BYREF

  v42 = a4;
  v11 = a7;
  v23 = &v42;
  v24 = 4LL;
  v25 = &a5;
  v27 = &a6;
  v12 = -1LL;
  v26 = 4LL;
  v13 = 10;
  v28 = 4LL;
  if ( a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a7[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v30 = v15;
  v31 = 0;
  if ( !a7 )
    v11 = L"NULL";
  v29 = v11;
  v16 = a8;
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v33 = v18;
  v34 = 0;
  if ( !a8 )
    v16 = L"NULL";
  v32 = v16;
  v19 = a9;
  v20 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v12;
    while ( a9[v12] );
    v13 = 2 * v12 + 2;
    v20 = a9 == 0LL;
  }
  v36 = v13;
  v38 = &a10;
  v37 = 0;
  v40 = &a11;
  v39 = 4LL;
  if ( v20 )
    v19 = L"NULL";
  v35 = v19;
  v41 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v19, &InputProcessDelayEvent, &W32kControlGuid, 9u, &v22);
}
