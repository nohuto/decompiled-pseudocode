/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@8773@Z @ 0x18015F61C
 * Callers:
 *     ?FirstFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_KI@Z @ 0x1801622D4 (-FirstFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatenc.c)
 *     ?SteadyStateFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_KI@Z @ 0x180165378 (-SteadyStateFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouch.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801560E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        wchar_t **a10,
        wchar_t **a11,
        __int64 a12,
        __int64 *a13,
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
        __int64 a24)
{
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rcx
  wchar_t *v28; // rdx
  __int64 v29; // rax
  int v30; // r8d
  wchar_t *v31; // rdx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  wchar_t *v44; // [rsp+A0h] [rbp-60h]
  int v45; // [rsp+A8h] [rbp-58h]
  int v46; // [rsp+ACh] [rbp-54h]
  wchar_t *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  __int64 v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  __int64 v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  __int64 v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  __int64 v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  __int64 v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  __int64 v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  __int64 v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]

  v74 = a24;
  v72 = a23;
  v25 = 2;
  v70 = a22;
  v68 = a21;
  v66 = a20;
  v64 = a19;
  v62 = a18;
  v60 = a17;
  v58 = a16;
  v56 = a15;
  v54 = a14;
  v75 = 4LL;
  v73 = 8LL;
  v71 = 8LL;
  v26 = *a13;
  v50 = a12;
  v52 = v26;
  v27 = -1LL;
  v69 = 2LL;
  v67 = 2LL;
  v28 = *a11;
  v65 = 1LL;
  v63 = 8LL;
  v61 = 1LL;
  v59 = 1LL;
  v57 = 1LL;
  v55 = 1LL;
  v53 = 16LL;
  v51 = 1LL;
  if ( v28 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = word_1802CE738;
    v30 = 2;
  }
  v47 = v28;
  v48 = v30;
  v49 = 0;
  v31 = *a10;
  if ( *a10 )
  {
    do
      ++v27;
    while ( v31[v27] );
    v25 = 2 * v27 + 2;
  }
  else
  {
    v31 = word_1802CE738;
  }
  v42 = a9;
  v40 = a8;
  v38 = a7;
  v36 = a6;
  v34 = a5;
  v44 = v31;
  v45 = v25;
  v46 = 0;
  v43 = 4LL;
  v41 = 1LL;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180346E48, a2, 0LL, 0LL, 0x16u, &v33);
}
