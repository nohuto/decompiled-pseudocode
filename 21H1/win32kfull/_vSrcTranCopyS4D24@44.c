/*
 * XREFs of _vSrcTranCopyS4D24@44 @ 0x1D60C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcTranCopyS4D24(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // edx
  int v18; // eax
  unsigned int v19; // ebx
  _BYTE *v20; // edx
  signed int v21; // ecx
  unsigned int v22; // esi
  int result; // eax
  int v24; // ecx
  int v25; // edx
  _BYTE *v26; // eax
  unsigned __int8 v27; // dl
  unsigned int v28; // edx
  unsigned int v29; // eax
  _DWORD *v30; // ecx
  unsigned int v31; // edx
  _DWORD *v32; // eax
  unsigned int v33; // eax
  _DWORD *v34; // edx
  unsigned __int8 v35; // ah
  unsigned int v36; // eax
  unsigned int v37; // ecx
  int v38; // ebx
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  int v41; // eax
  _BYTE *v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // ebx
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  int v48; // eax
  _BYTE *v49; // ecx
  char v50; // ah
  unsigned __int8 v51; // al
  unsigned int v52; // eax
  _DWORD *v53; // ecx
  _DWORD *v54; // eax
  int v55; // ebx
  _DWORD *v56; // eax
  int v57; // eax
  unsigned __int8 v58; // ah
  unsigned int v59; // eax
  unsigned int v60; // ecx
  int v61; // ebx
  _DWORD *v62; // eax
  _DWORD *v63; // eax
  int v64; // eax
  _BYTE *v65; // ecx
  char v66; // ah
  unsigned __int8 v67; // al
  unsigned int v68; // eax
  _DWORD *v69; // ecx
  _DWORD *v70; // eax
  _DWORD *v71; // eax
  unsigned __int8 v72; // ah
  unsigned int v73; // eax
  unsigned int v74; // ecx
  int v75; // ebx
  _DWORD *v76; // eax
  _DWORD *v77; // eax
  int v78; // eax
  bool v79; // zf
  unsigned __int8 v80; // ah
  unsigned int v81; // eax
  unsigned int v82; // ecx
  int v83; // ebx
  _DWORD *v84; // eax
  _DWORD *v85; // eax
  int v86; // eax
  int v87; // ecx
  unsigned __int8 v88; // ah
  unsigned int v89; // eax
  unsigned int v90; // ecx
  int v91; // ebx
  _DWORD *v92; // eax
  _DWORD *v93; // eax
  int v94; // eax
  unsigned __int8 v95; // ah
  unsigned int v96; // eax
  unsigned int v97; // ecx
  _DWORD *v98; // eax
  _DWORD *v99; // eax
  _DWORD *v100; // esi
  _DWORD *v101; // edi
  int v102; // ecx
  unsigned __int8 v103; // dl
  unsigned int v104; // eax
  int v105; // ebx
  unsigned int v106; // edx
  _DWORD *v107; // eax
  int v108; // edx
  unsigned int v109; // edi
  unsigned int v110; // eax
  unsigned int v111; // edx
  unsigned __int8 v112; // dl
  unsigned int v113; // edx
  unsigned int v114; // eax
  unsigned int v115; // edx
  _DWORD *v116; // eax
  unsigned int v117; // eax
  _DWORD *v118; // edx
  int v119; // ecx
  int v120; // [esp+0h] [ebp-38h]
  unsigned int v121; // [esp+0h] [ebp-38h]
  unsigned int v122; // [esp+0h] [ebp-38h]
  unsigned int v123; // [esp+0h] [ebp-38h]
  int v124; // [esp+0h] [ebp-38h]
  unsigned int v125; // [esp+0h] [ebp-38h]
  unsigned int v126; // [esp+0h] [ebp-38h]
  unsigned int v127; // [esp+0h] [ebp-38h]
  unsigned int v128; // [esp+0h] [ebp-38h]
  unsigned int v129; // [esp+0h] [ebp-38h]
  unsigned int v130; // [esp+0h] [ebp-38h]
  unsigned int v131; // [esp+0h] [ebp-38h]
  unsigned int v132; // [esp+0h] [ebp-38h]
  unsigned int v133; // [esp+0h] [ebp-38h]
  unsigned int v134; // [esp+0h] [ebp-38h]
  unsigned int v135; // [esp+4h] [ebp-34h]
  int v136; // [esp+8h] [ebp-30h]
  int v137; // [esp+Ch] [ebp-2Ch]
  unsigned int v138; // [esp+10h] [ebp-28h]
  unsigned int v139; // [esp+10h] [ebp-28h]
  unsigned int v140; // [esp+10h] [ebp-28h]
  unsigned int v141; // [esp+10h] [ebp-28h]
  int v142; // [esp+10h] [ebp-28h]
  _DWORD *v143; // [esp+10h] [ebp-28h]
  _DWORD *v144; // [esp+14h] [ebp-24h]
  int v145; // [esp+14h] [ebp-24h]
  int v146; // [esp+14h] [ebp-24h]
  unsigned int v147; // [esp+18h] [ebp-20h]
  int v148; // [esp+18h] [ebp-20h]
  unsigned int v149; // [esp+1Ch] [ebp-1Ch]
  int v150; // [esp+1Ch] [ebp-1Ch]
  unsigned int v151; // [esp+20h] [ebp-18h]
  int v152; // [esp+20h] [ebp-18h]
  int v153; // [esp+24h] [ebp-14h]
  char v154; // [esp+28h] [ebp-10h]
  int v155; // [esp+2Ch] [ebp-Ch]
  char v156; // [esp+30h] [ebp-8h]
  int v157; // [esp+34h] [ebp-4h]
  _BYTE *v158; // [esp+40h] [ebp+8h]
  _BYTE *v159; // [esp+44h] [ebp+Ch]
  unsigned int v160; // [esp+44h] [ebp+Ch]
  unsigned int v161; // [esp+44h] [ebp+Ch]
  _BYTE *v162; // [esp+44h] [ebp+Ch]
  unsigned int v163; // [esp+44h] [ebp+Ch]
  unsigned int v164; // [esp+44h] [ebp+Ch]
  _DWORD *v165; // [esp+44h] [ebp+Ch]
  unsigned int v166; // [esp+44h] [ebp+Ch]
  unsigned int v167; // [esp+44h] [ebp+Ch]
  int v168; // [esp+4Ch] [ebp+14h]
  int v169; // [esp+50h] [ebp+18h]
  _DWORD *v170; // [esp+50h] [ebp+18h]
  unsigned int v171; // [esp+50h] [ebp+18h]
  unsigned int v172; // [esp+50h] [ebp+18h]
  unsigned int v173; // [esp+50h] [ebp+18h]
  unsigned int v174; // [esp+50h] [ebp+18h]
  unsigned int v175; // [esp+50h] [ebp+18h]
  unsigned int v176; // [esp+50h] [ebp+18h]
  _DWORD *v177; // [esp+50h] [ebp+18h]
  unsigned int v178; // [esp+50h] [ebp+18h]
  unsigned int v179; // [esp+50h] [ebp+18h]
  unsigned int v180; // [esp+50h] [ebp+18h]
  unsigned int v181; // [esp+50h] [ebp+18h]
  _DWORD *v182; // [esp+50h] [ebp+18h]
  unsigned int v183; // [esp+50h] [ebp+18h]
  unsigned int v184; // [esp+50h] [ebp+18h]
  _DWORD *v185; // [esp+50h] [ebp+18h]
  unsigned int v186; // [esp+50h] [ebp+18h]
  unsigned int v187; // [esp+50h] [ebp+18h]
  _DWORD *v188; // [esp+50h] [ebp+18h]
  unsigned int v189; // [esp+50h] [ebp+18h]
  unsigned int v190; // [esp+50h] [ebp+18h]
  int v191; // [esp+50h] [ebp+18h]
  unsigned __int8 v192; // [esp+53h] [ebp+1Bh]
  int v193; // [esp+54h] [ebp+1Ch]
  int v194; // [esp+5Ch] [ebp+24h]
  int v195; // [esp+68h] [ebp+30h]

  v11 = *(_DWORD *)(a11 + 88);
  if ( !v11 )
    v11 = *(_DWORD *)(*(_DWORD *)(a11 + 28) + 1112);
  v12 = *(_DWORD *)(v11 + 16);
  if ( (v12 & 2) != 0 )
  {
    v13 = *(int **)(v11 + 76);
    v14 = *v13;
    v15 = v13[6];
    v16 = v13[1];
    v195 = v13[7];
    v17 = v13[2];
    v18 = v13[8];
  }
  else
  {
    LOBYTE(v195) = 8;
    v16 = 65280;
    if ( (v12 & 4) != 0 )
    {
      v14 = 255;
      LOBYTE(v15) = 0;
      v17 = 16711680;
      LOBYTE(v18) = 16;
    }
    else
    {
      v14 = 16711680;
      v17 = 255;
      LOBYTE(v15) = 16;
      LOBYTE(v18) = 0;
    }
  }
  v19 = a9;
  v153 = v14;
  v151 = (a9 & v14) >> v15;
  v156 = v15;
  v155 = v17;
  v154 = v18;
  v147 = (a9 & v17) >> v18;
  v157 = v16;
  v20 = (_BYTE *)(a2 / 2 + a1);
  v149 = (a9 & v16) >> v195;
  v21 = (a5 + 3) & 0xFFFFFFFC;
  v158 = v20;
  v22 = a6 & 0xFFFFFFFC;
  v168 = 3 * a5 + a4;
  if ( v21 > (int)(a6 & 0xFFFFFFFC) )
  {
    v100 = &unk_25D240;
    v101 = &unk_24FA98;
    if ( (a5 & 3) == 1 )
    {
      v112 = *v20 & 0xF;
      if ( v112 )
      {
        if ( v112 == 15 )
        {
          v113 = a9;
        }
        else
        {
          v165 = &unk_25D240;
          LOWORD(a10) = *(_WORD *)v168;
          BYTE2(a10) = *(_BYTE *)(v168 + 2);
          v114 = (a10 & (unsigned int)v153) >> v156;
          if ( (int)(v151 - v114) >= 0 )
            v165 = &unk_24FA98;
          v194 = v112;
          v115 = v153 & (((v114 << 16) + (v151 - v114) * v165[v112]) >> 16 << v156);
          v166 = (a10 & (unsigned int)v157) >> v195;
          v116 = &unk_25D240;
          if ( (int)(v149 - v166) >= 0 )
            v116 = &unk_24FA98;
          v117 = v115 | v157 & (((v166 << 16) + (v149 - v166) * v116[v194]) >> 16 << v195);
          v167 = (a10 & (unsigned int)v155) >> v154;
          v118 = &unk_25D240;
          if ( (int)(v147 - v167) >= 0 )
            v118 = &unk_24FA98;
          v19 = a9;
          v113 = v117 | v155 & (((v167 << 16) + (v147 - v167) * v118[v194]) >> 16 << v154);
        }
        v119 = v168;
        *(_WORD *)v168 = v113;
        *(_BYTE *)(v168 + 2) = BYTE2(v113);
      }
      else
      {
        v119 = v168;
      }
      v102 = v119 + 3;
      result = a5 + 1;
      v168 = v102;
      if ( a5 + 1 == a6 )
        return result;
      v20 = v158 + 1;
    }
    else
    {
      result = (a5 & 3) - 2;
      if ( (a5 & 3) != 2 )
        return result;
      v102 = v168;
    }
    v103 = *v20 >> 4;
    if ( v103 )
    {
      if ( v103 != 15 )
      {
        LOWORD(a10) = *(_WORD *)v102;
        BYTE2(a10) = *(_BYTE *)(v102 + 2);
        v104 = (a10 & (unsigned int)v153) >> v156;
        v152 = v151 - v104;
        if ( v152 < 0 )
          v101 = &unk_25D240;
        v105 = v103;
        v106 = (v104 << 16) + v152 * v101[v103];
        v107 = &unk_25D240;
        v108 = v153 & (HIWORD(v106) << v156);
        v109 = (a10 & (unsigned int)v157) >> v195;
        v150 = v149 - v109;
        if ( v150 >= 0 )
          v107 = &unk_24FA98;
        v110 = v108 | v157 & (((v109 << 16) + v150 * v107[v105]) >> 16 << v195);
        v111 = (a10 & (unsigned int)v155) >> v154;
        v148 = v147 - v111;
        if ( v148 >= 0 )
          v100 = &unk_24FA98;
        v19 = v110 | v155 & (((v111 << 16) + v148 * v100[v105]) >> 16 << v154);
      }
      result = v19 >> 8;
      *(_WORD *)v168 = v19;
      *(_BYTE *)(v168 + 2) = BYTE2(v19);
    }
    return result;
  }
  v193 = a6 - v22;
  v137 = v21 - a5;
  result = (int)(v22 - v21) / 4;
  v136 = result;
  if ( a8 )
  {
    v24 = v168;
    result = (int)v20;
    while ( 1 )
    {
      v159 = (_BYTE *)result;
      v25 = v24;
      if ( v137 == 1 )
        goto LABEL_38;
      if ( v137 == 2 )
        goto LABEL_26;
      if ( v137 == 3 )
        break;
      v49 = (_BYTE *)result;
LABEL_51:
      if ( v136 > 0 )
      {
        v142 = v136;
        do
        {
          v50 = *v49;
          v51 = *v49 >> 4;
          if ( v51 )
          {
            if ( v51 == 15 )
            {
              v52 = v19;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)v25;
              BYTE2(a10) = *(_BYTE *)(v25 + 2);
              v145 = v151 - ((a10 & (unsigned int)v153) >> v156);
              v53 = &unk_25D240;
              if ( v145 >= 0 )
                v53 = &unk_24FA98;
              v120 = v51;
              v175 = v153 & ((((a10 & (unsigned int)v153) >> v156 << 16) + v145 * v53[v51]) >> 16 << v156);
              v135 = (a10 & (unsigned int)v16) >> v195;
              v54 = &unk_25D240;
              if ( (int)(v149 - v135) >= 0 )
                v54 = &unk_24FA98;
              v55 = v120;
              v121 = v175 | v16 & (((v135 << 16) + (v149 - v135) * v54[v120]) >> 16 << v195);
              v176 = (a10 & (unsigned int)v155) >> v154;
              v56 = &unk_25D240;
              if ( (int)(v147 - v176) >= 0 )
                v56 = &unk_24FA98;
              v57 = v56[v55];
              v19 = a9;
              v52 = v121 | v155 & (((v176 << 16) + (v147 - v176) * v57) >> 16 << v154);
              v49 = v159;
            }
            *(_WORD *)v25 = v52;
            *(_BYTE *)(v25 + 2) = BYTE2(v52);
            v50 = *v49;
          }
          v58 = v50 & 0xF;
          if ( v58 )
          {
            if ( v58 == 15 )
            {
              v59 = v19;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v25 + 3);
              BYTE2(a10) = *(_BYTE *)(v25 + 5);
              v60 = (a10 & (unsigned int)v153) >> v156;
              v177 = &unk_25D240;
              if ( (int)(v151 - v60) >= 0 )
                v177 = &unk_24FA98;
              v61 = v58;
              v122 = v153 & (((v60 << 16) + (v151 - v60) * v177[v58]) >> 16 << v156);
              v178 = (a10 & (unsigned int)v16) >> v195;
              v62 = &unk_25D240;
              if ( (int)(v149 - v178) >= 0 )
                v62 = &unk_24FA98;
              v123 = v122 | v16 & (((v178 << 16) + (v149 - v178) * v62[v61]) >> 16 << v195);
              v179 = (a10 & (unsigned int)v155) >> v154;
              v63 = &unk_25D240;
              if ( (int)(v147 - v179) >= 0 )
                v63 = &unk_24FA98;
              v64 = v63[v61];
              v19 = a9;
              v59 = v123 | v155 & (((v179 << 16) + (v147 - v179) * v64) >> 16 << v154);
              v49 = v159;
            }
            *(_WORD *)(v25 + 3) = v59;
            *(_BYTE *)(v25 + 5) = BYTE2(v59);
          }
          v65 = v49 + 1;
          v162 = v65;
          v66 = *v65;
          v67 = *v65 >> 4;
          if ( v67 )
          {
            if ( v67 == 15 )
            {
              v68 = v19;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v25 + 6);
              BYTE2(a10) = *(_BYTE *)(v25 + 8);
              v124 = v151 - ((a10 & (unsigned int)v153) >> v156);
              v69 = &unk_25D240;
              if ( v124 >= 0 )
                v69 = &unk_24FA98;
              v146 = v67;
              v180 = v153 & ((((a10 & (unsigned int)v153) >> v156 << 16) + v124 * v69[v67]) >> 16 << v156);
              v125 = (a10 & (unsigned int)v16) >> v195;
              v70 = &unk_25D240;
              if ( (int)(v149 - v125) >= 0 )
                v70 = &unk_24FA98;
              v126 = v180 | v16 & (((v125 << 16) + (v149 - v125) * v70[v146]) >> 16 << v195);
              v181 = (a10 & (unsigned int)v155) >> v154;
              v71 = &unk_25D240;
              if ( (int)(v147 - v181) >= 0 )
                v71 = &unk_24FA98;
              v19 = a9;
              v68 = v126 | v155 & (((v181 << 16) + (v147 - v181) * v71[v146]) >> 16 << v154);
              v65 = v162;
            }
            *(_WORD *)(v25 + 6) = v68;
            *(_BYTE *)(v25 + 8) = BYTE2(v68);
            v66 = *v65;
          }
          v72 = v66 & 0xF;
          if ( v72 )
          {
            if ( v72 == 15 )
            {
              v73 = v19;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v25 + 9);
              BYTE2(a10) = *(_BYTE *)(v25 + 11);
              v74 = (a10 & (unsigned int)v153) >> v156;
              v182 = &unk_25D240;
              if ( (int)(v151 - v74) >= 0 )
                v182 = &unk_24FA98;
              v75 = v72;
              v127 = v153 & (((v74 << 16) + (v151 - v74) * v182[v72]) >> 16 << v156);
              v183 = (a10 & (unsigned int)v16) >> v195;
              v76 = &unk_25D240;
              if ( (int)(v149 - v183) >= 0 )
                v76 = &unk_24FA98;
              v128 = v127 | v16 & (((v183 << 16) + (v149 - v183) * v76[v75]) >> 16 << v195);
              v184 = (a10 & (unsigned int)v155) >> v154;
              v77 = &unk_25D240;
              if ( (int)(v147 - v184) >= 0 )
                v77 = &unk_24FA98;
              v78 = v77[v75];
              v19 = a9;
              v73 = v128 | v155 & (((v184 << 16) + (v147 - v184) * v78) >> 16 << v154);
              v65 = v162;
            }
            *(_WORD *)(v25 + 9) = v73;
            *(_BYTE *)(v25 + 11) = BYTE2(v73);
          }
          v25 += 12;
          v49 = v65 + 1;
          v79 = v142-- == 1;
          v159 = v49;
        }
        while ( !v79 );
      }
      if ( v193 )
      {
        v80 = *v49 >> 4;
        if ( v80 )
        {
          if ( v80 == 15 )
          {
            v81 = v19;
          }
          else
          {
            LOWORD(a10) = *(_WORD *)v25;
            BYTE2(a10) = *(_BYTE *)(v25 + 2);
            v82 = (a10 & (unsigned int)v153) >> v156;
            v185 = &unk_25D240;
            if ( (int)(v151 - v82) >= 0 )
              v185 = &unk_24FA98;
            v83 = v80;
            v129 = v153 & (((v82 << 16) + (v151 - v82) * v185[v80]) >> 16 << v156);
            v186 = (a10 & (unsigned int)v16) >> v195;
            v84 = &unk_25D240;
            if ( (int)(v149 - v186) >= 0 )
              v84 = &unk_24FA98;
            v130 = v129 | v16 & (((v186 << 16) + (v149 - v186) * v84[v83]) >> 16 << v195);
            v187 = (a10 & (unsigned int)v155) >> v154;
            v85 = &unk_25D240;
            if ( (int)(v147 - v187) >= 0 )
              v85 = &unk_24FA98;
            v86 = v85[v83];
            v19 = a9;
            v81 = v130 | v155 & (((v187 << 16) + (v147 - v187) * v86) >> 16 << v154);
          }
          *(_WORD *)v25 = v81;
          *(_BYTE *)(v25 + 2) = BYTE2(v81);
        }
        v87 = v193 - 1;
        if ( v193 != 1 )
        {
          v88 = *v159 & 0xF;
          if ( v88 )
          {
            if ( v88 == 15 )
            {
              v89 = v19;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v25 + 3);
              BYTE2(a10) = *(_BYTE *)(v25 + 5);
              v90 = (a10 & (unsigned int)v153) >> v156;
              v188 = &unk_25D240;
              if ( (int)(v151 - v90) >= 0 )
                v188 = &unk_24FA98;
              v91 = v88;
              v131 = v153 & (((v90 << 16) + (v151 - v90) * v188[v88]) >> 16 << v156);
              v189 = (a10 & (unsigned int)v16) >> v195;
              v92 = &unk_25D240;
              if ( (int)(v149 - v189) >= 0 )
                v92 = &unk_24FA98;
              v132 = v131 | v16 & (((v189 << 16) + (v149 - v189) * v92[v91]) >> 16 << v195);
              v190 = (a10 & (unsigned int)v155) >> v154;
              v93 = &unk_25D240;
              if ( (int)(v147 - v190) >= 0 )
                v93 = &unk_24FA98;
              v94 = v93[v91];
              v19 = a9;
              v89 = v132 | v155 & (((v190 << 16) + (v147 - v190) * v94) >> 16 << v154);
              v87 = v193 - 1;
            }
            *(_WORD *)(v25 + 3) = v89;
            *(_BYTE *)(v25 + 5) = BYTE2(v89);
          }
          if ( v87 != 1 )
          {
            v95 = v159[1] >> 4;
            if ( v95 )
            {
              if ( v95 == 15 )
              {
                v96 = v19;
              }
              else
              {
                LOWORD(a10) = *(_WORD *)(v25 + 6);
                BYTE2(a10) = *(_BYTE *)(v25 + 8);
                v97 = (a10 & (unsigned int)v153) >> v156;
                v143 = &unk_25D240;
                if ( (int)(v151 - v97) >= 0 )
                  v143 = &unk_24FA98;
                v191 = v95;
                v133 = v153 & (((v97 << 16) + (v151 - v97) * v143[v95]) >> 16 << v156);
                v163 = (a10 & (unsigned int)v16) >> v195;
                v98 = &unk_25D240;
                if ( (int)(v149 - v163) >= 0 )
                  v98 = &unk_24FA98;
                v134 = v133 | v16 & (((v163 << 16) + (v149 - v163) * v98[v191]) >> 16 << v195);
                v164 = (a10 & (unsigned int)v155) >> v154;
                v99 = &unk_25D240;
                if ( (int)(v147 - v164) >= 0 )
                  v99 = &unk_24FA98;
                v19 = a9;
                v96 = v134 | v155 & (((v164 << 16) + (v147 - v164) * v99[v191]) >> 16 << v154);
              }
              *(_WORD *)(v25 + 6) = v96;
              *(_BYTE *)(v25 + 8) = BYTE2(v96);
            }
          }
        }
      }
      result = (int)&v158[a3];
      v24 = a7 + v168;
      --a8;
      v158 += a3;
      v168 += a7;
      if ( !a8 )
        return result;
    }
    v26 = v158;
    v27 = *v158 & 0xF;
    if ( v27 )
    {
      if ( v27 == 15 )
      {
        v28 = v19;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v24;
        BYTE2(a10) = *(_BYTE *)(v24 + 2);
        v29 = (a10 & (unsigned int)v153) >> v156;
        v30 = &unk_25D240;
        if ( (int)(v151 - v29) >= 0 )
          v30 = &unk_24FA98;
        v169 = v27;
        v31 = v153 & (((v29 << 16) + (v151 - v29) * v30[v27]) >> 16 << v156);
        v160 = (a10 & (unsigned int)v16) >> v195;
        v32 = &unk_25D240;
        if ( (int)(v149 - v160) >= 0 )
          v32 = &unk_24FA98;
        v33 = v31 | v16 & (((v160 << 16) + (v149 - v160) * v32[v169]) >> 16 << v195);
        v161 = (a10 & (unsigned int)v155) >> v154;
        v34 = &unk_25D240;
        if ( (int)(v147 - v161) >= 0 )
          v34 = &unk_24FA98;
        v19 = a9;
        v24 = v168;
        v28 = v33 | v155 & (((v161 << 16) + (v147 - v161) * v34[v169]) >> 16 << v154);
      }
      *(_WORD *)v24 = v28;
      v26 = v158;
      *(_BYTE *)(v24 + 2) = BYTE2(v28);
    }
    result = (int)(v26 + 1);
    v25 = v24 + 3;
    v159 = (_BYTE *)result;
LABEL_26:
    v35 = *(_BYTE *)result >> 4;
    if ( v35 )
    {
      if ( v35 == 15 )
      {
        v36 = v19;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v25;
        BYTE2(a10) = *(_BYTE *)(v25 + 2);
        v37 = (a10 & (unsigned int)v153) >> v156;
        v170 = &unk_25D240;
        if ( (int)(v151 - v37) >= 0 )
          v170 = &unk_24FA98;
        v38 = v35;
        v138 = v153 & (((v37 << 16) + (v151 - v37) * v170[v35]) >> 16 << v156);
        v171 = (a10 & (unsigned int)v16) >> v195;
        v39 = &unk_25D240;
        if ( (int)(v149 - v171) >= 0 )
          v39 = &unk_24FA98;
        v139 = v138 | v16 & (((v171 << 16) + (v149 - v171) * v39[v38]) >> 16 << v195);
        v172 = (a10 & (unsigned int)v155) >> v154;
        v40 = &unk_25D240;
        if ( (int)(v147 - v172) >= 0 )
          v40 = &unk_24FA98;
        v41 = v40[v38];
        v19 = a9;
        v36 = v139 | v155 & (((v172 << 16) + (v147 - v172) * v41) >> 16 << v154);
      }
      *(_WORD *)v25 = v36;
      *(_BYTE *)(v25 + 2) = BYTE2(v36);
    }
    v25 += 3;
LABEL_38:
    v42 = v159;
    v192 = *v159 & 0xF;
    if ( v192 )
    {
      if ( (*v159 & 0xF) == 0xF )
      {
        v43 = v19;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v25;
        BYTE2(a10) = *(_BYTE *)(v25 + 2);
        v44 = (a10 & (unsigned int)v153) >> v156;
        v144 = &unk_25D240;
        if ( (int)(v151 - v44) >= 0 )
          v144 = &unk_24FA98;
        v45 = v192;
        v173 = v153 & (((v44 << 16) + (v151 - v44) * v144[v192]) >> 16 << v156);
        v140 = (a10 & (unsigned int)v16) >> v195;
        v46 = &unk_25D240;
        if ( (int)(v149 - v140) >= 0 )
          v46 = &unk_24FA98;
        v141 = v173 | v16 & (((v140 << 16) + (v149 - v140) * v46[v45]) >> 16 << v195);
        v174 = (a10 & (unsigned int)v155) >> v154;
        v47 = &unk_25D240;
        if ( (int)(v147 - v174) >= 0 )
          v47 = &unk_24FA98;
        v48 = v47[v45];
        v19 = a9;
        v43 = v141 | v155 & (((v174 << 16) + (v147 - v174) * v48) >> 16 << v154);
        v42 = v159;
      }
      *(_WORD *)v25 = v43;
      *(_BYTE *)(v25 + 2) = BYTE2(v43);
    }
    v25 += 3;
    v49 = v42 + 1;
    v159 = v49;
    goto LABEL_51;
  }
  return result;
}
