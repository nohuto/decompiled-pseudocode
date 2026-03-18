/*
 * XREFs of _SetupAAHeader @ 0x1C3166
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _ComputeByteOffset @ 0x1BB2FE (_ComputeByteOffset.c)
 *     _ComputeBytesPerScanLine @ 0x1BB37B (_ComputeBytesPerScanLine.c)
 *     _ComputeAABBP @ 0x1C2ACA (_ComputeAABBP.c)
 *     _ComputeInputColorInfo @ 0x1C2EEC (_ComputeInputColorInfo.c)
 *     _ALIGN_MEM @ 0x1C4224 (_ALIGN_MEM.c)
 *     _CheckBMPNeedFixup @ 0x1C43B3 (_CheckBMPNeedFixup.c)
 */

int __fastcall SetupAAHeader(int a1, int a2, int a3, int (__cdecl **a4)(int))
{
  int v5; // ecx
  _BYTE *v6; // edx
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int result; // eax
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edi
  __int16 v15; // si
  int v16; // ecx
  int v17; // eax
  __int16 v18; // ax
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // ecx
  unsigned __int8 v22; // al
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // esi
  int v30; // eax
  signed int v31; // eax
  int v32; // eax
  int v33; // eax
  signed int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // esi
  int v39; // eax
  unsigned int v40; // esi
  int v41; // esi
  unsigned int v42; // eax
  _DWORD *v43; // edi
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  _DWORD *v49; // eax
  int v50; // esi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  unsigned int v54; // ecx
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  char v59; // dl
  int v60; // eax
  _DWORD *v61; // ecx
  int v62; // eax
  int v63; // eax
  bool v64; // sf
  int v65; // esi
  int v66; // ecx
  int v67; // edx
  int v68; // edi
  int v69; // eax
  _DWORD *v70; // ecx
  int v71; // edx
  int v72; // esi
  int v73; // eax
  int v74; // ecx
  int v75; // esi
  int v76; // eax
  int v77; // eax
  int v78; // edx
  int v79; // ecx
  int v80; // eax
  int v81; // eax
  int (__cdecl *v82)(int); // ecx
  int v83; // eax
  unsigned int v84; // [esp+14h] [ebp-DCh]
  int v85; // [esp+18h] [ebp-D8h]
  _BYTE *v86; // [esp+1Ch] [ebp-D4h]
  int v87; // [esp+20h] [ebp-D0h]
  int v89; // [esp+28h] [ebp-C8h]
  int v90; // [esp+28h] [ebp-C8h]
  _DWORD *v92; // [esp+2Ch] [ebp-C4h]
  _DWORD *v93; // [esp+30h] [ebp-C0h]
  unsigned int v94; // [esp+34h] [ebp-BCh] BYREF
  int v95; // [esp+38h] [ebp-B8h] BYREF
  int v96; // [esp+3Ch] [ebp-B4h]
  int v97; // [esp+40h] [ebp-B0h] BYREF
  _DWORD *v98; // [esp+44h] [ebp-ACh]
  unsigned int v99; // [esp+48h] [ebp-A8h] BYREF
  int v100; // [esp+4Ch] [ebp-A4h] BYREF
  int v101; // [esp+50h] [ebp-A0h] BYREF
  unsigned int v102; // [esp+54h] [ebp-9Ch]
  unsigned int v103; // [esp+58h] [ebp-98h] BYREF
  PVOID pv; // [esp+5Ch] [ebp-94h]
  int (__cdecl *v105)(int); // [esp+60h] [ebp-90h]
  unsigned int v106; // [esp+64h] [ebp-8Ch]
  int v107; // [esp+68h] [ebp-88h] BYREF
  unsigned int v108; // [esp+6Ch] [ebp-84h] BYREF
  int v109[31]; // [esp+70h] [ebp-80h] BYREF

  v87 = 0;
  memset(v109, 0, 0x74u);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_BYTE **)(a1 + 8);
  v98 = *(_DWORD **)(a1 + 12);
  v93 = *(_DWORD **)(a1 + 16);
  v84 = *(unsigned __int8 *)(v5 + 6);
  v7 = *(_DWORD *)(a1 + 4);
  v85 = v5;
  v107 = 0;
  v99 = 0;
  v97 = 0;
  v94 = 0;
  v95 = 0;
  v8 = *(_DWORD *)(v7 + 56);
  v86 = v6;
  v9 = 2 * ((*(_BYTE *)(v7 + 24) & 1) == 0) + 1;
  v106 = v9;
  v109[0] = ((unsigned int)&loc_80000 & v8) != 0 ? 0x200 : 0;
  if ( (*v6 & 0x40) != 0 )
    v109[0] = 1536;
  if ( ComputeAABBP(v6, v85, v109, v9 == 1) <= 0 )
    return 0;
  v11 = v109[0];
  v12 = 3100;
  v103 = 3100;
  if ( (v8 & 0x100000) != 0 )
  {
    v11 = v109[0] | 0x800;
    v109[0] |= 0x800u;
    if ( (((unsigned int)&loc_1FFFFC + 4) & v8) != 0 )
    {
      v11 |= 0x1000u;
      v12 = 5148;
      v109[0] = v11;
    }
    else
    {
      if ( (v8 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v8 & 0x1000000) != 0 )
      {
        v11 |= 0x100000u;
        v109[0] = v11;
      }
      v12 = 3868;
    }
    v103 = v12;
  }
  if ( (v8 & 0x40000000) != 0 )
    v109[0] = v11 & 0xFFFFFFE7;
  if ( ALIGN_MEM(&v103, v12) < 0 )
    return -2;
  ComputeInputColorInfo(
    *(_DWORD *)(v98[6] + 12),
    *(unsigned __int8 *)(v98[6] + 2),
    *(unsigned __int8 *)(v98[6] + 3),
    (_BYTE *)(a1 + 32),
    a3 + 8);
  *(_BYTE *)(a3 + 8) |= 4 * (v106 == 1) + 2;
  v13 = v109[0];
  if ( (v8 & 0x4000) != 0 )
  {
    v13 = v109[0] | 4;
    v109[0] |= 4u;
  }
  if ( (*v86 & 0x40) != 0 )
  {
    v13 &= ~0x40u;
    v109[0] = v13;
  }
  if ( (v13 & 0x200) != 0 )
  {
    v13 &= ~0x40u;
    v109[0] = v13;
  }
  if ( (v109[0] & 0x40) != 0 )
  {
    CheckBMPNeedFixup(v98, v109);
    v13 = v109[0];
    if ( ((unsigned int)&loc_80000 & v109[0]) != 0 )
    {
      if ( ((unsigned int)&loc_80000 & v8) != 0 )
        v13 = v109[0] | 0x200;
      else
        v13 = v109[0] & 0xFFFFFDFF;
      v109[0] = v13;
    }
  }
  if ( (v13 & 0x200) != 0 )
  {
    v13 &= ~0x4000u;
    v109[0] = v13;
  }
  if ( v93 )
  {
    v13 |= 0x80u;
    v109[0] = v13;
  }
  v14 = v103;
  pv = (PVOID)((int (__cdecl *)(int, unsigned int, int *, int *, _DWORD, int, int, int *, int *, unsigned int))v109[3])(
                a2,
                v13,
                &v109[9],
                &v109[11],
                v98[2],
                v109[17],
                v109[19],
                &v109[13],
                &v109[15],
                v103);
  if ( !pv )
  {
    v14 = 0;
    pv = (PVOID)((int (__cdecl *)(int, int, int *, int *, _DWORD, int, int, int *, int *, _DWORD))v109[3])(
                  a2,
                  v109[0],
                  &v109[9],
                  &v109[11],
                  v98[2],
                  v109[17],
                  v109[19],
                  &v109[13],
                  &v109[15],
                  0);
    if ( !pv )
      return -2;
  }
  if ( !*(_DWORD *)pv || !*((_DWORD *)pv + 1) )
    goto LABEL_99;
  if ( v14 )
  {
    v15 = v109[0];
    v16 = *((_DWORD *)pv + 7);
    *(_DWORD *)(a3 + 228) = v16;
    if ( (v15 & 0x800) == 0 )
      goto LABEL_45;
    v17 = v16 + 3100;
    goto LABEL_40;
  }
  v109[0] |= 0x80000000;
  v18 = v109[0];
  *(_DWORD *)(a3 + 228) = a2 + 812;
  v16 = a2 + 812;
  if ( (v18 & 0x800) != 0 )
  {
    v19 = *(_DWORD *)(a2 + 7016);
    v20 = (((unsigned int)&loc_1FFFFC + 4) & v8) == 0;
    v15 = v109[0];
    *(_DWORD *)(a3 + 208) = v19;
    if ( !v20 )
    {
      v17 = v19 + 768;
LABEL_40:
      *(_DWORD *)(a3 + 208) = v17;
    }
  }
  else
  {
    v15 = v109[0];
  }
LABEL_45:
  *(_DWORD *)(a3 + 232) = v16 + 28;
  if ( (v109[0] & 1) != 0 )
  {
    v109[13] = v109[21] - v109[13] - 1;
    v109[15] = v109[21] - v109[15] - 1;
  }
  v21 = *(_DWORD *)pv;
  v102 = *((_DWORD *)pv + 1);
  v103 = v21;
  if ( (ULongAdd(v21, 6, &v107) & 0x80000000) != 0 )
    goto LABEL_99;
  v22 = v109[1];
  v23 = 0;
  v108 = 0;
  v105 = 0;
  if ( (v15 & 0x200) != 0 )
  {
    if ( LOBYTE(v109[1]) == 1 )
    {
      v105 = BltDIB_CY;
    }
    else
    {
      if ( LOBYTE(v109[1]) <= 1u )
        goto LABEL_73;
      if ( LOBYTE(v109[1]) <= 3u )
      {
        v105 = SkipDIB_CY;
      }
      else
      {
        if ( LOBYTE(v109[1]) > 5u )
          goto LABEL_73;
        if ( (v15 & 0x800) != 0 )
        {
          if ( (ULongAdd(v102, 6, (int *)&v108) & 0x80000000) != 0 )
            goto LABEL_99;
          v24 = 3 * v108;
          if ( !is_mul_ok(3u, v108) )
            goto LABEL_99;
        }
        else
        {
          v24 = 0;
        }
        v108 = v24;
        v105 = RepDIB_CY;
      }
    }
    if ( BYTE1(v109[1]) )
    {
      if ( BYTE1(v109[1]) == 1 )
      {
        if ( v106 == 1 )
          v109[2] = (int)GraySkipDIB_CX;
        else
          v109[2] = (int)SkipDIB_CX;
      }
      else if ( BYTE1(v109[1]) == 2 )
      {
        if ( v106 == 1 )
          v109[2] = (int)GrayRepDIB_CX;
        else
          v109[2] = (int)RepDIB_CX;
      }
    }
    else
    {
      v109[2] = (int)GrayCopyDIB_CXGray;
      if ( v106 != 1 )
        v109[2] = (int)CopyDIB_CX;
    }
    v22 = -1;
    LOBYTE(v109[1]) = -1;
  }
LABEL_73:
  if ( v22 )
  {
    v25 = v22 - 1;
    if ( !v25 )
    {
      v105 = BltDIB_CY;
      goto LABEL_104;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( !v28 )
        {
          v29 = v106;
          v105 = GrayExpandDIB_CY;
          if ( v106 != 1 )
            v105 = ExpandDIB_CY;
          if ( (ULongAdd(v102, 6, (int *)&v108) & 0x80000000) != 0 )
            goto LABEL_99;
          if ( !is_mul_ok(v29, v108) )
            goto LABEL_99;
          v32 = 6 * v29 * v108;
          if ( !is_mul_ok(6u, v29 * v108) )
            goto LABEL_99;
          v108 *= 6 * v29;
          v31 = ULongAdd(0x1000u, v32, (int *)&v108);
          goto LABEL_98;
        }
        if ( v28 == 1 )
        {
          v20 = (v15 & 0x4000) == 0;
          v29 = v106;
          if ( !v20 )
          {
            if ( is_mul_ok(v107, v106) && is_mul_ok(5u, v107 * v106) )
            {
              v108 = 5 * v107 * v106;
              v105 = FastExpAA_CY;
              goto LABEL_105;
            }
LABEL_99:
            EngFreeMem(pv);
            return 0;
          }
          v105 = GrayExpandDIB_CY_ExpCX;
          if ( v106 != 1 )
            v105 = ExpandDIB_CY_ExpCX;
          if ( (ULongAdd(v102, 6, (int *)&v108) & 0x80000000) != 0 )
            goto LABEL_99;
          if ( !is_mul_ok(v29, v108) )
            goto LABEL_99;
          v30 = 4 * v29 * v108;
          if ( !is_mul_ok(4u, v29 * v108) )
            goto LABEL_99;
          v108 *= 4 * v29;
          if ( !is_mul_ok(v107, v29)
            || !is_mul_ok(3u, v107 * v29)
            || (ULongAdd(3 * v107 * v29, v30, (int *)&v108) & 0x80000000) != 0 )
          {
            goto LABEL_99;
          }
          v31 = ULongAdd(0x1000u, v108, (int *)&v108);
LABEL_98:
          if ( v31 >= 0 )
            goto LABEL_105;
          goto LABEL_99;
        }
LABEL_104:
        v29 = v106;
        goto LABEL_105;
      }
      v105 = ShrinkDIB_CY_SrkCX;
      if ( (ULongAdd(*((_DWORD *)pv + 5), 2, (int *)&v108) & 0x80000000) != 0 )
        goto LABEL_99;
      v33 = 36 * v108;
      if ( !is_mul_ok(0x24u, v108) )
        goto LABEL_99;
      v108 *= 36;
      v34 = ULongAdd(0x800u, v33, (int *)&v108);
    }
    else
    {
      if ( v106 != 1 )
      {
        v105 = ShrinkDIB_CY;
        v40 = v107 * v106;
        if ( !is_mul_ok(v107, v106) )
          goto LABEL_99;
        if ( !is_mul_ok(0x24u, v103) )
          goto LABEL_99;
        v108 = 36 * v103;
        if ( (ULongAdd(0x800u, 36 * v103, (int *)&v108) & 0x80000000) != 0
          || (ULongAdd(v40, v108, (int *)&v108) & 0x80000000) != 0 )
        {
          goto LABEL_99;
        }
        goto LABEL_104;
      }
      v105 = GrayShrinkDIB_CY;
      if ( !is_mul_ok(0xCu, v102)
        || (ULongAdd(v102, 6, (int *)&v108) & 0x80000000) != 0
        || (ULongAdd(0x800u, v108, (int *)&v108) & 0x80000000) != 0 )
      {
        goto LABEL_99;
      }
      v34 = ULongAdd(12 * v102, v108, (int *)&v108);
    }
    if ( v34 < 0 )
      goto LABEL_99;
    goto LABEL_104;
  }
  v29 = v106;
  v105 = TileDIB_CY;
  if ( v106 == 1 )
  {
    if ( !is_mul_ok(2u, v103) )
    {
LABEL_201:
      EngFreeMem(pv);
      return v23;
    }
    v108 = 2 * v103;
  }
  else
  {
    v108 = 0;
  }
LABEL_105:
  v35 = (v109[0] & 0x800) != 0 ? v102 : 0;
  v101 = v35;
  *(_BYTE *)(a3 + 64) = v29 != 1 ? 0 : 4;
  *(_DWORD *)(a3 + 96) = v35 * v29;
  if ( (ULongAdd(v35, 8, &v101) & 0x80000000) != 0 )
    goto LABEL_200;
  v36 = v29 * v101;
  if ( !is_mul_ok(v29, v101) )
    goto LABEL_200;
  v101 *= v29;
  if ( ALIGN_MEM(&v101, v36) < 0 )
    goto LABEL_200;
  if ( ALIGN_MEM(&v108, v108) < 0 )
    goto LABEL_200;
  if ( (ULongAdd(v107, 2, &v107) & 0x80000000) != 0 )
    goto LABEL_200;
  v37 = v29 * v107;
  if ( !is_mul_ok(v29, v107) )
    goto LABEL_200;
  v107 *= v29;
  if ( ALIGN_MEM(&v107, v37) < 0 )
    goto LABEL_200;
  v38 = v102;
  if ( (ULongAdd(0xAu, v102, (int *)&v94) & 0x80000000) != 0 )
    goto LABEL_200;
  v39 = 4 * v94;
  if ( !is_mul_ok(4u, v94) )
    goto LABEL_200;
  v94 *= 4;
  if ( ALIGN_MEM(&v94, v39) < 0 )
    goto LABEL_200;
  if ( SLOBYTE(v109[0]) >= 0 )
  {
    v96 = 0;
  }
  else
  {
    v100 = ComputeBytesPerScanLine(1u, 4u, v103);
    if ( (ULongAdd(v100, 4, &v100) & 0x80000000) != 0 || ALIGN_MEM(&v100, v100) < 0 )
      goto LABEL_200;
    v96 = v100;
  }
  v100 = v107;
  if ( v107 < v101 )
    v100 = v101;
  if ( (v109[0] & 0x1800) == 0x800 )
  {
    if ( ALIGN_MEM(&v101, v38) >= 0 )
    {
      v41 = v101;
      goto LABEL_141;
    }
LABEL_200:
    v23 = -2;
    goto LABEL_201;
  }
  v41 = 0;
LABEL_141:
  if ( v84 == 254 && *(_DWORD *)(a1 + 28) && ALIGN_MEM(&v97, 366) < 0 )
    goto LABEL_200;
  if ( (v109[0] & 0x40) != 0 )
  {
    if ( (ULongAdd(v103, 4, (int *)&v99) & 0x80000000) != 0 )
      goto LABEL_200;
    v42 = v106 * v99;
    if ( !is_mul_ok(v106, v99) )
      goto LABEL_200;
    v99 *= v106;
    if ( ALIGN_MEM(&v99, v42) < 0 )
      goto LABEL_200;
  }
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0
    && (*(_BYTE *)(a1 + 32) & 1) != 0
    && (*(_BYTE *)(a3 + 48) & 1) != 0
    && *(_BYTE *)(a1 + 52) != 4
    && ALIGN_MEM(&v95, 3072) < 0 )
  {
    goto LABEL_200;
  }
  if ( !is_mul_ok(6u, v99)
    || (v107 = 6 * v99, (ULongAdd(6 * v99, v100, &v107) & 0x80000000) != 0)
    || (ULongAdd(v107, v94, &v107) & 0x80000000) != 0
    || (ULongAdd(v107, v96, &v107) & 0x80000000) != 0
    || (ULongAdd(v107, v41, &v107) & 0x80000000) != 0
    || (ULongAdd(v107, v95, &v107) & 0x80000000) != 0
    || (ULongAdd(v107, v97, &v107) & 0x80000000) != 0
    || (ULongAdd(v107, v108, &v107) & 0x80000000) != 0
    || (v43 = (_DWORD *)((int (__cdecl *)(int, int, int *, int *, _DWORD, int, int, int *, int *, int))v109[4])(
                          a2,
                          v109[0],
                          &v109[10],
                          &v109[12],
                          v98[3],
                          v109[18],
                          v109[20],
                          &v109[14],
                          &v109[16],
                          v107),
        (v92 = v43) == 0) )
  {
    EngFreeMem(pv);
    return -2;
  }
  if ( !*v43 || !v43[1] )
    goto LABEL_197;
  v44 = v108 + v43[7];
  *(_DWORD *)a3 = v109[0];
  v45 = v103 * v106;
  *(_DWORD *)(a3 + 324) = v44;
  v46 = v100 + v44;
  *(_DWORD *)(a3 + 40) = v45;
  if ( v41 )
  {
    v47 = v46 + v102;
    *(_DWORD *)(a3 + 216) = v46;
    *(_DWORD *)(a3 + 220) = v47;
    *(_DWORD *)(a3 + 212) = v46;
    v46 += v41;
    *(_DWORD *)(a3 + 224) = 1;
  }
  if ( v99 )
  {
    v48 = 6;
    *(_DWORD *)(a3 + 316) = v99;
    v49 = (_DWORD *)(a3 + 292);
    *(_DWORD *)(a3 + 168) = v46;
    v50 = 4;
    do
    {
      *v49++ = v46;
      v46 += v99;
      --v48;
    }
    while ( v48 );
  }
  else
  {
    v50 = 4;
  }
  v51 = v97;
  if ( v97 )
  {
    *(_DWORD *)(a3 + 240) = v46;
    v46 += v51;
  }
  v52 = v96;
  if ( v96 )
  {
    *(_DWORD *)(a3 + 132) = v46;
    v46 += v52;
  }
  v53 = v46;
  if ( v95 )
    v46 += v95;
  else
    v53 = *(_DWORD *)(a3 + 232);
  v54 = v102;
  *(_DWORD *)(a3 + 12) = v53;
  *(_DWORD *)(a3 + 344) = v46 + 20;
  *(_DWORD *)(a3 + 328) = v46 + 20;
  *(_DWORD *)(a3 + 336) = v46 + 20;
  *(_DWORD *)(a3 + 340) = 4 * v54 + v46 + 20;
  *(_DWORD *)(a3 + 332) = 4 * v54 + v46 + 20;
  *(_DWORD *)(a3 + 348) = 4 * v54 + v46 + 20;
  memset((void *)(v46 + 20), 255, 4 * v54);
  v55 = v109[13];
  v97 = v109[13];
  if ( v109[13] > v109[15] )
  {
    v55 = v109[15];
    v109[15] = v109[13];
    v56 = *(_DWORD *)(a3 + 340) - 4;
    v97 = v55;
    *(_DWORD *)(a3 + 344) = v56;
    v57 = *(_DWORD *)(a3 + 336) - 4;
    v109[13] = v55;
    *(_DWORD *)(a3 + 348) = v57;
    *(_DWORD *)(a3 + 216) = *(_DWORD *)(a3 + 220) - 1;
    v58 = *(_DWORD *)(a3 + 212) - 1;
    *(_DWORD *)(a3 + 224) = -*(_DWORD *)(a3 + 224);
    *(_DWORD *)(a3 + 220) = v58;
    v50 = -4;
  }
  *(_DWORD *)(a3 + 352) = v50;
  v59 = v109[0];
  *(_DWORD *)(a3 + 200) = v55 - v109[25];
  if ( (v59 & 2) != 0 )
  {
    v60 = v109[22] - v109[14] - 1;
    v109[14] = v60;
    v96 = v109[22] - v109[16] - 1;
    v109[16] = v96;
  }
  else
  {
    v96 = v109[16];
    v60 = v109[14];
  }
  v61 = pv;
  v95 = v60;
  *(_DWORD *)(a3 + 204) = v60 - v109[26];
  v62 = v109[2];
  *(_DWORD *)(a3 + 188) = v61;
  *(_DWORD *)(a3 + 192) = v43;
  *(_DWORD *)(a3 + 180) = v62;
  *(_DWORD *)(a3 + 32) = *v61;
  v63 = *v43;
  *(_DWORD *)(a3 + 36) = *v43;
  *(_DWORD *)(a3 + 24) = v63;
  if ( v59 >= 0 )
    goto LABEL_191;
  v64 = v61[23] + v109[27] < 0;
  v65 = v93[4];
  v109[27] += v61[23];
  v66 = v43[23] + v109[28];
  v109[28] = v66;
  v89 = v66;
  v67 = *((_DWORD *)pv + 24) + v109[27];
  if ( v64 || v66 < 0 || v67 > v93[2] || v66 + v43[24] > v93[3] )
  {
    v87 = -13;
LABEL_197:
    EngFreeMem(pv);
    EngFreeMem(v43);
    return v87;
  }
  *(_DWORD *)(a3 + 140) = v65;
  *(_DWORD *)(a3 + 144) = v43[24];
  v68 = ComputeByteOffset(1u, v67, (_BYTE *)(a3 + 4));
  v69 = ComputeByteOffset(1u, v109[27], (_BYTE *)(a3 + 4));
  *(_DWORD *)(a3 + 128) = v68 - v69 + 1;
  *(_DWORD *)(a3 + 136) = v69 + v93[5] + v65 * v89;
  if ( (*v86 & 8) != 0 )
    v109[0] |= 0x100u;
  v43 = v92;
  *(_DWORD *)(a3 + 120) = v109[5];
  *(_DWORD *)(a3 + 124) = v109[6];
LABEL_191:
  v70 = v98;
  v71 = v109[9];
  v72 = v98[4];
  *(_DWORD *)(a3 + 44) = v72;
  *(_DWORD *)(a3 + 164) = v72;
  v73 = ComputeByteOffset(*((unsigned __int8 *)v70 + 6), v71, (_BYTE *)(a3 + 9));
  v74 = v72 * v109[10];
  v75 = v95;
  v76 = v73 + v74 + v98[5];
  *(_DWORD *)(a3 + 28) = v76;
  *(_DWORD *)(a3 + 20) = v76;
  *(_DWORD *)(a3 + 148) = v109[7];
  *(_DWORD *)(a3 + 152) = v109[8];
  v77 = *(_DWORD *)(v85 + 16);
  v90 = v77;
  if ( v75 > v96 )
    v77 = -v77;
  v78 = v97;
  *(_DWORD *)(a3 + 100) = v77;
  v79 = *(_DWORD *)(v85 + 20) + ComputeByteOffset(v84, v78, (_BYTE *)(a3 + 65)) + v90 * v75;
  v80 = *(_DWORD *)(a3 + 100);
  *(_DWORD *)(a3 + 84) = v79;
  *(_DWORD *)(a3 + 76) = v79;
  v81 = v79 + v43[1] * v80;
  v82 = v105;
  *(_DWORD *)(a3 + 196) = v81;
  *(_DWORD *)(a3 + 88) = v102;
  v83 = v43[1];
  *(_DWORD *)(a3 + 92) = v83;
  *(_DWORD *)(a3 + 80) = v83;
  LOWORD(v83) = v109[0];
  *(_DWORD *)a3 = v109[0];
  *a4 = v82;
  if ( (v83 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_DWORD *)(a3 + 28) += v43[6] * *(_DWORD *)(a3 + 44);
    *(_DWORD *)(a3 + 36) -= v43[6];
  }
  *(_DWORD *)(a3 + 156) = *(_DWORD *)(a3 + 28);
  result = 1;
  *(_DWORD *)(a3 + 160) = *(_DWORD *)(a3 + 36);
  return result;
}
