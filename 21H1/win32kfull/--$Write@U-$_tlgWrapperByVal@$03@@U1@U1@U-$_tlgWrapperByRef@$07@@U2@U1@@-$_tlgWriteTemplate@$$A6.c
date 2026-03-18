/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@43@Z @ 0x189144
 * Callers:
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z @ 0x189294 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        int a10)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-84h] BYREF
  int v12; // [esp+2Ch] [ebp-64h]
  int v13; // [esp+30h] [ebp-60h]
  int v14; // [esp+34h] [ebp-5Ch]
  int v15; // [esp+38h] [ebp-58h]
  int v16; // [esp+3Ch] [ebp-54h]
  int v17; // [esp+40h] [ebp-50h]
  int v18; // [esp+44h] [ebp-4Ch]
  int v19; // [esp+48h] [ebp-48h]
  int v20; // [esp+4Ch] [ebp-44h]
  int v21; // [esp+50h] [ebp-40h]
  int v22; // [esp+54h] [ebp-3Ch]
  int v23; // [esp+58h] [ebp-38h]
  int v24; // [esp+5Ch] [ebp-34h]
  int v25; // [esp+60h] [ebp-30h]
  int v26; // [esp+64h] [ebp-2Ch]
  int v27; // [esp+68h] [ebp-28h]
  int v28; // [esp+6Ch] [ebp-24h]
  int v29; // [esp+70h] [ebp-20h]
  int v30; // [esp+74h] [ebp-1Ch]
  int v31; // [esp+78h] [ebp-18h]
  int v32; // [esp+7Ch] [ebp-14h]
  int v33; // [esp+80h] [ebp-10h]
  int v34; // [esp+84h] [ebp-Ch]
  int v35; // [esp+88h] [ebp-8h]

  v32 = a10;
  v28 = *a9;
  v24 = *a8;
  v20 = a7;
  v16 = a6;
  v12 = a5;
  v33 = 0;
  v34 = 4;
  v35 = 0;
  v29 = 0;
  v30 = 8;
  v31 = 0;
  v25 = 0;
  v26 = 8;
  v27 = 0;
  v21 = 0;
  v22 = 4;
  v23 = 0;
  v17 = 0;
  v18 = 4;
  v19 = 0;
  v13 = 0;
  v14 = 4;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 8u, &UserData);
}
