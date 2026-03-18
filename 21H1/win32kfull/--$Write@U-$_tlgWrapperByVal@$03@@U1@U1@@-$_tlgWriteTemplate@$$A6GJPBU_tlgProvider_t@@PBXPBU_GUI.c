/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33@Z @ 0x1406B6
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 *     ?TraceLoggingMiPSuppressedForWindow@@YGXQBUtagWND@@IH@Z @ 0x186A5C (-TraceLoggingMiPSuppressedForWindow@@YGXQBUtagWND@@IH@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+4h] [ebp-54h] BYREF
  int v9; // [esp+24h] [ebp-34h]
  int v10; // [esp+28h] [ebp-30h]
  int v11; // [esp+2Ch] [ebp-2Ch]
  int v12; // [esp+30h] [ebp-28h]
  int v13; // [esp+34h] [ebp-24h]
  int v14; // [esp+38h] [ebp-20h]
  int v15; // [esp+3Ch] [ebp-1Ch]
  int v16; // [esp+40h] [ebp-18h]
  int v17; // [esp+44h] [ebp-14h]
  int v18; // [esp+48h] [ebp-10h]
  int v19; // [esp+4Ch] [ebp-Ch]
  int v20; // [esp+50h] [ebp-8h]

  v17 = a7;
  v13 = a6;
  v9 = a5;
  v18 = 0;
  v19 = 4;
  v20 = 0;
  v14 = 0;
  v15 = 4;
  v16 = 0;
  v10 = 0;
  v11 = 4;
  v12 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 5u, &UserData);
}
