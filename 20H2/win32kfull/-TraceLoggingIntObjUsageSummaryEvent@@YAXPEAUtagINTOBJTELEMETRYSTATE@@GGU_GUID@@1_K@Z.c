/*
 * XREFs of ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C0224A0C
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0258234 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U5@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@45AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@76666666666666666663@Z @ 0x1C0223DBC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U3@U-$_.c)
 */

void __fastcall TraceLoggingIntObjUsageSummaryEvent(
        struct tagINTOBJTELEMETRYSTATE *a1,
        __int16 a2,
        __int64 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        unsigned __int64 a6)
{
  char v6[2]; // [rsp+100h] [rbp-80h] BYREF
  __int16 v7; // [rsp+102h] [rbp-7Eh] BYREF
  __int16 v8; // [rsp+104h] [rbp-7Ch] BYREF
  int v9; // [rsp+108h] [rbp-78h] BYREF
  int v10; // [rsp+10Ch] [rbp-74h] BYREF
  int v11; // [rsp+110h] [rbp-70h] BYREF
  int v12; // [rsp+114h] [rbp-6Ch] BYREF
  int v13; // [rsp+118h] [rbp-68h] BYREF
  int v14; // [rsp+11Ch] [rbp-64h] BYREF
  int v15; // [rsp+120h] [rbp-60h] BYREF
  int v16; // [rsp+124h] [rbp-5Ch] BYREF
  unsigned int v17; // [rsp+128h] [rbp-58h] BYREF
  int v18; // [rsp+12Ch] [rbp-54h] BYREF
  int v19; // [rsp+130h] [rbp-50h] BYREF
  int v20; // [rsp+134h] [rbp-4Ch] BYREF
  int v21; // [rsp+138h] [rbp-48h] BYREF
  int v22; // [rsp+13Ch] [rbp-44h] BYREF
  int v23; // [rsp+140h] [rbp-40h] BYREF
  int v24; // [rsp+144h] [rbp-3Ch] BYREF
  int v25; // [rsp+148h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+14Ch] [rbp-34h] BYREF
  unsigned int v27; // [rsp+150h] [rbp-30h] BYREF
  __int64 v28; // [rsp+158h] [rbp-28h] BYREF
  struct _GUID *v29; // [rsp+160h] [rbp-20h] BYREF
  struct _GUID *v30; // [rsp+168h] [rbp-18h] BYREF
  __int64 v31; // [rsp+170h] [rbp-10h] BYREF
  struct tagINTOBJTELEMETRYSTATE *v32; // [rsp+190h] [rbp+10h] BYREF

  v32 = a1;
  if ( (unsigned int)dword_1C032A3F8 > 5
    && (qword_1C032A408 & 0x800000000000LL) != 0
    && (qword_1C032A410 & 0x800000000000LL) == qword_1C032A410 )
  {
    v28 = qword_1C0340990;
    v9 = dword_1C034098C;
    v10 = dword_1C0340988;
    v11 = dword_1C0340984;
    v12 = dword_1C0340980;
    v13 = dword_1C034097C;
    v14 = dword_1C0340978;
    v15 = dword_1C0340974;
    v16 = dword_1C0340970;
    v18 = dword_1C034095C;
    v19 = dword_1C0340958;
    v20 = dword_1C0340954;
    v21 = dword_1C0340950;
    v17 = (unsigned int)qword_1C0340998 / 0x3E8;
    v22 = dword_1C034094C;
    v26 = (unsigned int)qword_1C0340968 / 0x3E8;
    v29 = a5;
    v23 = dword_1C0340948;
    v24 = dword_1C0340944;
    v25 = (int)gIntObjTelemetryState;
    v7 = a3;
    v8 = a2;
    v27 = (unsigned int)a6 / 0x3E8;
    LOBYTE(v32) = 1;
    v6[0] = 1;
    v30 = a4;
    v31 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)gIntObjTelemetryState,
      byte_1C02F0C86,
      a3,
      (__int64)a4,
      (__int64)&v31,
      (__int64 *)&v30,
      (__int64)v6,
      (__int64 *)&v29,
      (__int64)&v32,
      (__int64)&v27,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v28);
  }
}
