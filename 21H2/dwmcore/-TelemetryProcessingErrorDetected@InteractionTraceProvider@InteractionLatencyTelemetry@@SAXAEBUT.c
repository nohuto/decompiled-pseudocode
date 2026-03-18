/*
 * XREFs of ?TelemetryProcessingErrorDetected@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x1801D5C38
 * Callers:
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U1@U1@U6@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@877777777777777777777777777777338343@Z @ 0x1801CD67C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G@@U3@U2@U-.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::TelemetryProcessingErrorDetected(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx
  char v8; // al
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  char v11; // [rsp+1D0h] [rbp-80h] BYREF
  char v12; // [rsp+1D1h] [rbp-7Fh] BYREF
  char v13; // [rsp+1D2h] [rbp-7Eh] BYREF
  char v14; // [rsp+1D3h] [rbp-7Dh] BYREF
  char v15; // [rsp+1D4h] [rbp-7Ch] BYREF
  char v16; // [rsp+1D5h] [rbp-7Bh] BYREF
  _BYTE v17[2]; // [rsp+1D6h] [rbp-7Ah] BYREF
  __int16 v18; // [rsp+1D8h] [rbp-78h] BYREF
  __int16 v19; // [rsp+1DAh] [rbp-76h] BYREF
  __int16 v20; // [rsp+1DCh] [rbp-74h] BYREF
  int v21; // [rsp+1E0h] [rbp-70h] BYREF
  int v22; // [rsp+1E4h] [rbp-6Ch] BYREF
  int v23; // [rsp+1E8h] [rbp-68h] BYREF
  int v24; // [rsp+1ECh] [rbp-64h] BYREF
  int v25; // [rsp+1F0h] [rbp-60h] BYREF
  int v26; // [rsp+1F4h] [rbp-5Ch] BYREF
  int v27; // [rsp+1F8h] [rbp-58h] BYREF
  int v28; // [rsp+1FCh] [rbp-54h] BYREF
  int v29; // [rsp+200h] [rbp-50h] BYREF
  __int64 v30; // [rsp+208h] [rbp-48h] BYREF
  __int64 v31; // [rsp+210h] [rbp-40h] BYREF
  __int64 v32; // [rsp+218h] [rbp-38h] BYREF
  __int64 v33; // [rsp+220h] [rbp-30h] BYREF
  __int64 v34; // [rsp+228h] [rbp-28h] BYREF
  __int64 v35; // [rsp+230h] [rbp-20h] BYREF
  __int64 v36; // [rsp+238h] [rbp-18h] BYREF
  __int64 v37; // [rsp+240h] [rbp-10h] BYREF
  __int64 v38; // [rsp+248h] [rbp-8h] BYREF
  __int64 v39; // [rsp+250h] [rbp+0h] BYREF
  __int64 v40; // [rsp+258h] [rbp+8h] BYREF
  __int64 v41; // [rsp+260h] [rbp+10h] BYREF
  __int64 v42; // [rsp+268h] [rbp+18h] BYREF
  __int64 v43; // [rsp+270h] [rbp+20h] BYREF
  __int64 v44; // [rsp+278h] [rbp+28h] BYREF
  __int64 v45; // [rsp+280h] [rbp+30h] BYREF
  __int64 v46; // [rsp+288h] [rbp+38h] BYREF
  __int64 v47; // [rsp+290h] [rbp+40h] BYREF
  __int64 v48; // [rsp+298h] [rbp+48h] BYREF
  __int64 v49; // [rsp+2A0h] [rbp+50h] BYREF
  __int64 v50; // [rsp+2A8h] [rbp+58h] BYREF
  __int64 v51; // [rsp+2B0h] [rbp+60h] BYREF
  __int64 v52; // [rsp+2B8h] [rbp+68h] BYREF
  __int64 v53; // [rsp+2C0h] [rbp+70h] BYREF
  __int64 v54; // [rsp+2C8h] [rbp+78h] BYREF
  __int64 v55; // [rsp+2D0h] [rbp+80h] BYREF
  __int64 v56; // [rsp+2D8h] [rbp+88h] BYREF
  __int64 v57; // [rsp+2E0h] [rbp+90h] BYREF
  __int64 v58; // [rsp+2E8h] [rbp+98h] BYREF
  __int64 v59; // [rsp+2F0h] [rbp+A0h] BYREF
  __int64 v60; // [rsp+2F8h] [rbp+A8h] BYREF
  wchar_t *v61; // [rsp+300h] [rbp+B0h] BYREF
  wchar_t *v62; // [rsp+308h] [rbp+B8h] BYREF
  char v63; // [rsp+338h] [rbp+E8h] BYREF

  if ( (unsigned int)dword_1803D0EB8 > 5 && tlgKeywordOn((__int64)&dword_1803D0EB8, 8LL) )
  {
    v21 = *(_DWORD *)(v4 + 208);
    v63 = *(_BYTE *)(v4 + 200);
    v22 = *(_DWORD *)(v4 + 184);
    v18 = *(_WORD *)(v4 + 188);
    v23 = *(_DWORD *)(v4 + 196);
    v24 = *(_DWORD *)(v4 + 192);
    v30 = *(_QWORD *)(v4 + 176);
    v31 = *(_QWORD *)(v4 + 168);
    v7 = *(_QWORD *)(v5 + 200);
    v32 = *(_QWORD *)(v4 + 160);
    v33 = *(_QWORD *)(v4 + 152);
    v34 = *(_QWORD *)(v4 + 144);
    v35 = *(_QWORD *)(v4 + 136);
    v36 = *(_QWORD *)(v4 + 128);
    v37 = *(_QWORD *)(v4 + 120);
    v38 = *(_QWORD *)(v4 + 112);
    v39 = *(_QWORD *)(v4 + 104);
    v40 = *(_QWORD *)(v4 + 96);
    v41 = *(_QWORD *)(v4 + 88);
    v42 = *(_QWORD *)(v4 + 80);
    v43 = *(_QWORD *)(v4 + 72);
    v44 = *(_QWORD *)(v4 + 64);
    v45 = *(_QWORD *)(v4 + 56);
    v46 = *(_QWORD *)(v4 + 48);
    v47 = *(_QWORD *)(v4 + 40);
    v48 = *(_QWORD *)(v4 + 32);
    v49 = *(_QWORD *)(v4 + 24);
    v50 = *(_QWORD *)(v4 + 16);
    v51 = *(_QWORD *)(v4 + 8);
    v52 = *(_QWORD *)v4;
    v53 = *(_QWORD *)(v5 + 176);
    v54 = *(_QWORD *)(v5 + 168);
    v56 = v6;
    v55 = v6 - v7;
    v58 = *(_QWORD *)(v5 + 8);
    v19 = *(_WORD *)(v5 + 130);
    v20 = *(_WORD *)(v5 + 128);
    v11 = *(_BYTE *)(v5 + 192);
    v59 = *(_QWORD *)(v5 + 120);
    v12 = *(_BYTE *)(v5 + 96);
    v8 = *(_BYTE *)(v5 + 92);
    v57 = v7;
    v13 = v8;
    v14 = *(_BYTE *)(v5 + 88);
    v15 = *(_BYTE *)(v5 + 84);
    v60 = v5 + 100;
    v16 = *(_BYTE *)(v5 + 80);
    v9 = (wchar_t *)(v5 + 48);
    if ( *(_QWORD *)(v5 + 72) >= v2 )
      v9 = *(wchar_t **)v9;
    v61 = v9;
    v10 = (wchar_t *)(v5 + 16);
    if ( *(_QWORD *)(v5 + 40) >= v2 )
      v10 = *(wchar_t **)v10;
    v62 = v10;
    v25 = *(_DWORD *)(v5 + 148);
    v17[0] = *(_BYTE *)(v5 + 144);
    v26 = *(_DWORD *)(v5 + 140);
    v27 = *(_DWORD *)(v5 + 136);
    v28 = *(_DWORD *)(v5 + 132);
    v29 = 5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v7,
      byte_18036BDB9,
      v3,
      v4,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)v17,
      (__int64)&v25,
      &v62,
      &v61,
      (__int64)&v16,
      &v60,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v59,
      (__int64)&v11,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v18,
      (__int64)&v22,
      (__int64)&v63,
      (__int64)&v21);
  }
}
