/*
 * XREFs of ?FirstFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@IIAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@_K@Z @ 0x1801D29E0
 * Callers:
 *     ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEBAXAEAUTouchScenarioInfo@2@AEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III_K@Z @ 0x18001B790 (-DetectInputGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEBAXAEAUTouchSce.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U5@U1@U1@U1@U1@U1@U1@U1@U5@U5@U5@U5@U5@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@87337333333377777777@Z @ 0x1801CE55C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801CE55C.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18026BB8C (-IsVailContainer@@YA_NXZ.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::FirstFrameInputGlitch(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1,
        int a2,
        int a3,
        const struct TELEMETRY_INTERACTION_FRAME_TIMES *a4,
        unsigned __int64 a5)
{
  __int64 *v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // al
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  wchar_t *v21; // rax
  wchar_t *v22; // rax
  char v23; // [rsp+148h] [rbp-80h] BYREF
  char v24; // [rsp+149h] [rbp-7Fh] BYREF
  char v25; // [rsp+14Ah] [rbp-7Eh] BYREF
  char v26; // [rsp+14Bh] [rbp-7Dh] BYREF
  char v27; // [rsp+14Ch] [rbp-7Ch] BYREF
  char v28; // [rsp+14Dh] [rbp-7Bh] BYREF
  _BYTE v29[2]; // [rsp+14Eh] [rbp-7Ah] BYREF
  __int16 v30; // [rsp+150h] [rbp-78h] BYREF
  __int16 v31; // [rsp+152h] [rbp-76h] BYREF
  int v32; // [rsp+154h] [rbp-74h] BYREF
  int v33; // [rsp+158h] [rbp-70h] BYREF
  int v34; // [rsp+15Ch] [rbp-6Ch] BYREF
  int v35; // [rsp+160h] [rbp-68h] BYREF
  int v36; // [rsp+164h] [rbp-64h] BYREF
  int v37; // [rsp+168h] [rbp-60h] BYREF
  int v38; // [rsp+16Ch] [rbp-5Ch] BYREF
  int v39; // [rsp+170h] [rbp-58h] BYREF
  int v40; // [rsp+174h] [rbp-54h] BYREF
  int v41; // [rsp+178h] [rbp-50h] BYREF
  int v42; // [rsp+17Ch] [rbp-4Ch] BYREF
  int v43; // [rsp+180h] [rbp-48h] BYREF
  int v44; // [rsp+184h] [rbp-44h] BYREF
  __int64 v45; // [rsp+188h] [rbp-40h] BYREF
  __int64 v46; // [rsp+190h] [rbp-38h] BYREF
  __int64 v47; // [rsp+198h] [rbp-30h] BYREF
  __int64 v48; // [rsp+1A0h] [rbp-28h] BYREF
  __int64 v49; // [rsp+1A8h] [rbp-20h] BYREF
  __int64 v50; // [rsp+1B0h] [rbp-18h] BYREF
  __int64 v51; // [rsp+1B8h] [rbp-10h] BYREF
  unsigned __int64 v52; // [rsp+1C0h] [rbp-8h] BYREF
  __int64 v53; // [rsp+1C8h] [rbp+0h] BYREF
  __int64 v54; // [rsp+1D0h] [rbp+8h] BYREF
  __int64 v55; // [rsp+1D8h] [rbp+10h] BYREF
  __int64 v56; // [rsp+1E0h] [rbp+18h] BYREF
  wchar_t *v57; // [rsp+1E8h] [rbp+20h] BYREF
  wchar_t *v58; // [rsp+1F0h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1803D0EB8 > 4 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
  {
    v45 = v9[23];
    v46 = v9[9];
    v47 = v9[8];
    v48 = v9[20];
    v49 = v9[19];
    v50 = v9[18];
    v51 = *v9;
    v52 = 1000 * (a5 / g_qpcFrequency.QuadPart) + 1000 * (a5 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    if ( IsVailContainer() )
      v10 = (*((_QWORD *)a4 + 18) - *((_QWORD *)a4 + 9)) / (qword_1803D32C0 / 0xF4240uLL);
    else
      LODWORD(v10) = 0;
    v32 = v10;
    if ( IsVailContainer() )
      v11 = (*((_QWORD *)a4 + 9) - *((_QWORD *)a4 + 8)) / (qword_1803D32C0 / 0xF4240uLL);
    else
      LODWORD(v11) = 0;
    v33 = v11;
    v12 = IsVailContainer();
    v13 = *(_QWORD *)a4;
    if ( v12 )
      v14 = (*((_QWORD *)a4 + 8) - v13) / (qword_1803D32C0 / 0xF4240uLL);
    else
      LODWORD(v14) = 0;
    v15 = *((_QWORD *)a4 + 20);
    v16 = *((_QWORD *)a4 + 19);
    v17 = *((_QWORD *)a4 + 18);
    v34 = v14;
    v39 = a3;
    v18 = v15 - v16;
    v40 = a2;
    v19 = v16 - v17;
    v20 = v17 - v13;
    v35 = v18 / (qword_1803D32C0 / 0x3E8uLL);
    v36 = v19 / (qword_1803D32C0 / 0xF4240uLL);
    v37 = v20 / (qword_1803D32C0 / 0xF4240uLL);
    v38 = (v15 - v13) / (qword_1803D32C0 / 0x3E8uLL);
    v53 = *((_QWORD *)a1 + 25);
    v54 = *((_QWORD *)a1 + 1);
    v30 = *((_WORD *)a1 + 65);
    v31 = *((_WORD *)a1 + 64);
    v23 = *((_BYTE *)a1 + 192);
    v55 = *((_QWORD *)a1 + 15);
    v24 = *((_BYTE *)a1 + 96);
    v25 = *((_BYTE *)a1 + 92);
    v26 = *((_BYTE *)a1 + 88);
    v27 = *((_BYTE *)a1 + 84);
    v56 = (__int64)a1 + 100;
    v28 = *((_BYTE *)a1 + 80);
    v21 = (wchar_t *)((char *)a1 + 48);
    if ( *((_QWORD *)a1 + 9) >= 8uLL )
      v21 = *(wchar_t **)v21;
    v57 = v21;
    v22 = (wchar_t *)((char *)a1 + 16);
    if ( *((_QWORD *)a1 + 5) >= 8uLL )
      v22 = *(wchar_t **)v22;
    v58 = v22;
    v41 = *((_DWORD *)a1 + 37);
    v29[0] = *((_BYTE *)a1 + 144);
    v42 = *((_DWORD *)a1 + 35);
    v43 = *((_DWORD *)a1 + 34);
    v44 = *((_DWORD *)a1 + 33);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      qword_1803D32C0 / 0xF4240uLL,
      byte_18036D069,
      v20,
      v19,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)v29,
      (__int64)&v41,
      &v58,
      &v57,
      (__int64)&v28,
      &v56,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v55,
      (__int64)&v23,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v54,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v53,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45);
  }
}
