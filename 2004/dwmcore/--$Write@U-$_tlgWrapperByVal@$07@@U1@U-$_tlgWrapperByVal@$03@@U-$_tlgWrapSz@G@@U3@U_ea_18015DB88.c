/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U4@U2@U?$_tlgWrapperByVal@$01@@U6@U1@U4@U4@U4@U4@U1@U2@U1@U1@U1@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@44464AEBU?$_tlgWrapperByVal@$01@@8366663433363@Z @ 0x18015DB88
 * Callers:
 *     ?TimeoutOverdueScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_K1@Z @ 0x180162D18 (-TimeoutOverdueScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatenc.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801506E8 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
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
        __int64 a29,
        __int64 a30)
{
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rcx
  wchar_t *v34; // rdx
  __int64 v35; // rax
  int v36; // r9d
  wchar_t *v37; // rdx
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  wchar_t *v46; // [rsp+80h] [rbp-80h]
  int v47; // [rsp+88h] [rbp-78h]
  int v48; // [rsp+8Ch] [rbp-74h]
  wchar_t *v49; // [rsp+90h] [rbp-70h]
  int v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+9Ch] [rbp-64h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  __int64 v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  __int64 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  __int64 v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  __int64 v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  __int64 v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]
  __int64 v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  __int64 v86; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  __int64 v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  __int64 v90; // [rsp+1D0h] [rbp+D0h]
  __int64 v91; // [rsp+1D8h] [rbp+D8h]
  __int64 v92; // [rsp+1E0h] [rbp+E0h]
  __int64 v93; // [rsp+1E8h] [rbp+E8h]

  v92 = a30;
  v90 = a29;
  v31 = 2;
  v88 = a28;
  v86 = a27;
  v84 = a26;
  v82 = a25;
  v80 = a24;
  v78 = a23;
  v76 = a22;
  v74 = a21;
  v72 = a20;
  v70 = a19;
  v68 = a18;
  v66 = a17;
  v64 = a16;
  v62 = a15;
  v60 = a14;
  v58 = a13;
  v56 = a12;
  v93 = 8LL;
  v91 = 1LL;
  v89 = 8LL;
  v32 = *a11;
  v52 = a10;
  v54 = v32;
  v33 = -1LL;
  v87 = 8LL;
  v85 = 8LL;
  v34 = *a9;
  v83 = 4LL;
  v81 = 8LL;
  v79 = 1LL;
  v77 = 1LL;
  v75 = 1LL;
  v73 = 1LL;
  v71 = 8LL;
  v69 = 2LL;
  v67 = 2LL;
  v65 = 4LL;
  v63 = 1LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 16LL;
  v53 = 1LL;
  if ( v34 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = word_18028970C;
    v36 = 2;
  }
  v49 = v34;
  v50 = v36;
  v51 = 0;
  v37 = *a8;
  if ( *a8 )
  {
    do
      ++v33;
    while ( v37[v33] );
    v31 = 2 * v33 + 2;
  }
  else
  {
    v37 = word_18028970C;
  }
  v44 = a7;
  v42 = a6;
  v40 = a5;
  v46 = v37;
  v47 = v31;
  v48 = 0;
  v45 = 4LL;
  v43 = 8LL;
  v41 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180342E48, a2, 0LL, 0LL, 0x1Cu, &v39);
}
