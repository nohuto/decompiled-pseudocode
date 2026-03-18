/*
 * XREFs of ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z @ 0x18002448C
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180024358 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x180024F6C (-IsVailContainer@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U1@U5@U1@U1@U1@U1@U1@U1@U1@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@873337333333377777777777@Z @ 0x18015D974 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G@@U3@U2@U-$_t.c)
 *     ?FirstFrameInputGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@II_K1111111@Z @ 0x180161E70 (-FirstFrameInputGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatency.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::DetectInputGlitch(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        __int64 a11,
        unsigned int a12,
        unsigned int a13,
        char a14,
        unsigned __int64 a15)
{
  unsigned __int64 v17; // rdx
  float v19; // xmm0_4
  float v20; // xmm0_4
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r9
  unsigned int v24; // r13d
  __int64 v25; // r10
  __int64 v26; // r11
  unsigned __int64 v27; // rcx
  unsigned int v28; // r8d
  unsigned int v29; // edx
  int v30; // eax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned __int64 v38; // [rsp+28h] [rbp-1B8h]
  unsigned __int64 v39; // [rsp+30h] [rbp-1B0h]
  unsigned __int64 v40; // [rsp+38h] [rbp-1A8h]
  unsigned __int64 v41; // [rsp+40h] [rbp-1A0h]
  unsigned __int64 v42; // [rsp+48h] [rbp-198h]
  __int16 v43; // [rsp+160h] [rbp-80h] BYREF
  __int16 v44; // [rsp+162h] [rbp-7Eh] BYREF
  int v45; // [rsp+164h] [rbp-7Ch] BYREF
  int v46; // [rsp+168h] [rbp-78h] BYREF
  int v47; // [rsp+16Ch] [rbp-74h] BYREF
  int v48; // [rsp+170h] [rbp-70h] BYREF
  int v49; // [rsp+174h] [rbp-6Ch] BYREF
  int v50; // [rsp+178h] [rbp-68h] BYREF
  int v51; // [rsp+17Ch] [rbp-64h] BYREF
  unsigned int v52; // [rsp+180h] [rbp-60h] BYREF
  int v53; // [rsp+184h] [rbp-5Ch] BYREF
  unsigned int v54; // [rsp+188h] [rbp-58h] BYREF
  int v55; // [rsp+18Ch] [rbp-54h] BYREF
  int v56; // [rsp+190h] [rbp-50h] BYREF
  int v57; // [rsp+194h] [rbp-4Ch] BYREF
  int v58; // [rsp+198h] [rbp-48h] BYREF
  __int64 v59; // [rsp+1A0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+1A8h] [rbp-38h] BYREF
  unsigned __int64 v61; // [rsp+1B0h] [rbp-30h] BYREF
  unsigned __int64 v62; // [rsp+1B8h] [rbp-28h] BYREF
  unsigned __int64 v63; // [rsp+1C0h] [rbp-20h] BYREF
  unsigned __int64 v64; // [rsp+1C8h] [rbp-18h] BYREF
  unsigned __int64 v65; // [rsp+1D0h] [rbp-10h] BYREF
  unsigned __int64 v66; // [rsp+1D8h] [rbp-8h] BYREF
  unsigned __int64 v67; // [rsp+1E0h] [rbp+0h] BYREF
  unsigned __int64 v68; // [rsp+1E8h] [rbp+8h] BYREF
  unsigned __int64 v69; // [rsp+1F0h] [rbp+10h] BYREF
  unsigned __int64 v70; // [rsp+1F8h] [rbp+18h] BYREF
  __int64 v71; // [rsp+200h] [rbp+20h] BYREF
  __int64 v72; // [rsp+208h] [rbp+28h] BYREF
  _QWORD *v73; // [rsp+210h] [rbp+30h] BYREF
  _QWORD *v74; // [rsp+218h] [rbp+38h] BYREF
  CTelemetryTouchLatencyAnalysis *v75; // [rsp+260h] [rbp+80h] BYREF
  char v76; // [rsp+268h] [rbp+88h] BYREF
  char v77; // [rsp+270h] [rbp+90h] BYREF

  v75 = this;
  v17 = a11;
  if ( a11 < 0 )
    v19 = (float)(a11 & 1 | (unsigned int)((unsigned __int64)a11 >> 1))
        + (float)(a11 & 1 | (unsigned int)((unsigned __int64)a11 >> 1));
  else
    v19 = (float)(int)a11;
  v20 = v19 * 1.5;
  v21 = 0LL;
  if ( v20 >= 9.223372e18 )
  {
    v20 = v20 - 9.223372e18;
    if ( v20 < 9.223372e18 )
      v21 = 0x8000000000000000uLL;
  }
  v22 = a6;
  v23 = v21 + (unsigned int)(int)v20;
  if ( *((_QWORD *)a2 + 25) != a15 )
    goto LABEL_7;
  v27 = a3;
  if ( !a3 )
    v27 = a4;
  if ( a6 - v27 > v23 )
  {
    v28 = a13;
    v42 = a11;
    v29 = a12;
    v41 = a10;
    v40 = a9;
    v39 = a6;
    v38 = a5;
    *((_BYTE *)a2 + 260) = 1;
    InteractionTraceProvider::FirstFrameInputGlitch(a2, v29, v28, a3, a4, v38, v39, v40, v41, v42, v23);
  }
  else
  {
LABEL_7:
    v24 = a12;
    if ( !a3 || (v30 = *((_DWORD *)a2 + 101)) != 0 && a12 == v30 + 1 )
    {
      v25 = *((_QWORD *)a2 + 48);
      v26 = *((_QWORD *)a2 + 49);
      if ( v25 - v26 > v23 )
      {
        ++*((_WORD *)a2 + 176);
        if ( (unsigned int)dword_180346E48 > 4 && (qword_180346E58 & 2) != 0 && (qword_180346E60 & 2) == qword_180346E60 )
        {
          v31 = a10;
          v32 = a9;
          v65 = a5;
          v61 = v17;
          v59 = v25;
          v60 = v26;
          v62 = a10;
          v68 = (v25 - v26) / (qword_180349400 / 0x3E8uLL);
          v63 = a9;
          v64 = v22;
          v66 = a4;
          v67 = a3;
          v69 = 1000 * (v23 / g_qpcFrequency.QuadPart)
              + 1000 * (v23 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
          if ( IsVailContainer() )
            v33 = (a4 - v31) / (qword_180349400 / 0xF4240uLL);
          else
            LODWORD(v33) = 0;
          v45 = v33;
          if ( IsVailContainer() )
            v34 = (v31 - v32) / (qword_180349400 / 0xF4240uLL);
          else
            LODWORD(v34) = 0;
          v46 = v34;
          if ( IsVailContainer() )
            v35 = (v32 - a3) / (qword_180349400 / 0xF4240uLL);
          else
            LODWORD(v35) = 0;
          v47 = v35;
          v54 = v24;
          v48 = (v22 - a5) / (qword_180349400 / 0x3E8uLL);
          v49 = (a5 - a4) / (qword_180349400 / 0xF4240uLL);
          v50 = (a4 - a3) / (qword_180349400 / 0xF4240uLL);
          v51 = (v22 - a3) / (qword_180349400 / 0x3E8uLL);
          v70 = a15;
          v52 = a13;
          v53 = *((_DWORD *)a2 + 101);
          v71 = *((_QWORD *)a2 + 1);
          v43 = *((_WORD *)a2 + 65);
          v44 = *((_WORD *)a2 + 64);
          a14 = *((_BYTE *)a2 + 192);
          v72 = *((_QWORD *)a2 + 15);
          LOBYTE(v75) = *((_BYTE *)a2 + 96);
          LOBYTE(a11) = *((_BYTE *)a2 + 92);
          v76 = *((_BYTE *)a2 + 88);
          v77 = *((_BYTE *)a2 + 84);
          a15 = (unsigned __int64)a2 + 100;
          LOBYTE(a7) = *((_BYTE *)a2 + 80);
          v36 = (_QWORD *)((char *)a2 + 48);
          if ( *((_QWORD *)a2 + 9) >= 8uLL )
            v36 = (_QWORD *)*v36;
          v73 = v36;
          v37 = (_QWORD *)((char *)a2 + 16);
          if ( *((_QWORD *)a2 + 5) >= 8uLL )
            v37 = (_QWORD *)*v37;
          v74 = v37;
          v55 = *((_DWORD *)a2 + 37);
          LOBYTE(a8) = *((_BYTE *)a2 + 144);
          v56 = *((_DWORD *)a2 + 35);
          v57 = *((_DWORD *)a2 + 34);
          v58 = *((_DWORD *)a2 + 33);
          ((void (__fastcall *)(unsigned __int64, void *, unsigned __int64, __int64, int *, int *, int *, unsigned __int64 *, int *, _QWORD **, _QWORD **, unsigned __int64 *, unsigned __int64 *, char *, char *, __int64 *, CTelemetryTouchLatencyAnalysis **, __int64 *, char *, __int16 *, __int16 *, __int64 *, unsigned int *, int *, unsigned int *, unsigned __int64 *, int *, int *, int *, int *, int *, int *, int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, __int64 *, __int64 *))_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>)(
            qword_180349400 / 0xF4240uLL,
            &unk_1802E6061,
            qword_180349400 / 0x3E8uLL,
            qword_180349400,
            &v58,
            &v57,
            &v56,
            &a8,
            &v55,
            &v74,
            &v73,
            &a7,
            &a15,
            &v77,
            &v76,
            &a11,
            &v75,
            &v72,
            &a14,
            &v44,
            &v43,
            &v71,
            &v54,
            &v53,
            &v52,
            &v70,
            &v51,
            &v50,
            &v49,
            &v48,
            &v47,
            &v46,
            &v45,
            &v69,
            &v68,
            &v67,
            &v66,
            &v65,
            &v64,
            &v63,
            &v62,
            &v61,
            &v60,
            &v59);
        }
      }
    }
  }
}
