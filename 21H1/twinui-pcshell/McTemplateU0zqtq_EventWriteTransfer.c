/*
 * XREFs of McTemplateU0zqtq_EventWriteTransfer @ 0x180160194
 * Callers:
 *     _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x180060B00 (_lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator().c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180022304 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zqtq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        int a4,
        char a5,
        char a6)
{
  __int64 v6; // rax
  int v7; // ecx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-19h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-9h]
  int v11; // [rsp+48h] [rbp-1h]
  int v12; // [rsp+4Ch] [rbp+3h]
  int *v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  char *v15; // [rsp+60h] [rbp+17h]
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  char *v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+B8h] [rbp+6Fh] BYREF

  v19 = a4;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v11 = v7;
  v12 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v14 = 4LL;
  v10 = a3;
  v13 = &v19;
  v16 = 4LL;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  return McGenEventWrite_EventWriteTransfer(
           MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_AppManager_ApplicationStateChanged,
           (__int64)a3,
           5u,
           &v9);
}
