/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x14C224
 * Callers:
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z @ 0x14D206 (-HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        const char **a7)
{
  char *v7; // esi
  int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-54h] BYREF
  int v12; // [esp+2Ch] [ebp-34h]
  int v13; // [esp+30h] [ebp-30h]
  int v14; // [esp+34h] [ebp-2Ch]
  int v15; // [esp+38h] [ebp-28h]
  int v16; // [esp+3Ch] [ebp-24h]
  int v17; // [esp+40h] [ebp-20h]
  int v18; // [esp+44h] [ebp-1Ch]
  int v19; // [esp+48h] [ebp-18h]
  char *v20; // [esp+4Ch] [ebp-14h]
  int v21; // [esp+50h] [ebp-10h]
  int v22; // [esp+54h] [ebp-Ch]
  int v23; // [esp+58h] [ebp-8h]

  v7 = (char *)*a7;
  if ( *a7 )
  {
    v9 = &(*a7)[strlen(*a7) + 1] - v7;
  }
  else
  {
    v7 = byte_FC858;
    v9 = 1;
  }
  v16 = a6;
  v20 = v7;
  v21 = 0;
  v22 = v9;
  v12 = *a5;
  v23 = 0;
  v17 = 0;
  v18 = 4;
  v19 = 0;
  v13 = 0;
  v14 = 8;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 5u, &UserData);
}
