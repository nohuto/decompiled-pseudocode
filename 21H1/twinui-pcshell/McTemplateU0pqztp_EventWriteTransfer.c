/*
 * XREFs of McTemplateU0pqztp_EventWriteTransfer @ 0x1801600B0
 * Callers:
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x1800867C8 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180022304 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pqztp_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        char a6,
        char a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-31h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-21h]
  __int64 v13; // [rsp+48h] [rbp-19h]
  int *v14; // [rsp+50h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp-9h]
  const wchar_t *v16; // [rsp+60h] [rbp-1h]
  int v17; // [rsp+68h] [rbp+7h]
  int v18; // [rsp+6Ch] [rbp+Bh]
  char *v19; // [rsp+70h] [rbp+Fh]
  __int64 v20; // [rsp+78h] [rbp+17h]
  char *v21; // [rsp+80h] [rbp+1Fh]
  __int64 v22; // [rsp+88h] [rbp+27h]
  __int64 v23; // [rsp+C0h] [rbp+5Fh] BYREF
  int v24; // [rsp+C8h] [rbp+67h] BYREF

  v24 = a4;
  v23 = a3;
  v7 = a5;
  v12 = &v23;
  v13 = 8LL;
  v14 = &v24;
  v15 = 4LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v17 = v9;
  v18 = 0;
  if ( !a5 )
    v7 = L"NULL";
  v20 = 4LL;
  v16 = v7;
  v19 = &a6;
  v22 = 8LL;
  v21 = &a7;
  return McGenEventWrite_EventWriteTransfer(
           MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveApplicationManager_Foreground_Boost,
           0LL,
           6u,
           &v11);
}
