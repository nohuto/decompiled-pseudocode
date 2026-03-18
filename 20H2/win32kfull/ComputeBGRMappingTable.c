/*
 * XREFs of ComputeBGRMappingTable @ 0x1C0261348
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C006E2C8 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C0262424 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x1C006EAF4 (MulFD6.c)
 *     DivFD6 @ 0x1C006F7F4 (DivFD6.c)
 *     RaisePower @ 0x1C0072790 (RaisePower.c)
 *     FD6DivL @ 0x1C0072A9C (FD6DivL.c)
 *     MulDivFD6Pairs @ 0x1C0113040 (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     CacheRGBToXYZ @ 0x1C0261258 (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x1C02620EC (ScaleRGB.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int128 *a3, _BYTE *a4)
{
  char *v5; // r12
  unsigned __int64 *v6; // xmm1_8
  unsigned __int8 v7; // r15
  int v8; // ebx
  unsigned __int8 v9; // al
  char v10; // r8
  char v11; // cl
  unsigned __int64 *v12; // r14
  unsigned int v13; // edx
  __int64 v15; // r13
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // cl
  int v22; // eax
  __int16 v23; // bx
  __int16 v24; // r15
  int v25; // r14d
  int v26; // r12d
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  char *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // edx
  int v34; // r8d
  unsigned int v35; // ebx
  int v36; // r9d
  int v37; // ecx
  _DWORD *v38; // r13
  __int64 v39; // r10
  int v40; // eax
  int v41; // esi
  int v42; // ebx
  int v43; // r14d
  int v44; // edx
  int v45; // r15d
  int v46; // r12d
  int v47; // ebx
  int v48; // edx
  int v49; // esi
  int v50; // r14d
  int v51; // edx
  int v52; // ecx
  int v53; // esi
  int v54; // eax
  int v55; // ebx
  int v56; // esi
  int v57; // r14d
  int v58; // eax
  int v59; // eax
  int v60; // ebx
  int v61; // esi
  int v62; // eax
  int v63; // esi
  int v64; // ebx
  int v65; // eax
  int v66; // eax
  int v67; // edx
  int v68; // esi
  int v69; // eax
  int v70; // eax
  int v71; // edx
  int v72; // ecx
  int v73; // eax
  int v74; // edx
  int v75; // ebx
  int v76; // edx
  int v77; // eax
  int v78; // eax
  int v79; // r15d
  int v80; // edx
  _DWORD *v81; // rsi
  int v82; // r15d
  char v83; // al
  _BYTE *v84; // r15
  char v85; // al
  PVOID v86; // rax
  size_t v87; // r8
  unsigned __int8 v88; // [rsp+20h] [rbp-E0h]
  char v89; // [rsp+21h] [rbp-DFh]
  int v90; // [rsp+24h] [rbp-DCh]
  int v91; // [rsp+24h] [rbp-DCh]
  int v92; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+28h] [rbp-D8h]
  int v94; // [rsp+2Ch] [rbp-D4h]
  int v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+34h] [rbp-CCh]
  int v97; // [rsp+38h] [rbp-C8h]
  int v98; // [rsp+3Ch] [rbp-C4h]
  int v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 *v101; // [rsp+48h] [rbp-B8h]
  _DWORD *v102; // [rsp+50h] [rbp-B0h]
  _DWORD *v103; // [rsp+58h] [rbp-A8h]
  _DWORD *v104; // [rsp+60h] [rbp-A0h]
  char *v105; // [rsp+68h] [rbp-98h]
  _BYTE *v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+78h] [rbp-88h]
  int v108; // [rsp+7Ch] [rbp-84h]
  __int64 v109; // [rsp+80h] [rbp-80h]
  char *v110; // [rsp+88h] [rbp-78h]
  char *v111; // [rsp+90h] [rbp-70h]
  _DWORD *v112; // [rsp+98h] [rbp-68h]
  __int64 v113; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v114; // [rsp+A8h] [rbp-58h] BYREF
  int v115; // [rsp+B0h] [rbp-50h]
  int v116; // [rsp+B8h] [rbp-48h] BYREF
  int v117; // [rsp+C0h] [rbp-40h]
  int v118; // [rsp+C4h] [rbp-3Ch]
  int v119; // [rsp+C8h] [rbp-38h]
  int v120; // [rsp+CCh] [rbp-34h]
  int v121; // [rsp+D0h] [rbp-30h]
  int v122; // [rsp+D4h] [rbp-2Ch]
  __int128 v123; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v124; // [rsp+E8h] [rbp-18h]
  int v125; // [rsp+F0h] [rbp-10h] BYREF
  int v126; // [rsp+F4h] [rbp-Ch]
  int v127; // [rsp+F8h] [rbp-8h]
  int v128; // [rsp+FCh] [rbp-4h]
  int v129; // [rsp+100h] [rbp+0h]
  int v130; // [rsp+104h] [rbp+4h]

  v106 = a4;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v5 = 0LL;
  v105 = 0LL;
  v111 = 0LL;
  v110 = 0LL;
  v112 = 0LL;
  v100 = 0;
  v114 = 0LL;
  v115 = 0;
  v95 = 0;
  if ( a3 )
  {
    v6 = (unsigned __int64 *)*((_QWORD *)a3 + 2);
    v123 = *a3;
    v7 = BYTE2(v123);
    v8 = DWORD1(v123);
    v9 = BYTE3(v123);
    v10 = BYTE1(v123);
    v11 = v123;
    v124 = v6;
    v12 = v6;
    v88 = BYTE2(v123);
    v99 = DWORD2(v123);
  }
  else
  {
    v11 = 0;
    v88 = 0;
    v10 = 0;
    v99 = 0x8000;
    v7 = 0;
    v12 = &v114;
    v9 = 0;
    v8 = 255;
  }
  v101 = v12;
  v92 = v8;
  if ( v11 )
    return 4294967267LL;
  v13 = *(_DWORD *)(a2 + 56);
  v97 = *(_DWORD *)(a2 + 56);
  if ( !a4 )
    return 4294967267LL;
  if ( !v12 )
    return 4294967278LL;
  v109 = 0LL;
  v15 = 0LL;
  if ( v10 )
  {
    if ( v9 > 5u )
      return 4294967273LL;
    v16 = SrcOrderTable[v9];
    v17 = v16 >> 8;
    if ( BYTE1(v16) >= 3u )
      return 4294967273LL;
    v13 = HIWORD(v16);
    if ( BYTE2(v16) >= 3u )
      return 4294967273LL;
    v18 = HIBYTE(v16);
    if ( (unsigned __int8)v18 >= 3u )
      return 4294967273LL;
    v102 = (_DWORD *)&v114 + (unsigned __int8)v17;
    v19 = (unsigned __int8)v13;
    LOWORD(v13) = v97;
    v103 = (_DWORD *)&v114 + v19;
    v104 = (_DWORD *)&v114 + (unsigned __int8)v18;
  }
  if ( v10 )
  {
    switch ( v10 )
    {
      case 1:
        v94 = 1;
        break;
      case 2:
        v94 = 2;
        break;
      case 4:
        v94 = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 304);
    v8 = 31;
    v92 = 31;
    v7 = 0;
    v109 = v15;
    v88 = 0;
    v94 = 0;
  }
  v108 = v13 & 0x400;
  v20 = *(_QWORD *)(a2 + 288);
  if ( (v13 & 0x400) != 0 )
    v112 = (_DWORD *)(v20 + 76);
  v21 = *(_BYTE *)(v20 + 1);
  v89 = v21;
  if ( !v21 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v13 & 0x80C0) != 0 )
  {
    v22 = 1000000;
    v23 = 1;
    v24 = v21 == 0;
    v90 = 1000000;
    if ( (v13 & 0x40) != 0 )
      v25 = *(_DWORD *)(a2 + 92);
    else
      v25 = 1000000;
    v26 = v25;
    if ( (v13 & 0x80u) != 0 )
    {
      if ( v21 == 1 )
      {
        v26 = 500 * v25;
        v25 *= 200;
      }
      v24 = 1;
      v27 = *(_DWORD *)(a2 + 96);
      LODWORD(v124) = MulFD6(v25, -v27);
      v28 = MulFD6(v26, v27);
      v23 = 2;
      v129 = v28;
      v22 = *(_DWORD *)(a2 + 100);
      v90 = v22;
      DWORD1(v123) = 500000000;
      v126 = 200000000;
    }
    DWORD2(v123) = MulFD6(v26, v22);
    v29 = MulFD6(v25, v90);
    v12 = v101;
    LOWORD(v123) = v23;
    v5 = 0LL;
    WORD1(v123) = v24;
    LOWORD(v125) = v23;
    v8 = v92;
    HIWORD(v125) = v24;
    v7 = v88;
    v127 = v29;
  }
  if ( v15 )
  {
    v30 = (char *)EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x31355448u);
    v105 = v30;
    v5 = v30;
    if ( v30 )
    {
      v31 = *(unsigned __int16 *)(v15 + 16);
      v109 = CacheRGBToXYZ(v15, v30, (__int64)&v100, a2);
      v15 = v109;
      v32 = 3 * (v31 + 1);
      v8 = 0;
      v111 = &v5[4 * v32];
      v110 = &v111[4 * v32];
    }
  }
  v116 = 3;
  v33 = 0;
  v98 = 0;
  if ( v8 == 1000000 )
    v8 = 0;
  v96 = 0;
  v93 = v8;
  v34 = 0;
  v35 = v99;
  v36 = 0;
  v91 = 0;
  v37 = v99;
  if ( v99 )
  {
    v38 = (_DWORD *)v12 + 1;
    v107 = v97 & 0x80C0;
    v39 = v7;
    ++v106;
    v113 = v7;
    while ( 1 )
    {
      LODWORD(v101) = v37 - 1;
      if ( v94 )
      {
        if ( v94 == 1 )
        {
          *v102 = *((unsigned __int8 *)v38 - 4);
          *v103 = *((unsigned __int8 *)v38 - 3);
          v40 = *((unsigned __int8 *)v38 - 2);
        }
        else if ( v94 == 2 )
        {
          *v102 = *((__int16 *)v38 - 2);
          *v103 = *((__int16 *)v38 - 1);
          v40 = *(__int16 *)v38;
        }
        else
        {
          *v102 = *(v38 - 1);
          *v103 = *v38;
          v40 = v38[1];
        }
        *v104 = v40;
        v41 = v115;
        v42 = HIDWORD(v114);
        v43 = v114;
      }
      else
      {
        v43 = v36;
        v114 = __PAIR64__(v34, v36);
        v115 = v33;
        v91 = v36 + 1;
        v42 = v34;
        v41 = v33;
        if ( v36 + 1 >= 32 )
        {
          v91 = 0;
          v98 = v34 + 1;
          if ( v34 + 1 >= 32 )
          {
            v44 = v33 + 1;
            v98 = 0;
            if ( v44 >= 32 )
              v44 = 0;
            v96 = v44;
          }
        }
      }
      v38 = (_DWORD *)((char *)v38 + v39);
      if ( v93 )
      {
        LODWORD(v114) = DivFD6(v43, v93);
        v43 = v114;
        HIDWORD(v114) = DivFD6(v42, v93);
        v42 = HIDWORD(v114);
        v41 = DivFD6(v41, v93);
        v115 = v41;
      }
      if ( !v107 )
        goto LABEL_102;
      if ( v5 )
      {
        v45 = *(_DWORD *)&v110[12 * v41 + 4] + *(_DWORD *)&v111[12 * v42 + 4] + *(_DWORD *)&v105[12 * v43 + 4];
        v46 = *(_DWORD *)&v105[12 * v43] + *(_DWORD *)&v111[12 * v42] + *(_DWORD *)&v110[12 * v41];
        v47 = *(_DWORD *)&v110[12 * v41 + 8] + *(_DWORD *)&v111[12 * v42 + 8] + *(_DWORD *)&v105[12 * v43 + 8];
      }
      else
      {
        v117 = *(_DWORD *)(a2 + 124);
        v119 = *(_DWORD *)(a2 + 128);
        v121 = *(_DWORD *)(a2 + 132);
        HIWORD(v116) = 0;
        v118 = v43;
        v120 = v42;
        v122 = v41;
        v46 = MulDivFD6Pairs(&v116);
        v118 = v43;
        v117 = *(_DWORD *)(a2 + 136);
        v119 = *(_DWORD *)(a2 + 140);
        v121 = *(_DWORD *)(a2 + 144);
        v120 = v42;
        v122 = v41;
        v45 = MulDivFD6Pairs(&v116);
        v117 = *(_DWORD *)(a2 + 148);
        v119 = *(_DWORD *)(a2 + 152);
        v121 = *(_DWORD *)(a2 + 156);
        v118 = v43;
        v120 = v42;
        v122 = v41;
        v47 = MulDivFD6Pairs(&v116);
      }
      if ( v89 )
      {
        v48 = *(_DWORD *)(a2 + 160);
        if ( v48 != 1000000 )
          v46 = DivFD6(v46, v48);
        if ( v46 < 8856 )
          v49 = MulFD6(v46, 7787000) + 137931;
        else
          v49 = RaisePower(v46, 3, 3);
        if ( v45 < 8856 )
          v50 = MulFD6(v45, 7787000) + 137931;
        else
          v50 = RaisePower(v45, 3, 3);
        v51 = *(_DWORD *)(a2 + 168);
        v95 = v50;
        if ( v51 != 1000000 )
          v47 = DivFD6(v47, v51);
        if ( v47 < 8856 )
          v52 = MulFD6(v47, 7787000) + 137931;
        else
          v52 = RaisePower(v47, 3, 3);
        v53 = v49 - v50;
        v54 = v50 - v52;
      }
      else
      {
        v55 = v46 + 2 * (v45 + v47 + 4 * v45) + v45 + v47 + 4 * v45;
        v56 = DivFD6(4 * v46, v55) - *(_DWORD *)(a2 + 184);
        v57 = DivFD6(9 * v45, v55) - *(_DWORD *)(a2 + 188);
        if ( v45 <= 8856 )
        {
          v59 = MulFD6(v45, 9033000);
        }
        else
        {
          v58 = RaisePower(v45, 3, 3);
          v59 = MulFD6(v58, 1160000) - 160000;
        }
        v60 = 13 * v59;
        v53 = MulFD6(13 * v59, v56);
        v54 = MulFD6(v60, v57);
        v50 = v95;
        DWORD1(v123) = v60;
        v126 = v60;
      }
      v130 = v53;
      HIDWORD(v123) = v53;
      v128 = v54;
      HIDWORD(v124) = v54;
      v61 = MulDivFD6Pairs((int *)&v123);
      v62 = MulDivFD6Pairs(&v125);
      if ( v89 )
      {
        v63 = v50 + v61;
        v64 = v50 - v62;
        if ( v63 <= 206893 )
        {
          v66 = DivFD6(v63 - 137931, 7787000);
        }
        else
        {
          v65 = MulFD6(v63, v63);
          v66 = MulFD6(v63, v65);
        }
        v67 = *(_DWORD *)(a2 + 240);
        v68 = v66;
        if ( v67 != 1000000 )
          v68 = MulFD6(v66, v67);
        if ( v64 <= 206893 )
        {
          v70 = DivFD6(v64 - 137931, 7787000);
        }
        else
        {
          v69 = MulFD6(v64, v64);
          v70 = MulFD6(v64, v69);
        }
        v71 = *(_DWORD *)(a2 + 248);
        v72 = v70;
        if ( v71 == 1000000 )
          goto LABEL_101;
        v73 = MulFD6(v70, v71);
      }
      else
      {
        v74 = v62 + *(_DWORD *)(a2 + 268);
        if ( v74 < 0 || (v75 = DivFD6(9 * v45, v74), v75 < 0) )
          v75 = 2147000000;
        v76 = v61 + *(_DWORD *)(a2 + 264);
        if ( v76 >= 0 )
        {
          v77 = MulFD6(v75, v76);
          v68 = FD6DivL(v77, 4);
        }
        else
        {
          v68 = 0;
        }
        v73 = FD6DivL(v75 - 15 * v45 - v68, 3);
      }
      v72 = v73;
LABEL_101:
      v117 = *(_DWORD *)(a2 + 204);
      v119 = *(_DWORD *)(a2 + 208);
      v78 = *(_DWORD *)(a2 + 212);
      v122 = v72;
      v121 = v78;
      HIWORD(v116) = 0;
      v118 = v68;
      v120 = v45;
      LODWORD(v114) = MulDivFD6Pairs(&v116);
      v117 = *(_DWORD *)(a2 + 216);
      v119 = *(_DWORD *)(a2 + 220);
      v121 = *(_DWORD *)(a2 + 224);
      HIDWORD(v114) = MulDivFD6Pairs(&v116);
      v117 = *(_DWORD *)(a2 + 228);
      v119 = *(_DWORD *)(a2 + 232);
      v121 = *(_DWORD *)(a2 + 236);
      v115 = MulDivFD6Pairs(&v116);
      ScaleRGB(&v114);
      v41 = v115;
      v42 = HIDWORD(v114);
      v43 = v114;
      v5 = v105;
LABEL_102:
      if ( v108 )
      {
        if ( (v97 & 0x800) != 0 )
        {
          v79 = v42;
          if ( v43 > v42 )
            v79 = v43;
          if ( v41 > v79 )
            v79 = v41;
        }
        else
        {
          v79 = 1000000;
        }
        HIWORD(v116) = 0;
        v80 = v79 - v41;
        v81 = v112;
        v118 = v79 - v43;
        v122 = v80;
        v95 = v79 - v42;
        v117 = *v112;
        v119 = v112[1];
        v121 = v112[2];
        v120 = v79 - v42;
        v43 = v79 - MulDivFD6Pairs(&v116);
        LODWORD(v114) = v43;
        v117 = v81[3];
        v119 = v81[4];
        v121 = v81[5];
        v42 = v79 - MulDivFD6Pairs(&v116);
        HIDWORD(v114) = v42;
        v117 = v81[6];
        v119 = v81[7];
        v121 = v81[8];
        v82 = v79 - MulDivFD6Pairs(&v116);
        if ( v43 >= 0 )
        {
          if ( v43 > 1000000 )
            v43 = 1000000;
          LODWORD(v114) = v43;
        }
        else
        {
          v43 = 0;
          LODWORD(v114) = 0;
        }
        if ( v42 >= 0 )
        {
          if ( v42 > 1000000 )
            v42 = 1000000;
          HIDWORD(v114) = v42;
        }
        else
        {
          v42 = 0;
          HIDWORD(v114) = 0;
        }
        if ( v82 >= 0 )
        {
          if ( v82 > 1000000 )
            v82 = 1000000;
          v41 = v82;
          v115 = v82;
        }
        else
        {
          v41 = 0;
          v115 = 0;
        }
      }
      v83 = MulFD6(v43, 255);
      v84 = v106;
      v106[1] = v83;
      *v84 = MulFD6(v42, 255);
      v85 = MulFD6(v41, 255);
      v37 = (int)v101;
      v33 = v96;
      v34 = v98;
      v36 = v91;
      v39 = v113;
      *(v84 - 1) = v85;
      v106 = v84 + 3;
      if ( !v37 )
      {
        v15 = v109;
        v35 = v99;
        break;
      }
    }
  }
  if ( v5 )
  {
    if ( v15 )
    {
      v86 = *(PVOID *)(v15 + 8);
      if ( v86
        || (v86 = EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x32345448u), (*(_QWORD *)(v15 + 8) = v86) != 0LL) )
      {
        v87 = *(unsigned __int16 *)(v15 + 18);
        *(_DWORD *)v15 = v100;
        memmove(v86, v5, v87);
      }
    }
    EngFreeMem(v5);
  }
  return v35;
}
