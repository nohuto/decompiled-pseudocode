/*
 * XREFs of ?FrameLatencies@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@II_KAEBVCLatencyInfo@3@@Z @ 0x18015DC2C
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180003EA8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U5@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@873373333333333333@Z @ 0x180159454 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_180159454.c)
 */

void __fastcall InteractionTraceProvider::FrameLatencies(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        int a2,
        int a3,
        __int64 a4,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a5)
{
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  wchar_t *v9; // rax
  bool v10; // cf
  wchar_t *v11; // rax
  char v12; // [rsp+138h] [rbp-80h] BYREF
  char v13; // [rsp+139h] [rbp-7Fh] BYREF
  char v14; // [rsp+13Ah] [rbp-7Eh] BYREF
  char v15; // [rsp+13Bh] [rbp-7Dh] BYREF
  char v16; // [rsp+13Ch] [rbp-7Ch] BYREF
  char v17; // [rsp+13Dh] [rbp-7Bh] BYREF
  _BYTE v18[2]; // [rsp+13Eh] [rbp-7Ah] BYREF
  __int16 v19; // [rsp+140h] [rbp-78h] BYREF
  __int16 v20; // [rsp+142h] [rbp-76h] BYREF
  int v21; // [rsp+144h] [rbp-74h] BYREF
  int v22; // [rsp+148h] [rbp-70h] BYREF
  int v23; // [rsp+14Ch] [rbp-6Ch] BYREF
  int v24; // [rsp+150h] [rbp-68h] BYREF
  int v25; // [rsp+154h] [rbp-64h] BYREF
  int v26; // [rsp+158h] [rbp-60h] BYREF
  int v27; // [rsp+15Ch] [rbp-5Ch] BYREF
  int v28; // [rsp+160h] [rbp-58h] BYREF
  int v29; // [rsp+164h] [rbp-54h] BYREF
  int v30; // [rsp+168h] [rbp-50h] BYREF
  int v31; // [rsp+16Ch] [rbp-4Ch] BYREF
  int v32; // [rsp+170h] [rbp-48h] BYREF
  int v33; // [rsp+174h] [rbp-44h] BYREF
  int v34; // [rsp+178h] [rbp-40h] BYREF
  int v35; // [rsp+17Ch] [rbp-3Ch] BYREF
  int v36; // [rsp+180h] [rbp-38h] BYREF
  int v37; // [rsp+184h] [rbp-34h] BYREF
  int v38; // [rsp+188h] [rbp-30h] BYREF
  int v39; // [rsp+18Ch] [rbp-2Ch] BYREF
  __int64 v40; // [rsp+190h] [rbp-28h] BYREF
  __int64 v41; // [rsp+198h] [rbp-20h] BYREF
  __int64 v42; // [rsp+1A0h] [rbp-18h] BYREF
  __int64 v43; // [rsp+1A8h] [rbp-10h] BYREF
  wchar_t *v44; // [rsp+1B0h] [rbp-8h] BYREF
  wchar_t *v45; // [rsp+1B8h] [rbp+0h] BYREF

  if ( (unsigned int)dword_180341EB8 > 4 && (qword_180341EC8 & 2) != 0 && (qword_180341ED0 & 2) == qword_180341ED0 )
  {
    v40 = a4;
    v34 = a3;
    v35 = a2;
    v6 = *((_DWORD *)a5 + 10);
    v7 = *((unsigned int *)a5 + 7);
    v8 = *((unsigned int *)a5 + 1);
    v21 = *((_DWORD *)a5 + 6);
    v22 = *((_DWORD *)a5 + 5);
    v23 = *((_DWORD *)a5 + 4);
    v24 = *((_DWORD *)a5 + 3);
    v25 = *((_DWORD *)a5 + 2);
    v27 = *((_DWORD *)a5 + 9);
    v30 = v6 + v27;
    v31 = *((_DWORD *)a5 + 8);
    v32 = v8 + v7;
    v33 = *(_DWORD *)a5;
    v41 = *((_QWORD *)a1 + 1);
    v19 = *((_WORD *)a1 + 65);
    v20 = *((_WORD *)a1 + 64);
    v12 = *((_BYTE *)a1 + 192);
    v42 = *((_QWORD *)a1 + 15);
    v13 = *((_BYTE *)a1 + 96);
    v14 = *((_BYTE *)a1 + 92);
    v15 = *((_BYTE *)a1 + 88);
    v16 = *((_BYTE *)a1 + 84);
    v43 = (__int64)a1 + 100;
    v17 = *((_BYTE *)a1 + 80);
    v9 = (wchar_t *)((char *)a1 + 48);
    v10 = *((_QWORD *)a1 + 9) < 8uLL;
    v26 = v6;
    v28 = v7;
    v29 = v8;
    if ( !v10 )
      v9 = *(wchar_t **)v9;
    v44 = v9;
    v11 = (wchar_t *)((char *)a1 + 16);
    if ( *((_QWORD *)a1 + 5) >= 8uLL )
      v11 = *(wchar_t **)v11;
    v45 = v11;
    v36 = *((_DWORD *)a1 + 37);
    v18[0] = *((_BYTE *)a1 + 144);
    v37 = *((_DWORD *)a1 + 35);
    v38 = *((_DWORD *)a1 + 34);
    v39 = *((_DWORD *)a1 + 33);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1802E1876,
      v7,
      (__int64)a5,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)v18,
      (__int64)&v36,
      &v45,
      &v44,
      (__int64)&v17,
      &v43,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v42,
      (__int64)&v12,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v41,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v40,
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
      (__int64)&v22,
      (__int64)&v21);
  }
}
