/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@433@Z @ 0x1891E4
 * Callers:
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z @ 0x189294 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        int a10,
        int a11)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-94h] BYREF
  int v13; // [esp+2Ch] [ebp-74h]
  int v14; // [esp+30h] [ebp-70h]
  int v15; // [esp+34h] [ebp-6Ch]
  int v16; // [esp+38h] [ebp-68h]
  int v17; // [esp+3Ch] [ebp-64h]
  int v18; // [esp+40h] [ebp-60h]
  int v19; // [esp+44h] [ebp-5Ch]
  int v20; // [esp+48h] [ebp-58h]
  int v21; // [esp+4Ch] [ebp-54h]
  int v22; // [esp+50h] [ebp-50h]
  int v23; // [esp+54h] [ebp-4Ch]
  int v24; // [esp+58h] [ebp-48h]
  int v25; // [esp+5Ch] [ebp-44h]
  int v26; // [esp+60h] [ebp-40h]
  int v27; // [esp+64h] [ebp-3Ch]
  int v28; // [esp+68h] [ebp-38h]
  int v29; // [esp+6Ch] [ebp-34h]
  int v30; // [esp+70h] [ebp-30h]
  int v31; // [esp+74h] [ebp-2Ch]
  int v32; // [esp+78h] [ebp-28h]
  int v33; // [esp+7Ch] [ebp-24h]
  int v34; // [esp+80h] [ebp-20h]
  int v35; // [esp+84h] [ebp-1Ch]
  int v36; // [esp+88h] [ebp-18h]
  int v37; // [esp+8Ch] [ebp-14h]
  int v38; // [esp+90h] [ebp-10h]
  int v39; // [esp+94h] [ebp-Ch]
  int v40; // [esp+98h] [ebp-8h]

  v37 = a11;
  v33 = a10;
  v29 = *a9;
  v25 = *a8;
  v21 = a7;
  v17 = a6;
  v13 = a5;
  v38 = 0;
  v39 = 4;
  v40 = 0;
  v34 = 0;
  v35 = 4;
  v36 = 0;
  v30 = 0;
  v31 = 8;
  v32 = 0;
  v26 = 0;
  v27 = 8;
  v28 = 0;
  v22 = 0;
  v23 = 4;
  v24 = 0;
  v18 = 0;
  v19 = 4;
  v20 = 0;
  v14 = 0;
  v15 = 4;
  v16 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 9u, &UserData);
}
