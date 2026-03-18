/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4ABU?$_tlgWrapSz@D@@@Z @ 0x186379
 * Callers:
 *     ?TraceLoggingYieldedHotkey@@YGXII@Z @ 0x18726B (-TraceLoggingYieldedHotkey@@YGXII@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        const char **a8)
{
  char *v8; // esi
  int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-64h] BYREF
  int v12; // [esp+28h] [ebp-44h]
  int v13; // [esp+2Ch] [ebp-40h]
  int v14; // [esp+30h] [ebp-3Ch]
  int v15; // [esp+34h] [ebp-38h]
  int v16; // [esp+38h] [ebp-34h]
  int v17; // [esp+3Ch] [ebp-30h]
  int v18; // [esp+40h] [ebp-2Ch]
  int v19; // [esp+44h] [ebp-28h]
  int v20; // [esp+48h] [ebp-24h]
  int v21; // [esp+4Ch] [ebp-20h]
  int v22; // [esp+50h] [ebp-1Ch]
  int v23; // [esp+54h] [ebp-18h]
  char *v24; // [esp+58h] [ebp-14h]
  int v25; // [esp+5Ch] [ebp-10h]
  int v26; // [esp+60h] [ebp-Ch]
  int v27; // [esp+64h] [ebp-8h]

  v8 = (char *)*a8;
  if ( *a8 )
  {
    v9 = &(*a8)[strlen(*a8) + 1] - v8;
  }
  else
  {
    v8 = byte_FC858;
    v9 = 1;
  }
  v20 = a7;
  v16 = a6;
  v26 = v9;
  v12 = *a5;
  v24 = v8;
  v25 = 0;
  v27 = 0;
  v21 = 0;
  v22 = 4;
  v23 = 0;
  v17 = 0;
  v18 = 4;
  v19 = 0;
  v13 = 0;
  v14 = 8;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 6u, &UserData);
}
