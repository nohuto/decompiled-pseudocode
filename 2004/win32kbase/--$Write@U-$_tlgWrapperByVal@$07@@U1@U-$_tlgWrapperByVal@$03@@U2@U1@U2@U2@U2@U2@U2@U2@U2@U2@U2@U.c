/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@D@@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344444444444444444AEBU?$_tlgWrapSz@D@@55444444444444344444@Z @ 0x1C01AF7C0
 * Callers:
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C000C3D8 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        void **a27,
        void **a28,
        void **a29,
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
        __int64 a47)
{
  __int64 v48; // rcx
  _BYTE *v49; // r8
  __int64 v50; // rax
  int v51; // eax
  _BYTE *v52; // r8
  __int64 v53; // rax
  int v54; // eax
  _BYTE *v55; // r8
  int v56; // ecx
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h]
  __int64 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C8h] [rbp-38h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  __int64 v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  __int64 v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  __int64 v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  __int64 v87; // [rsp+130h] [rbp+30h]
  __int64 v88; // [rsp+138h] [rbp+38h]
  __int64 v89; // [rsp+140h] [rbp+40h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  __int64 v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]
  __int64 v93; // [rsp+160h] [rbp+60h]
  __int64 v94; // [rsp+168h] [rbp+68h]
  __int64 v95; // [rsp+170h] [rbp+70h]
  __int64 v96; // [rsp+178h] [rbp+78h]
  __int64 v97; // [rsp+180h] [rbp+80h]
  __int64 v98; // [rsp+188h] [rbp+88h]
  __int64 v99; // [rsp+190h] [rbp+90h]
  __int64 v100; // [rsp+198h] [rbp+98h]
  __int64 v101; // [rsp+1A0h] [rbp+A0h]
  __int64 v102; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v103; // [rsp+1B0h] [rbp+B0h]
  int v104; // [rsp+1B8h] [rbp+B8h]
  int v105; // [rsp+1BCh] [rbp+BCh]
  _BYTE *v106; // [rsp+1C0h] [rbp+C0h]
  int v107; // [rsp+1C8h] [rbp+C8h]
  int v108; // [rsp+1CCh] [rbp+CCh]
  _BYTE *v109; // [rsp+1D0h] [rbp+D0h]
  int v110; // [rsp+1D8h] [rbp+D8h]
  int v111; // [rsp+1DCh] [rbp+DCh]
  __int64 v112; // [rsp+1E0h] [rbp+E0h]
  __int64 v113; // [rsp+1E8h] [rbp+E8h]
  __int64 v114; // [rsp+1F0h] [rbp+F0h]
  __int64 v115; // [rsp+1F8h] [rbp+F8h]
  __int64 v116; // [rsp+200h] [rbp+100h]
  __int64 v117; // [rsp+208h] [rbp+108h]
  __int64 v118; // [rsp+210h] [rbp+110h]
  __int64 v119; // [rsp+218h] [rbp+118h]
  __int64 v120; // [rsp+220h] [rbp+120h]
  __int64 v121; // [rsp+228h] [rbp+128h]
  __int64 v122; // [rsp+230h] [rbp+130h]
  __int64 v123; // [rsp+238h] [rbp+138h]
  __int64 v124; // [rsp+240h] [rbp+140h]
  __int64 v125; // [rsp+248h] [rbp+148h]
  __int64 v126; // [rsp+250h] [rbp+150h]
  __int64 v127; // [rsp+258h] [rbp+158h]
  __int64 v128; // [rsp+260h] [rbp+160h]
  __int64 v129; // [rsp+268h] [rbp+168h]
  __int64 v130; // [rsp+270h] [rbp+170h]
  __int64 v131; // [rsp+278h] [rbp+178h]
  __int64 v132; // [rsp+280h] [rbp+180h]
  __int64 v133; // [rsp+288h] [rbp+188h]
  __int64 v134; // [rsp+290h] [rbp+190h]
  __int64 v135; // [rsp+298h] [rbp+198h]
  __int64 v136; // [rsp+2A0h] [rbp+1A0h]
  __int64 v137; // [rsp+2A8h] [rbp+1A8h]
  __int64 v138; // [rsp+2B0h] [rbp+1B0h]
  __int64 v139; // [rsp+2B8h] [rbp+1B8h]
  __int64 v140; // [rsp+2C0h] [rbp+1C0h]
  __int64 v141; // [rsp+2C8h] [rbp+1C8h]
  __int64 v142; // [rsp+2D0h] [rbp+1D0h]
  __int64 v143; // [rsp+2D8h] [rbp+1D8h]
  __int64 v144; // [rsp+2E0h] [rbp+1E0h]
  __int64 v145; // [rsp+2E8h] [rbp+1E8h]
  __int64 v146; // [rsp+2F0h] [rbp+1F0h]
  __int64 v147; // [rsp+2F8h] [rbp+1F8h]

  v146 = a47;
  v48 = -1LL;
  v144 = a46;
  v142 = a45;
  v140 = a44;
  v138 = a43;
  v136 = a42;
  v134 = a41;
  v132 = a40;
  v130 = a39;
  v128 = a38;
  v126 = a37;
  v124 = a36;
  v122 = a35;
  v120 = a34;
  v118 = a33;
  v116 = a32;
  v114 = a31;
  v112 = a30;
  v147 = 4LL;
  v145 = 4LL;
  v143 = 4LL;
  v49 = *a29;
  v141 = 4LL;
  v139 = 4LL;
  v137 = 8LL;
  v135 = 4LL;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 4LL;
  v125 = 4LL;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  if ( v49 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v49 = &unk_1C0220028;
    v51 = 1;
  }
  v110 = v51;
  v109 = v49;
  v111 = 0;
  v52 = *a28;
  if ( *a28 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v54 = v53 + 1;
  }
  else
  {
    v52 = &unk_1C0220028;
    v54 = 1;
  }
  v107 = v54;
  v106 = v52;
  v108 = 0;
  v55 = *a27;
  if ( *a27 )
  {
    do
      ++v48;
    while ( v55[v48] );
    v56 = v48 + 1;
  }
  else
  {
    v55 = &unk_1C0220028;
    v56 = 1;
  }
  v101 = a26;
  v99 = a25;
  v97 = a24;
  v95 = a23;
  v93 = a22;
  v91 = a21;
  v89 = a20;
  v87 = a19;
  v85 = a18;
  v83 = a17;
  v81 = a16;
  v79 = a15;
  v77 = a14;
  v75 = a13;
  v73 = a12;
  v71 = a11;
  v69 = a10;
  v67 = a9;
  v65 = a8;
  v63 = a7;
  v61 = a6;
  v59 = a5;
  v103 = v55;
  v104 = v56;
  v105 = 0;
  v102 = 4LL;
  v100 = 4LL;
  v98 = 4LL;
  v96 = 4LL;
  v94 = 4LL;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 8LL;
  v66 = 4LL;
  v64 = 4LL;
  v62 = 8LL;
  v60 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x2Du, &v58);
}
