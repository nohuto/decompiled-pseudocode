/*
 * XREFs of McTemplateK0zquuujqqbr7_EtwWriteTransfer @ 0x1C004D6BC
 * Callers:
 *     StorEtwMiniportBugAbortBrokenEvent @ 0x1C004E55C (StorEtwMiniportBugAbortBrokenEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003E98 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zquuujqqbr7_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-99h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-89h]
  int v17; // [rsp+48h] [rbp-81h]
  int v18; // [rsp+4Ch] [rbp-7Dh]
  char *v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  char *v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  char *v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  char *v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  __int64 v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  char *v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  int *v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  __int64 v33; // [rsp+C0h] [rbp-9h]
  int v34; // [rsp+C8h] [rbp-1h]
  int v35; // [rsp+CCh] [rbp+3h]

  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = (unsigned int)(2 * v12 + 2);
  }
  else
  {
    v13 = 10LL;
  }
  v17 = v13;
  v18 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v20 = 4LL;
  v16 = a4;
  v19 = &a5;
  v22 = 1LL;
  v21 = &a6;
  v24 = 1LL;
  v23 = &a7;
  v25 = &a8;
  v27 = a9;
  v29 = &a10;
  v31 = &a11;
  v33 = a12;
  v34 = a11;
  v26 = 1LL;
  v28 = 16LL;
  v30 = 4LL;
  v32 = 4LL;
  v35 = 0;
  return McGenEventWrite_EtwWriteTransfer(v13, &EventMiniportBugAbortBroken, a3, 0xAu, &v15);
}
