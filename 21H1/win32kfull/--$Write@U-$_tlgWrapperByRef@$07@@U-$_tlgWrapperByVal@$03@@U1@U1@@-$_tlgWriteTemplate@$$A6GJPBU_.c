/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@33@Z @ 0x186077
 * Callers:
 *     ?TraceLoggingSlowLowLevelHook@@YGXI_KK@Z @ 0x186FE5 (-TraceLoggingSlowLowLevelHook@@YGXI_KK@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int *a7,
        int *a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+4h] [ebp-64h] BYREF
  int v10; // [esp+24h] [ebp-44h]
  int v11; // [esp+28h] [ebp-40h]
  int v12; // [esp+2Ch] [ebp-3Ch]
  int v13; // [esp+30h] [ebp-38h]
  int v14; // [esp+34h] [ebp-34h]
  int v15; // [esp+38h] [ebp-30h]
  int v16; // [esp+3Ch] [ebp-2Ch]
  int v17; // [esp+40h] [ebp-28h]
  int v18; // [esp+44h] [ebp-24h]
  int v19; // [esp+48h] [ebp-20h]
  int v20; // [esp+4Ch] [ebp-1Ch]
  int v21; // [esp+50h] [ebp-18h]
  int v22; // [esp+54h] [ebp-14h]
  int v23; // [esp+58h] [ebp-10h]
  int v24; // [esp+5Ch] [ebp-Ch]
  int v25; // [esp+60h] [ebp-8h]

  v22 = *a8;
  v23 = 0;
  v24 = 8;
  v25 = 0;
  v18 = *a7;
  v14 = a6;
  v19 = 0;
  v20 = 8;
  v21 = 0;
  v10 = *a5;
  v15 = 0;
  v16 = 4;
  v17 = 0;
  v11 = 0;
  v12 = 8;
  v13 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 6u, &UserData);
}
