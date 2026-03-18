/*
 * XREFs of _ComputeBGRMappingTable @ 0x1BCF91
 * Callers:
 *     _CreateHalftoneBrushPat @ 0xF9AD2 (_CreateHalftoneBrushPat.c)
 *     _CreateDyesColorMappingTable @ 0x1BE5CD (_CreateDyesColorMappingTable.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _MulDivFD6Pairs @ 0xED94C (_MulDivFD6Pairs.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _FD6DivL @ 0xEDA24 (_FD6DivL.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 *     _CacheRGBToXYZ @ 0x1BCECA (_CacheRGBToXYZ.c)
 *     _ScaleRGB @ 0x1BE8D9 (_ScaleRGB.c)
 */

int __usercall ComputeBGRMappingTable@<eax>(_DWORD *a1@<edx>, int *a2, int a3)
{
  char v3; // cl
  _DWORD *v4; // ebx
  int *v5; // edi
  int v6; // esi
  char v7; // dl
  unsigned __int8 v8; // al
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  PVOID v24; // ecx
  int v25; // esi
  int v26; // ecx
  int v27; // edx
  int *v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edi
  int v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // eax
  int v37; // edi
  int v38; // ecx
  int v39; // esi
  int v40; // ecx
  int v41; // edi
  int v42; // eax
  int v43; // ecx
  int v44; // edi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // edi
  int v49; // eax
  int v50; // eax
  int v51; // esi
  int v52; // edi
  int v53; // eax
  int v54; // edi
  int v55; // esi
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // edi
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  int v63; // edi
  int v64; // esi
  __int64 v65; // rax
  int v66; // eax
  int v67; // eax
  int v68; // esi
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  int v72; // esi
  int v73; // edi
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // ecx
  char v78; // al
  _BYTE *v79; // esi
  char v80; // al
  char v81; // al
  void *v82; // esi
  int v83; // ebx
  PVOID v84; // eax
  int v85; // [esp-18h] [ebp-100h]
  int v86; // [esp-10h] [ebp-F8h]
  int *v88; // [esp+10h] [ebp-D8h]
  int v89; // [esp+14h] [ebp-D4h]
  int v91; // [esp+1Ch] [ebp-CCh]
  int v92; // [esp+20h] [ebp-C8h]
  int v93; // [esp+24h] [ebp-C4h] BYREF
  int v94; // [esp+28h] [ebp-C0h]
  _BYTE *v95; // [esp+2Ch] [ebp-BCh]
  int v96; // [esp+30h] [ebp-B8h]
  int v97; // [esp+34h] [ebp-B4h]
  char *v98; // [esp+38h] [ebp-B0h]
  char *v99; // [esp+3Ch] [ebp-ACh]
  int *v100; // [esp+40h] [ebp-A8h]
  int v101; // [esp+44h] [ebp-A4h]
  int *v102; // [esp+48h] [ebp-A0h]
  int *v103; // [esp+4Ch] [ebp-9Ch]
  int *v104; // [esp+50h] [ebp-98h]
  int v105; // [esp+54h] [ebp-94h]
  void *Src; // [esp+58h] [ebp-90h]
  int v107; // [esp+5Ch] [ebp-8Ch]
  int v108; // [esp+60h] [ebp-88h]
  int v109; // [esp+64h] [ebp-84h]
  int v110; // [esp+68h] [ebp-80h]
  int v111; // [esp+6Ch] [ebp-7Ch]
  int v112; // [esp+70h] [ebp-78h]
  int v113; // [esp+74h] [ebp-74h]
  unsigned __int8 v114; // [esp+7Bh] [ebp-6Dh]
  int v115; // [esp+7Ch] [ebp-6Ch]
  int v116; // [esp+80h] [ebp-68h]
  char v117; // [esp+87h] [ebp-61h]
  _WORD v118[2]; // [esp+88h] [ebp-60h] BYREF
  int v119; // [esp+8Ch] [ebp-5Ch]
  int v120; // [esp+90h] [ebp-58h]
  int v121; // [esp+94h] [ebp-54h]
  int v122; // [esp+98h] [ebp-50h]
  int v123; // [esp+9Ch] [ebp-4Ch]
  _WORD v124[2]; // [esp+A0h] [ebp-48h] BYREF
  int v125; // [esp+A4h] [ebp-44h]
  int v126; // [esp+A8h] [ebp-40h]
  int v127; // [esp+ACh] [ebp-3Ch]
  int v128; // [esp+B0h] [ebp-38h]
  int *v129; // [esp+B4h] [ebp-34h]
  __int16 v130; // [esp+B8h] [ebp-30h] BYREF
  __int16 v131; // [esp+BAh] [ebp-2Eh]
  int v132; // [esp+C0h] [ebp-28h]
  int v133; // [esp+C4h] [ebp-24h]
  int v134; // [esp+C8h] [ebp-20h]
  int v135; // [esp+CCh] [ebp-1Ch]
  int v136; // [esp+D0h] [ebp-18h]
  int v137; // [esp+D4h] [ebp-14h]
  int v138; // [esp+D8h] [ebp-10h] BYREF
  int v139; // [esp+DCh] [ebp-Ch]
  int v140; // [esp+E0h] [ebp-8h]

  v3 = 0;
  v4 = a1;
  v116 = a3;
  v138 = 0;
  v104 = 0;
  v103 = 0;
  v102 = 0;
  v139 = 0;
  Src = 0;
  v99 = 0;
  v98 = 0;
  v100 = 0;
  v93 = 0;
  v140 = 0;
  v110 = 0;
  if ( a2 )
  {
    v126 = *a2;
    v127 = a2[1];
    v128 = a2[2];
    v129 = (int *)a2[3];
    v5 = v129;
    v6 = v127;
    v3 = BYTE1(v126);
    v7 = v126;
    v96 = v128;
    v8 = HIBYTE(v126);
    v114 = BYTE2(v126);
  }
  else
  {
    v7 = 0;
    v114 = 0;
    v8 = 0;
    v96 = 0x8000;
    v6 = 255;
    v5 = &v138;
  }
  v113 = (int)v5;
  v115 = v6;
  v117 = v3;
  if ( v7 )
    return -29;
  v97 = v4[14];
  if ( !v116 )
    return -29;
  if ( !v5 )
    return -18;
  v9 = 0;
  v109 = 0;
  if ( v3 )
  {
    if ( v8 > 5u )
      return -23;
    v10 = SrcOrderTable[v8];
    v11 = v10 >> 8;
    if ( BYTE1(v10) >= 3u )
      return -23;
    v12 = HIWORD(v10);
    if ( BYTE2(v10) >= 3u )
      return -23;
    v13 = HIBYTE(v10);
    if ( (unsigned __int8)v13 >= 3u )
      return -23;
    v104 = &v138 + (unsigned __int8)v11;
    v103 = &v138 + (unsigned __int8)v12;
    v14 = v13;
    v3 = v117;
    v9 = v109;
    v102 = &v138 + v14;
  }
  if ( v3 )
  {
    switch ( v3 )
    {
      case 1:
        v105 = 1;
        break;
      case 2:
        v105 = 2;
        break;
      case 4:
        v105 = 3;
        break;
      default:
        return -10004;
    }
  }
  else
  {
    v9 = v4[73];
    v6 = 31;
    v114 = 0;
    v115 = 31;
    v109 = v9;
    v105 = 0;
  }
  v89 = v97 & 0x400;
  v16 = v4[71];
  if ( (v97 & 0x400) != 0 )
  {
    v100 = (int *)(v16 + 76);
    v5 = (int *)v113;
  }
  v117 = *(_BYTE *)(v16 + 1);
  v101 = 1000000;
  if ( !v117 && (v4[48] != v4[68] || v4[49] != v4[69]) || (v97 & 0x80C0) != 0 )
  {
    v108 = 1;
    v107 = v117 == 0;
    v17 = v101;
    if ( (v97 & 0x40) != 0 )
      v18 = v4[23];
    else
      v18 = v101;
    v19 = v18;
    v112 = v18;
    if ( (v97 & 0x80u) != 0 )
    {
      if ( v117 == 1 )
      {
        v20 = 500 * v18;
        v18 *= 200;
        v112 = v20;
      }
      v21 = v4[24];
      v108 = 2;
      v107 = 1;
      v128 = MulFD6(v18, -v21);
      v22 = MulFD6(v112, v21);
      v17 = v4[25];
      v122 = v22;
      v19 = v112;
      v125 = 500000000;
      v119 = 200000000;
    }
    v126 = MulFD6(v19, v17);
    v23 = MulFD6(v18, v17);
    v9 = v109;
    v6 = v115;
    v5 = (int *)v113;
    v120 = v23;
    v124[0] = v108;
    v124[1] = v107;
    v118[0] = v108;
    v118[1] = v107;
  }
  if ( v9 )
  {
    v24 = EngAllocMem(0, *(unsigned __int16 *)(v9 + 10), 0x31355448u);
    Src = v24;
    if ( v24 )
    {
      v25 = *(unsigned __int16 *)(v109 + 8) + 1;
      v109 = CacheRGBToXYZ(v109, v24, &v93, (int)v4);
      v99 = (char *)Src + 12 * v25;
      v98 = &v99[12 * v25];
      v6 = 0;
    }
  }
  v26 = 0;
  v130 = 3;
  v27 = v6 != 1000000 ? v6 : 0;
  v94 = v27;
  v113 = 0;
  v131 = 0;
  v107 = 0;
  v112 = 0;
  v108 = v96;
  if ( v96 )
  {
    v28 = v5 + 1;
    v92 = v114;
    v91 = v97 & 0x80C0;
    v95 = (_BYTE *)(v116 + 1);
    v29 = v108;
    while ( 1 )
    {
      v108 = v29 - 1;
      if ( v105 )
        break;
      v32 = v113++;
      v139 = v26;
      v31 = v107;
      v138 = v32;
      v140 = v107;
      if ( v113 >= 32 )
      {
        v113 = 0;
        if ( ++v112 >= 32 )
        {
          v112 = 0;
          if ( ++v107 >= 32 )
            v107 = 0;
        }
      }
LABEL_56:
      v88 = (int *)((char *)v28 + v92);
      if ( v27 )
      {
        v33 = DivFD6(v32, v27);
        v34 = v94;
        v138 = v33;
        v139 = DivFD6(v139, v94);
        v35 = DivFD6(v140, v34);
        v32 = v138;
        v31 = v35;
        v140 = v35;
      }
      if ( v91 )
      {
        if ( Src )
        {
          v36 = 12 * v32;
          v37 = *(_DWORD *)&v98[12 * v31] + *((_DWORD *)Src + 3 * v32) + *(_DWORD *)&v99[12 * v139];
          v111 = *(_DWORD *)&v98[12 * v31 + 4] + *(_DWORD *)&v99[12 * v139 + 4] + *(_DWORD *)((char *)Src + v36 + 4);
          v4 = a1;
          v38 = *(_DWORD *)&v98[12 * v31 + 8] + *(_DWORD *)&v99[12 * v139 + 8] + *(_DWORD *)((char *)Src + v36 + 8);
          v39 = v111;
        }
        else
        {
          v133 = v32;
          v131 = 0;
          v132 = v4[31];
          v134 = v4[32];
          v135 = v139;
          v136 = v4[33];
          v137 = v31;
          v37 = MulDivFD6Pairs((int)&v130);
          v132 = v4[34];
          v133 = v138;
          v134 = v4[35];
          v135 = v139;
          v136 = v4[36];
          v137 = v140;
          v39 = MulDivFD6Pairs((int)&v130);
          v132 = v4[37];
          v133 = v138;
          v40 = v4[38];
          v111 = v39;
          v134 = v40;
          v137 = v140;
          v135 = v139;
          v136 = v4[39];
          v38 = MulDivFD6Pairs((int)&v130);
        }
        v115 = v38;
        if ( v117 )
        {
          if ( v4[40] != 1000000 )
            v37 = DivFD6(v37, v4[40]);
          if ( v37 < 8856 )
            v41 = MulFD6(v37, 7787000) + 137931;
          else
            v41 = RaisePower(v37, 3, 3);
          if ( v39 < 8856 )
            v110 = MulFD6(v39, 7787000) + 137931;
          else
            v110 = RaisePower(v39, 3, 3);
          if ( v4[42] == 1000000 )
            v42 = v115;
          else
            v42 = DivFD6(v115, v4[42]);
          if ( v42 < 8856 )
            v43 = MulFD6(v42, 7787000) + 137931;
          else
            v43 = RaisePower(v42, 3, 3);
          v44 = v41 - v110;
          v45 = v110 - v43;
        }
        else
        {
          v46 = v37 + 3 * (v38 + 5 * v39);
          v47 = DivFD6(4 * v37, v46);
          v48 = v111;
          v115 = v47 - v4[46];
          v116 = DivFD6(9 * v111, v46) - v4[47];
          if ( v48 <= 8856 )
          {
            v50 = MulFD6(v48, 9033000);
          }
          else
          {
            v49 = RaisePower(v48, 3, 3);
            v50 = MulFD6(v49, 1160000) - (_DWORD)&loc_27100;
          }
          v51 = 13 * v50;
          v44 = MulFD6(13 * v50, v115);
          v45 = MulFD6(v51, v116);
          v125 = v51;
          v119 = v51;
          v39 = v111;
        }
        v121 = v45;
        v129 = (int *)v45;
        v123 = v44;
        v127 = v44;
        v52 = MulDivFD6Pairs((int)v124);
        v53 = MulDivFD6Pairs((int)v118);
        if ( v117 )
        {
          v54 = v110 + v52;
          v55 = v110 - v53;
          if ( v54 <= 206893 )
          {
            v57 = DivFD6(v54 - 137931, 7787000);
          }
          else
          {
            v56 = MulFD6(v54, v54);
            v57 = MulFD6(v54, v56);
          }
          v58 = v4[60];
          v59 = v101;
          v115 = v57;
          if ( v58 != v101 )
            v115 = MulFD6(v57, v58);
          if ( v55 <= 206893 )
          {
            v61 = DivFD6(v55 - 137931, 7787000);
          }
          else
          {
            v60 = MulFD6(v55, v55);
            v61 = MulFD6(v55, v60);
          }
          v62 = v4[62];
          v116 = v61;
          if ( v62 != v59 )
            v116 = MulFD6(v61, v62);
          v63 = v111;
        }
        else
        {
          v67 = v53 + v4[67];
          if ( v67 < 0 || (v68 = DivFD6(9 * v39, v67), v68 < 0) )
            v68 = 2147000000;
          v69 = v52 + v4[66];
          if ( v69 >= 0 )
          {
            v71 = MulFD6(v68, v69);
            v70 = FD6DivL(v71, 4);
            v115 = v70;
          }
          else
          {
            v70 = 0;
            v115 = 0;
          }
          v63 = v111;
          v116 = FD6DivL(v68 - 15 * v111 - v70, 3);
        }
        v64 = v115;
        v131 = 0;
        v132 = v4[51];
        v134 = v4[52];
        v136 = v4[53];
        v137 = v116;
        v133 = v115;
        v135 = v63;
        v138 = MulDivFD6Pairs((int)&v130);
        v132 = v4[54];
        v134 = v4[55];
        v136 = v4[56];
        v137 = v116;
        v133 = v64;
        v135 = v63;
        v139 = MulDivFD6Pairs((int)&v130);
        v132 = v4[57];
        v134 = v4[58];
        v136 = v4[59];
        v137 = v116;
        v133 = v64;
        v135 = v63;
        v65 = MulDivFD6Pairs((int)&v130);
        v140 = v65;
        ScaleRGB(&v138, HIDWORD(v65));
        v31 = v140;
        v32 = v138;
      }
      if ( !v89 )
        goto LABEL_123;
      if ( (v97 & 0x800) == 0 )
      {
        v66 = 1000000;
        goto LABEL_109;
      }
      v66 = v32;
      if ( v32 <= v139 )
        v66 = v139;
      v116 = v66;
      if ( v31 > v66 )
      {
        v66 = v31;
LABEL_109:
        v116 = v66;
      }
      v72 = v66 - v32;
      v110 = v66 - v139;
      v73 = v66 - v31;
      v131 = 0;
      v132 = *v100;
      v133 = v72;
      v134 = v100[1];
      v135 = v66 - v139;
      v136 = v100[2];
      v137 = v66 - v31;
      v74 = MulDivFD6Pairs((int)&v130);
      v138 = v116 - v74;
      v132 = v100[3];
      v133 = v72;
      v134 = v100[4];
      v135 = v110;
      v136 = v100[5];
      v137 = v73;
      v75 = MulDivFD6Pairs((int)&v130);
      v139 = v116 - v75;
      v132 = v100[6];
      v133 = v72;
      v134 = v100[7];
      v135 = v110;
      v136 = v100[8];
      v137 = v73;
      v76 = MulDivFD6Pairs((int)&v130);
      v32 = v138;
      v77 = v116 - v76;
      v140 = v116 - v76;
      if ( v138 < 0 )
      {
        v32 = 0;
LABEL_114:
        v138 = v32;
        goto LABEL_115;
      }
      if ( v138 > v101 )
      {
        v32 = v101;
        goto LABEL_114;
      }
LABEL_115:
      if ( v139 >= 0 )
      {
        if ( v139 > v101 )
          v139 = v101;
      }
      else
      {
        v139 = 0;
      }
      if ( v77 >= 0 )
      {
        if ( v77 > v101 )
          v140 = v101;
      }
      else
      {
        v140 = 0;
      }
LABEL_123:
      v78 = MulFD6(v32, 255);
      v79 = v95;
      v86 = v139;
      v95[1] = v78;
      v80 = MulFD6(v86, 255);
      v85 = v140;
      *v79 = v80;
      v81 = MulFD6(v85, 255);
      v27 = v94;
      v26 = v112;
      *(v79 - 1) = v81;
      v29 = v108;
      v95 = v79 + 3;
      v28 = v88;
      if ( !v108 )
        goto LABEL_124;
    }
    switch ( v105 )
    {
      case 1:
        *v104 = *((unsigned __int8 *)v28 - 4);
        *v103 = *((unsigned __int8 *)v28 - 3);
        v30 = *((unsigned __int8 *)v28 - 2);
        break;
      case 2:
        *v104 = *((__int16 *)v28 - 2);
        *v103 = *((__int16 *)v28 - 1);
        v30 = *(__int16 *)v28;
        break;
      case 3:
        *v104 = *(v28 - 1);
        *v103 = *v28;
        v30 = v28[1];
        break;
      default:
LABEL_49:
        v31 = v140;
        v32 = v138;
        goto LABEL_56;
    }
    *v102 = v30;
    goto LABEL_49;
  }
LABEL_124:
  v82 = Src;
  if ( Src )
  {
    v83 = v109;
    if ( v109 )
    {
      v84 = *(PVOID *)(v109 + 4);
      if ( v84
        || (v84 = EngAllocMem(0, *(unsigned __int16 *)(v109 + 10), 0x32345448u), (*(_DWORD *)(v83 + 4) = v84) != 0) )
      {
        *(_DWORD *)v83 = v93;
        memcpy(v84, v82, *(unsigned __int16 *)(v83 + 10));
      }
    }
    EngFreeMem(v82);
  }
  return v96;
}
