/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U4@U2@U?$_tlgWrapperByVal@$01@@U6@U1@U4@U4@U4@U4@U1@U2@U1@U1@U1@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@44464AEBU?$_tlgWrapperByVal@$01@@836666343336@Z @ 0x1801D0E10
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        wchar_t **a8,
        wchar_t **a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29)
{
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rcx
  wchar_t *v33; // rdx
  __int64 v34; // rax
  int v35; // r9d
  wchar_t *v36; // rdx
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  wchar_t *v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+88h] [rbp-78h]
  int v47; // [rsp+8Ch] [rbp-74h]
  wchar_t *v48; // [rsp+90h] [rbp-70h]
  int v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+9Ch] [rbp-64h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int64 v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  __int64 v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  __int64 v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  __int64 v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  __int64 v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  __int64 v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  __int64 v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  __int64 v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  __int64 v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  __int64 v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  __int64 v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]

  v89 = a29;
  v87 = a28;
  v30 = 2;
  v85 = a27;
  v83 = a26;
  v81 = a25;
  v79 = a24;
  v77 = a23;
  v75 = a22;
  v73 = a21;
  v71 = a20;
  v69 = a19;
  v67 = a18;
  v65 = a17;
  v63 = a16;
  v61 = a15;
  v59 = a14;
  v57 = a13;
  v55 = a12;
  v90 = 1LL;
  v88 = 8LL;
  v86 = 8LL;
  v31 = *a11;
  v51 = a10;
  v53 = v31;
  v32 = -1LL;
  v84 = 8LL;
  v82 = 4LL;
  v33 = *a9;
  v80 = 8LL;
  v78 = 1LL;
  v76 = 1LL;
  v74 = 1LL;
  v72 = 1LL;
  v70 = 8LL;
  v68 = 2LL;
  v66 = 2LL;
  v64 = 4LL;
  v62 = 1LL;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 16LL;
  v52 = 1LL;
  if ( v33 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v33 = word_18032C468;
    v35 = 2;
  }
  v48 = v33;
  v49 = v35;
  v50 = 0;
  v36 = *a8;
  if ( *a8 )
  {
    do
      ++v32;
    while ( v36[v32] );
    v30 = 2 * v32 + 2;
  }
  else
  {
    v36 = word_18032C468;
  }
  v43 = a7;
  v41 = a6;
  v39 = a5;
  v45 = v36;
  v46 = v30;
  v47 = 0;
  v44 = 4LL;
  v42 = 8LL;
  v40 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803D0EB8, a2, 0LL, 0LL, 0x1Bu, &v38);
}
