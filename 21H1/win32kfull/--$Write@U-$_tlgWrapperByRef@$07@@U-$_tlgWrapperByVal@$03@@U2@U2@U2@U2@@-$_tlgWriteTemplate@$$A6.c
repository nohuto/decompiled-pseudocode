/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4444@Z @ 0x14BE00
 * Callers:
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-84h] BYREF
  int v13; // [esp+28h] [ebp-64h]
  int v14; // [esp+2Ch] [ebp-60h]
  int v15; // [esp+30h] [ebp-5Ch]
  int v16; // [esp+34h] [ebp-58h]
  int v17; // [esp+38h] [ebp-54h]
  int v18; // [esp+3Ch] [ebp-50h]
  int v19; // [esp+40h] [ebp-4Ch]
  int v20; // [esp+44h] [ebp-48h]
  int v21; // [esp+48h] [ebp-44h]
  int v22; // [esp+4Ch] [ebp-40h]
  int v23; // [esp+50h] [ebp-3Ch]
  int v24; // [esp+54h] [ebp-38h]
  int v25; // [esp+58h] [ebp-34h]
  int v26; // [esp+5Ch] [ebp-30h]
  int v27; // [esp+60h] [ebp-2Ch]
  int v28; // [esp+64h] [ebp-28h]
  int v29; // [esp+68h] [ebp-24h]
  int v30; // [esp+6Ch] [ebp-20h]
  int v31; // [esp+70h] [ebp-1Ch]
  int v32; // [esp+74h] [ebp-18h]
  int v33; // [esp+78h] [ebp-14h]
  int v34; // [esp+7Ch] [ebp-10h]
  int v35; // [esp+80h] [ebp-Ch]
  int v36; // [esp+84h] [ebp-8h]

  v33 = a10;
  v29 = a9;
  v25 = a8;
  v21 = a7;
  v17 = a6;
  v35 = 4;
  v31 = 4;
  v10 = *a5;
  v27 = 4;
  v23 = 4;
  v19 = 4;
  v13 = v10;
  v34 = 0;
  v36 = 0;
  v30 = 0;
  v32 = 0;
  v26 = 0;
  v28 = 0;
  v22 = 0;
  v24 = 0;
  v18 = 0;
  v20 = 0;
  v14 = 0;
  v15 = 8;
  v16 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 8u, &UserData);
}
