/*
 * XREFs of _CreateHalftoneBrushPat @ 0xF9AD2
 * Callers:
 *     _HT_CreateHalftoneBrush@20 @ 0x1BA502 (_HT_CreateHalftoneBrush@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _CachedHalftonePattern @ 0x1BB975 (_CachedHalftonePattern.c)
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 *     _ComputeRGBLUTAA @ 0x1BDE20 (_ComputeRGBLUTAA.c)
 */

int __fastcall CreateHalftoneBrushPat(size_t a1, int a2, int a3, unsigned __int16 *Src, int a5)
{
  unsigned __int16 *v5; // ebx
  unsigned int v8; // eax
  unsigned __int16 *v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned __int8 v12; // cl
  int v13; // eax
  unsigned __int16 *v14; // edx
  unsigned int v15; // esi
  int v16; // ecx
  int v17; // edi
  unsigned int v18; // ebx
  unsigned int v19; // esi
  BOOL v20; // edx
  unsigned __int16 *v21; // ecx
  unsigned int v22; // eax
  size_t v23; // edi
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // edx
  size_t v27; // esi
  int v28; // ecx
  int v29; // edi
  unsigned int v30; // edx
  unsigned __int16 *v31; // esi
  unsigned __int16 *v32; // ecx
  size_t v33; // eax
  char v34; // al
  unsigned int v35; // ecx
  int v36; // ecx
  int v37; // edx
  _BYTE *v38; // esi
  int v39; // eax
  int v40; // edi
  unsigned int v41; // ebx
  unsigned int v42; // esi
  BOOL v43; // edx
  unsigned __int16 *v44; // ecx
  unsigned int v45; // eax
  unsigned __int16 *v46; // edi
  unsigned int v47; // eax
  unsigned int v48; // eax
  size_t v49; // eax
  size_t v50; // esi
  char *v51; // ecx
  size_t v52; // edi
  size_t v53; // eax
  int v54; // esi
  int v55; // eax
  unsigned __int16 *v56; // ecx
  unsigned __int16 *v57; // edx
  int v58; // edi
  unsigned int v59; // esi
  unsigned __int16 *v60; // ecx
  unsigned __int16 *v61; // ebx
  unsigned int v62; // edi
  int v63; // eax
  size_t v64; // ecx
  int v65; // eax
  unsigned int v66; // edx
  unsigned int v67; // ebx
  size_t v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // edx
  int v72; // esi
  unsigned __int16 *v73; // edi
  unsigned __int8 v74; // ah
  char v75; // bl
  unsigned int i; // ecx
  int v78; // ebx
  char v79; // cl
  int v81; // eax
  unsigned __int16 *v82; // edx
  unsigned __int16 *v83; // esi
  int v84; // ecx
  unsigned int v85; // edi
  unsigned __int16 *v86; // edx
  unsigned int v87; // esi
  _BYTE *v88; // ecx
  unsigned int v89; // ebx
  int v90; // eax
  unsigned int v91; // edx
  unsigned __int16 *v92; // ecx
  int v93; // eax
  unsigned __int16 *v94; // ecx
  _BYTE *v95; // edx
  int v96; // esi
  unsigned int v97; // edi
  unsigned int v98; // esi
  unsigned int v99; // ebx
  int v100; // eax
  int v101; // edx
  size_t v102; // ecx
  int v103; // eax
  unsigned __int16 *v104; // edx
  unsigned __int16 *v105; // esi
  int v106; // ecx
  unsigned int v107; // edi
  unsigned __int16 *v108; // edx
  unsigned int v109; // esi
  _BYTE *v110; // ecx
  unsigned int v111; // ebx
  int v112; // eax
  unsigned int v113; // edx
  unsigned __int16 *v114; // ecx
  int v115; // eax
  unsigned __int16 *v116; // ecx
  _BYTE *v117; // edx
  int v118; // esi
  unsigned int v119; // edi
  unsigned int v120; // esi
  unsigned int v121; // ebx
  int v122; // eax
  unsigned int v123; // edx
  size_t v124; // eax
  unsigned int v125; // edx
  int v127; // edx
  int v128; // ecx
  unsigned __int16 *v129; // esi
  int v130; // eax
  int v131; // edi
  unsigned __int16 *v132; // esi
  unsigned __int16 *v133; // edi
  unsigned __int16 *v134; // edx
  unsigned __int16 *v135; // ebx
  int v136; // eax
  int v137; // eax
  unsigned __int16 *v138; // edx
  unsigned __int16 *v139; // esi
  int v140; // ecx
  unsigned int v141; // edi
  unsigned __int16 *v142; // edx
  unsigned int v143; // esi
  _BYTE *v144; // ecx
  unsigned int v145; // ebx
  int v146; // eax
  unsigned int v147; // edx
  unsigned __int16 *v148; // ecx
  unsigned __int16 *v149; // edx
  unsigned __int16 *v150; // esi
  int v151; // ecx
  unsigned int v152; // edi
  unsigned __int16 *v153; // edx
  unsigned int v154; // esi
  _BYTE *v155; // ecx
  unsigned int v156; // ebx
  int v157; // eax
  char v158; // dl
  unsigned __int16 *v159; // eax
  char v160; // dl
  size_t v161; // ecx
  unsigned __int16 *v162; // [esp-8h] [ebp-D4h]
  HSEMAPHORE v163; // [esp-4h] [ebp-D0h]
  int v164; // [esp-4h] [ebp-D0h]
  int v165; // [esp-4h] [ebp-D0h]
  _DWORD v166[12]; // [esp+Ch] [ebp-C0h] BYREF
  int v167; // [esp+3Ch] [ebp-90h]
  _DWORD v168[6]; // [esp+40h] [ebp-8Ch] BYREF
  unsigned int v169; // [esp+58h] [ebp-74h]
  unsigned __int16 *v170; // [esp+5Ch] [ebp-70h]
  unsigned int v171; // [esp+60h] [ebp-6Ch]
  __int16 v172; // [esp+64h] [ebp-68h] BYREF
  unsigned __int8 v173; // [esp+66h] [ebp-66h]
  int v174; // [esp+68h] [ebp-64h]
  unsigned __int16 *v175; // [esp+6Ch] [ebp-60h]
  unsigned int v176; // [esp+70h] [ebp-5Ch]
  unsigned int v177; // [esp+74h] [ebp-58h]
  unsigned int v178; // [esp+78h] [ebp-54h]
  unsigned int v179; // [esp+7Ch] [ebp-50h]
  unsigned __int16 *v180; // [esp+80h] [ebp-4Ch]
  unsigned int v181; // [esp+84h] [ebp-48h]
  unsigned int v182; // [esp+88h] [ebp-44h]
  unsigned int v183; // [esp+8Ch] [ebp-40h]
  int v184; // [esp+90h] [ebp-3Ch]
  unsigned __int16 *v185; // [esp+94h] [ebp-38h]
  int v186; // [esp+98h] [ebp-34h]
  unsigned int v187; // [esp+9Ch] [ebp-30h]
  unsigned __int16 *v188; // [esp+A0h] [ebp-2Ch]
  unsigned __int16 *v189; // [esp+A4h] [ebp-28h]
  int v190; // [esp+A8h] [ebp-24h]
  unsigned __int8 v191; // [esp+AFh] [ebp-1Dh]
  size_t v192; // [esp+B0h] [ebp-1Ch]
  unsigned int v193; // [esp+B4h] [ebp-18h]
  unsigned int v194; // [esp+B8h] [ebp-14h]
  unsigned int v195; // [esp+BCh] [ebp-10h]
  unsigned int v196; // [esp+C0h] [ebp-Ch]

  v5 = Src;
  v186 = a3;
  v184 = a5;
  v174 = a5;
  v189 = 0;
  v192 = a1;
  v185 = Src;
  memset(v166, 0, sizeof(v166));
  v172 = 0;
  v173 = 0;
  v190 = 0;
  ComputeRGBLUTAA(a1 + 3912);
  v167 = -10005;
  if ( ComputeBGRMappingTable(a2, &v172) == 1 && (v167 = CachedHalftonePattern(v166, 0, 0, 0), v167 > 0) )
  {
    v8 = *(unsigned __int16 *)(a1 + 150);
    v190 = *(unsigned __int16 *)(a1 + 154);
    v187 = v8;
    v175 = (unsigned __int16 *)v8;
    qmemcpy(v168, (const void *)(a1 + 3916), sizeof(v168));
    v9 = *(unsigned __int16 **)(v186 + 56);
    v188 = v9;
    if ( ((unsigned int)v9 & 0x400000) != 0 )
      v189 = (unsigned __int16 *)*(&p8BPPXlate + LOBYTE(v168[3]));
    v178 = (unsigned int)v9 & 0x2000000;
    if ( ((unsigned int)v9 & 0x2000000) != 0 )
      v189 = (unsigned __int16 *)(v192 + 528);
    v163 = *(HSEMAPHORE *)(v192 + 4);
    v10 = *(_DWORD *)(v192 + 4 * (unsigned __int8)v172 + 3940);
    v182 = v10;
    v11 = *(_DWORD *)(v192 + 4 * HIBYTE(v172) + 4964);
    v181 = v11;
    v183 = *(_DWORD *)(v192 + 4 * v173 + 5988);
    EngReleaseSemaphore(v163);
    v12 = *(_BYTE *)(v186 + 31);
    if ( v12 > 0xF9u )
    {
      if ( v12 == 0xFA )
      {
        v137 = v190;
        if ( v178 )
        {
          if ( v190 )
          {
            v138 = (unsigned __int16 *)v166[0];
            v139 = (unsigned __int16 *)v187;
            v140 = v184;
            do
            {
              v141 = v182;
              --v137;
              v185 = v138;
              v188 = v5;
              v5 = (unsigned __int16 *)((char *)v5 + v140);
              v180 = (unsigned __int16 *)((char *)v138 + v166[3]);
              v142 = v139;
              v190 = v137;
              v186 = (int)v5;
              if ( v139 )
              {
                v143 = v181;
                v144 = v185 + 1;
                v145 = v183;
                v192 = (size_t)(v185 + 1);
                do
                {
                  v146 = *((unsigned __int16 *)v144 + 1);
                  v185 = (unsigned __int16 *)((char *)v142 - 1);
                  v147 = (unsigned int)&loc_1C0000 & (v143 - *(unsigned __int16 *)v192) | (v141
                                                                                         - *((unsigned __int16 *)v144 - 1)) & 0x30000 | (v145 - v146) & 0xE00000;
                  v148 = v188;
                  LOBYTE(v146) = *((_BYTE *)v189 + HIWORD(v147));
                  v142 = v185;
                  *(_BYTE *)v188 = v146;
                  v188 = (unsigned __int16 *)((char *)v148 + 1);
                  v144 = (_BYTE *)(v192 + 6);
                  v192 += 6;
                }
                while ( v142 );
                v5 = (unsigned __int16 *)v186;
                v139 = (unsigned __int16 *)v187;
                v137 = v190;
                v140 = v184;
              }
              v138 = v180;
            }
            while ( v137 );
          }
        }
        else if ( v190 )
        {
          v149 = (unsigned __int16 *)v166[0];
          v150 = (unsigned __int16 *)v187;
          v151 = v184;
          do
          {
            v152 = v182;
            --v137;
            v185 = v149;
            v188 = v5;
            v5 = (unsigned __int16 *)((char *)v5 + v151);
            v180 = (unsigned __int16 *)((char *)v149 + v166[3]);
            v153 = v150;
            v190 = v137;
            v186 = (int)v5;
            if ( v150 )
            {
              v154 = v181;
              v155 = v185 + 1;
              v156 = v183;
              v192 = (size_t)(v185 + 1);
              do
              {
                v157 = *((unsigned __int16 *)v155 + 1);
                v185 = (unsigned __int16 *)((char *)v153 - 1);
                v158 = ((v156 - v157) >> 16) & 0xE0;
                v159 = v188;
                v160 = ((v154 - *(unsigned __int16 *)v192) >> 16) & 0x1C | ((v152 - *((unsigned __int16 *)v155 - 1)) >> 16) & 3 | v158;
                v161 = v192;
                *(_BYTE *)v188 = v160;
                v155 = (_BYTE *)(v161 + 6);
                v153 = v185;
                v188 = (unsigned __int16 *)((char *)v159 + 1);
                v192 = (size_t)v155;
              }
              while ( v185 );
              v5 = (unsigned __int16 *)v186;
              v150 = (unsigned __int16 *)v187;
              v137 = v190;
              v151 = v184;
            }
            v149 = v180;
          }
          while ( v137 );
        }
      }
      else if ( v12 == 0xFB )
      {
        v127 = v190;
        v175 = (unsigned __int16 *)((char *)*(&dwGrayIdxHB + (unsigned __int8)((unsigned __int16)(v11 + v10 + v183) >> 8))
                                  + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v11 + v10 + v183)]);
        if ( v190 )
        {
          v128 = v166[0];
          v129 = (unsigned __int16 *)v187;
          v130 = v184;
          do
          {
            v131 = v128;
            v185 = v5;
            --v127;
            v128 += v166[3];
            v190 = v127;
            v5 = (unsigned __int16 *)((char *)v5 + v130);
            v174 = v128;
            v186 = (int)v5;
            v180 = v129;
            if ( v129 )
            {
              v132 = v185;
              v133 = (unsigned __int16 *)(v131 + 2);
              v134 = v180;
              v135 = v175;
              do
              {
                v136 = *v133;
                v133 += 3;
                *(_BYTE *)v132 = BYTE1(v168[3]) ^ (((unsigned int)v135 - v136) >> 12);
                v132 = (unsigned __int16 *)((char *)v132 + 1);
                v134 = (unsigned __int16 *)((char *)v134 - 1);
              }
              while ( v134 );
              v5 = (unsigned __int16 *)v186;
              v129 = (unsigned __int16 *)v187;
              v127 = v190;
              v130 = v184;
              v128 = v174;
            }
          }
          while ( v127 );
        }
      }
      else if ( v12 <= 0xFDu )
      {
        v115 = v190;
        if ( v190 )
        {
          v116 = (unsigned __int16 *)v166[0];
          v117 = (_BYTE *)(v187 >> 1);
          v118 = v187 & 1;
          v180 = (unsigned __int16 *)(v187 >> 1);
          v187 = v118;
          do
          {
            --v115;
            v192 = (size_t)v5;
            v5 = (unsigned __int16 *)((char *)v5 + v184);
            v175 = (unsigned __int16 *)((char *)v116 + v166[3]);
            v119 = v182;
            v190 = v115;
            v189 = v116;
            v186 = (int)v5;
            if ( v117 )
            {
              v120 = v181;
              v121 = v183;
              do
              {
                v122 = v116[1];
                v185 = (unsigned __int16 *)(v117 - 1);
                v123 = v120 - v122;
                v124 = v192;
                v125 = v168[2] & (v121 - v189[5]) | v168[1] & (v120 - v189[4]) | v168[0] & (v119 - v189[3]) | ((v168[0] & (v119 - *v189) | v168[2] & (v121 - v116[2]) | v168[1] & v123) >> 16);
                v116 = v189 + 6;
                *(_DWORD *)v192 = v168[3] ^ v125;
                v117 = v185;
                v192 = v124 + 4;
                v189 = v116;
              }
              while ( v185 );
              v5 = (unsigned __int16 *)v186;
              v118 = v187;
              v115 = v190;
            }
            if ( v118 )
            {
              v118 = v187;
              *(_WORD *)v192 = HIWORD(v168[3]) ^ (((v119 - *v189) >> 16) & HIWORD(v168[0]) | ((v181 - v189[1]) >> 16) & HIWORD(v168[1]) | ((v183 - v116[2]) >> 16) & HIWORD(v168[2]));
              v115 = v190;
            }
            v117 = v180;
            v116 = v175;
          }
          while ( v115 );
        }
      }
      else if ( v12 == 0xFE )
      {
        v103 = v190;
        if ( v190 )
        {
          v104 = (unsigned __int16 *)v166[0];
          v105 = (unsigned __int16 *)v187;
          v106 = v184;
          do
          {
            v107 = v182;
            --v103;
            v185 = v104;
            v188 = v5;
            v5 = (unsigned __int16 *)((char *)v5 + v106);
            v180 = (unsigned __int16 *)((char *)v104 + v166[3]);
            v108 = v105;
            v190 = v103;
            v186 = (int)v5;
            if ( v105 )
            {
              v109 = v181;
              v110 = v185 + 2;
              v111 = v183;
              v192 = (size_t)(v185 + 2);
              do
              {
                v112 = *((unsigned __int16 *)v110 - 2);
                v185 = (unsigned __int16 *)((char *)v108 - 1);
                v113 = (v111 - *(unsigned __int16 *)v192) & 0x70000 | (v109 - *((unsigned __int16 *)v110 - 1)) & 0x380000 | (v107 - v112) & 0x1C00000;
                v114 = v188;
                LOBYTE(v112) = VGA256Xlate[HIWORD(v113)];
                v108 = v185;
                *(_BYTE *)v188 = v112;
                v188 = (unsigned __int16 *)((char *)v114 + 1);
                v110 = (_BYTE *)(v192 + 6);
                v192 += 6;
              }
              while ( v108 );
              v5 = (unsigned __int16 *)v186;
              v105 = (unsigned __int16 *)v187;
              v103 = v190;
              v106 = v184;
            }
            v104 = v180;
          }
          while ( v103 );
        }
      }
      else
      {
        v93 = v190;
        if ( v190 )
        {
          v94 = (unsigned __int16 *)v166[0];
          v95 = (_BYTE *)(v187 >> 1);
          v96 = v187 & 1;
          v180 = (unsigned __int16 *)(v187 >> 1);
          v187 = v96;
          do
          {
            --v93;
            v192 = (size_t)v5;
            v5 = (unsigned __int16 *)((char *)v5 + v184);
            v175 = (unsigned __int16 *)((char *)v94 + v166[3]);
            v97 = v182;
            v190 = v93;
            v189 = v94;
            v186 = (int)v5;
            if ( v95 )
            {
              v98 = v181;
              v99 = v183;
              do
              {
                v100 = v94[4];
                v185 = (unsigned __int16 *)(v95 - 1);
                v101 = v168[0] & (v97 - *v189) | v168[3] & (v97 - v189[3]) | v168[2] & (v99 - v189[2]) | v168[1] & (v98 - v189[1]) | v168[5] & (v99 - v94[5]) | v168[4] & (v98 - v100);
                v102 = v192;
                LOBYTE(v100) = VGA16Xlate[(v101 ^ 0x770000u) >> 16];
                v95 = v185;
                *(_BYTE *)v192 = v100;
                v192 = v102 + 1;
                v94 = v189 + 6;
                v189 += 6;
              }
              while ( v95 );
              v5 = (unsigned __int16 *)v186;
              v96 = v187;
              v93 = v190;
            }
            if ( v96 )
            {
              *(_BYTE *)v192 = VGA16Xlate[((v168[0] & (v97 - *v189) | v168[2] & (v183 - v94[2]) | v168[1] & (v181 - v94[1])) ^ 0x700000) >> 16];
              v93 = v190;
            }
            v95 = v180;
            v94 = v175;
          }
          while ( v93 );
        }
      }
      return v167;
    }
    if ( v12 >= 0xF8u )
    {
      v81 = v190;
      if ( v190 )
      {
        v82 = (unsigned __int16 *)v166[0];
        v83 = (unsigned __int16 *)v187;
        v84 = v184;
        do
        {
          v85 = v182;
          --v81;
          v185 = v82;
          v188 = v5;
          v5 = (unsigned __int16 *)((char *)v5 + v84);
          v180 = (unsigned __int16 *)((char *)v82 + v166[3]);
          v86 = v83;
          v190 = v81;
          v186 = (int)v5;
          if ( v83 )
          {
            v87 = v181;
            v88 = v185 + 1;
            v89 = v183;
            v192 = (size_t)(v185 + 1);
            do
            {
              v90 = *((unsigned __int16 *)v88 + 1);
              v185 = (unsigned __int16 *)((char *)v86 - 1);
              v91 = (v87 - *(unsigned __int16 *)v192) & 0x380000 | (v85 - *((unsigned __int16 *)v88 - 1)) & 0x70000 | (v89 - v90) & 0x1C00000;
              v92 = v188;
              LOBYTE(v90) = *((_BYTE *)v189 + HIWORD(v91));
              v86 = v185;
              *(_BYTE *)v188 = v90;
              v188 = (unsigned __int16 *)((char *)v92 + 1);
              v88 = (_BYTE *)(v192 + 6);
              v192 += 6;
            }
            while ( v86 );
            v5 = (unsigned __int16 *)v186;
            v83 = (unsigned __int16 *)v187;
            v81 = v190;
            v84 = v184;
          }
          v82 = v180;
        }
        while ( v81 );
      }
      return v167;
    }
    if ( v12 == 1 )
    {
      v180 = (unsigned __int16 *)(((v11 + v10 + v183) ^ 0xFFF0) >> 4);
      v191 = (((unsigned __int16)v188 & 0x4000) != 0) - 1;
      v72 = v166[0];
      v73 = v185;
      v74 = v191;
      do
      {
        v165 = v72;
        v162 = v73;
        v75 = (char)v175;
        for ( i = (unsigned int)v175 >> 3; i; --i )
        {
          _AL = 0;
          __asm { rcl     al, 1 }
          __asm { rcl     al, 1 }
          __asm { rcl     al, 1 }
          __asm { rcl     al, 1 }
          __asm { rcl     al, 1 }
          __asm { rcl     al, 1 }
          __asm { rcl     al, 1 }
          __asm { rcl     al, 1 }
          *(_BYTE *)v73 = v74 ^ _AL;
          v73 = (unsigned __int16 *)((char *)v73 + 1);
          v72 += 48;
        }
        v78 = v75 & 7;
        if ( v78 )
        {
          v79 = 8 - v78;
          _AL = 0;
          do
          {
            __asm { rcl     al, 1 }
            v72 += 6;
            --v78;
          }
          while ( v78 );
          *(_BYTE *)v73 = (v74 ^ _AL) << v79;
        }
        v72 = v166[3] + v165;
        v73 = (unsigned __int16 *)((char *)v162 + v174);
        --v190;
      }
      while ( v190 );
      return v167;
    }
    if ( v12 == 2 )
    {
      v191 = ((unsigned __int16)v188 & 0x4000) != 0 ? 0 : 0x77;
      v55 = v190;
      if ( v190 )
      {
        v56 = (unsigned __int16 *)v166[0];
        v57 = (unsigned __int16 *)(v187 >> 1);
        v58 = v187 & 1;
        v180 = (unsigned __int16 *)(v187 >> 1);
        v187 = v58;
        do
        {
          v59 = v181;
          --v55;
          v189 = v56;
          v177 = (unsigned int)v5;
          v185 = (unsigned __int16 *)((char *)v56 + v166[3]);
          v60 = v57;
          v186 = (int)v5 + v184;
          v61 = v189;
          v190 = v55;
          if ( v57 )
          {
            v178 = HIWORD(v168[3]);
            v62 = v182;
            v170 = (unsigned __int16 *)HIWORD(v168[4]);
            v174 = HIWORD(v168[5]);
            v171 = HIWORD(v168[1]);
            v169 = HIWORD(v168[2]);
            v176 = HIWORD(v168[0]);
            do
            {
              v63 = v61[5];
              v175 = (unsigned __int16 *)((char *)v60 - 1);
              v64 = v183 - v63;
              v65 = v61[2];
              v192 = v64;
              v66 = v59 - v61[4];
              v67 = v59 - v61[1];
              LOBYTE(v64) = v169 & ((v183 - v65) >> 16);
              v188 = (unsigned __int16 *)(v62 - v189[3]);
              v68 = HIWORD(v192);
              v179 = v62 - *v189;
              LOBYTE(v68) = v64 | v174 & BYTE2(v192);
              v192 = v68;
              LOBYTE(v64) = v171 & BYTE2(v67) | (unsigned __int8)v170 & BYTE2(v66) | v68;
              v61 = v189 + 6;
              v59 = v181;
              v189 += 6;
              v69 = v177;
              *(_BYTE *)v177 = v191 ^ (v176 & BYTE2(v179) | v178 & BYTE2(v188) | v64);
              v60 = v175;
              v177 = v69 + 1;
            }
            while ( v175 );
            v58 = v187;
            v55 = v190;
          }
          if ( v58 )
          {
            v70 = (v183 - v61[2]) >> 16;
            v71 = (v59 - v61[1]) >> 16;
            v175 = (unsigned __int16 *)(v182 - *v61);
            *(_BYTE *)v177 = v191 ^ (BYTE2(v175) & BYTE2(v168[0]) | v71 & BYTE2(v168[1]) | v70 & BYTE2(v168[2]));
            v55 = v190;
          }
          v5 = (unsigned __int16 *)v186;
          v57 = v180;
          v56 = v185;
        }
        while ( v55 );
      }
      return v167;
    }
    if ( v12 <= 4u )
      return -11;
    if ( v12 <= 6u )
    {
      *((_BYTE *)Src + BYTE1(v166[6])) = ~(_BYTE)v183;
      *((_BYTE *)Src + BYTE2(v166[6])) = ~(_BYTE)v181;
      *((_BYTE *)Src + HIBYTE(v166[6])) = ~(_BYTE)v182;
      if ( v12 == 5 )
      {
        v49 = 3 * v187;
        v164 = 3;
      }
      else
      {
        v49 = 4 * v187;
        *((_BYTE *)Src + 3) = 0;
        v164 = 4;
      }
      v50 = v164;
      v192 = v49;
      v51 = (char *)Src + v164;
      v178 = (unsigned int)Src + v164;
      v52 = v49 - v164;
      if ( v49 != v164 )
      {
        do
        {
          v53 = v50;
          v188 = (unsigned __int16 *)v50;
          if ( v50 > v52 )
          {
            v53 = v52;
            v188 = (unsigned __int16 *)v52;
          }
          memcpy(v51, Src, v53);
          v50 += (size_t)v188;
          v51 = (char *)v188 + v178;
          v178 += (unsigned int)v188;
          v52 -= (unsigned int)v188;
        }
        while ( v52 );
        v49 = v192;
      }
      v54 = v190;
      while ( --v54 )
      {
        v5 = (unsigned __int16 *)((char *)v5 + v184);
        memcpy(v5, Src, v49);
        v49 = v192;
      }
      return v167;
    }
    if ( v12 <= 0xF4u )
      return -11;
    if ( v12 <= 0xF6u )
    {
      v36 = v190;
      if ( v190 )
      {
        v37 = v166[0];
        v38 = (_BYTE *)v187;
        v39 = v184;
        v40 = v166[3];
        do
        {
          --v36;
          v174 = v37;
          v37 += v40;
          v179 = (unsigned int)v5;
          v5 = (unsigned __int16 *)((char *)v5 + v39);
          v190 = v36;
          v171 = v37;
          v186 = (int)v5;
          v177 = (unsigned int)v38;
          if ( v38 )
          {
            v41 = v182;
            v42 = v183;
            v43 = v183 >= v181;
            v193 = v183;
            v44 = (unsigned __int16 *)(v174 + 4);
            v194 = v181;
            v196 = v182;
            v195 = v182;
            v169 = *(&v193 + v43);
            v45 = v177;
            v170 = (unsigned __int16 *)v43;
            v176 = v174 + 4;
            do
            {
              v46 = (unsigned __int16 *)*(v44 - 2);
              v177 = v45 - 1;
              v188 = v46;
              v192 = *(v44 - 1);
              v178 = *v44;
              v191 = BYTE2(v168[3]);
              v47 = *(&v193 + (v43 | (v169 < v41 ? 0 : 2))) >> 21;
              if ( v47 < v178 && v47 < v192 && v47 < (unsigned int)v188 )
              {
                v44 = (unsigned __int16 *)v176;
                v43 = (BOOL)v170;
                v191 = *((_BYTE *)v189
                       + (((unsigned int)&loc_1C0000 & (v42 - v178) & (v178 - v168[2]) | (v181 - v192) & (v192 - v168[1]) & 0x38000 | (unsigned __int16)(v182 - (_WORD)v188) & (unsigned __int16)((_WORD)v188 - LOWORD(v168[0])) & 0x7000) >> 12));
              }
              v48 = v179;
              v44 += 3;
              v176 = (unsigned int)v44;
              *(_BYTE *)v179 = v191;
              v41 = v182;
              v179 = v48 + 1;
              v45 = v177;
            }
            while ( v177 );
            v5 = (unsigned __int16 *)v186;
            v38 = (_BYTE *)v187;
            v39 = v184;
            v36 = v190;
            v37 = v171;
            v40 = v166[3];
          }
        }
        while ( v36 );
      }
    }
    else
    {
      v13 = v190;
      if ( v178 )
      {
        if ( v190 )
        {
          v14 = (unsigned __int16 *)v166[0];
          v15 = v187;
          v16 = v184;
          v17 = v166[3];
          do
          {
            --v13;
            v188 = v14;
            v14 = (unsigned __int16 *)((char *)v14 + v17);
            v178 = (unsigned int)v5;
            v5 = (unsigned __int16 *)((char *)v5 + v16);
            v190 = v13;
            v169 = (unsigned int)v14;
            v186 = (int)v5;
            v179 = v15;
            if ( v15 )
            {
              v18 = v182;
              v19 = v183;
              v20 = v183 >= v181;
              v193 = v183;
              v21 = v188 + 2;
              v194 = v181;
              v196 = v182;
              v195 = v182;
              v171 = *(&v193 + v20);
              v22 = v179;
              v170 = (unsigned __int16 *)v20;
              v188 += 2;
              do
              {
                v23 = *(v21 - 2);
                v179 = v22 - 1;
                v192 = v23;
                v176 = *(v21 - 1);
                v177 = *v21;
                v191 = BYTE2(v168[3]);
                v24 = *(&v193 + (v20 | (v171 < v18 ? 0 : 2))) >> 21;
                if ( v24 < v177 && v24 < v176 && v24 < v192 )
                {
                  v21 = v188;
                  v20 = (BOOL)v170;
                  v191 = *((_BYTE *)v189
                         + (((v19 - v177) & (v177 - v168[2]) & 0xE0000 | (v181 - v176) & (v176 - v168[1]) & 0x1C000 | (unsigned __int16)(v182 - v192) & (unsigned __int16)(v192 - LOWORD(v168[0])) & 0x3000) >> 12));
                }
                v25 = v178;
                v21 += 3;
                v188 = v21;
                *(_BYTE *)v178 = v191;
                v18 = v182;
                v178 = v25 + 1;
                v22 = v179;
              }
              while ( v179 );
              v5 = (unsigned __int16 *)v186;
              v15 = v187;
              v13 = v190;
              v16 = v184;
              v14 = (unsigned __int16 *)v169;
              v17 = v166[3];
            }
          }
          while ( v13 );
        }
      }
      else if ( v190 )
      {
        v26 = v166[0];
        v27 = v187;
        v28 = v184;
        v29 = v166[3];
        do
        {
          --v13;
          v169 = v26;
          v26 += v29;
          v170 = v5;
          v5 = (unsigned __int16 *)((char *)v5 + v28);
          v190 = v13;
          v174 = v26;
          v186 = (int)v5;
          v192 = v27;
          if ( v27 )
          {
            v30 = v182;
            v31 = v170;
            v178 = v183 >= v181;
            v32 = (unsigned __int16 *)(v169 + 4);
            v193 = v183;
            v194 = v181;
            v196 = v182;
            v195 = v182;
            v171 = *(&v193 + v178);
            v33 = v192;
            v188 = (unsigned __int16 *)(v169 + 4);
            do
            {
              v192 = v33 - 1;
              v179 = *(&v193 + (v178 | (v171 < v30 ? 0 : 2))) >> 21;
              v189 = (unsigned __int16 *)*(v32 - 2);
              v177 = *(v32 - 1);
              v176 = *v32;
              v34 = BYTE2(v168[3]);
              v30 = v182;
              if ( v179 < v176 && v179 < v177 && v179 < (unsigned int)v189 )
              {
                v35 = (v176 - v168[2]) >> 12;
                LOBYTE(v35) = ((v183 - v176) >> 12) & v35;
                v179 = v35 & 0xFFFFFFE0;
                LOBYTE(v179) = ((v182 - (unsigned int)v189) >> 12) & (((unsigned int)v189 - v168[0]) >> 12) & 3 | v35 & 0xE0;
                v34 = ((v181 - v177) >> 12) & ((v177 - v168[1]) >> 12) & 0x1C | v179;
                v32 = v188;
              }
              *(_BYTE *)v31 = v34;
              v32 += 3;
              v33 = v192;
              v31 = (unsigned __int16 *)((char *)v31 + 1);
              v188 = v32;
            }
            while ( v192 );
            v5 = (unsigned __int16 *)v186;
            v27 = v187;
            v13 = v190;
            v28 = v184;
            v26 = v174;
            v29 = v166[3];
          }
        }
        while ( v13 );
      }
    }
  }
  else
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 4));
  }
  return v167;
}
