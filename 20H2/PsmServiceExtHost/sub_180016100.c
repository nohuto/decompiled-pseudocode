/*
 * XREFs of sub_180016100 @ 0x180016100
 * Callers:
 *     sub_180015F40 @ 0x180015F40 (sub_180015F40.c)
 * Callees:
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 *     sub_180002430 @ 0x180002430 (sub_180002430.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_1800024F8 @ 0x1800024F8 (sub_1800024F8.c)
 *     sub_180015170 @ 0x180015170 (sub_180015170.c)
 *     sub_180031E60 @ 0x180031E60 (sub_180031E60.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_1800738A8 @ 0x1800738A8 (sub_1800738A8.c)
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 */

bool __fastcall sub_180016100(__int64 a1, __int64 a2)
{
  bool v3; // zf
  void **v4; // rbx
  bool result; // al
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdi
  int *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rcx
  void **v15; // rcx
  _QWORD *v16; // rax
  void *v17; // rcx
  char v18; // [rsp+58h] [rbp-B0h] BYREF
  char v19; // [rsp+59h] [rbp-AFh] BYREF
  char v20; // [rsp+5Ah] [rbp-AEh] BYREF
  char v21; // [rsp+5Bh] [rbp-ADh] BYREF
  void *Block[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v23[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  int v25; // [rsp+98h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A8h] [rbp-60h]
  __int16 v28; // [rsp+ACh] [rbp-5Ch]
  int v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  __int16 v32; // [rsp+C4h] [rbp-44h]
  int v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D8h] [rbp-30h]
  __int16 v36; // [rsp+DCh] [rbp-2Ch]
  int v37; // [rsp+E0h] [rbp-28h]
  __int64 v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  __int16 v40; // [rsp+F4h] [rbp-14h]
  int v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+108h] [rbp+0h]
  __int16 v44; // [rsp+10Ch] [rbp+4h]
  int v45; // [rsp+110h] [rbp+8h]
  __int64 v46; // [rsp+118h] [rbp+10h]
  int v47; // [rsp+120h] [rbp+18h]
  __int16 v48; // [rsp+124h] [rbp+1Ch]
  int v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  int v51; // [rsp+138h] [rbp+30h]
  __int16 v52; // [rsp+13Ch] [rbp+34h]
  int v53; // [rsp+140h] [rbp+38h]
  __int64 v54; // [rsp+148h] [rbp+40h]
  int v55; // [rsp+150h] [rbp+48h]
  __int16 v56; // [rsp+154h] [rbp+4Ch]
  int v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  int v59; // [rsp+168h] [rbp+60h]
  __int16 v60; // [rsp+16Ch] [rbp+64h]
  int v61; // [rsp+170h] [rbp+68h]
  __int64 v62; // [rsp+178h] [rbp+70h]
  int v63; // [rsp+180h] [rbp+78h]
  __int16 v64; // [rsp+184h] [rbp+7Ch]
  int v65; // [rsp+188h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+88h]
  int v67; // [rsp+198h] [rbp+90h]
  __int16 v68; // [rsp+19Ch] [rbp+94h]
  int v69; // [rsp+1A0h] [rbp+98h]
  __int64 v70; // [rsp+1A8h] [rbp+A0h]
  int v71; // [rsp+1B0h] [rbp+A8h]
  __int16 v72; // [rsp+1B4h] [rbp+ACh]
  int v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]
  int v75; // [rsp+1C8h] [rbp+C0h]
  __int16 v76; // [rsp+1CCh] [rbp+C4h]
  int v77; // [rsp+1D0h] [rbp+C8h]
  __int64 v78; // [rsp+1D8h] [rbp+D0h]
  int v79; // [rsp+1E0h] [rbp+D8h]
  __int16 v80; // [rsp+1E4h] [rbp+DCh]
  int v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  int v83; // [rsp+1F8h] [rbp+F0h]
  __int16 v84; // [rsp+1FCh] [rbp+F4h]
  int v85; // [rsp+200h] [rbp+F8h]
  __int64 v86; // [rsp+208h] [rbp+100h]
  int v87; // [rsp+210h] [rbp+108h]
  __int16 v88; // [rsp+214h] [rbp+10Ch]
  int v89; // [rsp+218h] [rbp+110h]
  __int64 v90; // [rsp+220h] [rbp+118h]
  int v91; // [rsp+228h] [rbp+120h]
  __int16 v92; // [rsp+22Ch] [rbp+124h]
  int v93; // [rsp+230h] [rbp+128h]
  __int64 v94; // [rsp+238h] [rbp+130h]
  int v95; // [rsp+240h] [rbp+138h]
  __int16 v96; // [rsp+244h] [rbp+13Ch]
  int v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  int v99; // [rsp+258h] [rbp+150h]
  __int16 v100; // [rsp+25Ch] [rbp+154h]
  int v101; // [rsp+260h] [rbp+158h]
  __int64 v102; // [rsp+268h] [rbp+160h]
  int v103; // [rsp+270h] [rbp+168h]
  __int16 v104; // [rsp+274h] [rbp+16Ch]
  int v105; // [rsp+278h] [rbp+170h]
  __int64 v106; // [rsp+280h] [rbp+178h]
  int v107; // [rsp+288h] [rbp+180h]
  __int16 v108; // [rsp+28Ch] [rbp+184h]
  int v109; // [rsp+290h] [rbp+188h]
  __int64 v110; // [rsp+298h] [rbp+190h]
  int v111; // [rsp+2A0h] [rbp+198h]
  __int16 v112; // [rsp+2A4h] [rbp+19Ch]
  int v113; // [rsp+2A8h] [rbp+1A0h]
  __int64 v114; // [rsp+2B0h] [rbp+1A8h]
  int v115; // [rsp+2B8h] [rbp+1B0h]
  __int16 v116; // [rsp+2BCh] [rbp+1B4h]
  int v117; // [rsp+2C0h] [rbp+1B8h]
  __int64 v118; // [rsp+2C8h] [rbp+1C0h]
  int v119; // [rsp+2D0h] [rbp+1C8h]
  __int16 v120; // [rsp+2D4h] [rbp+1CCh]
  int v121; // [rsp+2D8h] [rbp+1D0h]
  __int64 v122; // [rsp+2E0h] [rbp+1D8h]
  int v123; // [rsp+2E8h] [rbp+1E0h]
  __int16 v124; // [rsp+2ECh] [rbp+1E4h]
  int v125; // [rsp+2F0h] [rbp+1E8h]
  __int64 v126; // [rsp+2F8h] [rbp+1F0h]
  int v127; // [rsp+300h] [rbp+1F8h]
  __int16 v128; // [rsp+304h] [rbp+1FCh]
  int v129; // [rsp+308h] [rbp+200h]
  __int64 v130; // [rsp+310h] [rbp+208h]
  int v131; // [rsp+318h] [rbp+210h]
  __int16 v132; // [rsp+31Ch] [rbp+214h]
  int v133; // [rsp+320h] [rbp+218h]
  __int64 v134; // [rsp+328h] [rbp+220h]
  int v135; // [rsp+330h] [rbp+228h]
  __int16 v136; // [rsp+334h] [rbp+22Ch]
  int v137; // [rsp+338h] [rbp+230h]
  __int64 v138; // [rsp+340h] [rbp+238h]
  int v139; // [rsp+348h] [rbp+240h]
  __int16 v140; // [rsp+34Ch] [rbp+244h]
  int v141; // [rsp+350h] [rbp+248h]
  __int64 v142; // [rsp+358h] [rbp+250h]
  int v143; // [rsp+360h] [rbp+258h]
  __int16 v144; // [rsp+364h] [rbp+25Ch]
  int v145; // [rsp+368h] [rbp+260h]
  __int64 v146; // [rsp+370h] [rbp+268h]
  int v147; // [rsp+378h] [rbp+270h]
  __int16 v148; // [rsp+37Ch] [rbp+274h]
  int v149; // [rsp+380h] [rbp+278h]
  __int64 v150; // [rsp+388h] [rbp+280h]
  int v151; // [rsp+390h] [rbp+288h]
  __int16 v152; // [rsp+394h] [rbp+28Ch]
  int v153; // [rsp+398h] [rbp+290h]
  __int64 v154; // [rsp+3A0h] [rbp+298h]
  int v155; // [rsp+3A8h] [rbp+2A0h]
  __int16 v156; // [rsp+3ACh] [rbp+2A4h]
  int v157; // [rsp+3B0h] [rbp+2A8h]
  __int64 v158; // [rsp+3B8h] [rbp+2B0h]
  int v159; // [rsp+3C0h] [rbp+2B8h]
  __int16 v160; // [rsp+3C4h] [rbp+2BCh]
  int v161; // [rsp+3C8h] [rbp+2C0h]
  __int64 v162; // [rsp+3D0h] [rbp+2C8h]
  int v163; // [rsp+3D8h] [rbp+2D0h]
  __int16 v164; // [rsp+3DCh] [rbp+2D4h]
  int v165; // [rsp+3E0h] [rbp+2D8h]
  __int64 v166; // [rsp+3E8h] [rbp+2E0h]
  int v167; // [rsp+3F0h] [rbp+2E8h]
  __int16 v168; // [rsp+3F4h] [rbp+2ECh]
  int v169; // [rsp+3F8h] [rbp+2F0h]
  __int64 v170; // [rsp+400h] [rbp+2F8h]
  int v171; // [rsp+408h] [rbp+300h]
  __int16 v172; // [rsp+40Ch] [rbp+304h]
  int v173; // [rsp+410h] [rbp+308h]
  __int64 v174; // [rsp+418h] [rbp+310h]
  int v175; // [rsp+420h] [rbp+318h]
  __int16 v176; // [rsp+424h] [rbp+31Ch]
  int v177; // [rsp+428h] [rbp+320h]
  __int64 v178; // [rsp+430h] [rbp+328h]
  int v179; // [rsp+438h] [rbp+330h]
  __int16 v180; // [rsp+43Ch] [rbp+334h]
  int v181; // [rsp+440h] [rbp+338h]
  __int64 v182; // [rsp+448h] [rbp+340h]
  int v183; // [rsp+450h] [rbp+348h]
  __int16 v184; // [rsp+454h] [rbp+34Ch]
  int v185; // [rsp+458h] [rbp+350h]
  __int64 v186; // [rsp+460h] [rbp+358h]
  int v187; // [rsp+468h] [rbp+360h]
  __int16 v188; // [rsp+46Ch] [rbp+364h]
  int v189; // [rsp+470h] [rbp+368h]
  __int64 v190; // [rsp+478h] [rbp+370h]
  int v191; // [rsp+480h] [rbp+378h]
  __int16 v192; // [rsp+484h] [rbp+37Ch]
  int v193; // [rsp+488h] [rbp+380h]
  __int64 v194; // [rsp+490h] [rbp+388h]
  int v195; // [rsp+498h] [rbp+390h]
  __int16 v196; // [rsp+49Ch] [rbp+394h]
  int v197; // [rsp+4A0h] [rbp+398h]
  __int64 v198; // [rsp+4A8h] [rbp+3A0h]
  int v199; // [rsp+4B0h] [rbp+3A8h]
  __int16 v200; // [rsp+4B4h] [rbp+3ACh]
  int v201; // [rsp+4B8h] [rbp+3B0h]
  __int64 v202; // [rsp+4C0h] [rbp+3B8h]
  int v203; // [rsp+4C8h] [rbp+3C0h]
  __int16 v204; // [rsp+4CCh] [rbp+3C4h]
  int v205; // [rsp+4D0h] [rbp+3C8h]
  __int64 v206; // [rsp+4D8h] [rbp+3D0h]
  int v207; // [rsp+4E0h] [rbp+3D8h]
  __int16 v208; // [rsp+4E4h] [rbp+3DCh]
  int v209; // [rsp+4E8h] [rbp+3E0h]
  __int64 v210; // [rsp+4F0h] [rbp+3E8h]
  int v211; // [rsp+4F8h] [rbp+3F0h]
  __int16 v212; // [rsp+4FCh] [rbp+3F4h]

  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  v25 = -1;
  v26 = 0LL;
  v27 = 101;
  v28 = 0;
  v29 = -1;
  v30 = 0LL;
  v31 = 101;
  v32 = 0;
  v33 = -1;
  v34 = 0LL;
  v35 = 101;
  v36 = 0;
  v37 = -1;
  v38 = 0LL;
  v39 = 101;
  v40 = 0;
  v41 = -1;
  v42 = 0LL;
  v43 = 101;
  v44 = 0;
  v45 = -1;
  v46 = 0LL;
  v47 = 101;
  v48 = 0;
  v49 = -1;
  v50 = 0LL;
  v51 = 101;
  v52 = 0;
  v53 = -1;
  v54 = 0LL;
  v55 = 101;
  v56 = 0;
  v57 = -1;
  v58 = 0LL;
  v59 = 101;
  v60 = 0;
  v61 = -1;
  v62 = 0LL;
  v63 = 101;
  v64 = 0;
  v65 = -1;
  v66 = 0LL;
  v67 = 101;
  v68 = 0;
  v69 = -1;
  v70 = 0LL;
  v71 = 101;
  v72 = 0;
  v73 = -1;
  v74 = 0LL;
  v75 = 101;
  v76 = 0;
  v77 = -1;
  v78 = 0LL;
  v79 = 101;
  v80 = 0;
  v81 = -1;
  v82 = 0LL;
  v83 = 101;
  v84 = 0;
  v85 = -1;
  v86 = 0LL;
  v87 = 101;
  v88 = 0;
  v89 = -1;
  v90 = 0LL;
  v91 = 101;
  v92 = 0;
  v93 = -1;
  v94 = 0LL;
  v95 = 101;
  v96 = 0;
  v97 = -1;
  v98 = 0LL;
  v99 = 101;
  v100 = 0;
  v101 = -1;
  v102 = 0LL;
  v103 = 101;
  v104 = 0;
  v105 = -1;
  v106 = 0LL;
  v107 = 101;
  v108 = 0;
  v109 = -1;
  v110 = 0LL;
  v111 = 101;
  v112 = 0;
  v113 = -1;
  v114 = 0LL;
  v115 = 101;
  v116 = 0;
  v117 = -1;
  v118 = 0LL;
  v119 = 101;
  v120 = 0;
  v121 = -1;
  v122 = 0LL;
  v123 = 101;
  v124 = 0;
  v125 = -1;
  v126 = 0LL;
  v127 = 101;
  v128 = 0;
  v129 = -1;
  v130 = 0LL;
  v131 = 101;
  v132 = 0;
  v133 = -1;
  v134 = 0LL;
  v135 = 101;
  v136 = 0;
  v137 = -1;
  v138 = 0LL;
  v139 = 101;
  v140 = 0;
  v141 = -1;
  v142 = 0LL;
  v143 = 101;
  v144 = 0;
  v145 = -1;
  v146 = 0LL;
  v147 = 101;
  v148 = 0;
  v149 = -1;
  v150 = 0LL;
  v151 = 101;
  v152 = 0;
  v153 = -1;
  v154 = 0LL;
  v155 = 101;
  v156 = 0;
  v157 = -1;
  v158 = 0LL;
  v159 = 101;
  v160 = 0;
  v161 = -1;
  v162 = 0LL;
  v163 = 101;
  v164 = 0;
  v165 = -1;
  v166 = 0LL;
  v167 = 101;
  v168 = 0;
  v169 = -1;
  v170 = 0LL;
  v171 = 101;
  v172 = 0;
  v173 = -1;
  v174 = 0LL;
  v175 = 101;
  v176 = 0;
  v177 = -1;
  v3 = *(_DWORD *)(a1 + 16) == 1;
  v178 = 0LL;
  v179 = 101;
  v180 = 0;
  v181 = -1;
  v182 = 0LL;
  v183 = 101;
  v184 = 0;
  v185 = -1;
  v186 = 0LL;
  v187 = 101;
  v188 = 0;
  v189 = -1;
  v190 = 0LL;
  v191 = 101;
  v192 = 0;
  v193 = -1;
  v194 = 0LL;
  v195 = 101;
  v196 = 0;
  v197 = -1;
  v198 = 0LL;
  v199 = 101;
  v200 = 0;
  v201 = -1;
  v202 = 0LL;
  v203 = 101;
  v204 = 0;
  v205 = -1;
  v206 = 0LL;
  v207 = 101;
  v208 = 0;
  v209 = -1;
  v210 = 0LL;
  v211 = 101;
  v212 = 0;
  if ( v3 )
  {
    sub_180031E60(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL) + 312LL, a2, sub_180015E80, 0LL);
    v4 = (void **)Block[0];
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 40);
    v7 = (_QWORD *)(a1 + 40);
    while ( v6 != v7 )
    {
      sub_1800024C4(&v24, v6[2]);
      v8 = v24;
      if ( *(_DWORD *)(v24 + 1280) == 1 && (int)sub_180002430(Block, v24) < 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        goto LABEL_24;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v6 = (_QWORD *)*v6;
    }
    v4 = (void **)Block[0];
    if ( Block[0] == Block )
      goto LABEL_3;
    while ( v4 != Block )
    {
      v9 = (__int64)v4[2];
      v23[0] = v23;
      v10 = &v25;
      v23[2] = 0LL;
      v23[1] = v23;
      v11 = 8LL;
      v12 = v9 + 144;
      do
      {
        v10 += 32;
        v13 = *(_OWORD *)v12;
        v12 += 128LL;
        *((_OWORD *)v10 - 8) = v13;
        *((_OWORD *)v10 - 7) = *(_OWORD *)(v12 - 112);
        *((_OWORD *)v10 - 6) = *(_OWORD *)(v12 - 96);
        *((_OWORD *)v10 - 5) = *(_OWORD *)(v12 - 80);
        *((_OWORD *)v10 - 4) = *(_OWORD *)(v12 - 64);
        *((_OWORD *)v10 - 3) = *(_OWORD *)(v12 - 48);
        *((_OWORD *)v10 - 2) = *(_OWORD *)(v12 - 32);
        *((_OWORD *)v10 - 1) = *(_OWORD *)(v12 - 16);
        --v11;
      }
      while ( v11 );
      *(_OWORD *)v10 = *(_OWORD *)v12;
      *((_OWORD *)v10 + 1) = *(_OWORD *)(v12 + 16);
      *((_OWORD *)v10 + 2) = *(_OWORD *)(v12 + 32);
      *((_OWORD *)v10 + 3) = *(_OWORD *)(v12 + 48);
      *((_OWORD *)v10 + 4) = *(_OWORD *)(v12 + 64);
      *((_OWORD *)v10 + 5) = *(_OWORD *)(v12 + 80);
      *((_QWORD *)v10 + 12) = *(_QWORD *)(v12 + 96);
      if ( (int)sub_1800024F8(
                  a1,
                  0x2Fu,
                  (__int64)&v25,
                  *(_DWORD *)(v9 + 8),
                  *(_DWORD *)(v9 + 1288),
                  1,
                  &v19,
                  &v18,
                  (__int64)v23) < 0 )
      {
        sub_180002400((__int64)v23);
        break;
      }
      if ( v18 )
      {
        if ( v19 )
        {
          sub_180073CE8(v14, v23);
        }
        else
        {
          sub_180015170(a1, 1, 0x2Fu, &v25, *(_DWORD *)(v9 + 8), 1, &v21, &v20, 0LL, v9);
          v3 = (*(_BYTE *)(v9 + 1352) & 2) == 0;
          *(_DWORD *)(v9 + 1280) = 2;
          if ( v3 )
            sub_1800738A8(v9, 0LL);
        }
      }
      sub_180002400((__int64)v23);
      v4 = (void **)*v4;
    }
LABEL_24:
    v4 = (void **)Block[0];
  }
LABEL_3:
  while ( 1 )
  {
    result = v4 == Block;
    if ( v4 == Block )
      break;
    v15 = (void **)v4[1];
    v16 = *v4;
    *v15 = *v4;
    v16[1] = v15;
    v17 = v4[2];
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    j_j_free(v4);
    v4 = (void **)Block[0];
  }
  return result;
}
