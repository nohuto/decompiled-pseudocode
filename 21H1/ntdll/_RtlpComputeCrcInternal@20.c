/*
 * XREFs of _RtlpComputeCrcInternal@20 @ 0x4B35C6FF
 * Callers:
 *     _RtlCrc32@12 @ 0x4B35C6B0 (_RtlCrc32@12.c)
 *     _RtlCrc64@16 @ 0x4B35C6E0 (_RtlCrc64@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpComputeCrcInternal(unsigned int a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // eax
  unsigned int v7; // edi
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  char v12; // al
  unsigned __int8 v13; // al
  int v14; // ecx
  int v15; // ebx
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // esi
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // ebx
  int v37; // eax
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  int v41; // ebx
  int v42; // ebx
  int v43; // edx
  int v44; // edx
  unsigned __int64 v45; // rt0
  int v46; // ebx
  int v47; // ecx
  unsigned __int64 v48; // rt0
  unsigned int v49; // edx
  unsigned int v50; // ebx
  int v51; // eax
  int v52; // ebx
  unsigned int v53; // edx
  int v54; // ebx
  int v55; // eax
  int v56; // ebx
  unsigned int v57; // edx
  int v58; // ebx
  int v59; // eax
  int v60; // ebx
  unsigned int v61; // edx
  int v62; // ebx
  int v63; // eax
  int v64; // ebx
  unsigned int v65; // edx
  int v66; // ebx
  int v67; // eax
  int v68; // ebx
  unsigned int v69; // edx
  int v70; // ebx
  int v71; // eax
  int v72; // ebx
  unsigned int v73; // edx
  int v74; // ebx
  int v75; // eax
  int v76; // ebx
  unsigned int v77; // edx
  int v78; // ebx
  int v79; // eax
  int v80; // ebx
  unsigned int v81; // edx
  int v82; // ebx
  int v83; // eax
  int v84; // ebx
  unsigned int v85; // edx
  int v86; // ebx
  int v87; // eax
  int v88; // ebx
  unsigned int v89; // edx
  int v90; // ebx
  int v91; // eax
  int v92; // ebx
  unsigned int v93; // edx
  int v94; // ebx
  int v95; // eax
  unsigned int v96; // ebx
  unsigned int v97; // edx
  int v98; // eax
  unsigned int v99; // ebx
  unsigned int v100; // edx
  int v101; // eax
  unsigned int v102; // ebx
  unsigned int v103; // edx
  int v104; // eax
  int v105; // ebx
  unsigned int v106; // edx
  int v107; // ebx
  int v108; // eax
  int v109; // ebx
  unsigned int v110; // edx
  int v111; // ebx
  int v112; // eax
  int v113; // ebx
  unsigned int v114; // edx
  int v115; // ebx
  int v116; // eax
  int v117; // ebx
  unsigned int v118; // edx
  int v119; // ebx
  int v120; // eax
  int v121; // ebx
  unsigned int v122; // edx
  int v123; // ebx
  int v124; // eax
  int v125; // ebx
  unsigned int v126; // edx
  int v127; // ebx
  int v128; // eax
  int v129; // ebx
  unsigned int v130; // edx
  int v131; // ebx
  int v132; // eax
  int v133; // ebx
  unsigned int v134; // edx
  int v135; // ebx
  int v136; // eax
  int v137; // ebx
  unsigned int v138; // edx
  int v139; // ebx
  int v140; // eax
  int v141; // ebx
  unsigned int v142; // edx
  int v143; // ebx
  int v144; // eax
  int v145; // ebx
  unsigned int v146; // edx
  int v147; // ebx
  int v148; // eax
  unsigned int v149; // ebx
  unsigned int v150; // edx
  int v151; // eax
  unsigned int v152; // ebx
  unsigned int v153; // edx
  int v154; // eax
  unsigned int v155; // ebx
  unsigned int v156; // edx
  int v157; // eax
  int v158; // ebx
  unsigned int v159; // edx
  int v160; // ebx
  int v161; // eax
  unsigned int v162; // ebx
  unsigned int v163; // edx
  int v164; // eax
  unsigned int v165; // ecx
  char v166; // al
  unsigned __int8 v167; // al
  int v169; // [esp+Ch] [ebp-50h]
  int v170; // [esp+10h] [ebp-4Ch]
  int v171; // [esp+14h] [ebp-48h]
  unsigned int v172; // [esp+18h] [ebp-44h]
  unsigned int v173; // [esp+1Ch] [ebp-40h]
  unsigned int v174; // [esp+20h] [ebp-3Ch]
  int v175; // [esp+24h] [ebp-38h]
  unsigned int v176; // [esp+24h] [ebp-38h]
  unsigned int v177; // [esp+24h] [ebp-38h]
  int v178; // [esp+28h] [ebp-34h]
  int v179; // [esp+28h] [ebp-34h]
  int v180; // [esp+28h] [ebp-34h]
  int v181; // [esp+28h] [ebp-34h]
  int v182; // [esp+28h] [ebp-34h]
  int v183; // [esp+28h] [ebp-34h]
  int v184; // [esp+2Ch] [ebp-30h]
  int v185; // [esp+2Ch] [ebp-30h]
  int v186; // [esp+2Ch] [ebp-30h]
  int v187; // [esp+2Ch] [ebp-30h]
  int v188; // [esp+2Ch] [ebp-30h]
  int v189; // [esp+30h] [ebp-2Ch]
  int v190; // [esp+30h] [ebp-2Ch]
  int v191; // [esp+30h] [ebp-2Ch]
  int v192; // [esp+30h] [ebp-2Ch]
  int v193; // [esp+30h] [ebp-2Ch]
  int v194; // [esp+34h] [ebp-28h]
  int v195; // [esp+34h] [ebp-28h]
  int v196; // [esp+34h] [ebp-28h]
  int v197; // [esp+34h] [ebp-28h]
  int v198; // [esp+34h] [ebp-28h]
  int v199; // [esp+38h] [ebp-24h]
  int v200; // [esp+38h] [ebp-24h]
  int v201; // [esp+38h] [ebp-24h]
  int v202; // [esp+38h] [ebp-24h]
  int v203; // [esp+38h] [ebp-24h]
  int v204; // [esp+3Ch] [ebp-20h]
  int v205; // [esp+3Ch] [ebp-20h]
  int v206; // [esp+3Ch] [ebp-20h]
  int v207; // [esp+3Ch] [ebp-20h]
  int v208; // [esp+3Ch] [ebp-20h]
  int v209; // [esp+3Ch] [ebp-20h]
  int v210; // [esp+40h] [ebp-1Ch]
  int v211; // [esp+40h] [ebp-1Ch]
  int v212; // [esp+40h] [ebp-1Ch]
  int v213; // [esp+40h] [ebp-1Ch]
  int v214; // [esp+40h] [ebp-1Ch]
  int v215; // [esp+40h] [ebp-1Ch]
  int v216; // [esp+44h] [ebp-18h]
  int v217; // [esp+44h] [ebp-18h]
  int v218; // [esp+44h] [ebp-18h]
  int v219; // [esp+44h] [ebp-18h]
  int v220; // [esp+44h] [ebp-18h]
  int v221; // [esp+44h] [ebp-18h]
  int v222; // [esp+48h] [ebp-14h]
  int v223; // [esp+4Ch] [ebp-10h]
  unsigned int v224; // [esp+4Ch] [ebp-10h]
  int v225; // [esp+4Ch] [ebp-10h]
  int v226; // [esp+50h] [ebp-Ch]
  unsigned int v227; // [esp+50h] [ebp-Ch]
  unsigned int v228; // [esp+50h] [ebp-Ch]
  unsigned int v229; // [esp+50h] [ebp-Ch]
  unsigned int v230; // [esp+50h] [ebp-Ch]
  unsigned int v231; // [esp+50h] [ebp-Ch]
  int v232; // [esp+54h] [ebp-8h]
  unsigned int v233; // [esp+54h] [ebp-8h]
  unsigned int v234; // [esp+54h] [ebp-8h]
  unsigned int v235; // [esp+54h] [ebp-8h]
  unsigned int v236; // [esp+54h] [ebp-8h]
  unsigned int v237; // [esp+54h] [ebp-8h]
  unsigned int v238; // [esp+54h] [ebp-8h]
  int v239; // [esp+58h] [ebp-4h]
  unsigned int v240; // [esp+58h] [ebp-4h]
  unsigned int v241; // [esp+58h] [ebp-4h]
  unsigned int v242; // [esp+58h] [ebp-4h]
  unsigned int v243; // [esp+58h] [ebp-4h]
  unsigned int v244; // [esp+58h] [ebp-4h]

  v5 = a5;
  v7 = a1;
  v170 = a5[6];
  v8 = a3 ^ v170;
  v169 = a5[7];
  v9 = a4 ^ v169;
  v174 = a2;
  v173 = a1;
  v10 = -a1 & 7;
  if ( v10 )
  {
    if ( v10 > a2 )
      v10 = a2;
    if ( v10 )
    {
      v11 = 0;
      v175 = a5[1];
      do
      {
        v12 = *(_BYTE *)(v11 + v7);
        ++v11;
        v13 = v8 ^ v12;
        v8 = *(_DWORD *)(v175 + 8 * v13) ^ (__PAIR64__(v9, v8) >> 8);
        v9 = *(_DWORD *)(v175 + 8 * v13 + 4) ^ (v9 >> 8);
        v7 = v173;
      }
      while ( v11 < v10 );
      a2 = v174;
      v5 = a5;
    }
    a2 -= v10;
    v7 += v10;
    v174 = a2;
    v173 = v7;
  }
  v176 = a2 - (a2 & 0x1F);
  if ( v176 >= 0x40 )
  {
    v210 = 0;
    v204 = 0;
    v172 = v7 + v176 - 32;
    a2 &= 0x1Fu;
    v14 = v8;
    v199 = 0;
    v194 = 0;
    v189 = 0;
    v184 = 0;
    v174 = a2;
    v216 = v9;
    if ( v7 < v172 )
    {
      v222 = v5[2];
      while ( 1 )
      {
        v15 = v14 ^ *(_DWORD *)v7;
        v239 = v210 ^ *(_DWORD *)(v7 + 8);
        v232 = v199 ^ *(_DWORD *)(v7 + 16);
        v16 = v9 ^ *(_DWORD *)(v7 + 4);
        v17 = v204 ^ *(_DWORD *)(v7 + 12);
        v226 = v189 ^ *(_DWORD *)(v7 + 24);
        v177 = v16;
        v18 = (unsigned __int8)v15;
        v223 = v15;
        v19 = v222;
        v20 = v194 ^ *(_DWORD *)(v7 + 20);
        _mm_prefetch((const char *)(v7 + 256), 2);
        v21 = *(_DWORD *)(v19 + 8 * v18 + 14336);
        v22 = *(_DWORD *)(v19 + 8 * v18 + 14340);
        v178 = v21;
        v23 = __PAIR64__(v177, v223) >> 8;
        v217 = v22;
        v24 = (unsigned __int8)v239;
        v25 = v184 ^ *(_DWORD *)(v7 + 28);
        v177 >>= 8;
        v240 = __PAIR64__(v17, v239) >> 8;
        v205 = *(_DWORD *)(v222 + 8 * v24 + 14340);
        v211 = *(_DWORD *)(v222 + 8 * v24 + 14336);
        v26 = (unsigned __int8)v232;
        v233 = __PAIR64__(v20, v232) >> 8;
        v27 = *(_DWORD *)(v222 + 8 * v26 + 14336);
        v195 = *(_DWORD *)(v222 + 8 * v26 + 14340);
        LOBYTE(v26) = v226;
        v227 = __PAIR64__(v25, v226) >> 8;
        v17 >>= 8;
        v20 >>= 8;
        v25 >>= 8;
        v224 = __PAIR64__(v177, v23) >> 8;
        v177 >>= 8;
        v212 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v240 + 12288) ^ v211;
        v206 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v240 + 12292) ^ v205;
        v241 = __PAIR64__(v17, v240) >> 8;
        v200 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v233 + 12288) ^ v27;
        v196 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v233 + 12292) ^ v195;
        v234 = __PAIR64__(v20, v233) >> 8;
        v190 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v227 + 12288) ^ *(_DWORD *)(v222
                                                                                 + 8 * (unsigned __int8)v26
                                                                                 + 14336);
        v185 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v227 + 12292) ^ *(_DWORD *)(v222
                                                                                 + 8 * (unsigned __int8)v26
                                                                                 + 14340);
        v228 = __PAIR64__(v25, v227) >> 8;
        v179 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v224 + 10240) ^ *(_DWORD *)(v222
                                                                                 + 8 * (unsigned __int8)v23
                                                                                 + 12288) ^ v178;
        v218 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v224 + 10244) ^ *(_DWORD *)(v222
                                                                                 + 8 * (unsigned __int8)v23
                                                                                 + 12292) ^ v217;
        v28 = __PAIR64__(v177, v224) >> 8;
        v29 = (unsigned __int8)v241;
        v177 >>= 8;
        v17 >>= 8;
        v242 = __PAIR64__(v17, v241) >> 8;
        v213 = *(_DWORD *)(v222 + 8 * v29 + 10240) ^ v212;
        v207 = *(_DWORD *)(v222 + 8 * v29 + 10244) ^ v206;
        v30 = (unsigned __int8)v234;
        v20 >>= 8;
        v235 = __PAIR64__(v20, v234) >> 8;
        v201 = *(_DWORD *)(v222 + 8 * v30 + 10240) ^ v200;
        v197 = *(_DWORD *)(v222 + 8 * v30 + 10244) ^ v196;
        v31 = (unsigned __int8)v228;
        v25 >>= 8;
        v229 = __PAIR64__(v25, v228) >> 8;
        v191 = *(_DWORD *)(v222 + 8 * v31 + 10240) ^ v190;
        v186 = *(_DWORD *)(v222 + 8 * v31 + 10244) ^ v185;
        v17 >>= 8;
        v180 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v28 + 0x2000) ^ v179;
        v20 >>= 8;
        v25 >>= 8;
        v219 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v28 + 8196) ^ v218;
        v32 = __PAIR64__(v177, v28) >> 8;
        v177 >>= 8;
        v33 = (unsigned __int8)v242;
        v243 = __PAIR64__(v17, v242) >> 8;
        v214 = *(_DWORD *)(v222 + 8 * v33 + 0x2000) ^ v213;
        v208 = *(_DWORD *)(v222 + 8 * v33 + 8196) ^ v207;
        v34 = (unsigned __int8)v235;
        v236 = __PAIR64__(v20, v235) >> 8;
        v202 = *(_DWORD *)(v222 + 8 * v34 + 0x2000) ^ v201;
        v198 = *(_DWORD *)(v222 + 8 * v34 + 8196) ^ v197;
        v35 = (unsigned __int8)v229;
        v230 = __PAIR64__(v25, v229) >> 8;
        v192 = *(_DWORD *)(v222 + 8 * v35 + 0x2000) ^ v191;
        v187 = *(_DWORD *)(v222 + 8 * v35 + 8196) ^ v186;
        v17 >>= 8;
        v20 >>= 8;
        v25 >>= 8;
        v181 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v32 + 6144) ^ v180;
        v220 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v32 + 6148) ^ v219;
        v36 = __PAIR64__(v177, v32) >> 8;
        v37 = (unsigned __int8)v243;
        v177 >>= 8;
        v244 = __PAIR64__(v17, v243) >> 8;
        v215 = *(_DWORD *)(v222 + 8 * v37 + 6144) ^ v214;
        v38 = *(_DWORD *)(v222 + 8 * v37 + 6148) ^ v208;
        LOBYTE(v37) = v236;
        v237 = __PAIR64__(v20, v236) >> 8;
        v209 = v38;
        v20 >>= 8;
        v203 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v37 + 6144) ^ v202;
        v39 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v37 + 6148) ^ v198;
        LOBYTE(v37) = v230;
        v231 = __PAIR64__(v25, v230) >> 8;
        v193 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v37 + 6144) ^ v192;
        v188 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v37 + 6148) ^ v187;
        v25 >>= 8;
        v182 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v36 + 4096) ^ v181;
        v221 = *(_DWORD *)(v222 + 8 * (unsigned __int8)v36 + 4100) ^ v220;
        v225 = __PAIR64__(v177, v36) >> 8;
        v40 = (unsigned __int8)v237;
        v238 = __PAIR64__(v20, v237) >> 8;
        v41 = __PAIR64__(v177, v36) >> 16;
        v216 = *(_DWORD *)(v222 + 8 * v41 + 4) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v225 + 2052) ^ v221;
        v183 = *(_DWORD *)(v222 + 8 * v41) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v225 + 2048) ^ v182;
        v42 = __PAIR64__(v17 >> 8, v244) >> 16;
        v204 = *(_DWORD *)(v222 + 8 * v42 + 4) ^ *(_DWORD *)(v222 + 8 * BYTE1(v244) + 2052) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v244 + 4100) ^ v209;
        v210 = *(_DWORD *)(v222 + 8 * v42) ^ *(_DWORD *)(v222 + 8 * BYTE1(v244) + 2048) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v244 + 4096) ^ v215;
        v43 = __PAIR64__(v20 >> 8, v238) >> 8;
        v199 = *(_DWORD *)(v222 + 8 * v43) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v238 + 2048) ^ *(_DWORD *)(v222 + 8 * v40 + 4096) ^ v203;
        v194 = *(_DWORD *)(v222 + 8 * v43 + 4) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v238 + 2052) ^ *(_DWORD *)(v222 + 8 * v40 + 4100) ^ v39;
        v45 = __PAIR64__(v25, v231) >> 8;
        v44 = __PAIR64__(v25, v231) >> 16;
        v7 = v173 + 32;
        v173 = v7;
        v189 = *(_DWORD *)(v222 + 8 * v44) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v45 + 2048) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v231 + 4096) ^ v193;
        v184 = *(_DWORD *)(v222 + 8 * v44 + 4) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v45 + 2052) ^ *(_DWORD *)(v222 + 8 * (unsigned __int8)v231 + 4100) ^ v188;
        v14 = v183;
        if ( v7 >= v172 )
          break;
        v9 = v216;
      }
      a2 = v174;
      v5 = a5;
    }
    v46 = v14 ^ *(_DWORD *)v7;
    v47 = v5[1];
    LODWORD(v48) = v46;
    HIDWORD(v48) = v216 ^ *(_DWORD *)(v7 + 4);
    v49 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v46 + 4) ^ (HIDWORD(v48) >> 8);
    v50 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v46) ^ (v48 >> 8);
    v51 = (unsigned __int8)v50;
    v52 = __PAIR64__(v49, v50) >> 8;
    v53 = *(_DWORD *)(v47 + 8 * v51 + 4) ^ (v49 >> 8);
    v54 = *(_DWORD *)(v47 + 8 * v51) ^ v52;
    v55 = (unsigned __int8)v54;
    v56 = __PAIR64__(v53, v54) >> 8;
    v57 = *(_DWORD *)(v47 + 8 * v55 + 4) ^ (v53 >> 8);
    v58 = *(_DWORD *)(v47 + 8 * v55) ^ v56;
    v59 = (unsigned __int8)v58;
    v60 = __PAIR64__(v57, v58) >> 8;
    v61 = *(_DWORD *)(v47 + 8 * v59 + 4) ^ (v57 >> 8);
    v62 = *(_DWORD *)(v47 + 8 * v59) ^ v60;
    v63 = (unsigned __int8)v62;
    v64 = __PAIR64__(v61, v62) >> 8;
    v65 = *(_DWORD *)(v47 + 8 * v63 + 4) ^ (v61 >> 8);
    v66 = *(_DWORD *)(v47 + 8 * v63) ^ v64;
    v67 = (unsigned __int8)v66;
    v68 = __PAIR64__(v65, v66) >> 8;
    v69 = *(_DWORD *)(v47 + 8 * v67 + 4) ^ (v65 >> 8);
    v70 = *(_DWORD *)(v47 + 8 * v67) ^ v68;
    v71 = (unsigned __int8)v70;
    v72 = __PAIR64__(v69, v70) >> 8;
    v73 = *(_DWORD *)(v47 + 8 * v71 + 4) ^ (v69 >> 8);
    v74 = *(_DWORD *)(v47 + 8 * v71) ^ v72;
    v75 = (unsigned __int8)v74;
    v76 = __PAIR64__(v73, v74) >> 8;
    v77 = v204 ^ *(_DWORD *)(v7 + 12) ^ *(_DWORD *)(v47 + 8 * v75 + 4) ^ (v73 >> 8);
    v78 = v210 ^ *(_DWORD *)(v7 + 8) ^ *(_DWORD *)(v47 + 8 * v75) ^ v76;
    v79 = (unsigned __int8)v78;
    v80 = __PAIR64__(v77, v78) >> 8;
    v81 = *(_DWORD *)(v47 + 8 * v79 + 4) ^ (v77 >> 8);
    v82 = *(_DWORD *)(v47 + 8 * v79) ^ v80;
    v83 = (unsigned __int8)v82;
    v84 = __PAIR64__(v81, v82) >> 8;
    v85 = *(_DWORD *)(v47 + 8 * v83 + 4) ^ (v81 >> 8);
    v86 = *(_DWORD *)(v47 + 8 * v83) ^ v84;
    v87 = (unsigned __int8)v86;
    v88 = __PAIR64__(v85, v86) >> 8;
    v89 = *(_DWORD *)(v47 + 8 * v87 + 4) ^ (v85 >> 8);
    v90 = *(_DWORD *)(v47 + 8 * v87) ^ v88;
    v91 = (unsigned __int8)v90;
    v92 = __PAIR64__(v89, v90) >> 8;
    v93 = *(_DWORD *)(v47 + 8 * v91 + 4) ^ (v89 >> 8);
    v94 = *(_DWORD *)(v47 + 8 * v91) ^ v92;
    v95 = (unsigned __int8)v94;
    v96 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v94) ^ (__PAIR64__(v93, v94) >> 8);
    v97 = *(_DWORD *)(v47 + 8 * v95 + 4) ^ (v93 >> 8);
    v98 = (unsigned __int8)v96;
    v99 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v96) ^ (__PAIR64__(v97, v96) >> 8);
    v100 = *(_DWORD *)(v47 + 8 * v98 + 4) ^ (v97 >> 8);
    v101 = (unsigned __int8)v99;
    v102 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v99) ^ (__PAIR64__(v100, v99) >> 8);
    v103 = *(_DWORD *)(v47 + 8 * v101 + 4) ^ (v100 >> 8);
    v104 = (unsigned __int8)v102;
    v105 = __PAIR64__(v103, v102) >> 8;
    v106 = v194 ^ *(_DWORD *)(v7 + 20) ^ *(_DWORD *)(v47 + 8 * v104 + 4) ^ (v103 >> 8);
    v107 = v199 ^ *(_DWORD *)(v7 + 16) ^ *(_DWORD *)(v47 + 8 * v104) ^ v105;
    v108 = (unsigned __int8)v107;
    v109 = __PAIR64__(v106, v107) >> 8;
    v110 = *(_DWORD *)(v47 + 8 * v108 + 4) ^ (v106 >> 8);
    v111 = *(_DWORD *)(v47 + 8 * v108) ^ v109;
    v112 = (unsigned __int8)v111;
    v113 = __PAIR64__(v110, v111) >> 8;
    v114 = *(_DWORD *)(v47 + 8 * v112 + 4) ^ (v110 >> 8);
    v115 = *(_DWORD *)(v47 + 8 * v112) ^ v113;
    v116 = (unsigned __int8)v115;
    v117 = __PAIR64__(v114, v115) >> 8;
    v118 = *(_DWORD *)(v47 + 8 * v116 + 4) ^ (v114 >> 8);
    v119 = *(_DWORD *)(v47 + 8 * v116) ^ v117;
    v120 = (unsigned __int8)v119;
    v121 = __PAIR64__(v118, v119) >> 8;
    v122 = *(_DWORD *)(v47 + 8 * v120 + 4) ^ (v118 >> 8);
    v123 = *(_DWORD *)(v47 + 8 * v120) ^ v121;
    v124 = (unsigned __int8)v123;
    v125 = __PAIR64__(v122, v123) >> 8;
    v126 = *(_DWORD *)(v47 + 8 * v124 + 4) ^ (v122 >> 8);
    v127 = *(_DWORD *)(v47 + 8 * v124) ^ v125;
    v128 = (unsigned __int8)v127;
    v129 = __PAIR64__(v126, v127) >> 8;
    v130 = *(_DWORD *)(v47 + 8 * v128 + 4) ^ (v126 >> 8);
    v131 = *(_DWORD *)(v47 + 8 * v128) ^ v129;
    v132 = (unsigned __int8)v131;
    v133 = __PAIR64__(v130, v131) >> 8;
    v134 = *(_DWORD *)(v47 + 8 * v132 + 4) ^ (v130 >> 8);
    v135 = *(_DWORD *)(v47 + 8 * v132) ^ v133;
    v136 = (unsigned __int8)v135;
    v137 = __PAIR64__(v134, v135) >> 8;
    v138 = v184 ^ *(_DWORD *)(v7 + 28) ^ *(_DWORD *)(v47 + 8 * v136 + 4) ^ (v134 >> 8);
    v139 = v189 ^ *(_DWORD *)(v7 + 24) ^ *(_DWORD *)(v47 + 8 * v136) ^ v137;
    v140 = (unsigned __int8)v139;
    v141 = __PAIR64__(v138, v139) >> 8;
    v142 = *(_DWORD *)(v47 + 8 * v140 + 4) ^ (v138 >> 8);
    v143 = *(_DWORD *)(v47 + 8 * v140) ^ v141;
    v144 = (unsigned __int8)v143;
    v145 = __PAIR64__(v142, v143) >> 8;
    v146 = *(_DWORD *)(v47 + 8 * v144 + 4) ^ (v142 >> 8);
    v147 = *(_DWORD *)(v47 + 8 * v144) ^ v145;
    v148 = (unsigned __int8)v147;
    v149 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v147) ^ (__PAIR64__(v146, v147) >> 8);
    v150 = *(_DWORD *)(v47 + 8 * v148 + 4) ^ (v146 >> 8);
    v151 = (unsigned __int8)v149;
    v152 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v149) ^ (__PAIR64__(v150, v149) >> 8);
    v153 = *(_DWORD *)(v47 + 8 * v151 + 4) ^ (v150 >> 8);
    v154 = (unsigned __int8)v152;
    v155 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v152) ^ (__PAIR64__(v153, v152) >> 8);
    v156 = *(_DWORD *)(v47 + 8 * v154 + 4) ^ (v153 >> 8);
    v157 = (unsigned __int8)v155;
    v158 = __PAIR64__(v156, v155) >> 8;
    v159 = *(_DWORD *)(v47 + 8 * v157 + 4) ^ (v156 >> 8);
    v160 = *(_DWORD *)(v47 + 8 * v157) ^ v158;
    v161 = (unsigned __int8)v160;
    v162 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v160) ^ (__PAIR64__(v159, v160) >> 8);
    v163 = *(_DWORD *)(v47 + 8 * v161 + 4) ^ (v159 >> 8);
    v164 = (unsigned __int8)v162;
    v8 = *(_DWORD *)(v47 + 8 * (unsigned __int8)v162) ^ (__PAIR64__(v163, v162) >> 8);
    v9 = *(_DWORD *)(v47 + 8 * v164 + 4) ^ (v163 >> 8);
    v7 += 32;
    v5 = a5;
  }
  v165 = 0;
  if ( a2 )
  {
    v171 = v5[1];
    do
    {
      v166 = *(_BYTE *)(v165 + v7);
      ++v165;
      v167 = v8 ^ v166;
      v8 = *(_DWORD *)(v171 + 8 * v167) ^ (__PAIR64__(v9, v8) >> 8);
      v9 = *(_DWORD *)(v171 + 8 * v167 + 4) ^ (v9 >> 8);
    }
    while ( v165 < v174 );
  }
  return v8 ^ v170;
}
