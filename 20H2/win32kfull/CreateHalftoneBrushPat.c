/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C0262424
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C0260D58 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     CachedHalftonePattern @ 0x1C006E360 (CachedHalftonePattern.c)
 *     ComputeRGBLUTAA @ 0x1C006E550 (ComputeRGBLUTAA.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ComputeBGRMappingTable @ 0x1C0261348 (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, HSEMAPHORE *a4, int a5)
{
  __int64 v8; // r12
  unsigned int v10; // edi
  __int128 v11; // xmm0
  unsigned int v12; // r14d
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  unsigned __int8 v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rdx
  HSEMAPHORE *v22; // rax
  HSEMAPHORE *v23; // r8
  _BYTE *v24; // r11
  unsigned int v25; // r10d
  __int64 v26; // r14
  unsigned int v27; // r9d
  unsigned __int16 *v28; // r8
  char v29; // dl
  unsigned int v30; // ecx
  HSEMAPHORE *v31; // r9
  _BYTE *v32; // r11
  unsigned int v33; // r10d
  unsigned __int16 *v34; // r9
  unsigned int v35; // eax
  char v36; // dl
  __int64 v37; // rcx
  __int64 v38; // rdx
  HSEMAPHORE *v39; // rax
  HSEMAPHORE *v40; // r8
  _BYTE *v41; // r11
  unsigned int v42; // r10d
  __int64 v43; // r14
  unsigned int v44; // r9d
  unsigned __int16 *v45; // r8
  char v46; // dl
  unsigned int v47; // ecx
  unsigned int v48; // r15d
  unsigned int v49; // r13d
  char *v50; // r12
  unsigned int v51; // r14d
  unsigned int v52; // eax
  __int64 v53; // rbx
  HSEMAPHORE *v54; // r14
  int k; // edi
  char v56; // r10
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rdx
  int v60; // r14d
  unsigned __int16 *v61; // r11
  unsigned int v62; // eax
  unsigned __int16 *v63; // r8
  unsigned int v64; // ecx
  unsigned __int16 *v65; // rdi
  int v66; // esi
  unsigned int v67; // edx
  unsigned int v68; // r8d
  char v69; // r11
  unsigned int v70; // r9d
  int v71; // eax
  char v72; // r11
  _BYTE *v73; // rdx
  unsigned int v74; // r8d
  char v75; // r9
  __int64 v76; // rax
  unsigned int v77; // r12d
  __int64 v78; // rcx
  int v79; // r14d
  unsigned __int16 *v80; // r15
  unsigned int v81; // r12d
  unsigned __int16 *v82; // r10
  _BYTE *v83; // r13
  unsigned int j; // r11d
  char v85; // dl
  int v86; // eax
  unsigned int v87; // ecx
  int v88; // r11d
  int v89; // eax
  unsigned __int16 *v90; // r10
  unsigned int v91; // edx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r11
  __int64 v95; // r8
  _BYTE *v96; // r9
  unsigned int v97; // r10d
  __int64 v98; // r14
  unsigned __int16 *v99; // r8
  int v100; // eax
  unsigned __int64 v101; // rdx
  __int64 v102; // rax
  unsigned int v103; // r10d
  __int64 v104; // rcx
  int v105; // r14d
  unsigned __int16 *v106; // r11
  unsigned int v107; // r10d
  unsigned __int16 *v108; // r9
  unsigned __int64 v109; // rsi
  _BYTE *v110; // r14
  unsigned __int64 v111; // r11
  unsigned __int64 v112; // rdi
  int v113; // eax
  unsigned __int64 v114; // r8
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r11
  __int64 v118; // r8
  _BYTE *v119; // r9
  unsigned int v120; // r10d
  unsigned __int16 *v121; // r8
  int v122; // eax
  unsigned __int64 v123; // rdx
  __int64 v124; // rcx
  unsigned int v125; // r10d
  __int64 v126; // rdx
  int v127; // r14d
  unsigned __int16 *v128; // rax
  unsigned int v129; // r10d
  unsigned __int16 *v130; // r9
  HSEMAPHORE *v131; // r11
  unsigned int i; // r8d
  unsigned int v133; // edx
  int v134; // eax
  int v135; // ecx
  int v137; // r10d
  __int64 v138; // r15
  __int64 v139; // r11
  __int64 v140; // rdx
  _BYTE *v141; // r8
  unsigned int v142; // r9d
  unsigned __int16 *v143; // rdx
  int v144; // eax
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // r11
  __int64 v148; // r8
  _BYTE *v149; // r9
  unsigned int v150; // r10d
  __int64 v151; // r14
  unsigned __int16 *v152; // r8
  int v153; // eax
  unsigned __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rdx
  unsigned __int64 v157; // rax
  unsigned __int64 v158; // r9
  _BYTE *v159; // r10
  unsigned int v160; // r11d
  unsigned __int16 *v161; // r9
  int v162; // eax
  char v163; // dl
  unsigned int v164; // ecx
  int v165; // [rsp+34h] [rbp-CCh]
  unsigned int v166; // [rsp+34h] [rbp-CCh]
  unsigned int v167; // [rsp+34h] [rbp-CCh]
  unsigned int v168; // [rsp+34h] [rbp-CCh]
  unsigned int v169; // [rsp+38h] [rbp-C8h]
  int v170; // [rsp+38h] [rbp-C8h]
  int v171; // [rsp+38h] [rbp-C8h]
  int v172; // [rsp+38h] [rbp-C8h]
  unsigned int v173; // [rsp+3Ch] [rbp-C4h]
  unsigned int v174; // [rsp+3Ch] [rbp-C4h]
  unsigned int v175; // [rsp+3Ch] [rbp-C4h]
  int v176; // [rsp+3Ch] [rbp-C4h]
  int v177; // [rsp+3Ch] [rbp-C4h]
  __int16 v178; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v179; // [rsp+46h] [rbp-BAh]
  __int128 v180; // [rsp+48h] [rbp-B8h]
  __int64 v181; // [rsp+58h] [rbp-A8h]
  HSEMAPHORE *v182; // [rsp+60h] [rbp-A0h]
  _BYTE *v183; // [rsp+68h] [rbp-98h]
  __int64 v184; // [rsp+70h] [rbp-90h]
  unsigned int v185; // [rsp+78h] [rbp-88h]
  _QWORD v186[10]; // [rsp+80h] [rbp-80h] BYREF
  int v187; // [rsp+D0h] [rbp-30h]
  int v188; // [rsp+D4h] [rbp-2Ch]
  unsigned int v189; // [rsp+D8h] [rbp-28h]
  int v190; // [rsp+DCh] [rbp-24h]
  unsigned int v191; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v192; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v193; // [rsp+F0h] [rbp-10h]
  unsigned int v194; // [rsp+F8h] [rbp-8h]
  unsigned int v195; // [rsp+FCh] [rbp-4h]

  v183 = (_BYTE *)a3;
  v182 = (HSEMAPHORE *)a1;
  v8 = 0LL;
  memset(v186, 0, 0x48uLL);
  v178 = 0;
  v179 = 0;
  ComputeRGBLUTAA((_DWORD *)a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(a1, a3, a2, &v178) == 1 )
  {
    v191 = CachedHalftonePattern(a1, a3, (__int64)v186, 0, 0, 0);
    v10 = v191;
    if ( (int)v191 > 0 )
    {
      v11 = *(_OWORD *)(a1 + 3960);
      v12 = *(unsigned __int16 *)(a1 + 166);
      v13 = *(_DWORD *)(a3 + 56);
      v14 = *(unsigned __int16 *)(a1 + 170);
      v169 = v12;
      v181 = *(_QWORD *)(a1 + 3976);
      v180 = v11;
      if ( (v13 & 0x400000) != 0 )
        v8 = (__int64)*(&p8BPPXlate + BYTE12(v180));
      v15 = a1 + 548;
      v165 = v13 & 0x2000000;
      if ( (v13 & 0x2000000) == 0 )
        v15 = v8;
      v184 = v15;
      v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v178 + 3984);
      v17 = *(_DWORD *)(a1 + 4LL * ((unsigned int)HIBYTE(v178) + 256) + 3984);
      v18 = *(_DWORD *)(a1 + 4LL * ((unsigned int)v179 + 512) + 3984);
      EngReleaseSemaphore(v182[1]);
      v19 = v183[31];
      if ( v19 > 0xF9u )
      {
        if ( v19 == 0xFA )
        {
          if ( v14 )
          {
            if ( v165 )
            {
              v145 = SLODWORD(v186[3]);
              v146 = a5;
              v147 = v186[0];
              do
              {
                v148 = v147;
                v149 = a4;
                v147 += v145;
                a4 = (HSEMAPHORE *)((char *)a4 + v146);
                --v14;
                v150 = v12;
                if ( v12 )
                {
                  v151 = v184;
                  v152 = (unsigned __int16 *)(v148 + 2);
                  do
                  {
                    v153 = *v152;
                    v154 = (v16 - *(v152 - 1)) & 0x30000 | (unsigned __int64)((v18 - v152[1]) & 0xE00000);
                    v152 += 3;
                    *v149++ = *(_BYTE *)((((v17 - v153) & 0x1C0000 | v154) >> 16) + v151);
                    --v150;
                  }
                  while ( v150 );
                  v12 = v169;
                  v145 = SLODWORD(v186[3]);
                  v146 = a5;
                }
              }
              while ( v14 );
            }
            else
            {
              v155 = SLODWORD(v186[3]);
              v156 = a5;
              v157 = v186[0];
              do
              {
                v158 = v157;
                v159 = a4;
                v157 += v155;
                a4 = (HSEMAPHORE *)((char *)a4 + v156);
                --v14;
                v193 = v157;
                v160 = v12;
                if ( v12 )
                {
                  v161 = (unsigned __int16 *)(v158 + 2);
                  do
                  {
                    v162 = *v161;
                    v163 = ((v18 - v161[1]) >> 16) & 0xE0;
                    v164 = (v16 - *(v161 - 1)) >> 16;
                    v161 += 3;
                    *v159++ = ((v17 - v162) >> 16) & 0x1C | v164 & 3 | v163;
                    --v160;
                  }
                  while ( v160 );
                  v157 = v193;
                  v155 = SLODWORD(v186[3]);
                  v156 = a5;
                }
              }
              while ( v14 );
            }
          }
        }
        else if ( v19 == 0xFB )
        {
          v137 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v16 + v17 + v18) >> 8)]
               + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v16 + v17 + v18)];
          if ( v14 )
          {
            v138 = SLODWORD(v186[3]);
            v139 = v186[0];
            do
            {
              v140 = v139;
              v141 = a4;
              v139 += v138;
              a4 = (HSEMAPHORE *)((char *)a4 + a5);
              --v14;
              v142 = v12;
              if ( v12 )
              {
                v143 = (unsigned __int16 *)(v140 + 2);
                do
                {
                  v144 = *v143;
                  v143 += 3;
                  *v141++ = BYTE13(v180) ^ ((unsigned int)(v137 - v144) >> 12);
                  --v142;
                }
                while ( v142 );
              }
            }
            while ( v14 );
          }
        }
        else if ( v19 <= 0xFDu )
        {
          if ( v14 )
          {
            v124 = SLODWORD(v186[3]);
            v125 = v12;
            v126 = a5;
            v127 = v12 & 1;
            v128 = (unsigned __int16 *)v186[0];
            v129 = v125 >> 1;
            do
            {
              v130 = v128;
              v131 = a4;
              a4 = (HSEMAPHORE *)((char *)a4 + v126);
              --v14;
              v193 = (unsigned __int64)v128 + v124;
              for ( i = v129; i; --i )
              {
                v133 = DWORD2(v180) & (v18 - v130[5]) | (((unsigned int)v180 & (v16 - *v130) | DWORD1(v180) & (v17 - v130[1]) | DWORD2(v180) & (v18 - v130[2])) >> 16);
                v134 = v130[3];
                v135 = DWORD1(v180) & (v17 - v130[4]);
                v130 += 6;
                *(_DWORD *)v131 = HIDWORD(v180) ^ (v180 & (v16 - v134) | v135 | v133);
                v131 = (HSEMAPHORE *)((char *)v131 + 4);
              }
              if ( v127 )
                *(_WORD *)v131 = HIWORD(v180) ^ (WORD1(v180) & ((v16 - *v130) >> 16) | WORD3(v180) & ((v17 - v130[1]) >> 16) | WORD5(v180) & ((v18 - v130[2]) >> 16));
              v128 = (unsigned __int16 *)v193;
              v124 = SLODWORD(v186[3]);
              v126 = a5;
            }
            while ( v14 );
          }
        }
        else if ( v19 == 0xFE )
        {
          if ( v14 )
          {
            v115 = SLODWORD(v186[3]);
            v116 = a5;
            v117 = v186[0];
            do
            {
              v118 = v117;
              v119 = a4;
              v117 += v115;
              a4 = (HSEMAPHORE *)((char *)a4 + v116);
              --v14;
              v120 = v12;
              if ( v12 )
              {
                v121 = (unsigned __int16 *)(v118 + 4);
                do
                {
                  v122 = *v121;
                  v123 = (v17 - *(v121 - 1)) & 0x380000 | (unsigned __int64)((v16 - *(v121 - 2)) & 0x1C00000);
                  v121 += 3;
                  *v119++ = VGA256Xlate[((v18 - v122) & 0x70000 | v123) >> 16];
                  --v120;
                }
                while ( v120 );
                v12 = v169;
                v115 = SLODWORD(v186[3]);
                v116 = a5;
              }
            }
            while ( v14 );
          }
        }
        else if ( v14 )
        {
          v102 = SLODWORD(v186[3]);
          v103 = v12;
          v104 = a5;
          v105 = v12 & 1;
          v106 = (unsigned __int16 *)v186[0];
          v107 = v103 >> 1;
          v185 = v107;
          v172 = v105;
          do
          {
            --v14;
            v183 = a4;
            a4 = (HSEMAPHORE *)((char *)a4 + v104);
            v177 = v14;
            v108 = v106;
            v182 = a4;
            v106 = (unsigned __int16 *)((char *)v106 + v102);
            v193 = (unsigned __int64)v106;
            if ( v107 )
            {
              v109 = HIDWORD(v180);
              v110 = v183;
              v111 = HIDWORD(v181);
              v112 = (unsigned int)v181;
              do
              {
                v113 = *v108;
                v114 = ((unsigned __int64)DWORD2(v180) >> 16) & ((unsigned __int64)(v18 - v108[2]) >> 16) | ((unsigned __int64)DWORD1(v180) >> 16) & ((unsigned __int64)(v17 - v108[1]) >> 16) | (v111 >> 16) & ((unsigned __int64)(v18 - v108[5]) >> 16) | (v112 >> 16) & ((unsigned __int64)(v17 - v108[4]) >> 16) | (v109 >> 16) & ((unsigned __int64)(v16 - v108[3]) >> 16);
                v108 += 6;
                *v110++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v180 >> 16) & ((unsigned __int64)(v16 - v113) >> 16) | v114) ^ 0x77];
                --v107;
              }
              while ( v107 );
              v14 = v177;
              a4 = v182;
              v107 = v185;
              v106 = (unsigned __int16 *)v193;
              v183 = v110;
              v105 = v172;
            }
            if ( v105 )
              *v183 = VGA16Xlate[(((unsigned int)v180 & (v16 - *v108) | DWORD1(v180) & (v17 - v108[1]) | (unsigned __int64)(DWORD2(v180) & (v18 - v108[2]))) ^ 0x700000) >> 16];
            v102 = SLODWORD(v186[3]);
            v104 = a5;
          }
          while ( v14 );
        }
        return v191;
      }
      if ( v19 >= 0xF8u )
      {
        if ( v14 )
        {
          v92 = SLODWORD(v186[3]);
          v93 = a5;
          v94 = v186[0];
          do
          {
            v95 = v94;
            v96 = a4;
            v94 += v92;
            a4 = (HSEMAPHORE *)((char *)a4 + v93);
            --v14;
            v97 = v12;
            if ( v12 )
            {
              v98 = v184;
              v99 = (unsigned __int16 *)(v95 + 2);
              do
              {
                v100 = *v99;
                v101 = (v16 - *(v99 - 1)) & 0x70000 | (unsigned __int64)((v18 - v99[1]) & 0x1C00000);
                v99 += 3;
                *v96++ = *(_BYTE *)((((v17 - v100) & 0x380000 | v101) >> 16) + v98);
                --v97;
              }
              while ( v97 );
              v12 = v169;
              v92 = SLODWORD(v186[3]);
              v93 = a5;
            }
          }
          while ( v14 );
        }
        return v191;
      }
      if ( v19 == 1 )
      {
        v74 = ((v16 + v17 + v18) ^ 0xFFF0) >> 4;
        v75 = -((v13 & 0x4000) == 0);
        if ( v14 )
        {
          v76 = SLODWORD(v186[3]);
          v77 = v12;
          v78 = a5;
          v79 = v12 & 7;
          v80 = (unsigned __int16 *)v186[0];
          v81 = v77 >> 3;
          do
          {
            v82 = v80;
            v83 = a4;
            v80 = (unsigned __int16 *)((char *)v80 + v76);
            a4 = (HSEMAPHORE *)((char *)a4 + v78);
            --v14;
            v193 = (unsigned __int64)v80;
            for ( j = v81; j; --j )
            {
              v85 = ((v74 - v82[7]) >> 16) & 0x20 | ((v74 - v82[16]) >> 16) & 4 | ((v74 - v82[19]) >> 16) & 2 | ((v74 - v82[4]) >> 16) & 0x40 | ((v74 - v82[22]) >> 16) & 1 | ((v74 - v82[1]) >> 16) & 0x80;
              v86 = v82[10];
              v87 = (v74 - v82[13]) >> 16;
              v82 += 24;
              *v83++ = v75 ^ (((v74 - v86) >> 16) & 0x10 | v87 & 8 | v85);
            }
            v88 = v79;
            if ( v79 )
            {
              v89 = 0;
              v90 = v82 + 1;
              do
              {
                v91 = v74 - *v90;
                v90 += 3;
                v89 = (2 * v89) | v91 & 0x10000;
                --v88;
              }
              while ( v88 );
              v171 = v89;
              v80 = (unsigned __int16 *)v193;
              BYTE2(v171) = v75 ^ BYTE2(v89);
              *v83 = (unsigned int)(v171 << (8 - v79)) >> 16;
            }
            v76 = SLODWORD(v186[3]);
            v78 = a5;
          }
          while ( v14 );
        }
        return v191;
      }
      if ( v19 == 2 )
      {
        v56 = (v13 & 0x4000) == 0 ? 0x77 : 0;
        if ( v14 )
        {
          v57 = SLODWORD(v186[3]);
          v58 = v12;
          v59 = a5;
          v60 = v12 & 1;
          v61 = (unsigned __int16 *)v186[0];
          v62 = v58 >> 1;
          LODWORD(v184) = v62;
          v170 = v60;
          do
          {
            --v14;
            v183 = a4;
            a4 = (HSEMAPHORE *)((char *)a4 + v59);
            v176 = v14;
            v63 = v61;
            v182 = a4;
            v61 = (unsigned __int16 *)((char *)v61 + v57);
            v64 = v62;
            v193 = (unsigned __int64)v61;
            if ( v62 )
            {
              v65 = v63;
              v66 = HIWORD(HIDWORD(v180));
              v189 = WORD1(v181);
              v185 = WORD1(v180);
              v187 = HIWORD(HIDWORD(v181));
              v190 = HIWORD(DWORD1(v180));
              v188 = HIWORD(DWORD2(v180));
              do
              {
                v67 = v17 - v65[4];
                v68 = v17 - v65[1];
                v69 = v188 & ((v18 - v65[2]) >> 16) | v187 & ((v18 - v65[5]) >> 16);
                --v64;
                v70 = v16 - v65[3];
                v71 = *v65;
                v65 += 6;
                v72 = v189 & BYTE2(v67) | v69;
                v73 = v183;
                *v183 = ((v13 & 0x4000) == 0 ? 0x77 : 0) ^ (v185 & ((v16 - v71) >> 16) | v66 & BYTE2(v70) | v190 & BYTE2(v68) | v72);
                v183 = v73 + 1;
              }
              while ( v64 );
              a4 = v182;
              v60 = v170;
              v56 = (v13 & 0x4000) == 0 ? 0x77 : 0;
              v61 = (unsigned __int16 *)v193;
              v192 = v65;
              v63 = v65;
              v14 = v176;
            }
            if ( v60 )
              *v183 = v56 ^ (((v16 - *v63) >> 16) & BYTE2(v180) | ((v17 - v63[1]) >> 16) & BYTE6(v180) | ((v18 - v63[2]) >> 16) & BYTE10(v180));
            v62 = v184;
            v57 = SLODWORD(v186[3]);
            v59 = a5;
          }
          while ( v14 );
        }
        return v191;
      }
      if ( v19 > 4u )
      {
        if ( v19 <= 6u )
        {
          *((_BYTE *)a4 + BYTE5(v186[4])) = ~(_BYTE)v18;
          *((_BYTE *)a4 + BYTE6(v186[4])) = ~(_BYTE)v17;
          *((_BYTE *)a4 + HIBYTE(v186[4])) = ~(_BYTE)v16;
          if ( v19 == 5 )
          {
            v48 = 3;
            v49 = 3 * v12;
          }
          else
          {
            *((_BYTE *)a4 + 3) = 0;
            v49 = 4 * v12;
            v48 = 4;
          }
          v50 = (char *)a4 + v48;
          v51 = v49 - v48;
          if ( v49 != v48 )
          {
            do
            {
              v52 = v51;
              if ( v48 <= v51 )
                v52 = v48;
              v53 = v52;
              memmove(v50, a4, v52);
              v50 += v53;
              v48 += v53;
              v51 -= v53;
            }
            while ( v51 );
          }
          v54 = a4;
          for ( k = v14 - 1; k; --k )
          {
            a4 = (HSEMAPHORE *)((char *)a4 + a5);
            memmove(a4, v54, v49);
          }
          return v191;
        }
        if ( v19 > 0xF4u )
        {
          if ( v19 <= 0xF6u )
          {
            if ( v14 )
            {
              v37 = SLODWORD(v186[3]);
              v38 = a5;
              v39 = (HSEMAPHORE *)v186[0];
              do
              {
                v40 = v39;
                v41 = a4;
                v39 = (HSEMAPHORE *)((char *)v39 + v37);
                a4 = (HSEMAPHORE *)((char *)a4 + v38);
                --v14;
                v182 = v39;
                v42 = v12;
                if ( v12 )
                {
                  v43 = v184;
                  v193 = __PAIR64__(v17, v18);
                  v195 = v16;
                  v194 = v16;
                  v44 = *((_DWORD *)&v193
                        + ((v18 >= v17) | (unsigned __int64)(*(_DWORD *)((char *)&v193 + (v18 >= v17 ? 4 : 0)) >= v16
                                                           ? 2
                                                           : 0))) >> 21;
                  v45 = (unsigned __int16 *)v40 + 1;
                  do
                  {
                    --v42;
                    v46 = BYTE14(v180);
                    v168 = v45[1];
                    if ( v44 < v168 )
                    {
                      v175 = *v45;
                      if ( v44 < v175 )
                      {
                        v47 = *(v45 - 1);
                        if ( v44 < v47 )
                          v46 = *(_BYTE *)((((v17 - v175) & (v175 - DWORD1(v180)) & 0x38000 | (v18 - v168) & (v168 - DWORD2(v180)) & 0x1C0000 | (unsigned __int64)((unsigned __int16)(v16 - v47) & (unsigned __int16)(v47 - v180) & 0x7000)) >> 12)
                                         + v43);
                      }
                    }
                    *v41 = v46;
                    v45 += 3;
                    ++v41;
                  }
                  while ( v42 );
                  v12 = v169;
                  v39 = v182;
                  v37 = SLODWORD(v186[3]);
                  v38 = a5;
                }
              }
              while ( v14 );
            }
          }
          else if ( v14 )
          {
            v20 = SLODWORD(v186[3]);
            v21 = a5;
            v22 = (HSEMAPHORE *)v186[0];
            if ( v165 )
            {
              do
              {
                v23 = v22;
                v24 = a4;
                v22 = (HSEMAPHORE *)((char *)v22 + v20);
                a4 = (HSEMAPHORE *)((char *)a4 + v21);
                --v14;
                v182 = v22;
                v25 = v12;
                if ( v12 )
                {
                  v26 = v184;
                  v193 = __PAIR64__(v17, v18);
                  v195 = v16;
                  v194 = v16;
                  v27 = *((_DWORD *)&v193
                        + ((v18 >= v17) | (unsigned __int64)(*(_DWORD *)((char *)&v193 + (v18 >= v17 ? 4 : 0)) >= v16
                                                           ? 2
                                                           : 0))) >> 21;
                  v28 = (unsigned __int16 *)v23 + 1;
                  do
                  {
                    --v25;
                    v29 = BYTE14(v180);
                    v173 = v28[1];
                    if ( v27 < v173 )
                    {
                      v166 = *v28;
                      if ( v27 < v166 )
                      {
                        v30 = *(v28 - 1);
                        if ( v27 < v30 )
                          v29 = *(_BYTE *)((((v17 - v166) & (v166 - DWORD1(v180)) & 0x1C000 | (v18 - v173) & (v173 - DWORD2(v180)) & 0xE0000 | (unsigned __int64)((unsigned __int16)(v16 - v30) & (unsigned __int16)(v30 - v180) & 0x3000)) >> 12)
                                         + v26);
                      }
                    }
                    *v24 = v29;
                    v28 += 3;
                    ++v24;
                  }
                  while ( v25 );
                  v12 = v169;
                  v22 = v182;
                  v20 = SLODWORD(v186[3]);
                  v21 = a5;
                }
              }
              while ( v14 );
            }
            else
            {
              do
              {
                v31 = v22;
                v32 = a4;
                v22 = (HSEMAPHORE *)((char *)v22 + v20);
                a4 = (HSEMAPHORE *)((char *)a4 + v21);
                --v14;
                v182 = v22;
                if ( v12 )
                {
                  v193 = __PAIR64__(v17, v18);
                  v195 = v16;
                  v194 = v16;
                  v33 = *((_DWORD *)&v193
                        + ((v18 >= v17) | (unsigned __int64)(*(_DWORD *)((char *)&v193 + (v18 >= v17 ? 4 : 0)) >= v16
                                                           ? 2
                                                           : 0))) >> 21;
                  v34 = (unsigned __int16 *)v31 + 1;
                  do
                  {
                    --v12;
                    v35 = *(v34 - 1);
                    v36 = BYTE14(v180);
                    v167 = v34[1];
                    if ( v33 < v167 )
                    {
                      v174 = *v34;
                      if ( v33 < v174 && v33 < v35 )
                        v36 = ((v17 - v174) >> 12) & ((v174 - DWORD1(v180)) >> 12) & 0x1C | ((v18 - v167) >> 12) & ((v167 - DWORD2(v180)) >> 12) & 0xE0 | ((v35 - (unsigned int)v180) >> 12) & ((v16 - v35) >> 12) & 3;
                    }
                    *v32 = v36;
                    v34 += 3;
                    ++v32;
                  }
                  while ( v12 );
                  v12 = v169;
                  v22 = v182;
                  v20 = SLODWORD(v186[3]);
                  v21 = a5;
                }
              }
              while ( v14 );
            }
          }
          return v191;
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
