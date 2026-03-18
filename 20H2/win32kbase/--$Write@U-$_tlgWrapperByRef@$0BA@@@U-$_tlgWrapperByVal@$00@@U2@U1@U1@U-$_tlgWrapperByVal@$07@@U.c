/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@7777777777777777747666667767777665655@Z @ 0x1C006931C
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0068CE4 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 *a18,
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
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49,
        __int64 a50,
        __int64 a51,
        __int64 a52,
        __int64 a53,
        __int64 a54,
        __int64 a55)
{
  __int64 v55; // rcx
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  __int64 v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  __int64 v80; // [rsp+100h] [rbp+0h]
  __int64 v81; // [rsp+108h] [rbp+8h]
  __int64 v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  _DWORD *v84; // [rsp+120h] [rbp+20h]
  __int64 v85; // [rsp+128h] [rbp+28h]
  __int64 v86; // [rsp+130h] [rbp+30h]
  _DWORD v87[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  __int64 v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  __int64 v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  __int64 v94; // [rsp+170h] [rbp+70h]
  __int64 v95; // [rsp+178h] [rbp+78h]
  __int64 v96; // [rsp+180h] [rbp+80h]
  __int64 v97; // [rsp+188h] [rbp+88h]
  __int64 v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  __int64 v100; // [rsp+1A0h] [rbp+A0h]
  __int64 v101; // [rsp+1A8h] [rbp+A8h]
  __int64 v102; // [rsp+1B0h] [rbp+B0h]
  __int64 v103; // [rsp+1B8h] [rbp+B8h]
  __int64 v104; // [rsp+1C0h] [rbp+C0h]
  __int64 v105; // [rsp+1C8h] [rbp+C8h]
  __int64 v106; // [rsp+1D0h] [rbp+D0h]
  __int64 v107; // [rsp+1D8h] [rbp+D8h]
  __int64 v108; // [rsp+1E0h] [rbp+E0h]
  __int64 v109; // [rsp+1E8h] [rbp+E8h]
  __int64 v110; // [rsp+1F0h] [rbp+F0h]
  __int64 v111; // [rsp+1F8h] [rbp+F8h]
  __int64 v112; // [rsp+200h] [rbp+100h]
  __int64 v113; // [rsp+208h] [rbp+108h]
  __int64 v114; // [rsp+210h] [rbp+110h]
  __int64 v115; // [rsp+218h] [rbp+118h]
  __int64 v116; // [rsp+220h] [rbp+120h]
  __int64 v117; // [rsp+228h] [rbp+128h]
  __int64 v118; // [rsp+230h] [rbp+130h]
  __int64 v119; // [rsp+238h] [rbp+138h]
  __int64 v120; // [rsp+240h] [rbp+140h]
  __int64 v121; // [rsp+248h] [rbp+148h]
  __int64 v122; // [rsp+250h] [rbp+150h]
  __int64 v123; // [rsp+258h] [rbp+158h]
  __int64 v124; // [rsp+260h] [rbp+160h]
  __int64 v125; // [rsp+268h] [rbp+168h]
  __int64 v126; // [rsp+270h] [rbp+170h]
  __int64 v127; // [rsp+278h] [rbp+178h]
  __int64 v128; // [rsp+280h] [rbp+180h]
  __int64 v129; // [rsp+288h] [rbp+188h]
  __int64 v130; // [rsp+290h] [rbp+190h]
  __int64 v131; // [rsp+298h] [rbp+198h]
  __int64 v132; // [rsp+2A0h] [rbp+1A0h]
  __int64 v133; // [rsp+2A8h] [rbp+1A8h]
  __int64 v134; // [rsp+2B0h] [rbp+1B0h]
  __int64 v135; // [rsp+2B8h] [rbp+1B8h]
  __int64 v136; // [rsp+2C0h] [rbp+1C0h]
  __int64 v137; // [rsp+2C8h] [rbp+1C8h]
  __int64 v138; // [rsp+2D0h] [rbp+1D0h]
  __int64 v139; // [rsp+2D8h] [rbp+1D8h]
  __int64 v140; // [rsp+2E0h] [rbp+1E0h]
  __int64 v141; // [rsp+2E8h] [rbp+1E8h]
  __int64 v142; // [rsp+2F0h] [rbp+1F0h]
  __int64 v143; // [rsp+2F8h] [rbp+1F8h]
  __int64 v144; // [rsp+300h] [rbp+200h]
  __int64 v145; // [rsp+308h] [rbp+208h]
  __int64 v146; // [rsp+310h] [rbp+210h]
  __int64 v147; // [rsp+318h] [rbp+218h]
  __int64 v148; // [rsp+320h] [rbp+220h]
  __int64 v149; // [rsp+328h] [rbp+228h]
  __int64 v150; // [rsp+330h] [rbp+230h]
  __int64 v151; // [rsp+338h] [rbp+238h]
  __int64 v152; // [rsp+340h] [rbp+240h]
  __int64 v153; // [rsp+348h] [rbp+248h]
  __int64 v154; // [rsp+350h] [rbp+250h]
  __int64 v155; // [rsp+358h] [rbp+258h]
  __int64 v156; // [rsp+360h] [rbp+260h]
  __int64 v157; // [rsp+368h] [rbp+268h]
  __int64 v158; // [rsp+370h] [rbp+270h]
  __int64 v159; // [rsp+378h] [rbp+278h]
  __int64 v160; // [rsp+380h] [rbp+280h]
  __int64 v161; // [rsp+388h] [rbp+288h]

  v160 = a55;
  v158 = a54;
  v156 = a53;
  v154 = a52;
  v152 = a51;
  v150 = a50;
  v148 = a49;
  v146 = a48;
  v144 = a47;
  v142 = a46;
  v140 = a45;
  v138 = a44;
  v136 = a43;
  v134 = a42;
  v132 = a41;
  v130 = a40;
  v128 = a39;
  v126 = a38;
  v124 = a37;
  v122 = a36;
  v120 = a35;
  v118 = a34;
  v116 = a33;
  v114 = a32;
  v112 = a31;
  v110 = a30;
  v108 = a29;
  v161 = 8LL;
  v159 = 8LL;
  v157 = 4LL;
  v155 = 8LL;
  v153 = 4LL;
  v151 = 4LL;
  v149 = 2LL;
  v147 = 2LL;
  v145 = 2LL;
  v143 = 2LL;
  v141 = 4LL;
  v139 = 2LL;
  v137 = 2LL;
  v135 = 4LL;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 4LL;
  v125 = 2LL;
  v123 = 1LL;
  v121 = 2LL;
  v119 = 2LL;
  v117 = 2LL;
  v115 = 2LL;
  v113 = 2LL;
  v111 = 2LL;
  v106 = a28;
  v104 = a27;
  v102 = a26;
  v100 = a25;
  v98 = a24;
  v96 = a23;
  v94 = a22;
  v92 = a21;
  v90 = a20;
  v88 = a19;
  v84 = v87;
  v86 = *a18;
  v87[0] = *((unsigned __int16 *)a18 + 4);
  v82 = a17;
  v80 = a16;
  v78 = a15;
  v76 = a14;
  v74 = a13;
  v72 = a12;
  v70 = a11;
  v68 = a10;
  v109 = 2LL;
  v107 = 2LL;
  v105 = 2LL;
  v66 = *a9;
  v103 = 2LL;
  v101 = 2LL;
  v55 = *a8;
  v62 = a7;
  v60 = a6;
  v64 = v55;
  v99 = 2LL;
  v97 = 2LL;
  v58 = *a5;
  v95 = 2LL;
  v93 = 2LL;
  v91 = 2LL;
  v89 = 2LL;
  v85 = 2LL;
  v87[1] = 0;
  v83 = 2LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
  v69 = 8LL;
  v67 = 16LL;
  v65 = 16LL;
  v63 = 1LL;
  v61 = 1LL;
  v59 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0243250, a2, 0LL, 0LL, 0x36u, &v57);
}
