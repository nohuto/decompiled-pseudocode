/*
 * XREFs of McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqqttt_EtwWriteTransfer @ 0x1C0048D28
 * Callers:
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C00479BC (Etw_ReportControllerHealthWithPortInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C003476C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqqttt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const char *a14,
        const char *a15,
        const char *a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34,
        char a35,
        char a36,
        char a37,
        char a38,
        char a39,
        char a40,
        char a41,
        char a42,
        char a43,
        char a44,
        char a45,
        int a46,
        __int64 a47,
        char a48,
        char a49,
        char a50,
        char a51,
        char a52)
{
  const char *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // ecx
  const char *v56; // rdx
  __int64 v57; // rcx
  int v58; // ecx
  const char *v59; // rcx
  int v60; // eax
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v63; // [rsp+40h] [rbp-C0h]
  __int64 v64; // [rsp+48h] [rbp-B8h]
  char *v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  char *v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  char *v69; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h]
  char *v71; // [rsp+80h] [rbp-80h]
  __int64 v72; // [rsp+88h] [rbp-78h]
  char *v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+98h] [rbp-68h]
  char *v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  char *v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  char *v79; // [rsp+C0h] [rbp-40h]
  __int64 v80; // [rsp+C8h] [rbp-38h]
  char *v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  const char *v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E8h] [rbp-18h]
  int v85; // [rsp+ECh] [rbp-14h]
  const char *v86; // [rsp+F0h] [rbp-10h]
  int v87; // [rsp+F8h] [rbp-8h]
  int v88; // [rsp+FCh] [rbp-4h]
  const char *v89; // [rsp+100h] [rbp+0h]
  int v90; // [rsp+108h] [rbp+8h]
  int v91; // [rsp+10Ch] [rbp+Ch]
  char *v92; // [rsp+110h] [rbp+10h]
  __int64 v93; // [rsp+118h] [rbp+18h]
  char *v94; // [rsp+120h] [rbp+20h]
  __int64 v95; // [rsp+128h] [rbp+28h]
  char *v96; // [rsp+130h] [rbp+30h]
  __int64 v97; // [rsp+138h] [rbp+38h]
  char *v98; // [rsp+140h] [rbp+40h]
  __int64 v99; // [rsp+148h] [rbp+48h]
  char *v100; // [rsp+150h] [rbp+50h]
  __int64 v101; // [rsp+158h] [rbp+58h]
  char *v102; // [rsp+160h] [rbp+60h]
  __int64 v103; // [rsp+168h] [rbp+68h]
  char *v104; // [rsp+170h] [rbp+70h]
  __int64 v105; // [rsp+178h] [rbp+78h]
  char *v106; // [rsp+180h] [rbp+80h]
  __int64 v107; // [rsp+188h] [rbp+88h]
  char *v108; // [rsp+190h] [rbp+90h]
  __int64 v109; // [rsp+198h] [rbp+98h]
  char *v110; // [rsp+1A0h] [rbp+A0h]
  __int64 v111; // [rsp+1A8h] [rbp+A8h]
  char *v112; // [rsp+1B0h] [rbp+B0h]
  __int64 v113; // [rsp+1B8h] [rbp+B8h]
  char *v114; // [rsp+1C0h] [rbp+C0h]
  __int64 v115; // [rsp+1C8h] [rbp+C8h]
  char *v116; // [rsp+1D0h] [rbp+D0h]
  __int64 v117; // [rsp+1D8h] [rbp+D8h]
  char *v118; // [rsp+1E0h] [rbp+E0h]
  __int64 v119; // [rsp+1E8h] [rbp+E8h]
  char *v120; // [rsp+1F0h] [rbp+F0h]
  __int64 v121; // [rsp+1F8h] [rbp+F8h]
  char *v122; // [rsp+200h] [rbp+100h]
  __int64 v123; // [rsp+208h] [rbp+108h]
  char *v124; // [rsp+210h] [rbp+110h]
  __int64 v125; // [rsp+218h] [rbp+118h]
  char *v126; // [rsp+220h] [rbp+120h]
  __int64 v127; // [rsp+228h] [rbp+128h]
  char *v128; // [rsp+230h] [rbp+130h]
  __int64 v129; // [rsp+238h] [rbp+138h]
  char *v130; // [rsp+240h] [rbp+140h]
  __int64 v131; // [rsp+248h] [rbp+148h]
  char *v132; // [rsp+250h] [rbp+150h]
  __int64 v133; // [rsp+258h] [rbp+158h]
  char *v134; // [rsp+260h] [rbp+160h]
  __int64 v135; // [rsp+268h] [rbp+168h]
  char *v136; // [rsp+270h] [rbp+170h]
  __int64 v137; // [rsp+278h] [rbp+178h]
  char *v138; // [rsp+280h] [rbp+180h]
  __int64 v139; // [rsp+288h] [rbp+188h]
  char *v140; // [rsp+290h] [rbp+190h]
  __int64 v141; // [rsp+298h] [rbp+198h]
  char *v142; // [rsp+2A0h] [rbp+1A0h]
  __int64 v143; // [rsp+2A8h] [rbp+1A8h]
  char *v144; // [rsp+2B0h] [rbp+1B0h]
  __int64 v145; // [rsp+2B8h] [rbp+1B8h]
  char *v146; // [rsp+2C0h] [rbp+1C0h]
  __int64 v147; // [rsp+2C8h] [rbp+1C8h]
  char *v148; // [rsp+2D0h] [rbp+1D0h]
  __int64 v149; // [rsp+2D8h] [rbp+1D8h]
  __int64 v150; // [rsp+2E0h] [rbp+1E0h]
  __int64 v151; // [rsp+2E8h] [rbp+1E8h]
  char *v152; // [rsp+2F0h] [rbp+1F0h]
  __int64 v153; // [rsp+2F8h] [rbp+1F8h]
  char *v154; // [rsp+300h] [rbp+200h]
  __int64 v155; // [rsp+308h] [rbp+208h]
  char *v156; // [rsp+310h] [rbp+210h]
  __int64 v157; // [rsp+318h] [rbp+218h]
  char *v158; // [rsp+320h] [rbp+220h]
  __int64 v159; // [rsp+328h] [rbp+228h]
  char *v160; // [rsp+330h] [rbp+230h]
  __int64 v161; // [rsp+338h] [rbp+238h]
  __int64 v162; // [rsp+378h] [rbp+278h] BYREF

  v162 = a4;
  v52 = a14;
  v63 = &v162;
  v64 = 8LL;
  v65 = &a5;
  v67 = &a6;
  v69 = &a7;
  v66 = 4LL;
  v71 = &a8;
  v68 = 1LL;
  v73 = &a9;
  v75 = &a10;
  v77 = &a11;
  v79 = &a12;
  v81 = &a13;
  v53 = -1LL;
  v70 = 1LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  if ( a14 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( a14[v54] );
    v55 = v54 + 1;
  }
  else
  {
    v55 = 5;
  }
  v84 = v55;
  v85 = 0;
  if ( !a14 )
    v52 = "NULL";
  v83 = v52;
  v56 = a15;
  if ( a15 )
  {
    v57 = -1LL;
    do
      ++v57;
    while ( a15[v57] );
    v58 = v57 + 1;
  }
  else
  {
    v58 = 5;
  }
  v87 = v58;
  v59 = a16;
  if ( !a15 )
    v56 = "NULL";
  v88 = 0;
  v86 = v56;
  if ( a16 )
  {
    do
      ++v53;
    while ( a16[v53] );
    v60 = v53 + 1;
  }
  else
  {
    v60 = 5;
  }
  v90 = v60;
  v91 = 0;
  v92 = &a17;
  if ( !a16 )
    v59 = "NULL";
  v89 = v59;
  v94 = &a18;
  v96 = &a19;
  v98 = &a20;
  v100 = &a21;
  v102 = &a22;
  v104 = &a23;
  v106 = &a24;
  v108 = &a25;
  v110 = &a26;
  v112 = &a27;
  v114 = &a28;
  v116 = &a29;
  v118 = &a30;
  v120 = &a31;
  v122 = &a32;
  v124 = &a33;
  v126 = &a34;
  v128 = &a35;
  v130 = &a36;
  v132 = &a37;
  v134 = &a38;
  v136 = &a39;
  v138 = &a40;
  v140 = &a41;
  v93 = 8LL;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 4LL;
  v105 = 4LL;
  v107 = 4LL;
  v109 = 4LL;
  v111 = 4LL;
  v113 = 8LL;
  v115 = 8LL;
  v117 = 4LL;
  v119 = 4LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 4LL;
  v129 = 4LL;
  v131 = 4LL;
  v133 = 4LL;
  v135 = 4LL;
  v137 = 4LL;
  v139 = 4LL;
  v141 = 4LL;
  v142 = &a42;
  v143 = 4LL;
  v144 = &a43;
  v145 = 4LL;
  v146 = &a44;
  v148 = &a45;
  v150 = a47;
  v152 = &a48;
  v154 = &a49;
  v156 = &a50;
  v158 = &a51;
  v160 = &a52;
  v147 = 4LL;
  v149 = 4LL;
  v151 = 64LL;
  v153 = 4LL;
  v155 = 4LL;
  v157 = 4LL;
  v159 = 4LL;
  v161 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v59, &USBXHCI_ETW_EVENT_CONTROLLER_HEALTH_V2, 0LL, 0x31u, &v62);
}
