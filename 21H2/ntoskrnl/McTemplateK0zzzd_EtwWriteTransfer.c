/*
 * XREFs of McTemplateK0zzzd_EtwWriteTransfer @ 0x140563CAC
 * Callers:
 *     PiSwGetChildPdo @ 0x1406E32E4 (PiSwGetChildPdo.c)
 *     PiSwBusRelationAdd @ 0x140764970 (PiSwBusRelationAdd.c)
 *     PiSwStopDestroy @ 0x140766F84 (PiSwStopDestroy.c)
 *     PiSwStartCreate @ 0x140953B9C (PiSwStartCreate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402D1760 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzzd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7)
{
  __int64 v7; // rax
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // edx
  const wchar_t *v12; // rcx
  __int64 v13; // rdx
  int v14; // r9d
  const wchar_t *v15; // rcx
  bool v16; // zf
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v19; // [rsp+40h] [rbp-11h]
  int v20; // [rsp+48h] [rbp-9h]
  int v21; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v22; // [rsp+50h] [rbp-1h]
  int v23; // [rsp+58h] [rbp+7h]
  int v24; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v25; // [rsp+60h] [rbp+Fh]
  int v26; // [rsp+68h] [rbp+17h]
  int v27; // [rsp+6Ch] [rbp+1Bh]
  char *v28; // [rsp+70h] [rbp+1Fh]
  __int64 v29; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v12 = a5;
  v20 = v11;
  v21 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v19 = a4;
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a5[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v23 = v14;
  v24 = 0;
  if ( !a5 )
    v12 = L"NULL";
  v22 = v12;
  v15 = a6;
  v16 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v16 = a6 == 0LL;
  }
  if ( v16 )
    v15 = L"NULL";
  v26 = v9;
  v25 = v15;
  v28 = &a7;
  v27 = 0;
  v29 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 5u, &v18);
}
