/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$00@@U2@U2@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$00@@44AEBU?$_tlgWrapperByVal@$03@@444477747774777477747774774774774774774774774774@Z @ 0x1C008A1A8
 * Callers:
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C008B1EC (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETR.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0022E4C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        void **a7,
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
        __int64 a55,
        __int64 a56,
        __int64 a57,
        __int64 a58,
        __int64 a59)
{
  _WORD *v60; // rcx
  __int64 v61; // rax
  int v62; // edx
  _EVENT_DATA_DESCRIPTOR v64; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  __int64 v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  _WORD *v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+78h] [rbp-88h]
  int v71; // [rsp+7Ch] [rbp-84h]
  __int64 v72; // [rsp+80h] [rbp-80h]
  __int64 v73; // [rsp+88h] [rbp-78h]
  __int64 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int64 v76; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+C8h] [rbp-38h]
  __int64 v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  __int64 v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  __int64 v88; // [rsp+100h] [rbp+0h]
  __int64 v89; // [rsp+108h] [rbp+8h]
  __int64 v90; // [rsp+110h] [rbp+10h]
  __int64 v91; // [rsp+118h] [rbp+18h]
  __int64 v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  __int64 v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  __int64 v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]
  __int64 v98; // [rsp+150h] [rbp+50h]
  __int64 v99; // [rsp+158h] [rbp+58h]
  __int64 v100; // [rsp+160h] [rbp+60h]
  __int64 v101; // [rsp+168h] [rbp+68h]
  __int64 v102; // [rsp+170h] [rbp+70h]
  __int64 v103; // [rsp+178h] [rbp+78h]
  __int64 v104; // [rsp+180h] [rbp+80h]
  __int64 v105; // [rsp+188h] [rbp+88h]
  __int64 v106; // [rsp+190h] [rbp+90h]
  __int64 v107; // [rsp+198h] [rbp+98h]
  __int64 v108; // [rsp+1A0h] [rbp+A0h]
  __int64 v109; // [rsp+1A8h] [rbp+A8h]
  __int64 v110; // [rsp+1B0h] [rbp+B0h]
  __int64 v111; // [rsp+1B8h] [rbp+B8h]
  __int64 v112; // [rsp+1C0h] [rbp+C0h]
  __int64 v113; // [rsp+1C8h] [rbp+C8h]
  __int64 v114; // [rsp+1D0h] [rbp+D0h]
  __int64 v115; // [rsp+1D8h] [rbp+D8h]
  __int64 v116; // [rsp+1E0h] [rbp+E0h]
  __int64 v117; // [rsp+1E8h] [rbp+E8h]
  __int64 v118; // [rsp+1F0h] [rbp+F0h]
  __int64 v119; // [rsp+1F8h] [rbp+F8h]
  __int64 v120; // [rsp+200h] [rbp+100h]
  __int64 v121; // [rsp+208h] [rbp+108h]
  __int64 v122; // [rsp+210h] [rbp+110h]
  __int64 v123; // [rsp+218h] [rbp+118h]
  __int64 v124; // [rsp+220h] [rbp+120h]
  __int64 v125; // [rsp+228h] [rbp+128h]
  __int64 v126; // [rsp+230h] [rbp+130h]
  __int64 v127; // [rsp+238h] [rbp+138h]
  __int64 v128; // [rsp+240h] [rbp+140h]
  __int64 v129; // [rsp+248h] [rbp+148h]
  __int64 v130; // [rsp+250h] [rbp+150h]
  __int64 v131; // [rsp+258h] [rbp+158h]
  __int64 v132; // [rsp+260h] [rbp+160h]
  __int64 v133; // [rsp+268h] [rbp+168h]
  __int64 v134; // [rsp+270h] [rbp+170h]
  __int64 v135; // [rsp+278h] [rbp+178h]
  __int64 v136; // [rsp+280h] [rbp+180h]
  __int64 v137; // [rsp+288h] [rbp+188h]
  __int64 v138; // [rsp+290h] [rbp+190h]
  __int64 v139; // [rsp+298h] [rbp+198h]
  __int64 v140; // [rsp+2A0h] [rbp+1A0h]
  __int64 v141; // [rsp+2A8h] [rbp+1A8h]
  __int64 v142; // [rsp+2B0h] [rbp+1B0h]
  __int64 v143; // [rsp+2B8h] [rbp+1B8h]
  __int64 v144; // [rsp+2C0h] [rbp+1C0h]
  __int64 v145; // [rsp+2C8h] [rbp+1C8h]
  __int64 v146; // [rsp+2D0h] [rbp+1D0h]
  __int64 v147; // [rsp+2D8h] [rbp+1D8h]
  __int64 v148; // [rsp+2E0h] [rbp+1E0h]
  __int64 v149; // [rsp+2E8h] [rbp+1E8h]
  __int64 v150; // [rsp+2F0h] [rbp+1F0h]
  __int64 v151; // [rsp+2F8h] [rbp+1F8h]
  __int64 v152; // [rsp+300h] [rbp+200h]
  __int64 v153; // [rsp+308h] [rbp+208h]
  __int64 v154; // [rsp+310h] [rbp+210h]
  __int64 v155; // [rsp+318h] [rbp+218h]
  __int64 v156; // [rsp+320h] [rbp+220h]
  __int64 v157; // [rsp+328h] [rbp+228h]
  __int64 v158; // [rsp+330h] [rbp+230h]
  __int64 v159; // [rsp+338h] [rbp+238h]
  __int64 v160; // [rsp+340h] [rbp+240h]
  __int64 v161; // [rsp+348h] [rbp+248h]
  __int64 v162; // [rsp+350h] [rbp+250h]
  __int64 v163; // [rsp+358h] [rbp+258h]
  __int64 v164; // [rsp+360h] [rbp+260h]
  __int64 v165; // [rsp+368h] [rbp+268h]
  __int64 v166; // [rsp+370h] [rbp+270h]
  __int64 v167; // [rsp+378h] [rbp+278h]
  __int64 v168; // [rsp+380h] [rbp+280h]
  __int64 v169; // [rsp+388h] [rbp+288h]
  __int64 v170; // [rsp+390h] [rbp+290h]
  __int64 v171; // [rsp+398h] [rbp+298h]
  __int64 v172; // [rsp+3A0h] [rbp+2A0h]
  __int64 v173; // [rsp+3A8h] [rbp+2A8h]
  __int64 v174; // [rsp+3B0h] [rbp+2B0h]
  __int64 v175; // [rsp+3B8h] [rbp+2B8h]

  v174 = a59;
  v172 = a58;
  v170 = a57;
  v168 = a56;
  v166 = a55;
  v164 = a54;
  v162 = a53;
  v160 = a52;
  v158 = a51;
  v156 = a50;
  v154 = a49;
  v152 = a48;
  v150 = a47;
  v148 = a46;
  v146 = a45;
  v144 = a44;
  v142 = a43;
  v140 = a42;
  v138 = a41;
  v136 = a40;
  v134 = a39;
  v132 = a38;
  v130 = a37;
  v128 = a36;
  v126 = a35;
  v124 = a34;
  v175 = 8LL;
  v173 = 4LL;
  v171 = 4LL;
  v169 = 8LL;
  v167 = 4LL;
  v165 = 4LL;
  v163 = 8LL;
  v161 = 4LL;
  v159 = 4LL;
  v157 = 8LL;
  v155 = 4LL;
  v153 = 4LL;
  v151 = 8LL;
  v149 = 4LL;
  v147 = 4LL;
  v145 = 8LL;
  v143 = 4LL;
  v141 = 4LL;
  v139 = 8LL;
  v137 = 4LL;
  v135 = 4LL;
  v133 = 8LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 8LL;
  v125 = 4LL;
  v122 = a33;
  v120 = a32;
  v118 = a31;
  v116 = a30;
  v114 = a29;
  v112 = a28;
  v110 = a27;
  v108 = a26;
  v106 = a25;
  v104 = a24;
  v102 = a23;
  v100 = a22;
  v98 = a21;
  v96 = a20;
  v94 = a19;
  v92 = a18;
  v90 = a17;
  v88 = a16;
  v86 = a15;
  v84 = a14;
  v82 = a13;
  v80 = a12;
  v78 = a11;
  v76 = a10;
  v74 = a9;
  v72 = a8;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 8LL;
  v60 = *a7;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 8LL;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  v103 = 8LL;
  v101 = 4LL;
  v99 = 4LL;
  v97 = 4LL;
  v95 = 8LL;
  v93 = 4LL;
  v91 = 4LL;
  v89 = 4LL;
  v87 = 8LL;
  v85 = 8LL;
  v83 = 8LL;
  v81 = 8LL;
  v79 = 4LL;
  v77 = 8LL;
  v75 = 8LL;
  v73 = 1LL;
  if ( v60 )
  {
    v61 = -1LL;
    do
      ++v61;
    while ( v60[v61] );
    v62 = 2 * v61 + 2;
  }
  else
  {
    v60 = &unk_1C00C9700;
    v62 = 2;
  }
  v67 = a6;
  v69 = v60;
  v70 = v62;
  v71 = 0;
  v65 = *a5;
  v68 = 8LL;
  v66 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00E30F8, a2, 0LL, 0LL, 0x39u, &v64);
}
