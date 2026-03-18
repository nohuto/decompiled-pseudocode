/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U1@U1@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555335533333333333333@Z @ 0x180223C94
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180032E04 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801560E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        const unsigned __int16 **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        const unsigned __int16 **a16,
        const unsigned __int16 **a17,
        __int64 a18,
        __int64 a19,
        const unsigned __int16 **a20,
        const unsigned __int16 **a21,
        const unsigned __int16 **a22,
        const unsigned __int16 **a23,
        const unsigned __int16 **a24,
        const unsigned __int16 **a25,
        const unsigned __int16 **a26,
        const unsigned __int16 **a27,
        const unsigned __int16 **a28,
        const unsigned __int16 **a29,
        const unsigned __int16 **a30,
        const unsigned __int16 **a31,
        const unsigned __int16 **a32,
        const unsigned __int16 **a33)
{
  __int64 v34; // rdx
  const unsigned __int16 *v35; // r8
  __int64 v36; // rax
  int v37; // eax
  const unsigned __int16 *v38; // r8
  __int64 v39; // rax
  int v40; // eax
  const unsigned __int16 *v41; // r8
  __int64 v42; // rax
  int v43; // eax
  const unsigned __int16 *v44; // r8
  __int64 v45; // rax
  int v46; // eax
  const unsigned __int16 *v47; // r8
  __int64 v48; // rax
  int v49; // eax
  const unsigned __int16 *v50; // r8
  __int64 v51; // rax
  int v52; // eax
  const unsigned __int16 *v53; // r8
  __int64 v54; // rax
  int v55; // eax
  const unsigned __int16 *v56; // r8
  __int64 v57; // rax
  int v58; // eax
  const unsigned __int16 *v59; // r8
  __int64 v60; // rax
  int v61; // eax
  const unsigned __int16 *v62; // r8
  __int64 v63; // rax
  int v64; // eax
  const unsigned __int16 *v65; // r8
  __int64 v66; // rax
  int v67; // eax
  const unsigned __int16 *v68; // r8
  __int64 v69; // rax
  int v70; // eax
  const unsigned __int16 *v71; // r8
  __int64 v72; // rax
  int v73; // eax
  const unsigned __int16 *v74; // r8
  __int64 v75; // rax
  int v76; // eax
  const unsigned __int16 *v77; // r8
  __int64 v78; // rax
  int v79; // eax
  const unsigned __int16 *v80; // r8
  __int64 v81; // rax
  int v82; // eax
  const unsigned __int16 *v83; // r8
  __int64 v84; // rax
  int v85; // eax
  const unsigned __int16 *v86; // r8
  __int64 v87; // rax
  int v88; // eax
  const unsigned __int16 *v89; // r8
  int v90; // edx
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v93; // [rsp+50h] [rbp-B0h]
  int v94; // [rsp+58h] [rbp-A8h]
  int v95; // [rsp+5Ch] [rbp-A4h]
  __int64 v96; // [rsp+60h] [rbp-A0h]
  __int64 v97; // [rsp+68h] [rbp-98h]
  __int64 v98; // [rsp+70h] [rbp-90h]
  __int64 v99; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v100; // [rsp+80h] [rbp-80h]
  int v101; // [rsp+88h] [rbp-78h]
  int v102; // [rsp+8Ch] [rbp-74h]
  const unsigned __int16 *v103; // [rsp+90h] [rbp-70h]
  int v104; // [rsp+98h] [rbp-68h]
  int v105; // [rsp+9Ch] [rbp-64h]
  __int64 v106; // [rsp+A0h] [rbp-60h]
  __int64 v107; // [rsp+A8h] [rbp-58h]
  __int64 v108; // [rsp+B0h] [rbp-50h]
  __int64 v109; // [rsp+B8h] [rbp-48h]
  __int64 v110; // [rsp+C0h] [rbp-40h]
  __int64 v111; // [rsp+C8h] [rbp-38h]
  __int64 v112; // [rsp+D0h] [rbp-30h]
  __int64 v113; // [rsp+D8h] [rbp-28h]
  __int64 v114; // [rsp+E0h] [rbp-20h]
  __int64 v115; // [rsp+E8h] [rbp-18h]
  __int64 v116; // [rsp+F0h] [rbp-10h]
  __int64 v117; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v118; // [rsp+100h] [rbp+0h]
  int v119; // [rsp+108h] [rbp+8h]
  int v120; // [rsp+10Ch] [rbp+Ch]
  const unsigned __int16 *v121; // [rsp+110h] [rbp+10h]
  int v122; // [rsp+118h] [rbp+18h]
  int v123; // [rsp+11Ch] [rbp+1Ch]
  __int64 v124; // [rsp+120h] [rbp+20h]
  __int64 v125; // [rsp+128h] [rbp+28h]
  __int64 v126; // [rsp+130h] [rbp+30h]
  __int64 v127; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v128; // [rsp+140h] [rbp+40h]
  int v129; // [rsp+148h] [rbp+48h]
  int v130; // [rsp+14Ch] [rbp+4Ch]
  const unsigned __int16 *v131; // [rsp+150h] [rbp+50h]
  int v132; // [rsp+158h] [rbp+58h]
  int v133; // [rsp+15Ch] [rbp+5Ch]
  const unsigned __int16 *v134; // [rsp+160h] [rbp+60h]
  int v135; // [rsp+168h] [rbp+68h]
  int v136; // [rsp+16Ch] [rbp+6Ch]
  const unsigned __int16 *v137; // [rsp+170h] [rbp+70h]
  int v138; // [rsp+178h] [rbp+78h]
  int v139; // [rsp+17Ch] [rbp+7Ch]
  const unsigned __int16 *v140; // [rsp+180h] [rbp+80h]
  int v141; // [rsp+188h] [rbp+88h]
  int v142; // [rsp+18Ch] [rbp+8Ch]
  const unsigned __int16 *v143; // [rsp+190h] [rbp+90h]
  int v144; // [rsp+198h] [rbp+98h]
  int v145; // [rsp+19Ch] [rbp+9Ch]
  const unsigned __int16 *v146; // [rsp+1A0h] [rbp+A0h]
  int v147; // [rsp+1A8h] [rbp+A8h]
  int v148; // [rsp+1ACh] [rbp+ACh]
  const unsigned __int16 *v149; // [rsp+1B0h] [rbp+B0h]
  int v150; // [rsp+1B8h] [rbp+B8h]
  int v151; // [rsp+1BCh] [rbp+BCh]
  const unsigned __int16 *v152; // [rsp+1C0h] [rbp+C0h]
  int v153; // [rsp+1C8h] [rbp+C8h]
  int v154; // [rsp+1CCh] [rbp+CCh]
  const unsigned __int16 *v155; // [rsp+1D0h] [rbp+D0h]
  int v156; // [rsp+1D8h] [rbp+D8h]
  int v157; // [rsp+1DCh] [rbp+DCh]
  const unsigned __int16 *v158; // [rsp+1E0h] [rbp+E0h]
  int v159; // [rsp+1E8h] [rbp+E8h]
  int v160; // [rsp+1ECh] [rbp+ECh]
  const unsigned __int16 *v161; // [rsp+1F0h] [rbp+F0h]
  int v162; // [rsp+1F8h] [rbp+F8h]
  int v163; // [rsp+1FCh] [rbp+FCh]
  const unsigned __int16 *v164; // [rsp+200h] [rbp+100h]
  int v165; // [rsp+208h] [rbp+108h]
  int v166; // [rsp+20Ch] [rbp+10Ch]
  const unsigned __int16 *v167; // [rsp+210h] [rbp+110h]
  int v168; // [rsp+218h] [rbp+118h]
  int v169; // [rsp+21Ch] [rbp+11Ch]

  v34 = -1LL;
  v35 = *a33;
  if ( *a33 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v35 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &word_1802CFB96;
    v37 = 1;
  }
  v168 = v37;
  v167 = v35;
  v169 = 0;
  v38 = *a32;
  if ( *a32 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *((_BYTE *)v38 + v39) );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &word_1802CFB96;
    v40 = 1;
  }
  v165 = v40;
  v164 = v38;
  v166 = 0;
  v41 = *a31;
  if ( *a31 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_BYTE *)v41 + v42) );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &word_1802CFB96;
    v43 = 1;
  }
  v162 = v43;
  v161 = v41;
  v163 = 0;
  v44 = *a30;
  if ( *a30 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( *((_BYTE *)v44 + v45) );
    v46 = v45 + 1;
  }
  else
  {
    v44 = &word_1802CFB96;
    v46 = 1;
  }
  v159 = v46;
  v158 = v44;
  v160 = 0;
  v47 = *a29;
  if ( *a29 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( *((_BYTE *)v47 + v48) );
    v49 = v48 + 1;
  }
  else
  {
    v47 = &word_1802CFB96;
    v49 = 1;
  }
  v156 = v49;
  v155 = v47;
  v157 = 0;
  v50 = *a28;
  if ( *a28 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( *((_BYTE *)v50 + v51) );
    v52 = v51 + 1;
  }
  else
  {
    v50 = &word_1802CFB96;
    v52 = 1;
  }
  v153 = v52;
  v152 = v50;
  v154 = 0;
  v53 = *a27;
  if ( *a27 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( *((_BYTE *)v53 + v54) );
    v55 = v54 + 1;
  }
  else
  {
    v53 = &word_1802CFB96;
    v55 = 1;
  }
  v150 = v55;
  v149 = v53;
  v151 = 0;
  v56 = *a26;
  if ( *a26 )
  {
    v57 = -1LL;
    do
      ++v57;
    while ( *((_BYTE *)v56 + v57) );
    v58 = v57 + 1;
  }
  else
  {
    v56 = &word_1802CFB96;
    v58 = 1;
  }
  v147 = v58;
  v146 = v56;
  v148 = 0;
  v59 = *a25;
  if ( *a25 )
  {
    v60 = -1LL;
    do
      ++v60;
    while ( *((_BYTE *)v59 + v60) );
    v61 = v60 + 1;
  }
  else
  {
    v59 = &word_1802CFB96;
    v61 = 1;
  }
  v144 = v61;
  v143 = v59;
  v145 = 0;
  v62 = *a24;
  if ( *a24 )
  {
    v63 = -1LL;
    do
      ++v63;
    while ( *((_BYTE *)v62 + v63) );
    v64 = v63 + 1;
  }
  else
  {
    v62 = &word_1802CFB96;
    v64 = 1;
  }
  v141 = v64;
  v140 = v62;
  v142 = 0;
  v65 = *a23;
  if ( *a23 )
  {
    v66 = -1LL;
    do
      ++v66;
    while ( *((_BYTE *)v65 + v66) );
    v67 = v66 + 1;
  }
  else
  {
    v65 = &word_1802CFB96;
    v67 = 1;
  }
  v138 = v67;
  v137 = v65;
  v139 = 0;
  v68 = *a22;
  if ( *a22 )
  {
    v69 = -1LL;
    do
      ++v69;
    while ( *((_BYTE *)v68 + v69) );
    v70 = v69 + 1;
  }
  else
  {
    v68 = &word_1802CFB96;
    v70 = 1;
  }
  v135 = v70;
  v134 = v68;
  v136 = 0;
  v71 = *a21;
  if ( *a21 )
  {
    v72 = -1LL;
    do
      ++v72;
    while ( *((_BYTE *)v71 + v72) );
    v73 = v72 + 1;
  }
  else
  {
    v71 = &word_1802CFB96;
    v73 = 1;
  }
  v132 = v73;
  v131 = v71;
  v133 = 0;
  v74 = *a20;
  if ( *a20 )
  {
    v75 = -1LL;
    do
      ++v75;
    while ( *((_BYTE *)v74 + v75) );
    v76 = v75 + 1;
  }
  else
  {
    v74 = &word_1802CFB96;
    v76 = 1;
  }
  v129 = v76;
  v126 = a19;
  v124 = a18;
  v128 = v74;
  v130 = 0;
  v127 = 4LL;
  v77 = *a17;
  v125 = 4LL;
  if ( v77 )
  {
    v78 = -1LL;
    do
      ++v78;
    while ( *((_BYTE *)v77 + v78) );
    v79 = v78 + 1;
  }
  else
  {
    v77 = &word_1802CFB96;
    v79 = 1;
  }
  v122 = v79;
  v121 = v77;
  v123 = 0;
  v80 = *a16;
  if ( *a16 )
  {
    v81 = -1LL;
    do
      ++v81;
    while ( *((_BYTE *)v80 + v81) );
    v82 = v81 + 1;
  }
  else
  {
    v80 = &word_1802CFB96;
    v82 = 1;
  }
  v119 = v82;
  v116 = a15;
  v114 = a14;
  v112 = a13;
  v110 = a12;
  v108 = a11;
  v106 = a10;
  v118 = v80;
  v120 = 0;
  v117 = 4LL;
  v83 = *a9;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 4LL;
  v109 = 8LL;
  v107 = 4LL;
  if ( v83 )
  {
    v84 = -1LL;
    do
      ++v84;
    while ( *((_BYTE *)v83 + v84) );
    v85 = v84 + 1;
  }
  else
  {
    v83 = &word_1802CFB96;
    v85 = 1;
  }
  v104 = v85;
  v103 = v83;
  v105 = 0;
  v86 = *a8;
  if ( *a8 )
  {
    v87 = -1LL;
    do
      ++v87;
    while ( *((_BYTE *)v86 + v87) );
    v88 = v87 + 1;
  }
  else
  {
    v86 = &word_1802CFB96;
    v88 = 1;
  }
  v101 = v88;
  v98 = a7;
  v96 = a6;
  v100 = v86;
  v102 = 0;
  v99 = 8LL;
  v89 = *a5;
  v97 = 8LL;
  if ( v89 )
  {
    do
      ++v34;
    while ( *((_BYTE *)v89 + v34) );
    v90 = v34 + 1;
  }
  else
  {
    v89 = &word_1802CFB96;
    v90 = 1;
  }
  v93 = v89;
  v94 = v90;
  v95 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x1Fu, &v92);
}
