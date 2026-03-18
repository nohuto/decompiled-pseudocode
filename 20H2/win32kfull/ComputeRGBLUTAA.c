/*
 * XREFs of ComputeRGBLUTAA @ 0x1C006E550
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C006E2C8 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C0262424 (CreateHalftoneBrushPat.c)
 * Callees:
 *     ComputeChecksum @ 0x1C006EAA8 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C006EAF4 (MulFD6.c)
 *     DivFD6 @ 0x1C006F7F4 (DivFD6.c)
 *     RaisePower @ 0x1C0072790 (RaisePower.c)
 *     Log @ 0x1C00729C4 (Log.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeRGBLUTAA(_DWORD *a1, __int128 *a2, _DWORD *a3)
{
  _DWORD *v3; // rsi
  __int128 v4; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int16 v18; // ax
  __int128 v19; // xmm0
  int v20; // r14d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned __int64 v23; // rax
  int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // r11d
  unsigned int v27; // eax
  int v28; // r11d
  unsigned int v29; // eax
  int v30; // r11d
  int v31; // eax
  int v32; // r10d
  __int64 v33; // r12
  int v34; // edx
  int v35; // ecx
  char v36; // r13
  __int64 result; // rax
  int v38; // ebx
  int v39; // ecx
  int v40; // esi
  char v41; // al
  _BYTE *v42; // r14
  char *v43; // rdx
  char *v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rax
  int v47; // r15d
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // edi
  __int64 v53; // rcx
  signed int v54; // edi
  int v55; // ebx
  int v56; // r15d
  __int64 v57; // rdx
  bool v58; // zf
  __int64 v59; // rax
  unsigned int v60; // eax
  int v61; // eax
  int v62; // eax
  unsigned int v63; // eax
  int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // eax
  int v67; // eax
  __int64 v68; // rbx
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // rbx
  int v73; // r8d
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned __int8 *v77; // rbx
  char v78; // r13
  int v79; // r11d
  _OWORD *v80; // r8
  _WORD *v81; // r10
  int v82; // edi
  _WORD *v83; // rsi
  __int64 v84; // r14
  unsigned int v85; // ecx
  unsigned int v86; // r9d
  unsigned int v87; // kr04_4
  __int64 v88; // rcx
  _OWORD *v89; // rax
  __int128 v90; // xmm1
  int v91; // edx
  __int64 v92; // rax
  unsigned int v93; // kr08_4
  int v94; // [rsp+24h] [rbp-DCh]
  int v95; // [rsp+28h] [rbp-D8h]
  _BYTE *v96; // [rsp+30h] [rbp-D0h]
  int v97; // [rsp+30h] [rbp-D0h]
  unsigned int v98; // [rsp+38h] [rbp-C8h]
  int v99; // [rsp+3Ch] [rbp-C4h]
  int v100; // [rsp+40h] [rbp-C0h]
  int v101; // [rsp+44h] [rbp-BCh]
  int v102; // [rsp+48h] [rbp-B8h]
  int v103; // [rsp+4Ch] [rbp-B4h]
  int v104; // [rsp+50h] [rbp-B0h]
  unsigned int v105; // [rsp+54h] [rbp-ACh]
  unsigned int v106; // [rsp+58h] [rbp-A8h]
  int v107; // [rsp+5Ch] [rbp-A4h]
  unsigned int v108; // [rsp+60h] [rbp-A0h]
  int v109; // [rsp+64h] [rbp-9Ch]
  char v110; // [rsp+68h] [rbp-98h]
  unsigned int v111; // [rsp+6Ch] [rbp-94h]
  int v112; // [rsp+70h] [rbp-90h]
  int v113; // [rsp+74h] [rbp-8Ch]
  int v114; // [rsp+78h] [rbp-88h]
  _DWORD *v115; // [rsp+80h] [rbp-80h]
  __int128 v116; // [rsp+88h] [rbp-78h]
  __int128 v117; // [rsp+98h] [rbp-68h]
  _DWORD *v118; // [rsp+A8h] [rbp-58h]
  char *v119; // [rsp+B0h] [rbp-50h]
  char *v120; // [rsp+B8h] [rbp-48h]
  __int128 v122; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v123; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v124; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v125; // [rsp+F8h] [rbp-8h]
  __int128 v126; // [rsp+100h] [rbp+0h] BYREF
  __int128 v127; // [rsp+110h] [rbp+10h] BYREF
  __int128 v128; // [rsp+120h] [rbp+20h]
  __int128 v129; // [rsp+130h] [rbp+30h]
  __int128 v130; // [rsp+140h] [rbp+40h]
  __int128 v131; // [rsp+150h] [rbp+50h]
  __int128 v132; // [rsp+160h] [rbp+60h]
  __int128 v133; // [rsp+170h] [rbp+70h]
  __int128 v134; // [rsp+180h] [rbp+80h]
  __int128 v135; // [rsp+190h] [rbp+90h]
  __int128 v136; // [rsp+1A0h] [rbp+A0h]
  __int128 v137; // [rsp+1B0h] [rbp+B0h]
  __int128 v138; // [rsp+1C0h] [rbp+C0h]
  __int128 v139; // [rsp+1D0h] [rbp+D0h]
  int v140; // [rsp+1E0h] [rbp+E0h]
  int v141; // [rsp+1F0h] [rbp+F0h]
  int v142; // [rsp+1F4h] [rbp+F4h]
  int v143; // [rsp+1F8h] [rbp+F8h]
  _DWORD v144[4]; // [rsp+200h] [rbp+100h]
  _DWORD *v145; // [rsp+210h] [rbp+110h]
  _DWORD *v146; // [rsp+218h] [rbp+118h]
  _DWORD *v147; // [rsp+220h] [rbp+120h]

  v3 = a1;
  v4 = *(__int128 *)((char *)a2 + 72);
  v116 = 0LL;
  v117 = 0LL;
  v126 = *(__int128 *)((char *)a2 + 56);
  v6 = *(__int128 *)((char *)a2 + 88);
  v127 = v4;
  v7 = *(__int128 *)((char *)a2 + 104);
  v128 = v6;
  v8 = *(__int128 *)((char *)a2 + 120);
  v129 = v7;
  v9 = *(__int128 *)((char *)a2 + 136);
  v130 = v8;
  v10 = *(__int128 *)((char *)a2 + 152);
  v131 = v9;
  v11 = *(__int128 *)((char *)a2 + 184);
  v132 = v10;
  v133 = *(__int128 *)((char *)a2 + 168);
  v12 = *(__int128 *)((char *)a2 + 200);
  v134 = v11;
  v13 = *(__int128 *)((char *)a2 + 216);
  v135 = v12;
  v14 = *(__int128 *)((char *)a2 + 232);
  v136 = v13;
  v15 = *(__int128 *)((char *)a2 + 248);
  v137 = v14;
  v16 = *(__int128 *)((char *)a2 + 264);
  v17 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v138 = v15;
  *(_QWORD *)&v15 = *((_QWORD *)a2 + 2);
  v139 = v16;
  v140 = v17;
  v18 = 255;
  v19 = *a2;
  v20 = v126;
  v125 = v15;
  v21 = *(__int128 *)((char *)a2 + 40);
  v124 = v19;
  v22 = *(__int128 *)((char *)a2 + 24);
  v123 = v21;
  v122 = v22;
  if ( (v126 & 0x2000) == 0 )
    v18 = 0;
  HIWORD(v125) = v18;
  WORD2(v125) = v18;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v23 = DWORD1(v123);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v143 = 1000000;
  v142 = 1000000;
  v141 = 1000000;
  v144[2] = v23;
  v144[1] = v23;
  v144[0] = v23;
  v147 = 0LL;
  v146 = 0LL;
  v145 = 0LL;
  if ( (v20 & 0x40000) != 0 )
  {
    DWORD2(v122) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v122 + 1)));
    LODWORD(v123) = MulFD6(114000LL, HIDWORD(v122));
    *(_WORD *)((char *)&v123 + 9) = 256;
    HIDWORD(v122) -= DWORD2(v122) + v123;
    WORD1(v122) = 0;
    BYTE1(v122) = 0;
    BYTE11(v123) = 2;
  }
  else if ( (v20 & 0x10000) != 0 )
  {
    v58 = (a1[46] & 0x4000) == 0;
    v141 = a1[117];
    v142 = a1[116];
    v143 = a1[115];
    if ( !v58 )
    {
      v145 = a1 + 131;
      v146 = a1 + 125;
      v147 = a1 + 119;
    }
  }
  v24 = HIDWORD(v123);
  if ( (v20 & 0x20000) == 0 )
    v24 = 1000000;
  HIDWORD(v123) = v24;
  v25 = ComputeChecksum((char *)&v126 + 4, v20 & 0x40321000, 12LL);
  v27 = ComputeChecksum(&v127, v25, v26);
  v29 = ComputeChecksum(&v124, v27, (unsigned int)(v28 + 12));
  v31 = ComputeChecksum(&v122, v29, (unsigned int)(v30 + 20));
  v33 = 256LL;
  v34 = *((unsigned __int16 *)v3 + 3529);
  v35 = *((unsigned __int16 *)v3 + 3528);
  v36 = v122;
  v114 = v34;
  if ( *a3 != v31 )
  {
    *a3 = v31;
    v38 = v20 & 0x1000;
    *((_WORD *)v3 + 3528) = 256;
    v95 = v38;
    if ( (v20 & 0x1000) != 0 )
    {
      v59 = 32LL * *((unsigned __int8 *)v3 + 34);
      v116 = *(_OWORD *)((char *)&RegData + v59);
      v117 = *(_OWORD *)((char *)&RegData + v59 + 16);
    }
    v115 = a3 + 7;
    v107 = DWORD1(v123) - 1;
    v39 = 3;
    v111 = 1000000 - v32;
    if ( (v20 & 0x100000) == 0 || (v36 & 1) != 0 )
      v96 = 0LL;
    else
      v96 = (_BYTE *)*((_QWORD *)v3 + 883);
    v40 = HIDWORD(v123);
    v113 = v20 & 2;
    v99 = v20 & 8;
    v100 = v20 & 0x10;
    v101 = v20 & 0x20;
    v102 = v20 & 0x100;
    v103 = v20 & 0x200;
    v41 = v20;
    v42 = v96;
    v104 = v41 & 4;
    v43 = (char *)&v123 + 12;
    v109 = ~(DWORD1(v123) - 1);
    v44 = (char *)&v127 + 12;
    while ( 1 )
    {
      v97 = v39 - 1;
      v119 = v44 - 4;
      v120 = v43 - 1;
      v45 = *((_DWORD *)v44 - 4);
      v105 = *((_DWORD *)v44 - 1);
      v46 = (unsigned __int8)*(v43 - 1);
      v98 = v45;
      v47 = v144[v46];
      v108 = *(&v141 + v46);
      DWORD1(v123) = v47;
      v110 = *((_BYTE *)&v122 + v46 + 1);
      v48 = *((_DWORD *)&v122 + v46 + 2);
      v118 = (&v145)[v46];
      v49 = 0;
      v94 = 0;
      v112 = v47;
      v106 = v48;
      do
      {
        v50 = DivFD6(v49, 255LL);
        v51 = 0;
        v52 = v50;
        if ( v113 )
        {
          v50 = RaisePower((unsigned int)v50, v98, 0LL);
          v51 = 0;
        }
        if ( v99 )
        {
          if ( v50 <= (int)v129 )
          {
            v57 = DWORD2(v129);
LABEL_50:
            v50 = MulFD6((unsigned int)v50, v57);
          }
          else
          {
            if ( v50 < SDWORD1(v129) )
            {
              v50 -= v129;
              v57 = (unsigned int)v130;
              goto LABEL_50;
            }
            v50 = MulFD6((unsigned int)(v50 - DWORD1(v129)), HIDWORD(v129)) + 1000000;
          }
          v51 = 0;
        }
        if ( v100 )
        {
          v50 = MulFD6((unsigned int)v50, HIDWORD(v127));
          v51 = 0;
        }
        if ( v101 )
          v50 += v128;
        if ( v102 )
        {
          v60 = Log((unsigned int)(7 * v50 + 1000000));
          v50 = DivFD6(v60, (unsigned int)LogFilterMax);
          v51 = 0;
        }
        if ( v50 < 0 )
        {
          v50 = 0;
        }
        else if ( v50 > 1000000 )
        {
          v50 = 1000000;
        }
        v53 = (unsigned int)(1000000 - v50);
        if ( !v103 )
          v53 = (unsigned int)v50;
        if ( v38 )
        {
          if ( (int)v53 > SDWORD1(v116) )
          {
            if ( (int)v53 < SDWORD2(v116) )
            {
              if ( (int)v53 <= 79996 )
              {
                v70 = DivFD6(v53, 9033000LL);
              }
              else
              {
                v68 = (unsigned int)DivFD6((unsigned int)(v53 + 160000), 1160000LL);
                v69 = MulFD6(v68, v68);
                v70 = MulFD6((unsigned int)v68, v69);
              }
              v71 = Log(v70);
              v64 = DWORD2(v117) + MulFD6(v71, HIDWORD(v117));
            }
            else
            {
              v65 = DivFD6((unsigned int)(v53 - DWORD2(v116)), (unsigned int)(1000000 - DWORD2(v116)));
              v66 = RaisePower(v65, 2000000LL, 0LL);
              v67 = MulFD6(v66, (unsigned int)(1000000 - DWORD2(v116)));
              v64 = v117 + MulFD6((unsigned int)(DWORD2(v116) + v67), DWORD1(v117));
            }
          }
          else
          {
            v61 = DivFD6(v53, DWORD1(v116));
            v62 = RaisePower((unsigned int)(1000000 - v61), 1500000LL, 0LL);
            v63 = MulFD6((unsigned int)(1000000 - v62), DWORD1(v116));
            v64 = MulFD6(v63, HIDWORD(v116));
          }
          v53 = (unsigned int)((v64 + 50) / 100);
          v51 = 0;
        }
        if ( (int)v53 < 0 )
        {
          v53 = 0LL;
        }
        else if ( (int)v53 > 1000000 )
        {
          v53 = 1000000LL;
        }
        if ( v104 )
        {
          v53 = (unsigned int)RaisePower(v53, v105, 0LL);
          v51 = 0;
        }
        if ( v42 )
        {
          *v42 = MulFD6(v53, 255LL);
          LODWORD(v53) = v52;
          ++v42;
          v51 = 0;
        }
        v54 = 1000000 - v53;
        if ( (v36 & 1) != 0 )
          v54 = v53;
        if ( v118 )
        {
          LODWORD(v72) = -1;
          do
          {
            v72 = (unsigned int)(v72 + 1);
            v73 = v51;
            v51 = v118[v72];
          }
          while ( v54 > v51 );
          v74 = DivFD6((unsigned int)(v54 - v73), (unsigned int)(v51 - v73));
          v55 = v47 + MulFD6(v74, 4095LL) + ((_DWORD)v72 << 12);
        }
        else
        {
          v55 = v47 + MulFD6((unsigned int)v54, v106);
        }
        v56 = ((v55 & v109) << v110) | MulFD6(v55 & (unsigned int)v107, v108);
        if ( v54 > v40 )
        {
          v75 = DivFD6((unsigned int)(v54 - v40), v111);
          v76 = RaisePower(v75, 2000000LL, 0LL);
          v56 |= (unsigned int)MulFD6(v76, 1365LL) << 21;
        }
        v38 = v95;
        v49 = ++v94;
        *v115 = v56;
        v47 = v112;
        ++v115;
      }
      while ( v94 < 256 );
      v39 = v97;
      v44 = v119;
      v43 = v120;
      if ( !v97 )
      {
        v3 = a1;
        v35 = 256;
        v20 = v126;
        v36 = v122;
        v34 = v114;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v20 & 0x300000) == 0x300000 && v35 != v34 )
  {
    v77 = (unsigned __int8 *)*((_QWORD *)v3 + 883);
    v78 = v36 & 1;
    *((_WORD *)v3 + 3528) = v34;
    *((_WORD *)v3 + 3529) = v34;
    v79 = 127;
    v80 = v77 + 768;
    v81 = v77 + 2304;
    v82 = 127;
    v83 = v77 + 2304;
    v84 = 256LL;
    v85 = (v34 * ((unsigned int)(unsigned __int8)-(v78 != 0) + 65280) + 127) / 0xFF;
    v86 = (unsigned __int8)-(v78 != 0) + 65280 - v85;
    do
    {
      v87 = v82;
      v82 += v85;
      *v83++ = v87 / 0xFF;
      --v84;
    }
    while ( v84 );
    if ( v78 )
    {
      v88 = 4LL;
      v89 = v77 + 2304;
      do
      {
        *v80 = *v89;
        v80[1] = v89[1];
        v80[2] = v89[2];
        v80[3] = v89[3];
        v80[4] = v89[4];
        v80[5] = v89[5];
        v80[6] = v89[6];
        v80 += 8;
        v90 = v89[7];
        v89 += 8;
        *(v80 - 1) = v90;
        --v88;
      }
      while ( v88 );
    }
    else
    {
      v91 = 768;
      do
      {
        v92 = *v77++;
        *(_WORD *)v80 = v81[v92];
        v80 = (_OWORD *)((char *)v80 + 2);
        --v91;
      }
      while ( v91 );
    }
    do
    {
      v93 = v79;
      result = (unsigned int)(-2139062143 * v79);
      v79 += v86;
      *v81++ = v93 / 0xFF;
      --v33;
    }
    while ( v33 );
  }
  return result;
}
