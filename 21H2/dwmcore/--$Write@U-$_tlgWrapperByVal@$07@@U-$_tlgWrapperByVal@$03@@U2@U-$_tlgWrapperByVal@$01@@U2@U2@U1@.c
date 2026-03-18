/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$01@@44333333333333333333334@Z @ 0x180274CC0
 * Callers:
 *     ?UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180275E10 (-UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulatio.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
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
        __int64 a30,
        __int64 a31)
{
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int64 v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  __int64 v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  __int64 v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  __int64 v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  __int64 v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  __int64 v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  __int64 v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  __int64 v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  __int64 v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  __int64 v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]
  __int64 v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  __int64 v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  __int64 v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  __int64 v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]

  v85 = a31;
  v83 = a30;
  v81 = a29;
  v79 = a28;
  v77 = a27;
  v75 = a26;
  v73 = a25;
  v71 = a24;
  v69 = a23;
  v67 = a22;
  v65 = a21;
  v63 = a20;
  v61 = a19;
  v59 = a18;
  v57 = a17;
  v55 = a16;
  v53 = a15;
  v51 = a14;
  v49 = a13;
  v47 = a12;
  v45 = a11;
  v43 = a10;
  v41 = a9;
  v39 = a8;
  v37 = a7;
  v35 = a6;
  v33 = a5;
  v86 = 4LL;
  v84 = 8LL;
  v82 = 8LL;
  v80 = 8LL;
  v78 = 8LL;
  v76 = 8LL;
  v74 = 8LL;
  v72 = 8LL;
  v70 = 8LL;
  v68 = 8LL;
  v66 = 8LL;
  v64 = 8LL;
  v62 = 8LL;
  v60 = 8LL;
  v58 = 8LL;
  v56 = 8LL;
  v54 = 8LL;
  v52 = 8LL;
  v50 = 8LL;
  v48 = 8LL;
  v46 = 8LL;
  v44 = 4LL;
  v42 = 4LL;
  v40 = 2LL;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803D0EB8, a2, 0LL, 0LL, 0x1Du, &v32);
}
