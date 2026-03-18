/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@33@Z @ 0x1467BC
 * Callers:
 *     ?TransitionCursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0xB026A (-TransitionCursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        const char **a6,
        const char **a7)
{
  const char *v7; // esi
  unsigned int v8; // edi
  unsigned int v10; // ecx
  const char *v11; // edx
  unsigned int v12; // ecx
  const char *v13; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+10h] [ebp-54h] BYREF
  const char *v17; // [esp+30h] [ebp-34h]
  int v18; // [esp+34h] [ebp-30h]
  unsigned int v19; // [esp+38h] [ebp-2Ch]
  int v20; // [esp+3Ch] [ebp-28h]
  const char *v21; // [esp+40h] [ebp-24h]
  int v22; // [esp+44h] [ebp-20h]
  unsigned int v23; // [esp+48h] [ebp-1Ch]
  int v24; // [esp+4Ch] [ebp-18h]
  const char *v25; // [esp+50h] [ebp-14h]
  int v26; // [esp+54h] [ebp-10h]
  unsigned int v27; // [esp+58h] [ebp-Ch]
  int v28; // [esp+5Ch] [ebp-8h]

  v7 = *a7;
  v8 = 1;
  if ( *a7 )
  {
    v10 = strlen(v7) + 1;
  }
  else
  {
    v7 = byte_FC858;
    v10 = 1;
  }
  v25 = v7;
  v26 = 0;
  v27 = v10;
  v11 = *a6;
  v28 = 0;
  if ( v11 )
  {
    v12 = strlen(v11) + 1;
  }
  else
  {
    v11 = byte_FC858;
    v12 = 1;
  }
  v21 = v11;
  v22 = 0;
  v23 = v12;
  v13 = *a5;
  v24 = 0;
  if ( v13 )
    v8 = strlen(v13) + 1;
  else
    v13 = byte_FC858;
  v17 = v13;
  v18 = 0;
  v19 = v8;
  v20 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 5u, &UserData);
}
