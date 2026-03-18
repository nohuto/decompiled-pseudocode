/*
 * XREFs of ?FrameLatencies@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@II_KAEBVInteractionFrameLatency@2@@Z @ 0x1801D2F28
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U5@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@8733733333333333333333333333333@Z @ 0x1801CE05C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801CE05C.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::FrameLatencies(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const struct InteractionLatencyTelemetry::InteractionFrameLatency *a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  wchar_t *v11; // rax
  wchar_t *v12; // rax
  char v13; // [rsp+1A0h] [rbp-80h] BYREF
  char v14; // [rsp+1A1h] [rbp-7Fh] BYREF
  char v15; // [rsp+1A2h] [rbp-7Eh] BYREF
  char v16; // [rsp+1A3h] [rbp-7Dh] BYREF
  char v17; // [rsp+1A4h] [rbp-7Ch] BYREF
  char v18; // [rsp+1A5h] [rbp-7Bh] BYREF
  _BYTE v19[2]; // [rsp+1A6h] [rbp-7Ah] BYREF
  __int16 v20; // [rsp+1A8h] [rbp-78h] BYREF
  __int16 v21; // [rsp+1AAh] [rbp-76h] BYREF
  int v22; // [rsp+1ACh] [rbp-74h] BYREF
  int v23; // [rsp+1B0h] [rbp-70h] BYREF
  int v24; // [rsp+1B4h] [rbp-6Ch] BYREF
  int v25; // [rsp+1B8h] [rbp-68h] BYREF
  int v26; // [rsp+1BCh] [rbp-64h] BYREF
  int v27; // [rsp+1C0h] [rbp-60h] BYREF
  int v28; // [rsp+1C4h] [rbp-5Ch] BYREF
  int v29; // [rsp+1C8h] [rbp-58h] BYREF
  int v30; // [rsp+1CCh] [rbp-54h] BYREF
  int v31; // [rsp+1D0h] [rbp-50h] BYREF
  int v32; // [rsp+1D4h] [rbp-4Ch] BYREF
  int v33; // [rsp+1D8h] [rbp-48h] BYREF
  int v34; // [rsp+1DCh] [rbp-44h] BYREF
  int v35; // [rsp+1E0h] [rbp-40h] BYREF
  int v36; // [rsp+1E4h] [rbp-3Ch] BYREF
  int v37; // [rsp+1E8h] [rbp-38h] BYREF
  int v38; // [rsp+1ECh] [rbp-34h] BYREF
  int v39; // [rsp+1F0h] [rbp-30h] BYREF
  int v40; // [rsp+1F4h] [rbp-2Ch] BYREF
  int v41; // [rsp+1F8h] [rbp-28h] BYREF
  int v42; // [rsp+1FCh] [rbp-24h] BYREF
  int v43; // [rsp+200h] [rbp-20h] BYREF
  int v44; // [rsp+204h] [rbp-1Ch] BYREF
  int v45; // [rsp+208h] [rbp-18h] BYREF
  int v46; // [rsp+20Ch] [rbp-14h] BYREF
  int v47; // [rsp+210h] [rbp-10h] BYREF
  int v48; // [rsp+214h] [rbp-Ch] BYREF
  int v49; // [rsp+218h] [rbp-8h] BYREF
  int v50; // [rsp+21Ch] [rbp-4h] BYREF
  int v51; // [rsp+220h] [rbp+0h] BYREF
  int v52; // [rsp+224h] [rbp+4h] BYREF
  int v53; // [rsp+228h] [rbp+8h] BYREF
  __int64 v54; // [rsp+230h] [rbp+10h] BYREF
  __int64 v55; // [rsp+238h] [rbp+18h] BYREF
  __int64 v56; // [rsp+240h] [rbp+20h] BYREF
  __int64 v57; // [rsp+248h] [rbp+28h] BYREF
  wchar_t *v58; // [rsp+250h] [rbp+30h] BYREF
  wchar_t *v59; // [rsp+258h] [rbp+38h] BYREF

  if ( (unsigned int)dword_1803D0EB8 > 4 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
  {
    v54 = v8;
    v48 = v10;
    v49 = a2;
    v22 = *((_DWORD *)a5 + 26);
    v23 = *((_DWORD *)a5 + 25);
    v24 = *((_DWORD *)a5 + 24);
    v25 = *((_DWORD *)a5 + 23);
    v26 = *((_DWORD *)a5 + 22);
    v27 = *((_DWORD *)a5 + 21);
    v28 = *((_DWORD *)a5 + 20);
    v29 = *((_DWORD *)a5 + 19);
    v30 = *((_DWORD *)a5 + 18);
    v31 = *((_DWORD *)a5 + 17);
    v32 = *((_DWORD *)a5 + 16);
    v33 = *((_DWORD *)a5 + 15);
    v34 = *((_DWORD *)a5 + 14);
    v35 = *((_DWORD *)a5 + 13);
    v36 = *((_DWORD *)a5 + 12);
    v37 = *((_DWORD *)a5 + 11);
    v38 = *((_DWORD *)a5 + 10);
    v39 = *((_DWORD *)a5 + 9);
    v40 = *((_DWORD *)a5 + 8);
    v41 = *((_DWORD *)a5 + 7);
    v42 = *((_DWORD *)a5 + 6);
    v43 = *((_DWORD *)a5 + 5);
    v44 = *((_DWORD *)a5 + 4);
    v45 = *((_DWORD *)a5 + 3);
    v46 = *((_DWORD *)a5 + 2);
    v47 = *((_DWORD *)a5 + 1);
    v55 = *(_QWORD *)(v9 + 8);
    v20 = *(_WORD *)(v9 + 130);
    v21 = *(_WORD *)(v9 + 128);
    v13 = *(_BYTE *)(v9 + 192);
    v56 = *(_QWORD *)(v9 + 120);
    v14 = *(_BYTE *)(v9 + 96);
    v15 = *(_BYTE *)(v9 + 92);
    v16 = *(_BYTE *)(v9 + 88);
    v17 = *(_BYTE *)(v9 + 84);
    v57 = v9 + 100;
    v18 = *(_BYTE *)(v9 + 80);
    v11 = (wchar_t *)(v9 + 48);
    if ( *(_QWORD *)(v9 + 72) >= 8uLL )
      v11 = *(wchar_t **)v11;
    v58 = v11;
    v12 = (wchar_t *)(v9 + 16);
    if ( *(_QWORD *)(v9 + 40) >= 8uLL )
      v12 = *(wchar_t **)v12;
    v59 = v12;
    v50 = *(_DWORD *)(v9 + 148);
    v19[0] = *(_BYTE *)(v9 + 144);
    v51 = *(_DWORD *)(v9 + 140);
    v52 = *(_DWORD *)(v9 + 136);
    v53 = *(_DWORD *)(v9 + 132);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_18036C910,
      v7,
      v8,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)v19,
      (__int64)&v50,
      &v59,
      &v58,
      (__int64)&v18,
      &v57,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v56,
      (__int64)&v13,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v55,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v54,
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
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22);
  }
}
