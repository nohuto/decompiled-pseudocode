/*
 * XREFs of McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1C000D424
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C000BF70 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DC24 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        char a12,
        const char *a13,
        const char *a14,
        const char *a15,
        const wchar_t *a16,
        const char *a17,
        char a18,
        __int64 a19,
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
        const wchar_t *a35,
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
        char a46,
        char a47,
        char a48,
        char a49,
        char a50,
        char a51,
        char a52,
        char a53,
        char a54,
        char a55,
        char a56,
        char a57,
        char a58,
        char a59,
        char a60,
        char a61,
        char a62,
        char a63)
{
  char a64; // [rsp+6E0h] [rbp+5D8h] BYREF
  const wchar_t *v64; // rcx
  int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // r8d
  const char *v69; // rdx
  __int64 v70; // rcx
  int v71; // ecx
  const char *v72; // rdx
  __int64 v73; // rcx
  int v74; // ecx
  const char *v75; // rdx
  __int64 v76; // rcx
  int v77; // ecx
  const wchar_t *v78; // rcx
  __int64 v79; // rdx
  int v80; // r8d
  const char *v81; // rdx
  __int64 v82; // rcx
  int v83; // ecx
  const wchar_t *v84; // rcx
  bool v85; // zf
  __int64 v87; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v88[16]; // [rsp+48h] [rbp-C0h] BYREF
  int *v89; // [rsp+58h] [rbp-B0h]
  __int64 v90; // [rsp+60h] [rbp-A8h]
  char *v91; // [rsp+68h] [rbp-A0h]
  __int64 v92; // [rsp+70h] [rbp-98h]
  char *v93; // [rsp+78h] [rbp-90h]
  __int64 v94; // [rsp+80h] [rbp-88h]
  char *v95; // [rsp+88h] [rbp-80h]
  __int64 v96; // [rsp+90h] [rbp-78h]
  __int64 v97; // [rsp+98h] [rbp-70h]
  __int64 v98; // [rsp+A0h] [rbp-68h]
  __int64 v99; // [rsp+A8h] [rbp-60h]
  __int64 v100; // [rsp+B0h] [rbp-58h]
  char *v101; // [rsp+B8h] [rbp-50h]
  __int64 v102; // [rsp+C0h] [rbp-48h]
  const wchar_t *v103; // [rsp+C8h] [rbp-40h]
  int v104; // [rsp+D0h] [rbp-38h]
  int v105; // [rsp+D4h] [rbp-34h]
  char *v106; // [rsp+D8h] [rbp-30h]
  __int64 v107; // [rsp+E0h] [rbp-28h]
  const char *v108; // [rsp+E8h] [rbp-20h]
  int v109; // [rsp+F0h] [rbp-18h]
  int v110; // [rsp+F4h] [rbp-14h]
  const char *v111; // [rsp+F8h] [rbp-10h]
  int v112; // [rsp+100h] [rbp-8h]
  int v113; // [rsp+104h] [rbp-4h]
  const char *v114; // [rsp+108h] [rbp+0h]
  int v115; // [rsp+110h] [rbp+8h]
  int v116; // [rsp+114h] [rbp+Ch]
  const wchar_t *v117; // [rsp+118h] [rbp+10h]
  int v118; // [rsp+120h] [rbp+18h]
  int v119; // [rsp+124h] [rbp+1Ch]
  const char *v120; // [rsp+128h] [rbp+20h]
  int v121; // [rsp+130h] [rbp+28h]
  int v122; // [rsp+134h] [rbp+2Ch]
  char *v123; // [rsp+138h] [rbp+30h]
  __int64 v124; // [rsp+140h] [rbp+38h]
  __int64 *v125; // [rsp+148h] [rbp+40h]
  __int64 v126; // [rsp+150h] [rbp+48h]
  char *v127; // [rsp+158h] [rbp+50h]
  __int64 v128; // [rsp+160h] [rbp+58h]
  char *v129; // [rsp+168h] [rbp+60h]
  __int64 v130; // [rsp+170h] [rbp+68h]
  char *v131; // [rsp+178h] [rbp+70h]
  __int64 v132; // [rsp+180h] [rbp+78h]
  char *v133; // [rsp+188h] [rbp+80h]
  __int64 v134; // [rsp+190h] [rbp+88h]
  char *v135; // [rsp+198h] [rbp+90h]
  __int64 v136; // [rsp+1A0h] [rbp+98h]
  char *v137; // [rsp+1A8h] [rbp+A0h]
  __int64 v138; // [rsp+1B0h] [rbp+A8h]
  char *v139; // [rsp+1B8h] [rbp+B0h]
  __int64 v140; // [rsp+1C0h] [rbp+B8h]
  char *v141; // [rsp+1C8h] [rbp+C0h]
  __int64 v142; // [rsp+1D0h] [rbp+C8h]
  char *v143; // [rsp+1D8h] [rbp+D0h]
  __int64 v144; // [rsp+1E0h] [rbp+D8h]
  char *v145; // [rsp+1E8h] [rbp+E0h]
  __int64 v146; // [rsp+1F0h] [rbp+E8h]
  char *v147; // [rsp+1F8h] [rbp+F0h]
  __int64 v148; // [rsp+200h] [rbp+F8h]
  char *v149; // [rsp+208h] [rbp+100h]
  __int64 v150; // [rsp+210h] [rbp+108h]
  char *v151; // [rsp+218h] [rbp+110h]
  __int64 v152; // [rsp+220h] [rbp+118h]
  char *v153; // [rsp+228h] [rbp+120h]
  __int64 v154; // [rsp+230h] [rbp+128h]
  char *v155; // [rsp+238h] [rbp+130h]
  __int64 v156; // [rsp+240h] [rbp+138h]
  const wchar_t *v157; // [rsp+248h] [rbp+140h]
  int v158; // [rsp+250h] [rbp+148h]
  int v159; // [rsp+254h] [rbp+14Ch]
  char *v160; // [rsp+258h] [rbp+150h]
  __int64 v161; // [rsp+260h] [rbp+158h]
  char *v162; // [rsp+268h] [rbp+160h]
  __int64 v163; // [rsp+270h] [rbp+168h]
  char *v164; // [rsp+278h] [rbp+170h]
  __int64 v165; // [rsp+280h] [rbp+178h]
  char *v166; // [rsp+288h] [rbp+180h]
  __int64 v167; // [rsp+290h] [rbp+188h]
  char *v168; // [rsp+298h] [rbp+190h]
  __int64 v169; // [rsp+2A0h] [rbp+198h]
  char *v170; // [rsp+2A8h] [rbp+1A0h]
  __int64 v171; // [rsp+2B0h] [rbp+1A8h]
  char *v172; // [rsp+2B8h] [rbp+1B0h]
  __int64 v173; // [rsp+2C0h] [rbp+1B8h]
  char *v174; // [rsp+2C8h] [rbp+1C0h]
  __int64 v175; // [rsp+2D0h] [rbp+1C8h]
  char *v176; // [rsp+2D8h] [rbp+1D0h]
  __int64 v177; // [rsp+2E0h] [rbp+1D8h]
  char *v178; // [rsp+2E8h] [rbp+1E0h]
  __int64 v179; // [rsp+2F0h] [rbp+1E8h]
  char *v180; // [rsp+2F8h] [rbp+1F0h]
  __int64 v181; // [rsp+300h] [rbp+1F8h]
  char *v182; // [rsp+308h] [rbp+200h]
  __int64 v183; // [rsp+310h] [rbp+208h]
  char *v184; // [rsp+318h] [rbp+210h]
  __int64 v185; // [rsp+320h] [rbp+218h]
  char *v186; // [rsp+328h] [rbp+220h]
  __int64 v187; // [rsp+330h] [rbp+228h]
  char *v188; // [rsp+338h] [rbp+230h]
  __int64 v189; // [rsp+340h] [rbp+238h]
  char *v190; // [rsp+348h] [rbp+240h]
  __int64 v191; // [rsp+350h] [rbp+248h]
  char *v192; // [rsp+358h] [rbp+250h]
  __int64 v193; // [rsp+360h] [rbp+258h]
  char *v194; // [rsp+368h] [rbp+260h]
  __int64 v195; // [rsp+370h] [rbp+268h]
  char *v196; // [rsp+378h] [rbp+270h]
  __int64 v197; // [rsp+380h] [rbp+278h]
  char *v198; // [rsp+388h] [rbp+280h]
  __int64 v199; // [rsp+390h] [rbp+288h]
  char *v200; // [rsp+398h] [rbp+290h]
  __int64 v201; // [rsp+3A0h] [rbp+298h]
  char *v202; // [rsp+3A8h] [rbp+2A0h]
  __int64 v203; // [rsp+3B0h] [rbp+2A8h]
  char *v204; // [rsp+3B8h] [rbp+2B0h]
  __int64 v205; // [rsp+3C0h] [rbp+2B8h]
  char *v206; // [rsp+3C8h] [rbp+2C0h]
  __int64 v207; // [rsp+3D0h] [rbp+2C8h]
  char *v208; // [rsp+3D8h] [rbp+2D0h]
  __int64 v209; // [rsp+3E0h] [rbp+2D8h]
  char *v210; // [rsp+3E8h] [rbp+2E0h]
  __int64 v211; // [rsp+3F0h] [rbp+2E8h]
  char *v212; // [rsp+3F8h] [rbp+2F0h]
  __int64 v213; // [rsp+400h] [rbp+2F8h]
  char *v214; // [rsp+408h] [rbp+300h]
  __int64 v215; // [rsp+410h] [rbp+308h]
  char *v216; // [rsp+418h] [rbp+310h]
  __int64 v217; // [rsp+420h] [rbp+318h]
  unsigned __int64 *v218; // [rsp+428h] [rbp+320h]
  __int64 v219; // [rsp+430h] [rbp+328h]
  unsigned __int64 *v220; // [rsp+438h] [rbp+330h]
  __int64 v221; // [rsp+440h] [rbp+338h]
  unsigned __int64 *v222; // [rsp+448h] [rbp+340h]
  __int64 v223; // [rsp+450h] [rbp+348h]
  unsigned __int64 *v224; // [rsp+458h] [rbp+350h]
  __int64 v225; // [rsp+460h] [rbp+358h]
  unsigned __int64 *v226; // [rsp+468h] [rbp+360h]
  __int64 v227; // [rsp+470h] [rbp+368h]
  unsigned __int64 *v228; // [rsp+478h] [rbp+370h]
  __int64 v229; // [rsp+480h] [rbp+378h]
  unsigned __int64 *v230; // [rsp+488h] [rbp+380h]
  __int64 v231; // [rsp+490h] [rbp+388h]
  unsigned __int64 *v232; // [rsp+498h] [rbp+390h]
  __int64 v233; // [rsp+4A0h] [rbp+398h]
  unsigned __int64 *v234; // [rsp+4A8h] [rbp+3A0h]
  __int64 v235; // [rsp+4B0h] [rbp+3A8h]
  unsigned __int64 *v236; // [rsp+4B8h] [rbp+3B0h]
  __int64 v237; // [rsp+4C0h] [rbp+3B8h]
  int v238; // [rsp+500h] [rbp+3F8h] BYREF

  v238 = a4;
  v64 = a11;
  v87 = *(_QWORD *)&g_SystemUptime_s;
  v89 = &v238;
  v91 = &a5;
  v90 = 4LL;
  v93 = &a6;
  v65 = 10;
  v92 = 1LL;
  v95 = &a7;
  v97 = a8;
  v99 = a9;
  v101 = &a10;
  v66 = -1LL;
  v94 = 1LL;
  v96 = 1LL;
  v98 = 16LL;
  v100 = 16LL;
  v102 = 4LL;
  if ( a11 )
  {
    v67 = -1LL;
    do
      ++v67;
    while ( a11[v67] );
    v68 = 2 * v67 + 2;
  }
  else
  {
    v68 = 10;
  }
  v69 = a13;
  v104 = v68;
  v105 = 0;
  if ( !a11 )
    v64 = L"NULL";
  v107 = 4LL;
  v103 = v64;
  v106 = &a12;
  if ( a13 )
  {
    v70 = -1LL;
    do
      ++v70;
    while ( a13[v70] );
    v71 = v70 + 1;
  }
  else
  {
    v71 = 5;
  }
  v109 = v71;
  v110 = 0;
  if ( !a13 )
    v69 = "NULL";
  v108 = v69;
  v72 = a14;
  if ( a14 )
  {
    v73 = -1LL;
    do
      ++v73;
    while ( a14[v73] );
    v74 = v73 + 1;
  }
  else
  {
    v74 = 5;
  }
  v112 = v74;
  v113 = 0;
  if ( !a14 )
    v72 = "NULL";
  v111 = v72;
  v75 = a15;
  if ( a15 )
  {
    v76 = -1LL;
    do
      ++v76;
    while ( a15[v76] );
    v77 = v76 + 1;
  }
  else
  {
    v77 = 5;
  }
  v115 = v77;
  v78 = a16;
  if ( !a15 )
    v75 = "NULL";
  v116 = 0;
  v114 = v75;
  if ( a16 )
  {
    v79 = -1LL;
    do
      ++v79;
    while ( a16[v79] );
    v80 = 2 * v79 + 2;
  }
  else
  {
    v80 = 10;
  }
  v81 = a17;
  v118 = v80;
  if ( !a16 )
    v78 = L"NULL";
  v119 = 0;
  v117 = v78;
  if ( a17 )
  {
    v82 = -1LL;
    do
      ++v82;
    while ( a17[v82] );
    v83 = v82 + 1;
  }
  else
  {
    v83 = 5;
  }
  v121 = v83;
  v122 = 0;
  v123 = &a18;
  if ( !a17 )
    v81 = "NULL";
  v120 = v81;
  v125 = &v87;
  v127 = &a20;
  v129 = &a21;
  v131 = &a22;
  v133 = &a23;
  v135 = &a24;
  v137 = &a25;
  v139 = &a26;
  v141 = &a27;
  v143 = &a28;
  v145 = &a29;
  v147 = &a30;
  v149 = &a31;
  v151 = &a32;
  v153 = &a33;
  v155 = &a34;
  v84 = a35;
  v124 = 4LL;
  v126 = 8LL;
  v128 = 1LL;
  v130 = 8LL;
  v132 = 8LL;
  v134 = 4LL;
  v136 = 4LL;
  v138 = 8LL;
  v140 = 8LL;
  v142 = 8LL;
  v144 = 8LL;
  v146 = 8LL;
  v148 = 8LL;
  v150 = 8LL;
  v152 = 4LL;
  v154 = 4LL;
  v156 = 4LL;
  v85 = a35 == 0LL;
  if ( a35 )
  {
    do
      ++v66;
    while ( a35[v66] );
    v65 = 2 * v66 + 2;
    v85 = a35 == 0LL;
  }
  v158 = v65;
  v160 = &a36;
  if ( v85 )
    v84 = L"NULL";
  v157 = v84;
  v162 = &a37;
  v164 = &a38;
  v166 = &a39;
  v168 = &a40;
  v170 = &a41;
  v172 = &a42;
  v174 = &a43;
  v176 = &a44;
  v178 = &a45;
  v180 = &a46;
  v182 = &a47;
  v184 = &a48;
  v186 = &a49;
  v188 = &a50;
  v190 = &a51;
  v192 = &a52;
  v194 = &a53;
  v196 = &a54;
  v198 = &a55;
  v200 = &a56;
  v202 = &a57;
  v204 = &a58;
  v206 = &a59;
  v208 = &a60;
  v210 = &a61;
  v159 = 0;
  v161 = 8LL;
  v163 = 8LL;
  v165 = 8LL;
  v167 = 8LL;
  v169 = 8LL;
  v171 = 8LL;
  v173 = 8LL;
  v175 = 8LL;
  v177 = 8LL;
  v179 = 8LL;
  v181 = 8LL;
  v183 = 8LL;
  v185 = 8LL;
  v187 = 8LL;
  v189 = 8LL;
  v191 = 8LL;
  v193 = 8LL;
  v195 = 8LL;
  v197 = 8LL;
  v199 = 8LL;
  v201 = 8LL;
  v203 = 8LL;
  v205 = 8LL;
  v207 = 8LL;
  v209 = 8LL;
  v211 = 8LL;
  v212 = &a62;
  v213 = 8LL;
  v214 = &a63;
  v215 = 8LL;
  v216 = &a64;
  v217 = 8LL;
  v218 = &STACK[0x6E8];
  v220 = &STACK[0x6F0];
  v222 = &STACK[0x6F8];
  v224 = &STACK[0x700];
  v226 = &STACK[0x708];
  v228 = &STACK[0x710];
  v230 = &STACK[0x718];
  v232 = &STACK[0x720];
  v234 = &STACK[0x728];
  v236 = &STACK[0x730];
  v219 = 8LL;
  v221 = 8LL;
  v223 = 8LL;
  v225 = 8LL;
  v227 = 8LL;
  v229 = 8LL;
  v231 = 8LL;
  v233 = 8LL;
  v235 = 8LL;
  v237 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v84, &EventUnitPerformance, 0LL, 72LL, v88);
}
