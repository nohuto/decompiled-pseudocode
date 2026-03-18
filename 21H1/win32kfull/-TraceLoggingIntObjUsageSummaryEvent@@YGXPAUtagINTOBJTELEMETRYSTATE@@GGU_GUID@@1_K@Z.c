/*
 * XREFs of ?TraceLoggingIntObjUsageSummaryEvent@@YGXPAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x18687E
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2FF7 (-HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_I.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U5@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByRef@$0BA@@@ABU?$_tlgWrapperByVal@$00@@45ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapperByVal@$01@@76666666666666666663@Z @ 0x185D34 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U3@U-$_.c)
 */

void __userpurge TraceLoggingIntObjUsageSummaryEvent(
        __int16 a1@<dx>,
        struct tagINTOBJTELEMETRYSTATE *a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID a5,
        struct _GUID a6,
        unsigned __int64 a7)
{
  _DWORD v8[3]; // [esp+10h] [ebp-9Ch] BYREF
  _DWORD *v9; // [esp+1Ch] [ebp-90h] BYREF
  struct _GUID *v10; // [esp+20h] [ebp-8Ch] BYREF
  struct _GUID *v11; // [esp+24h] [ebp-88h] BYREF
  unsigned int v12; // [esp+28h] [ebp-84h] BYREF
  unsigned int v13; // [esp+2Ch] [ebp-80h] BYREF
  struct tagINTOBJTELEMETRYSTATE *v14; // [esp+30h] [ebp-7Ch] BYREF
  int v15; // [esp+34h] [ebp-78h] BYREF
  int v16; // [esp+38h] [ebp-74h] BYREF
  int v17; // [esp+3Ch] [ebp-70h] BYREF
  int v18; // [esp+40h] [ebp-6Ch] BYREF
  int v19; // [esp+44h] [ebp-68h] BYREF
  int v20; // [esp+48h] [ebp-64h] BYREF
  int v21; // [esp+4Ch] [ebp-60h] BYREF
  unsigned int v22; // [esp+50h] [ebp-5Ch] BYREF
  int v23; // [esp+54h] [ebp-58h] BYREF
  int v24; // [esp+58h] [ebp-54h] BYREF
  int v25; // [esp+5Ch] [ebp-50h] BYREF
  int v26; // [esp+60h] [ebp-4Ch] BYREF
  int v27; // [esp+64h] [ebp-48h] BYREF
  int v28; // [esp+68h] [ebp-44h] BYREF
  int v29; // [esp+6Ch] [ebp-40h] BYREF
  int v30; // [esp+70h] [ebp-3Ch] BYREF
  void *v31; // [esp+74h] [ebp-38h] BYREF
  __int16 v32; // [esp+7Ah] [ebp-32h] BYREF
  __int16 v33; // [esp+7Ch] [ebp-30h] BYREF
  char v34; // [esp+7Eh] [ebp-2Eh] BYREF
  char v35; // [esp+7Fh] [ebp-2Dh] BYREF
  struct _GUID v36; // [esp+80h] [ebp-2Ch] BYREF
  struct _GUID v37; // [esp+90h] [ebp-1Ch] BYREF

  v36 = a5;
  v37 = a6;
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x800000000000LL) )
  {
    v30 = dword_2784F4;
    v29 = dword_2784F0;
    v28 = dword_2784EC;
    v27 = dword_2784E8;
    v26 = dword_2784E4;
    v25 = dword_2784E0;
    v24 = dword_2784DC;
    v23 = dword_2784D8;
    v8[1] = 0;
    v22 = dword_278500 / 0x3E8u;
    v21 = dword_2784C4;
    v20 = dword_2784C0;
    v19 = dword_2784BC;
    v18 = dword_2784B8;
    v17 = dword_2784B4;
    v16 = dword_2784B0;
    v15 = dword_2784AC;
    v14 = gIntObjTelemetryState;
    v8[0] = 0x2000000;
    v13 = dword_2784D0 / 0x3E8u;
    v33 = (__int16)a2;
    v31 = &unk_2784F8;
    v12 = a3 / 0x3E8;
    v11 = &v37;
    v10 = &v36;
    v9 = v8;
    v32 = a1;
    v35 = 1;
    v34 = 1;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>>(
      1000,
      byte_255B5E,
      1000,
      1000,
      (int *)&v9,
      (int *)&v10,
      (int)&v34,
      (int *)&v11,
      (int)&v35,
      (int)&v12,
      (int)&v32,
      (int)&v33,
      (int)&v13,
      (int)&v14,
      (int)&v15,
      (int)&v16,
      (int)&v17,
      (int)&v18,
      (int)&v19,
      (int)&v20,
      (int)&v21,
      (int)&v22,
      (int)&v23,
      (int)&v24,
      (int)&v25,
      (int)&v26,
      (int)&v27,
      (int)&v28,
      (int)&v29,
      (int)&v30,
      (int *)&v31);
  }
}
