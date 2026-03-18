/*
 * XREFs of _ComputeAABBP @ 0x1C2ACA
 * Callers:
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 * Callees:
 *     _IntersectRECTL @ 0x1BB4FA (_IntersectRECTL.c)
 */

int __fastcall ComputeAABBP(const void *a1, int a2, int *a3, int a4)
{
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // esi
  int v19; // eax
  char v20; // cl
  int (__cdecl *v21)(int, int, int, int, int); // ecx
  int v22; // eax
  int v23; // eax
  bool v24; // zf
  int v25; // edx
  int v26; // eax
  int v27; // esi
  int v28; // edi
  int v29; // edx
  int v30; // esi
  char v31; // dl
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int result; // eax
  int v37[4]; // [esp+10h] [ebp-A8h] BYREF
  _DWORD v38[25]; // [esp+20h] [ebp-98h] BYREF
  int v39; // [esp+84h] [ebp-34h]
  int v40; // [esp+88h] [ebp-30h]
  int v41; // [esp+8Ch] [ebp-2Ch]
  int v42; // [esp+90h] [ebp-28h]
  int v43; // [esp+94h] [ebp-24h]
  int v44; // [esp+98h] [ebp-20h] BYREF
  int v45; // [esp+9Ch] [ebp-1Ch]
  int v46; // [esp+A0h] [ebp-18h]
  int v47; // [esp+A4h] [ebp-14h]
  int v48; // [esp+A8h] [ebp-10h]
  int v49; // [esp+ACh] [ebp-Ch]
  int v50; // [esp+B0h] [ebp-8h]
  int v51; // [esp+B4h] [ebp-4h]
  int v52; // [esp+C0h] [ebp+8h]
  int v53; // [esp+C0h] [ebp+8h]
  char v54; // [esp+C3h] [ebp+Bh]

  v39 = a2;
  qmemcpy(v38, a1, 0x5Cu);
  v5 = v38[8];
  v6 = v38[6];
  v7 = *a3;
  v40 = v38[8];
  v50 = v38[6];
  if ( v38[8] < v38[6] )
  {
    v7 |= 1u;
    v5 = v38[6];
    v50 = v38[8];
    v38[6] = v38[8];
    v40 = v6;
    v38[8] = v6;
  }
  v8 = v38[9];
  v9 = v38[7];
  v41 = v38[9];
  v49 = v38[7];
  if ( v38[9] < v38[7] )
  {
    v49 = v38[9];
    v38[7] = v38[9];
    v7 |= 2u;
    v8 = v9;
    v41 = v9;
    v38[9] = v9;
  }
  v52 = v38[4];
  v43 = v38[2];
  if ( v38[4] < v38[2] )
  {
    v10 = v38[2];
    v7 ^= 1u;
    v43 = v38[4];
    v38[2] = v38[4];
    v52 = v10;
    v38[4] = v10;
  }
  v11 = v38[3];
  v12 = v38[5];
  v42 = v38[3];
  if ( v38[5] < v38[3] )
  {
    v42 = v38[5];
    v7 ^= 2u;
    v38[3] = v38[5];
    v12 = v11;
    v38[5] = v11;
  }
  if ( v43 >= v52 || v42 >= v12 || v50 >= v5 || v49 >= v8 )
    return 0;
  v13 = v5 - v50;
  v53 = v52 - v43;
  a3[25] = v38[18];
  a3[26] = v38[19];
  v48 = v13;
  v14 = v8 - v49;
  v15 = v12 - v42;
  v51 = v14;
  if ( (1000 * v13 + 500) / v53 > 667 && (1000 * v14 + 500) / v15 > 667 )
    v7 |= 0x40u;
  v16 = v53;
  v17 = v7 | ((unsigned int)&loc_80010 + (v48 * v14 < v53 * v15 ? 0 : 0xFFF7FFF8));
  v18 = v51;
  if ( v15 == v51 )
  {
    v19 = v17;
    a3[6] = (int)BltMask_CY;
    a3[8] = (int)BltAV_CY;
    v20 = 1;
    a3[4] = (int)BuildBltAAInfo;
LABEL_31:
    v51 = v19;
    goto LABEL_32;
  }
  if ( v15 >= v51 )
  {
    a3[6] = (int)ShrinkMask_CY;
    a3[8] = (int)ShrinkAV_CY;
    a3[4] = (int)BuildShrinkAAInfo;
    if ( v48 >= v53 || (v54 = 3, a4) )
      v54 = 2;
    v19 = v17;
    v20 = v54;
    goto LABEL_31;
  }
  v19 = v17;
  a3[6] = (int)ExpandMask_CY;
  a3[8] = (int)ExpandAV_CY;
  a3[4] = (int)BuildExpandAAInfo;
  v51 = v17;
  if ( v48 <= v53 )
  {
    v20 = 4;
  }
  else
  {
    if ( (v17 & 0x200) == 0 )
    {
      v51 = v17;
      if ( 5 * v15 < v18 || (v51 = v17, 5 * v53 < v48) )
      {
        v19 = v51;
      }
      else
      {
        v19 = v17 | 0x4000;
        v51 = v17 | 0x4000;
      }
    }
    v20 = 5;
  }
LABEL_32:
  *((_BYTE *)a3 + 4) = v20;
  if ( v16 == v48 )
  {
    *((_BYTE *)a3 + 5) = 0;
    a3[5] = (int)BltMask_CX;
    a3[7] = (int)BltAV_CX;
    a3[3] = (int)BuildBltAAInfo;
    if ( a4 )
      v21 = GrayCopyDIB_CX;
    else
      v21 = CopyDIB_CX;
  }
  else if ( v16 >= v48 )
  {
    v19 |= 0x2000u;
    *((_BYTE *)a3 + 5) = 1;
    v21 = GrayShrinkDIB_CX;
    a3[5] = (int)ShrinkMask_CX;
    v51 = v19;
    a3[7] = (int)ShrinkAV_CX;
    a3[3] = (int)BuildShrinkAAInfo;
    if ( !a4 )
      v21 = ShrinkDIB_CX;
  }
  else
  {
    *((_BYTE *)a3 + 5) = 2;
    a3[5] = (int)ExpandMask_CX;
    a3[7] = (int)ExpandAV_CX;
    a3[3] = (int)BuildExpandAAInfo;
    if ( a4 )
      v21 = GrayExpandDIB_CX;
    else
      v21 = ExpandDIB_CX;
  }
  a3[2] = (int)v21;
  if ( (v38[0] & 0x40) != 0 )
  {
    a3[7] = 0;
    a3[2] = 0;
    *((_BYTE *)a3 + 4) = 0;
    a3[5] = (int)BltMask_CX;
    a3[6] = (int)BltMask_CY;
    a3[8] = (int)TileAV_CY;
    a3[3] = (int)BuildTileAAInfo;
    a3[4] = (int)BuildTileAAInfo;
  }
  *a3 = v19;
  v22 = v38[20];
  a3[9] = v38[2];
  a3[27] = v22 - v43;
  v23 = v38[21];
  a3[10] = v38[3];
  v24 = (v38[0] & 1) == 0;
  a3[28] = v23 - v42;
  a3[11] = v38[4];
  a3[12] = v38[5];
  v44 = v38[6];
  v45 = v38[7];
  v46 = v38[8];
  v47 = v38[9];
  if ( !v24 && !IntersectRECTL(&v44, &v38[10]) )
    return 0;
  if ( (v38[0] & 0x10) != 0 )
  {
    if ( !IntersectRECTL(&v44, &v38[14]) )
      return 0;
    v25 = v49;
    v26 = v50 - v38[14];
    v27 = v41;
    v28 = v40 - v38[14];
    v44 -= v38[14];
    v46 -= v38[14];
    a3[25] -= v38[14];
    v50 = v26;
    v38[6] = v26;
    v29 = v25 - v38[15];
    v45 -= v38[15];
    v30 = v27 - v38[15];
    v47 -= v38[15];
    a3[26] -= v38[15];
    v38[8] = v28;
    v49 = v29;
    v38[7] = v29;
    v38[9] = v30;
  }
  else
  {
    v30 = v41;
    v28 = v40;
  }
  v37[1] = 0;
  v37[0] = 0;
  v37[2] = *(_DWORD *)(v39 + 8);
  v37[3] = *(_DWORD *)(v39 + 12);
  if ( !IntersectRECTL(&v44, v37) )
    return 0;
  v31 = v51;
  if ( (v51 & 1) != 0 )
  {
    v32 = v46 - v44;
    v44 = v28 - v46;
    v33 = v32 + v28 - v46;
    a3[21] = v28;
    v38[6] = 0;
    v46 = v33;
    v38[8] = v28 - v50;
  }
  if ( (v31 & 2) != 0 )
  {
    v34 = v47 - v45;
    v45 = v30 - v47;
    v35 = v34 + v30 - v47;
    a3[22] = v30;
    v38[7] = 0;
    v47 = v35;
    v38[9] = v30 - v49;
  }
  result = 1;
  a3[17] = v38[6];
  a3[18] = v38[7];
  a3[19] = v38[8];
  a3[20] = v38[9];
  a3[13] = v44;
  a3[14] = v45;
  a3[15] = v46;
  a3[16] = v47;
  return result;
}
