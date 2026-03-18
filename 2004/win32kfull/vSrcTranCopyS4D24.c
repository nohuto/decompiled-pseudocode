/*
 * XREFs of vSrcTranCopyS4D24 @ 0x1C027AD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D24(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r15
  __int64 v14; // rax
  int v15; // ecx
  int *v16; // rcx
  int v17; // ebx
  int v18; // eax
  int v19; // r11d
  int v20; // r12d
  int v21; // r13d
  unsigned int v22; // edi
  unsigned int v23; // ebp
  unsigned int v24; // r10d
  unsigned int v25; // edx
  unsigned int v26; // eax
  signed int v27; // r9d
  __int64 result; // rax
  _BYTE *v29; // r8
  __int64 v30; // r14
  int v31; // ecx
  int v32; // edx
  char *v33; // r12
  __int64 v34; // rsi
  int v35; // ecx
  int v36; // ecx
  unsigned __int8 v37; // dl
  int v38; // r9d
  unsigned int v39; // edi
  unsigned int v40; // ecx
  __int64 v41; // r10
  _DWORD *v42; // rax
  unsigned int v43; // edi
  int v44; // ebx
  _DWORD *v45; // rax
  int v46; // ebx
  unsigned int v47; // r11d
  unsigned int v48; // ecx
  unsigned int v49; // r11d
  int v50; // r8d
  _DWORD *v51; // rax
  int v52; // r8d
  unsigned int v53; // edx
  int v54; // r9d
  unsigned int v55; // eax
  unsigned int v56; // r9d
  unsigned int v57; // eax
  unsigned __int8 v58; // dl
  unsigned int v59; // r9d
  unsigned int v60; // edi
  unsigned int v61; // ecx
  __int64 v62; // r10
  _DWORD *v63; // rax
  unsigned int v64; // edi
  int v65; // r11d
  _DWORD *v66; // rax
  int v67; // r11d
  unsigned int v68; // ebx
  unsigned int v69; // ecx
  unsigned int v70; // ebx
  int v71; // r8d
  _DWORD *v72; // rax
  int v73; // r8d
  unsigned int v74; // edx
  int v75; // r9d
  unsigned int v76; // eax
  unsigned __int8 v77; // dl
  unsigned int v78; // r9d
  unsigned int v79; // edi
  unsigned int v80; // ecx
  __int64 v81; // r10
  _DWORD *v82; // rax
  unsigned int v83; // edi
  int v84; // ebx
  _DWORD *v85; // rax
  int v86; // ebx
  unsigned int v87; // r11d
  unsigned int v88; // ecx
  unsigned int v89; // r11d
  int v90; // r8d
  _DWORD *v91; // rax
  int v92; // r8d
  unsigned int v93; // edx
  unsigned int v94; // r9d
  unsigned int v95; // eax
  char v96; // dl
  unsigned __int8 v97; // r8
  unsigned int v98; // r9d
  _DWORD *v99; // rax
  unsigned int v100; // edi
  unsigned int v101; // ecx
  __int64 v102; // r10
  unsigned int v103; // edi
  int v104; // r11d
  _DWORD *v105; // rax
  int v106; // r11d
  unsigned int v107; // ebx
  unsigned int v108; // ecx
  unsigned int v109; // ebx
  int v110; // r8d
  _DWORD *v111; // rax
  int v112; // r8d
  unsigned int v113; // edx
  unsigned __int8 v114; // dl
  unsigned int v115; // r9d
  unsigned int v116; // edi
  unsigned int v117; // ecx
  __int64 v118; // r10
  _DWORD *v119; // rax
  unsigned int v120; // edi
  int v121; // r11d
  _DWORD *v122; // rax
  int v123; // r11d
  unsigned int v124; // ebx
  unsigned int v125; // ecx
  unsigned int v126; // ebx
  int v127; // r8d
  _DWORD *v128; // rax
  int v129; // r8d
  unsigned int v130; // edx
  unsigned __int8 v131; // dl
  unsigned __int8 v132; // r8
  unsigned int v133; // r9d
  _DWORD *v134; // rax
  unsigned int v135; // edi
  unsigned int v136; // ecx
  __int64 v137; // r10
  unsigned int v138; // edi
  int v139; // r11d
  _DWORD *v140; // rax
  int v141; // r11d
  unsigned int v142; // ebx
  unsigned int v143; // ecx
  unsigned int v144; // ebx
  int v145; // r8d
  _DWORD *v146; // rax
  int v147; // r8d
  unsigned int v148; // edx
  unsigned __int8 v149; // dl
  unsigned int v150; // r9d
  unsigned int v151; // edi
  unsigned int v152; // ecx
  __int64 v153; // r10
  _DWORD *v154; // rax
  unsigned int v155; // edi
  int v156; // ebx
  _DWORD *v157; // rax
  int v158; // ebx
  unsigned int v159; // r11d
  unsigned int v160; // ecx
  unsigned int v161; // r11d
  int v162; // r8d
  _DWORD *v163; // rax
  int v164; // r8d
  unsigned int v165; // edx
  int v166; // ecx
  unsigned __int8 v167; // dl
  unsigned int v168; // r9d
  unsigned int v169; // edi
  unsigned int v170; // ecx
  __int64 v171; // r10
  _DWORD *v172; // rax
  unsigned int v173; // edi
  int v174; // ebx
  _DWORD *v175; // rax
  int v176; // ebx
  unsigned int v177; // r11d
  unsigned int v178; // ecx
  unsigned int v179; // r11d
  int v180; // r8d
  _DWORD *v181; // rax
  int v182; // r8d
  unsigned int v183; // edx
  int v184; // ecx
  unsigned __int8 v185; // dl
  unsigned int v186; // r9d
  unsigned int v187; // edi
  unsigned int v188; // ecx
  __int64 v189; // r10
  _DWORD *v190; // rax
  unsigned int v191; // edi
  int v192; // ebx
  _DWORD *v193; // rax
  int v194; // ebx
  unsigned int v195; // r11d
  unsigned int v196; // ecx
  unsigned int v197; // r11d
  int v198; // r8d
  _DWORD *v199; // rax
  int v200; // r8d
  unsigned int v201; // edx
  unsigned __int8 v202; // dl
  unsigned int v203; // r9d
  unsigned int v204; // edi
  unsigned int v205; // ecx
  __int64 v206; // r10
  _DWORD *v207; // rax
  unsigned int v208; // edi
  int v209; // r11d
  _DWORD *v210; // rax
  int v211; // r11d
  unsigned int v212; // ebx
  unsigned int v213; // ecx
  unsigned int v214; // ebx
  int v215; // r8d
  _DWORD *v216; // rax
  int v217; // r8d
  unsigned int v218; // edx
  unsigned __int8 v219; // dl
  int v220; // r9d
  unsigned int v221; // edi
  unsigned int v222; // ecx
  __int64 v223; // r10
  _DWORD *v224; // rax
  int v225; // ebx
  _DWORD *v226; // rax
  int v227; // ebx
  unsigned int v228; // r11d
  unsigned int v229; // ecx
  unsigned int v230; // r11d
  int v231; // r8d
  _DWORD *v232; // rax
  int v233; // r8d
  unsigned int v234; // edx
  int v235; // r9d
  unsigned int v236; // eax
  unsigned int v237; // r9d
  unsigned int v238; // eax
  unsigned __int8 v239; // dl
  _DWORD *v240; // r15
  _DWORD *v241; // rax
  unsigned int v242; // ebx
  unsigned int v243; // ecx
  __int64 v244; // r9
  unsigned int v245; // ebx
  int v246; // r10d
  _DWORD *v247; // rax
  int v248; // r10d
  unsigned int v249; // r11d
  unsigned int v250; // ecx
  unsigned int v251; // r11d
  int v252; // edx
  unsigned int v253; // eax
  char v254; // [rsp+0h] [rbp-68h]
  int v255; // [rsp+4h] [rbp-64h]
  char v256; // [rsp+8h] [rbp-60h]
  int v257; // [rsp+Ch] [rbp-5Ch]
  unsigned int v258; // [rsp+10h] [rbp-58h]
  unsigned int v259; // [rsp+14h] [rbp-54h]
  int v260; // [rsp+18h] [rbp-50h]
  __int64 v261; // [rsp+20h] [rbp-48h]
  _BYTE *v262; // [rsp+70h] [rbp+8h]
  int v264; // [rsp+78h] [rbp+10h]
  __int64 v265; // [rsp+88h] [rbp+20h]
  int v266; // [rsp+90h] [rbp+28h]
  int v267; // [rsp+98h] [rbp+30h]
  unsigned int v268; // [rsp+B0h] [rbp+48h]
  char v269; // [rsp+C0h] [rbp+58h]

  v11 = a3;
  v14 = *(_QWORD *)(a11 + 128);
  if ( !v14 )
    v14 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1808LL);
  v15 = *(_DWORD *)(v14 + 24);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(int **)(v14 + 112);
    v17 = *v16;
    v18 = v16[6];
    v19 = v16[1];
    v20 = v16[7];
    v21 = v16[2];
    v22 = v16[8];
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v18) = 0;
      v17 = 255;
      v21 = 16711680;
      LOBYTE(v22) = 16;
    }
    else
    {
      v17 = 16711680;
      LOBYTE(v18) = 16;
      LOBYTE(v22) = 0;
      v21 = 255;
    }
  }
  v23 = a9;
  v269 = v18;
  v24 = a6 & 0xFFFFFFFC;
  v25 = (a9 & v17) >> v18;
  v26 = a9 & v19;
  v268 = v25;
  v255 = v17;
  v258 = v26 >> v20;
  v257 = v19;
  v256 = v20;
  v27 = (a5 + 3) & 0xFFFFFFFC;
  v259 = (v23 & v21) >> v22;
  v254 = v22;
  result = (unsigned int)(3 * a5);
  v29 = (_BYTE *)(a2 / 2 + a1);
  v30 = (int)result + a4;
  v262 = v29;
  v265 = v30;
  if ( v27 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v219 = *v29 & 0xF;
      if ( v219 )
      {
        if ( v219 == 15 )
        {
          v220 = v23;
        }
        else
        {
          LOWORD(a10) = *(_WORD *)v30;
          BYTE2(a10) = *(_BYTE *)(v30 + 2);
          v221 = (a10 & (unsigned int)v17) >> v269;
          v222 = v268 - v221;
          v223 = v219;
          v224 = &unk_1C02E65E0;
          if ( (int)(v268 - v221) >= 0 )
            v224 = &unk_1C02E6620;
          v22 = v221 << 16;
          v225 = v224[v219];
          v226 = &unk_1C02E65E0;
          v227 = v222 * v225;
          v228 = (a10 & (unsigned int)v19) >> v20;
          v229 = v258 - v228;
          if ( (int)(v258 - v228) >= 0 )
            v226 = &unk_1C02E6620;
          v230 = v228 << 16;
          v231 = v226[v219];
          v232 = &unk_1C02E65E0;
          v233 = v229 * v231;
          v234 = (a10 & (unsigned int)v21) >> v254;
          if ( (int)(v259 - v234) >= 0 )
            v232 = &unk_1C02E6620;
          v235 = v232[v223];
          v236 = v233 + v230;
          v19 = v257;
          v29 = v262;
          v237 = v257 & (HIWORD(v236) << v20) | v21 & (((v234 << 16) + (v259 - v234) * v235) >> 16 << v254);
          v238 = v22 + v227;
          v17 = v255;
          LOBYTE(v22) = v254;
          v220 = v255 & (HIWORD(v238) << v269) | v237;
        }
        *(_BYTE *)v30 = v220;
        *(_BYTE *)(v30 + 2) = BYTE2(v220);
        *(_BYTE *)(v30 + 1) = BYTE1(v220);
      }
      v30 += 3LL;
      result = (unsigned int)(a5 + 1);
      if ( (_DWORD)result == a6 )
        return result;
      ++v29;
    }
    else if ( (a5 & 3) != 2 )
    {
      return result;
    }
    v239 = *v29 >> 4;
    if ( v239 )
    {
      if ( v239 != 15 )
      {
        v240 = &unk_1C02E65E0;
        LOWORD(a10) = *(_WORD *)v30;
        BYTE2(a10) = *(_BYTE *)(v30 + 2);
        v241 = &unk_1C02E65E0;
        v242 = (a10 & (unsigned int)v17) >> v269;
        v243 = v268 - v242;
        v244 = v239;
        if ( (int)(v268 - v242) >= 0 )
          v241 = &unk_1C02E6620;
        v245 = v242 << 16;
        v246 = v241[v239];
        v247 = &unk_1C02E65E0;
        v248 = v243 * v246;
        v249 = (a10 & (unsigned int)v19) >> v20;
        v250 = v258 - v249;
        if ( (int)(v258 - v249) >= 0 )
          v247 = &unk_1C02E6620;
        v251 = v249 << 16;
        v252 = v250 * v247[v239];
        v253 = (a10 & (unsigned int)v21) >> v22;
        if ( (int)(v259 - v253) >= 0 )
          v240 = &unk_1C02E6620;
        v23 = v257 & ((v251 + v252) >> 16 << v20) | v255 & ((v248 + v245) >> 16 << v269) | v21 & (((v253 << 16)
                                                                                                 + (v259 - v253)
                                                                                                 * v240[v244]) >> 16 << v22);
      }
      *(_BYTE *)v30 = v23;
      result = v23 >> 8;
      *(_BYTE *)(v30 + 2) = BYTE2(v23);
      *(_BYTE *)(v30 + 1) = BYTE1(v23);
    }
    return result;
  }
  v267 = a6 - v24;
  v31 = v27 - a5;
  v260 = v27 - a5;
  result = (unsigned int)((int)(v24 - v27) / 4);
  v32 = (int)(v24 - v27) / 4;
  v264 = v32;
  if ( a8 )
  {
    while ( 1 )
    {
      v33 = v29;
      v34 = v30;
      v35 = v31 - 1;
      if ( !v35 )
        goto LABEL_37;
      v36 = v35 - 1;
      if ( !v36 )
        goto LABEL_25;
      if ( v36 == 1 )
        break;
LABEL_49:
      if ( v32 > 0 )
      {
        v261 = (unsigned int)v32;
        while ( 1 )
        {
          v96 = *v33;
          v97 = (unsigned __int8)*v33 >> 4;
          if ( v97 )
          {
            if ( v97 == 15 )
            {
              v98 = v23;
            }
            else
            {
              LOBYTE(a10) = *(_BYTE *)v34;
              *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v34 + 1);
              v99 = &unk_1C02E65E0;
              v100 = (a10 & (unsigned int)v17) >> v269;
              v101 = v268 - v100;
              v102 = v97;
              if ( (int)(v268 - v100) >= 0 )
                v99 = &unk_1C02E6620;
              v103 = v100 << 16;
              v104 = v99[v97];
              v105 = &unk_1C02E65E0;
              v106 = v101 * v104;
              v107 = (a10 & (unsigned int)v257) >> v256;
              v108 = v258 - v107;
              if ( (int)(v258 - v107) >= 0 )
                v105 = &unk_1C02E6620;
              v109 = v107 << 16;
              v110 = v105[v97];
              v111 = &unk_1C02E65E0;
              v112 = v108 * v110;
              v113 = (a10 & (unsigned int)v21) >> v254;
              if ( (int)(v259 - v113) >= 0 )
                v111 = &unk_1C02E6620;
              v98 = v257 & ((v112 + v109) >> 16 << v256) | v255 & ((v106 + v103) >> 16 << v269) | v21 & (((v113 << 16) + (v259 - v113) * v111[v102]) >> 16 << v254);
            }
            *(_BYTE *)v34 = v98;
            *(_BYTE *)(v34 + 2) = BYTE2(v98);
            *(_BYTE *)(v34 + 1) = BYTE1(v98);
            v96 = *v33;
          }
          v114 = v96 & 0xF;
          if ( v114 )
          {
            if ( v114 == 15 )
            {
              v115 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v34 + 3);
              BYTE2(a10) = *(_BYTE *)(v34 + 5);
              v116 = (a10 & (unsigned int)v255) >> v269;
              v117 = v268 - v116;
              v118 = v114;
              v119 = &unk_1C02E65E0;
              if ( (int)(v268 - v116) >= 0 )
                v119 = &unk_1C02E6620;
              v120 = v116 << 16;
              v121 = v119[v114];
              v122 = &unk_1C02E65E0;
              v123 = v117 * v121;
              v124 = (a10 & (unsigned int)v257) >> v256;
              v125 = v258 - v124;
              if ( (int)(v258 - v124) >= 0 )
                v122 = &unk_1C02E6620;
              v126 = v124 << 16;
              v127 = v122[v114];
              v128 = &unk_1C02E65E0;
              v129 = v125 * v127;
              v130 = (a10 & (unsigned int)v21) >> v254;
              if ( (int)(v259 - v130) >= 0 )
                v128 = &unk_1C02E6620;
              v115 = v257 & ((v126 + v129) >> 16 << v256) | v255 & ((v120 + v123) >> 16 << v269) | v21 & (((v130 << 16) + (v259 - v130) * v128[v118]) >> 16 << v254);
            }
            *(_BYTE *)(v34 + 3) = v115;
            *(_BYTE *)(v34 + 5) = BYTE2(v115);
            *(_BYTE *)(v34 + 4) = BYTE1(v115);
          }
          v131 = v33[1];
          v132 = v131 >> 4;
          if ( v131 >> 4 )
          {
            if ( v132 == 15 )
            {
              v133 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v34 + 6);
              BYTE2(a10) = *(_BYTE *)(v34 + 8);
              v134 = &unk_1C02E65E0;
              v135 = (a10 & (unsigned int)v255) >> v269;
              v136 = v268 - v135;
              v137 = v132;
              if ( (int)(v268 - v135) >= 0 )
                v134 = &unk_1C02E6620;
              v138 = v135 << 16;
              v139 = v134[v132];
              v140 = &unk_1C02E65E0;
              v141 = v136 * v139;
              v142 = (a10 & (unsigned int)v257) >> v256;
              v143 = v258 - v142;
              if ( (int)(v258 - v142) >= 0 )
                v140 = &unk_1C02E6620;
              v144 = v142 << 16;
              v145 = v140[v132];
              v146 = &unk_1C02E65E0;
              v147 = v143 * v145;
              v148 = (a10 & (unsigned int)v21) >> v254;
              if ( (int)(v259 - v148) >= 0 )
                v146 = &unk_1C02E6620;
              v133 = v257 & ((v144 + v147) >> 16 << v256) | v255 & ((v141 + v138) >> 16 << v269) | v21 & (((v148 << 16) + (v259 - v148) * v146[v137]) >> 16 << v254);
            }
            *(_BYTE *)(v34 + 6) = v133;
            *(_BYTE *)(v34 + 8) = BYTE2(v133);
            *(_BYTE *)(v34 + 7) = BYTE1(v133);
            v131 = v33[1];
          }
          v149 = v131 & 0xF;
          if ( v149 )
          {
            if ( v149 == 15 )
            {
              v150 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v34 + 9);
              BYTE2(a10) = *(_BYTE *)(v34 + 11);
              v151 = (a10 & (unsigned int)v255) >> v269;
              v152 = v268 - v151;
              v153 = v149;
              v154 = &unk_1C02E65E0;
              if ( (int)(v268 - v151) >= 0 )
                v154 = &unk_1C02E6620;
              v155 = v151 << 16;
              v156 = v154[v149];
              v157 = &unk_1C02E65E0;
              v158 = v152 * v156;
              v159 = (a10 & (unsigned int)v257) >> v256;
              v160 = v258 - v159;
              if ( (int)(v258 - v159) >= 0 )
                v157 = &unk_1C02E6620;
              v161 = v159 << 16;
              v162 = v157[v149];
              v163 = &unk_1C02E65E0;
              v164 = v160 * v162;
              v165 = (a10 & (unsigned int)v21) >> v254;
              if ( (int)(v259 - v165) >= 0 )
                v163 = &unk_1C02E6620;
              v150 = v255 & ((v158 + v155) >> 16 << v269) | v257 & ((v161 + v164) >> 16 << v256) | v21 & (((v165 << 16) + (v259 - v165) * v163[v153]) >> 16 << v254);
            }
            *(_BYTE *)(v34 + 9) = v150;
            *(_BYTE *)(v34 + 11) = BYTE2(v150);
            *(_BYTE *)(v34 + 10) = BYTE1(v150);
          }
          v34 += 12LL;
          v33 += 2;
          if ( !--v261 )
            break;
          v17 = v255;
        }
        v30 = v265;
      }
      v166 = v267;
      if ( v267 )
      {
        v167 = (unsigned __int8)*v33 >> 4;
        if ( v167 )
        {
          if ( v167 == 15 )
          {
            v168 = v23;
          }
          else
          {
            LOWORD(a10) = *(_WORD *)v34;
            BYTE2(a10) = *(_BYTE *)(v34 + 2);
            v169 = (a10 & (unsigned int)v255) >> v269;
            v170 = v268 - v169;
            v171 = v167;
            v172 = &unk_1C02E65E0;
            if ( (int)(v268 - v169) >= 0 )
              v172 = &unk_1C02E6620;
            v173 = v169 << 16;
            v174 = v172[v167];
            v175 = &unk_1C02E65E0;
            v176 = v170 * v174;
            v177 = (a10 & (unsigned int)v257) >> v256;
            v178 = v258 - v177;
            if ( (int)(v258 - v177) >= 0 )
              v175 = &unk_1C02E6620;
            v179 = v177 << 16;
            v180 = v175[v167];
            v181 = &unk_1C02E65E0;
            v182 = v178 * v180;
            v183 = (a10 & (unsigned int)v21) >> v254;
            if ( (int)(v259 - v183) >= 0 )
              v181 = &unk_1C02E6620;
            v166 = v267;
            v168 = v255 & ((v173 + v176) >> 16 << v269) | v257 & ((v179 + v182) >> 16 << v256) | v21 & (((v183 << 16) + (v259 - v183) * v181[v171]) >> 16 << v254);
          }
          *(_BYTE *)v34 = v168;
          *(_BYTE *)(v34 + 2) = BYTE2(v168);
          *(_BYTE *)(v34 + 1) = BYTE1(v168);
        }
        v184 = v166 - 1;
        v266 = v184;
        if ( v184 )
        {
          v185 = *v33 & 0xF;
          if ( v185 )
          {
            if ( v185 == 15 )
            {
              v186 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v34 + 3);
              BYTE2(a10) = *(_BYTE *)(v34 + 5);
              v187 = (a10 & (unsigned int)v255) >> v269;
              v188 = v268 - v187;
              v189 = v185;
              v190 = &unk_1C02E65E0;
              if ( (int)(v268 - v187) >= 0 )
                v190 = &unk_1C02E6620;
              v191 = v187 << 16;
              v192 = v190[v185];
              v193 = &unk_1C02E65E0;
              v194 = v188 * v192;
              v195 = (a10 & (unsigned int)v257) >> v256;
              v196 = v258 - v195;
              if ( (int)(v258 - v195) >= 0 )
                v193 = &unk_1C02E6620;
              v197 = v195 << 16;
              v198 = v193[v185];
              v199 = &unk_1C02E65E0;
              v200 = v196 * v198;
              v201 = (a10 & (unsigned int)v21) >> v254;
              if ( (int)(v259 - v201) >= 0 )
                v199 = &unk_1C02E6620;
              v184 = v266;
              v186 = v255 & ((v191 + v194) >> 16 << v269) | v257 & ((v197 + v200) >> 16 << v256) | v21 & (((v201 << 16) + (v259 - v201) * v199[v189]) >> 16 << v254);
            }
            *(_BYTE *)(v34 + 3) = v186;
            *(_BYTE *)(v34 + 5) = BYTE2(v186);
            *(_BYTE *)(v34 + 4) = BYTE1(v186);
          }
          if ( v184 != 1 )
          {
            v202 = (unsigned __int8)v33[1] >> 4;
            if ( v202 )
            {
              if ( v202 == 15 )
              {
                v203 = v23;
              }
              else
              {
                LOWORD(a10) = *(_WORD *)(v34 + 6);
                BYTE2(a10) = *(_BYTE *)(v34 + 8);
                v204 = (a10 & (unsigned int)v255) >> v269;
                v205 = v268 - v204;
                v206 = v202;
                v207 = &unk_1C02E65E0;
                if ( (int)(v268 - v204) >= 0 )
                  v207 = &unk_1C02E6620;
                v208 = v204 << 16;
                v209 = v207[v202];
                v210 = &unk_1C02E65E0;
                v211 = v205 * v209;
                v212 = (a10 & (unsigned int)v257) >> v256;
                v213 = v258 - v212;
                if ( (int)(v258 - v212) >= 0 )
                  v210 = &unk_1C02E6620;
                v214 = v212 << 16;
                v215 = v210[v202];
                v216 = &unk_1C02E65E0;
                v217 = v213 * v215;
                v218 = (a10 & (unsigned int)v21) >> v254;
                if ( (int)(v259 - v218) >= 0 )
                  v216 = &unk_1C02E6620;
                v203 = v257 & ((v214 + v217) >> 16 << v256) | v255 & ((v208 + v211) >> 16 << v269) | v21 & (((v218 << 16) + (v259 - v218) * v216[v206]) >> 16 << v254);
              }
              *(_BYTE *)(v34 + 6) = v203;
              *(_BYTE *)(v34 + 8) = BYTE2(v203);
              *(_BYTE *)(v34 + 7) = BYTE1(v203);
            }
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v29 = &v262[v11];
      v30 += a7;
      v19 = v257;
      v17 = v255;
      v31 = v260;
      v32 = v264;
      a8 = result;
      v262 += v11;
      v265 = v30;
      if ( !(_DWORD)result )
        return result;
    }
    v37 = *v29 & 0xF;
    if ( v37 )
    {
      if ( v37 == 15 )
      {
        v38 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v30;
        BYTE2(a10) = *(_BYTE *)(v30 + 2);
        v39 = (a10 & (unsigned int)v17) >> v269;
        v40 = v268 - v39;
        v41 = v37;
        v42 = &unk_1C02E65E0;
        if ( (int)(v268 - v39) >= 0 )
          v42 = &unk_1C02E6620;
        v43 = v39 << 16;
        v44 = v42[v37];
        v45 = &unk_1C02E65E0;
        v46 = v40 * v44;
        v47 = (a10 & (unsigned int)v19) >> v256;
        v48 = v258 - v47;
        if ( (int)(v258 - v47) >= 0 )
          v45 = &unk_1C02E6620;
        v49 = v47 << 16;
        v50 = v45[v37];
        v51 = &unk_1C02E65E0;
        v52 = v48 * v50;
        v53 = (a10 & (unsigned int)v21) >> v254;
        if ( (int)(v259 - v53) >= 0 )
          v51 = &unk_1C02E6620;
        v54 = v51[v41];
        v55 = v52 + v49;
        v19 = v257;
        v29 = v262;
        v56 = v257 & (HIWORD(v55) << v256) | v21 & (((v53 << 16) + (v259 - v53) * v54) >> 16 << v254);
        v57 = v46 + v43;
        v17 = v255;
        v38 = v255 & (HIWORD(v57) << v269) | v56;
      }
      *(_BYTE *)v30 = v38;
      *(_BYTE *)(v30 + 2) = BYTE2(v38);
      *(_BYTE *)(v30 + 1) = BYTE1(v38);
    }
    v34 = v30 + 3;
    v33 = v29 + 1;
LABEL_25:
    v58 = (unsigned __int8)*v33 >> 4;
    if ( v58 )
    {
      if ( v58 == 15 )
      {
        v59 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v34;
        BYTE2(a10) = *(_BYTE *)(v34 + 2);
        v60 = (a10 & (unsigned int)v17) >> v269;
        v61 = v268 - v60;
        v62 = v58;
        v63 = &unk_1C02E65E0;
        if ( (int)(v268 - v60) >= 0 )
          v63 = &unk_1C02E6620;
        v64 = v60 << 16;
        v65 = v63[v58];
        v66 = &unk_1C02E65E0;
        v67 = v61 * v65;
        v68 = (a10 & (unsigned int)v257) >> v256;
        v69 = v258 - v68;
        if ( (int)(v258 - v68) >= 0 )
          v66 = &unk_1C02E6620;
        v70 = v68 << 16;
        v71 = v66[v58];
        v72 = &unk_1C02E65E0;
        v73 = v69 * v71;
        v74 = (a10 & (unsigned int)v21) >> v254;
        if ( (int)(v259 - v74) >= 0 )
          v72 = &unk_1C02E6620;
        v75 = v72[v62];
        v76 = v64 + v67;
        v19 = v257;
        v59 = v257 & ((v73 + v70) >> 16 << v256) | v255 & (HIWORD(v76) << v269) | v21 & (((v74 << 16)
                                                                                        + (v259 - v74) * v75) >> 16 << v254);
      }
      *(_BYTE *)v34 = v59;
      *(_BYTE *)(v34 + 2) = BYTE2(v59);
      *(_BYTE *)(v34 + 1) = BYTE1(v59);
    }
    v17 = v255;
    v34 += 3LL;
LABEL_37:
    v77 = *v33 & 0xF;
    if ( v77 )
    {
      if ( v77 == 15 )
      {
        v78 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v34;
        BYTE2(a10) = *(_BYTE *)(v34 + 2);
        v79 = (a10 & (unsigned int)v17) >> v269;
        v80 = v268 - v79;
        v81 = v77;
        v82 = &unk_1C02E65E0;
        if ( (int)(v268 - v79) >= 0 )
          v82 = &unk_1C02E6620;
        v83 = v79 << 16;
        v84 = v82[v77];
        v85 = &unk_1C02E65E0;
        v86 = v80 * v84;
        v87 = (a10 & (unsigned int)v19) >> v256;
        v88 = v258 - v87;
        if ( (int)(v258 - v87) >= 0 )
          v85 = &unk_1C02E6620;
        v89 = v87 << 16;
        v90 = v85[v77];
        v91 = &unk_1C02E65E0;
        v92 = v88 * v90;
        v93 = (a10 & (unsigned int)v21) >> v254;
        if ( (int)(v259 - v93) >= 0 )
          v91 = &unk_1C02E6620;
        v94 = ((v93 << 16) + (v259 - v93) * v91[v81]) >> 16 << v254;
        v95 = v83 + v86;
        v17 = v255;
        v78 = v255 & (HIWORD(v95) << v269) | v257 & ((v92 + v89) >> 16 << v256) | v21 & v94;
      }
      *(_BYTE *)v34 = v78;
      *(_BYTE *)(v34 + 2) = BYTE2(v78);
      *(_BYTE *)(v34 + 1) = BYTE1(v78);
    }
    v32 = v264;
    v34 += 3LL;
    ++v33;
    goto LABEL_49;
  }
  return result;
}
