/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U5@U5@U5@U5@U5@U1@U1@U6@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@87777777338343@Z @ 0x18015FACC
 * Callers:
 *     ?UpdateLastTelemetryInfo@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180165CE4 (-UpdateLastTelemetryInfo@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLaten.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801560E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
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
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34)
{
  int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rcx
  wchar_t *v38; // rdx
  __int64 v39; // rax
  int v40; // r9d
  wchar_t *v41; // rdx
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  wchar_t *v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A8h] [rbp-58h]
  int v56; // [rsp+ACh] [rbp-54h]
  wchar_t *v57; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+BCh] [rbp-44h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  __int64 v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int64 v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  __int64 v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  __int64 v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  __int64 v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  __int64 v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  __int64 v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  __int64 v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  __int64 v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  __int64 v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  __int64 v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  __int64 v90; // [rsp+1B0h] [rbp+B0h]
  __int64 v91; // [rsp+1B8h] [rbp+B8h]
  __int64 v92; // [rsp+1C0h] [rbp+C0h]
  __int64 v93; // [rsp+1C8h] [rbp+C8h]
  __int64 v94; // [rsp+1D0h] [rbp+D0h]
  __int64 v95; // [rsp+1D8h] [rbp+D8h]
  __int64 v96; // [rsp+1E0h] [rbp+E0h]
  __int64 v97; // [rsp+1E8h] [rbp+E8h]
  __int64 v98; // [rsp+1F0h] [rbp+F0h]
  __int64 v99; // [rsp+1F8h] [rbp+F8h]
  __int64 v100; // [rsp+200h] [rbp+100h]
  __int64 v101; // [rsp+208h] [rbp+108h]
  __int64 v102; // [rsp+210h] [rbp+110h]
  __int64 v103; // [rsp+218h] [rbp+118h]
  __int64 v104; // [rsp+220h] [rbp+120h]
  __int64 v105; // [rsp+228h] [rbp+128h]

  v104 = a34;
  v102 = a33;
  v35 = 2;
  v100 = a32;
  v98 = a31;
  v96 = a30;
  v94 = a29;
  v92 = a28;
  v90 = a27;
  v88 = a26;
  v86 = a25;
  v84 = a24;
  v82 = a23;
  v80 = a22;
  v78 = a21;
  v76 = a20;
  v74 = a19;
  v72 = a18;
  v70 = a17;
  v68 = a16;
  v66 = a15;
  v64 = a14;
  v105 = 4LL;
  v103 = 1LL;
  v101 = 4LL;
  v36 = *a13;
  v60 = a12;
  v62 = v36;
  v37 = -1LL;
  v99 = 2LL;
  v97 = 4LL;
  v38 = *a11;
  v95 = 4LL;
  v93 = 8LL;
  v91 = 8LL;
  v89 = 8LL;
  v87 = 8LL;
  v85 = 8LL;
  v83 = 8LL;
  v81 = 8LL;
  v79 = 2LL;
  v77 = 2LL;
  v75 = 1LL;
  v73 = 8LL;
  v71 = 1LL;
  v69 = 1LL;
  v67 = 1LL;
  v65 = 1LL;
  v63 = 16LL;
  v61 = 1LL;
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = word_1802CE738;
    v40 = 2;
  }
  v57 = v38;
  v58 = v40;
  v59 = 0;
  v41 = *a10;
  if ( *a10 )
  {
    do
      ++v37;
    while ( v41[v37] );
    v35 = 2 * v37 + 2;
  }
  else
  {
    v41 = word_1802CE738;
  }
  v52 = a9;
  v50 = a8;
  v48 = a7;
  v46 = a6;
  v44 = a5;
  v54 = v41;
  v55 = v35;
  v56 = 0;
  v53 = 4LL;
  v51 = 1LL;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180346E48, a2, 0LL, 0LL, 0x20u, &v43);
}
