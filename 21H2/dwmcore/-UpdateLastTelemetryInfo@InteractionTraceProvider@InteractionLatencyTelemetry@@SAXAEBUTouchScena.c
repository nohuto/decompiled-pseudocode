/*
 * XREFs of ?UpdateLastTelemetryInfo@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801D61B4
 * Callers:
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U1@U1@U6@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@8777777777777777777777777338343@Z @ 0x1801D01F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801D01F4.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::UpdateLastTelemetryInfo(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  wchar_t *v6; // rax
  wchar_t *v7; // rax
  char v8; // [rsp+1A0h] [rbp-80h] BYREF
  char v9; // [rsp+1A1h] [rbp-7Fh] BYREF
  char v10; // [rsp+1A2h] [rbp-7Eh] BYREF
  char v11; // [rsp+1A3h] [rbp-7Dh] BYREF
  char v12; // [rsp+1A4h] [rbp-7Ch] BYREF
  char v13; // [rsp+1A5h] [rbp-7Bh] BYREF
  __int16 v14; // [rsp+1A6h] [rbp-7Ah] BYREF
  __int16 v15; // [rsp+1A8h] [rbp-78h] BYREF
  __int16 v16; // [rsp+1AAh] [rbp-76h] BYREF
  int v17; // [rsp+1ACh] [rbp-74h] BYREF
  int v18; // [rsp+1B0h] [rbp-70h] BYREF
  int v19; // [rsp+1B4h] [rbp-6Ch] BYREF
  int v20; // [rsp+1B8h] [rbp-68h] BYREF
  int v21; // [rsp+1BCh] [rbp-64h] BYREF
  int v22; // [rsp+1C0h] [rbp-60h] BYREF
  int v23; // [rsp+1C4h] [rbp-5Ch] BYREF
  int v24; // [rsp+1C8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+1D0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+1D8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+1E0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+1E8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+1F0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+1F8h] [rbp-28h] BYREF
  __int64 v31; // [rsp+200h] [rbp-20h] BYREF
  __int64 v32; // [rsp+208h] [rbp-18h] BYREF
  __int64 v33; // [rsp+210h] [rbp-10h] BYREF
  __int64 v34; // [rsp+218h] [rbp-8h] BYREF
  __int64 v35; // [rsp+220h] [rbp+0h] BYREF
  __int64 v36; // [rsp+228h] [rbp+8h] BYREF
  __int64 v37; // [rsp+230h] [rbp+10h] BYREF
  __int64 v38; // [rsp+238h] [rbp+18h] BYREF
  __int64 v39; // [rsp+240h] [rbp+20h] BYREF
  __int64 v40; // [rsp+248h] [rbp+28h] BYREF
  __int64 v41; // [rsp+250h] [rbp+30h] BYREF
  __int64 v42; // [rsp+258h] [rbp+38h] BYREF
  __int64 v43; // [rsp+260h] [rbp+40h] BYREF
  __int64 v44; // [rsp+268h] [rbp+48h] BYREF
  __int64 v45; // [rsp+270h] [rbp+50h] BYREF
  __int64 v46; // [rsp+278h] [rbp+58h] BYREF
  __int64 v47; // [rsp+280h] [rbp+60h] BYREF
  __int64 v48; // [rsp+288h] [rbp+68h] BYREF
  __int64 v49; // [rsp+290h] [rbp+70h] BYREF
  __int64 v50; // [rsp+298h] [rbp+78h] BYREF
  wchar_t *v51; // [rsp+2A0h] [rbp+80h] BYREF
  wchar_t *v52; // [rsp+2A8h] [rbp+88h] BYREF
  char v53; // [rsp+2D0h] [rbp+B0h] BYREF
  char v54; // [rsp+2D8h] [rbp+B8h] BYREF

  if ( (unsigned int)dword_1803D0EB8 > 5 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
  {
    v17 = *(_DWORD *)(v4 + 208);
    v53 = *(_BYTE *)(v4 + 200);
    v18 = *(_DWORD *)(v4 + 184);
    v14 = *(_WORD *)(v4 + 188);
    v19 = *(_DWORD *)(v4 + 196);
    v20 = *(_DWORD *)(v4 + 192);
    v25 = *(_QWORD *)(v4 + 176);
    v26 = *(_QWORD *)(v4 + 168);
    v27 = *(_QWORD *)(v4 + 160);
    v28 = *(_QWORD *)(v4 + 152);
    v29 = *(_QWORD *)(v4 + 144);
    v30 = *(_QWORD *)(v4 + 136);
    v31 = *(_QWORD *)(v4 + 128);
    v32 = *(_QWORD *)(v4 + 120);
    v33 = *(_QWORD *)(v4 + 112);
    v34 = *(_QWORD *)(v4 + 104);
    v35 = *(_QWORD *)(v4 + 96);
    v36 = *(_QWORD *)(v4 + 88);
    v37 = *(_QWORD *)(v4 + 80);
    v38 = *(_QWORD *)(v4 + 72);
    v39 = *(_QWORD *)(v4 + 64);
    v40 = *(_QWORD *)(v4 + 56);
    v41 = *(_QWORD *)(v4 + 48);
    v42 = *(_QWORD *)(v4 + 40);
    v43 = *(_QWORD *)(v4 + 32);
    v44 = *(_QWORD *)(v4 + 24);
    v45 = *(_QWORD *)(v4 + 16);
    v46 = *(_QWORD *)(v4 + 8);
    v47 = *(_QWORD *)v4;
    v48 = *(_QWORD *)(v5 + 8);
    v15 = *(_WORD *)(v5 + 130);
    v16 = *(_WORD *)(v5 + 128);
    v54 = *(_BYTE *)(v5 + 192);
    v49 = *(_QWORD *)(v5 + 120);
    v8 = *(_BYTE *)(v5 + 96);
    v9 = *(_BYTE *)(v5 + 92);
    v10 = *(_BYTE *)(v5 + 88);
    v11 = *(_BYTE *)(v5 + 84);
    v50 = v5 + 100;
    v12 = *(_BYTE *)(v5 + 80);
    v6 = (wchar_t *)(v5 + 48);
    if ( *(_QWORD *)(v5 + 72) >= 8uLL )
      v6 = *(wchar_t **)v6;
    v51 = v6;
    v7 = (wchar_t *)(v5 + 16);
    if ( *(_QWORD *)(v5 + 40) >= 8uLL )
      v7 = *(wchar_t **)v7;
    v52 = v7;
    v21 = *(_DWORD *)(v5 + 148);
    v13 = *(_BYTE *)(v5 + 144);
    v22 = *(_DWORD *)(v5 + 140);
    v23 = *(_DWORD *)(v5 + 136);
    v24 = *(_DWORD *)(v5 + 132);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v2,
      byte_18036C53B,
      v3,
      v4,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v13,
      (__int64)&v21,
      &v52,
      &v51,
      (__int64)&v12,
      &v50,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v49,
      (__int64)&v54,
      (__int64)&v16,
      (__int64)&v15,
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
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v14,
      (__int64)&v18,
      (__int64)&v53,
      (__int64)&v17);
  }
}
