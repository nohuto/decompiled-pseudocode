/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U3@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U4@U5@U5@U5@U5@U2@U5@U2@U5@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@455AEBU?$_tlgWrapperByVal@$03@@66AEBU?$_tlgWrapperByVal@$01@@777777777777767777474763@Z @ 0x1C0068500
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0066264 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
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
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38)
{
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
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
  __int64 v94; // [rsp+1F0h] [rbp+F0h]
  __int64 v95; // [rsp+1F8h] [rbp+F8h]
  __int64 v96; // [rsp+200h] [rbp+100h]
  __int64 v97; // [rsp+208h] [rbp+108h]
  __int64 v98; // [rsp+210h] [rbp+110h]
  __int64 v99; // [rsp+218h] [rbp+118h]
  __int64 v100; // [rsp+220h] [rbp+120h]
  __int64 v101; // [rsp+228h] [rbp+128h]
  __int64 v102; // [rsp+230h] [rbp+130h]
  __int64 v103; // [rsp+238h] [rbp+138h]
  __int64 v104; // [rsp+240h] [rbp+140h]
  __int64 v105; // [rsp+248h] [rbp+148h]
  __int64 v106; // [rsp+250h] [rbp+150h]
  __int64 v107; // [rsp+258h] [rbp+158h]
  __int64 v108; // [rsp+260h] [rbp+160h]
  __int64 v109; // [rsp+268h] [rbp+168h]

  v108 = a38;
  v106 = a37;
  v104 = a36;
  v102 = a35;
  v100 = a34;
  v98 = a33;
  v96 = a32;
  v94 = a31;
  v92 = a30;
  v90 = a29;
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
  v109 = 8LL;
  v107 = 4LL;
  v105 = 2LL;
  v103 = 1LL;
  v101 = 2LL;
  v99 = 1LL;
  v97 = 2LL;
  v95 = 2LL;
  v93 = 2LL;
  v91 = 2LL;
  v89 = 4LL;
  v87 = 2LL;
  v85 = 2LL;
  v83 = 2LL;
  v81 = 2LL;
  v79 = 2LL;
  v77 = 2LL;
  v75 = 2LL;
  v73 = 2LL;
  v71 = 2LL;
  v69 = 2LL;
  v67 = 2LL;
  v65 = 2LL;
  v63 = 2LL;
  v61 = 2LL;
  v59 = 4LL;
  v57 = 4LL;
  v54 = a11;
  v55 = 4LL;
  v53 = 16LL;
  v51 = 16LL;
  v52 = *a10;
  v49 = 1LL;
  v47 = 16LL;
  v38 = *a9;
  v48 = a8;
  v50 = v38;
  v45 = 1LL;
  v43 = 8LL;
  v39 = *a7;
  v44 = a6;
  v42 = a5;
  v46 = v39;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0243250, a2, 0, 0, 0x24u, &v41);
}
