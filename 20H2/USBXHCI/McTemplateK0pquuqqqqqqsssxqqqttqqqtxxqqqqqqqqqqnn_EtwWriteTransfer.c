/*
 * XREFs of McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x1C001B2E0
 * Callers:
 *     Etw_ControllerRundown @ 0x1C0014964 (Etw_ControllerRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0035C4C (McGenEventWrite_EtwWriteTransfer.c)
 */

__int64 __fastcall McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer(
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
        int a39,
        __int64 a40,
        int a41,
        __int64 a42)
{
  const char *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // ecx
  const char *v46; // rdx
  __int64 v47; // rcx
  int v48; // ecx
  const char *v49; // rcx
  int v50; // eax
  _BYTE v52[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v53; // [rsp+40h] [rbp-C0h]
  __int64 v54; // [rsp+48h] [rbp-B8h]
  char *v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  char *v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  char *v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h]
  char *v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  char *v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+98h] [rbp-68h]
  char *v65; // [rsp+A0h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-58h]
  char *v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  char *v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  char *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  const char *v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E8h] [rbp-18h]
  int v75; // [rsp+ECh] [rbp-14h]
  const char *v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+F8h] [rbp-8h]
  int v78; // [rsp+FCh] [rbp-4h]
  const char *v79; // [rsp+100h] [rbp+0h]
  int v80; // [rsp+108h] [rbp+8h]
  int v81; // [rsp+10Ch] [rbp+Ch]
  char *v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  char *v84; // [rsp+120h] [rbp+20h]
  __int64 v85; // [rsp+128h] [rbp+28h]
  char *v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+138h] [rbp+38h]
  char *v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  char *v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  char *v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  char *v94; // [rsp+170h] [rbp+70h]
  __int64 v95; // [rsp+178h] [rbp+78h]
  char *v96; // [rsp+180h] [rbp+80h]
  __int64 v97; // [rsp+188h] [rbp+88h]
  char *v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  char *v100; // [rsp+1A0h] [rbp+A0h]
  __int64 v101; // [rsp+1A8h] [rbp+A8h]
  char *v102; // [rsp+1B0h] [rbp+B0h]
  __int64 v103; // [rsp+1B8h] [rbp+B8h]
  char *v104; // [rsp+1C0h] [rbp+C0h]
  __int64 v105; // [rsp+1C8h] [rbp+C8h]
  char *v106; // [rsp+1D0h] [rbp+D0h]
  __int64 v107; // [rsp+1D8h] [rbp+D8h]
  char *v108; // [rsp+1E0h] [rbp+E0h]
  __int64 v109; // [rsp+1E8h] [rbp+E8h]
  char *v110; // [rsp+1F0h] [rbp+F0h]
  __int64 v111; // [rsp+1F8h] [rbp+F8h]
  char *v112; // [rsp+200h] [rbp+100h]
  __int64 v113; // [rsp+208h] [rbp+108h]
  char *v114; // [rsp+210h] [rbp+110h]
  __int64 v115; // [rsp+218h] [rbp+118h]
  char *v116; // [rsp+220h] [rbp+120h]
  __int64 v117; // [rsp+228h] [rbp+128h]
  char *v118; // [rsp+230h] [rbp+130h]
  __int64 v119; // [rsp+238h] [rbp+138h]
  char *v120; // [rsp+240h] [rbp+140h]
  __int64 v121; // [rsp+248h] [rbp+148h]
  char *v122; // [rsp+250h] [rbp+150h]
  __int64 v123; // [rsp+258h] [rbp+158h]
  char *v124; // [rsp+260h] [rbp+160h]
  __int64 v125; // [rsp+268h] [rbp+168h]
  __int64 v126; // [rsp+270h] [rbp+170h]
  __int64 v127; // [rsp+278h] [rbp+178h]
  __int64 v128; // [rsp+280h] [rbp+180h]
  __int64 v129; // [rsp+288h] [rbp+188h]
  __int64 v130; // [rsp+2C8h] [rbp+1C8h] BYREF

  v130 = a4;
  v42 = a14;
  v53 = &v130;
  v54 = 8LL;
  v55 = &a5;
  v57 = &a6;
  v59 = &a7;
  v56 = 4LL;
  v61 = &a8;
  v63 = &a9;
  v65 = &a10;
  v67 = &a11;
  v69 = &a12;
  v71 = &a13;
  v43 = -1LL;
  v58 = 1LL;
  v60 = 1LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  if ( a14 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( a14[v44] );
    v45 = v44 + 1;
  }
  else
  {
    v45 = 5;
  }
  v74 = v45;
  v75 = 0;
  if ( !a14 )
    v42 = "NULL";
  v73 = v42;
  v46 = a15;
  if ( a15 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a15[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v48 = 5;
  }
  v77 = v48;
  v49 = a16;
  if ( !a15 )
    v46 = "NULL";
  v78 = 0;
  v76 = v46;
  if ( a16 )
  {
    do
      ++v43;
    while ( a16[v43] );
    v50 = v43 + 1;
  }
  else
  {
    v50 = 5;
  }
  v80 = v50;
  v81 = 0;
  v82 = &a17;
  v83 = 8LL;
  v84 = &a18;
  if ( !a16 )
    v49 = "NULL";
  v79 = v49;
  v86 = &a19;
  v85 = 4LL;
  v88 = &a20;
  v90 = &a21;
  v92 = &a22;
  v94 = &a23;
  v96 = &a24;
  v98 = &a25;
  v100 = &a26;
  v102 = &a27;
  v104 = &a28;
  v106 = &a29;
  v108 = &a30;
  v110 = &a31;
  v112 = &a32;
  v114 = &a33;
  v116 = &a34;
  v118 = &a35;
  v120 = &a36;
  v122 = &a37;
  v124 = &a38;
  v126 = a40;
  v128 = a42;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 8LL;
  v105 = 8LL;
  v107 = 4LL;
  v109 = 4LL;
  v111 = 4LL;
  v113 = 4LL;
  v115 = 4LL;
  v117 = 4LL;
  v119 = 4LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 44LL;
  v129 = 64LL;
  return McGenEventWrite_EtwWriteTransfer(v49, &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION_V4, a3, 38LL, v52);
}
