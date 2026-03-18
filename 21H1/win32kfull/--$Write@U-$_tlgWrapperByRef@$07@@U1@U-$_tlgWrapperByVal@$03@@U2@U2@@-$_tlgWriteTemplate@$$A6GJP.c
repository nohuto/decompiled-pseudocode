/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@3ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x185B65
 * Callers:
 *     _TraceLoggingUserIsActive@12 @ 0xF438A (_TraceLoggingUserIsActive@12.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int *a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+4h] [ebp-74h] BYREF
  int v12; // [esp+24h] [ebp-54h]
  int v13; // [esp+28h] [ebp-50h]
  int v14; // [esp+2Ch] [ebp-4Ch]
  int v15; // [esp+30h] [ebp-48h]
  int v16; // [esp+34h] [ebp-44h]
  int v17; // [esp+38h] [ebp-40h]
  int v18; // [esp+3Ch] [ebp-3Ch]
  int v19; // [esp+40h] [ebp-38h]
  int v20; // [esp+44h] [ebp-34h]
  int v21; // [esp+48h] [ebp-30h]
  int v22; // [esp+4Ch] [ebp-2Ch]
  int v23; // [esp+50h] [ebp-28h]
  int v24; // [esp+54h] [ebp-24h]
  int v25; // [esp+58h] [ebp-20h]
  int v26; // [esp+5Ch] [ebp-1Ch]
  int v27; // [esp+60h] [ebp-18h]
  int v28; // [esp+64h] [ebp-14h]
  int v29; // [esp+68h] [ebp-10h]
  int v30; // [esp+6Ch] [ebp-Ch]
  int v31; // [esp+70h] [ebp-8h]

  v28 = a9;
  v24 = a8;
  v20 = a7;
  v16 = *a6;
  v30 = 4;
  v26 = 4;
  v9 = *a5;
  v22 = 4;
  v12 = v9;
  v29 = 0;
  v31 = 0;
  v25 = 0;
  v27 = 0;
  v21 = 0;
  v23 = 0;
  v17 = 0;
  v18 = 8;
  v19 = 0;
  v13 = 0;
  v14 = 8;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 7u, &UserData);
}
