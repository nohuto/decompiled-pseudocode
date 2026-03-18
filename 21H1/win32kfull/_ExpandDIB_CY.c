/*
 * XREFs of _ExpandDIB_CY @ 0x1C7594
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 */

int __cdecl ExpandDIB_CY(const void *a1)
{
  int v1; // edi
  unsigned __int8 *v2; // ebx
  int v3; // ecx
  char *v4; // esi
  void *FixupScan; // eax
  void *v6; // eax
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edi
  void *v13; // esi
  void *v14; // eax
  unsigned __int8 *v15; // edi
  unsigned __int8 *v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int *v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  unsigned __int8 *v24; // edi
  void *v25; // eax
  int v26; // esi
  unsigned __int8 *v27; // edx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned __int16 v31; // ax
  _BYTE *v32; // esi
  int v33; // edx
  int v34; // ecx
  unsigned int v35; // ebx
  int v36; // esi
  int *v37; // edi
  unsigned __int8 *v38; // esi
  unsigned __int8 *v39; // ebx
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  unsigned int v47; // ebx
  int *v48; // edi
  unsigned __int8 *v49; // esi
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  int v53; // eax
  int v54; // edx
  unsigned __int8 *v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // esi
  int *v60; // ebx
  int v61; // edi
  unsigned __int8 *v62; // esi
  unsigned __int8 *v63; // edx
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  unsigned __int8 *v67; // ecx
  unsigned int v68; // eax
  int v69; // edx
  unsigned __int8 *v70; // ecx
  int v71; // eax
  __int16 v72; // ax
  int v74; // [esp-Ch] [ebp-1E0h]
  int v75; // [esp-8h] [ebp-1DCh]
  unsigned __int8 *v76; // [esp-8h] [ebp-1DCh]
  unsigned __int8 *v77; // [esp-8h] [ebp-1DCh]
  int *v78; // [esp+Ch] [ebp-1C8h]
  int v79; // [esp+10h] [ebp-1C4h]
  int v80; // [esp+14h] [ebp-1C0h]
  int v81; // [esp+14h] [ebp-1C0h]
  int v82; // [esp+18h] [ebp-1BCh]
  int v83; // [esp+18h] [ebp-1BCh]
  int v84; // [esp+1Ch] [ebp-1B8h]
  unsigned int v85; // [esp+20h] [ebp-1B4h]
  _BYTE v86[24]; // [esp+24h] [ebp-1B0h] BYREF
  int v87; // [esp+3Ch] [ebp-198h]
  int v88; // [esp+40h] [ebp-194h]
  unsigned __int8 *v89; // [esp+44h] [ebp-190h]
  unsigned __int8 *v90; // [esp+48h] [ebp-18Ch]
  size_t MaxCount; // [esp+4Ch] [ebp-188h]
  int v92; // [esp+50h] [ebp-184h]
  int v93; // [esp+54h] [ebp-180h]
  unsigned __int8 *v94; // [esp+58h] [ebp-17Ch]
  int v95; // [esp+5Ch] [ebp-178h]
  unsigned int v96; // [esp+60h] [ebp-174h]
  int v97; // [esp+64h] [ebp-170h]
  int v98; // [esp+68h] [ebp-16Ch]
  _DWORD v99[89]; // [esp+6Ch] [ebp-168h] BYREF

  qmemcpy(v99, a1, sizeof(v99));
  v1 = *(_DWORD *)(v99[48] + 28);
  v88 = v1;
  v85 = v1 + 1024;
  v2 = (unsigned __int8 *)(v1 + 4105);
  v90 = (unsigned __int8 *)(v1 + 4105);
  v3 = 3 * (v99[22] + 6);
  *(_DWORD *)v86 = v1 + 4105;
  *(_DWORD *)&v86[4] = v1 + 4105 + v3;
  *(_DWORD *)&v86[8] = v3 + *(_DWORD *)&v86[4];
  *(_DWORD *)&v86[12] = v3 + v3 + *(_DWORD *)&v86[4];
  v4 = (char *)(*(_DWORD *)&v86[12] + v3 + v3);
  *(_DWORD *)&v86[16] = *(_DWORD *)&v86[12] + v3;
  *(_DWORD *)&v86[20] = v4;
  MaxCount = v3 - 18;
  v75 = *(_DWORD *)&v86[12] + v3 + v3 - 18;
  v74 = *(_DWORD *)&v86[12] + v3;
  FixupScan = GetFixupScan((int)v99, (void *)v99[81]);
  ((void (__cdecl *)(_DWORD, void *, int, int, int))v99[45])(v99[47], FixupScan, v74, v75, 3);
  if ( (*(_BYTE *)(v99[48] + 8) & 1) != 0 )
  {
    v6 = GetFixupScan((int)v99, (void *)v99[81]);
    ((void (__cdecl *)(_DWORD, void *, char *, char *, int))v99[45])(v99[47], v6, v4, &v4[MaxCount], 3);
  }
  else
  {
    memcpy(v4, *(const void **)&v86[16], MaxCount);
  }
  v7 = v99[48];
  v8 = *(unsigned __int16 *)(v99[48] + 12);
  v9 = v8 & 0xF;
  v10 = v8 >> 4;
  v11 = v10 + v9;
  if ( v11 )
  {
    while ( 1 )
    {
      v94 = (unsigned __int8 *)(v11 - 1);
      qmemcpy(v86, &v86[4], 0x14u);
      v12 = *(_DWORD *)&v86[12];
      v13 = *(void **)&v86[12];
      *(_DWORD *)&v86[20] = v2;
      v96 = *(_DWORD *)&v86[12];
      v89 = &v2[MaxCount];
      v98 = v10 - 1;
      if ( v10 <= 0 )
      {
        v76 = v89;
        v14 = GetFixupScan((int)v99, (void *)v99[81]);
        ((void (__cdecl *)(_DWORD, void *, unsigned __int8 *, unsigned __int8 *, int))v99[45])(v99[47], v14, v2, v76, 3);
      }
      else
      {
        memcpy(v2, *(const void **)&v86[16], MaxCount);
      }
      if ( (v99[0] & 0x200) != 0 )
      {
        memcpy(v13, *(const void **)&v86[16], MaxCount);
      }
      else
      {
        v97 = v12 - *(_DWORD *)&v86[16];
        v15 = (unsigned __int8 *)v96;
        v16 = (unsigned __int8 *)(*(_DWORD *)&v86[16] + 2);
        do
        {
          v17 = (6 * *(v16 - 2) - *v2 - *v15) >> 2;
          if ( (v17 & 0xFF00) != 0 )
            LOBYTE(v17) = ~HIBYTE(v17);
          *v15 = v17;
          v18 = (6 * *(v16 - 1) - v2[1] - v15[1]) >> 2;
          if ( (v18 & 0xFF00) != 0 )
            LOBYTE(v18) = ~HIBYTE(v18);
          v15[1] = v18;
          v19 = (6 * *v16 - v2[2] - v16[v97]) >> 2;
          if ( (v19 & 0xFF00) != 0 )
            LOBYTE(v19) = ~HIBYTE(v19);
          v16[v97] = v19;
          v2 += 3;
          v15 += 3;
          v16 += 3;
        }
        while ( v2 < v89 );
      }
      v11 = (int)v94;
      v2 = *(unsigned __int8 **)v86;
      if ( !v94 )
        break;
      v10 = v98;
    }
    v7 = v99[48];
    v1 = v88;
    v90 = *(unsigned __int8 **)v86;
  }
  v20 = *(int **)(v7 + 32);
  v21 = *(_DWORD *)(v7 + 16);
  while ( v21 )
  {
    v79 = v21 - 1;
    v22 = v20[1];
    v92 = *v20;
    v93 = v22;
    v78 = v20 + 2;
    if ( (v92 & 0x8000) != 0 )
    {
      qmemcpy(v86, &v86[4], 0x14u);
      v23 = *(_DWORD *)&v86[12];
      *(_DWORD *)&v86[20] = v2;
      v77 = &v2[MaxCount];
      v24 = *(unsigned __int8 **)&v86[12];
      v96 = (unsigned int)&v2[MaxCount];
      v25 = GetFixupScan((int)v99, (void *)v99[81]);
      ((void (__cdecl *)(_DWORD, void *, unsigned __int8 *, unsigned __int8 *, int))v99[45])(v99[47], v25, v2, v77, 3);
      if ( (v99[0] & 0x200) != 0 )
      {
        memcpy(v24, *(const void **)&v86[16], MaxCount);
      }
      else
      {
        v26 = v23 - *(_DWORD *)&v86[16];
        v27 = (unsigned __int8 *)(*(_DWORD *)&v86[16] + 2);
        do
        {
          v28 = (6 * *(v27 - 2) - *v2 - *v24) >> 2;
          if ( (v28 & 0xFF00) != 0 )
            LOBYTE(v28) = ~HIBYTE(v28);
          *v24 = v28;
          v29 = (6 * *(v27 - 1) - v2[1] - v24[1]) >> 2;
          if ( (v29 & 0xFF00) != 0 )
            LOBYTE(v29) = ~HIBYTE(v29);
          v24[1] = v29;
          v30 = (6 * *v27 - v2[2] - v27[v26]) >> 2;
          if ( (v30 & 0xFF00) != 0 )
            LOBYTE(v30) = ~HIBYTE(v30);
          v27[v26] = v30;
          v2 += 3;
          v24 += 3;
          v27 += 3;
        }
        while ( (unsigned int)v2 < v96 );
      }
      v2 = *(unsigned __int8 **)v86;
      v31 = v92 & 0x3FFF;
      v1 = v88;
      v90 = *(unsigned __int8 **)v86;
    }
    else
    {
      v31 = v92;
    }
    v32 = (_BYTE *)v99[86];
    v97 = -v31;
    v95 = v1;
    v96 = -HIWORD(v92);
    v98 = (unsigned __int16)v93;
    v33 = -(unsigned __int16)v93;
    v87 = HIWORD(v93);
    v94 = *(unsigned __int8 **)&v86[8];
    v34 = 4096 - HIWORD(v93);
    v89 = (unsigned __int8 *)v99[86];
    if ( v31 )
    {
      v35 = v96;
      v36 = v97;
      v37 = (int *)(v1 + 2048);
      v87 = (int)v37;
      do
      {
        v36 += v31;
        v35 += HIWORD(v92);
        v33 += v98;
        v34 += HIWORD(v93);
        *(v37 - 512) = v36;
        *(v37 - 256) = v35;
        *v37++ = v33;
        v37[255] = v34;
        v97 = v36;
      }
      while ( (unsigned int)(v37 - 512) < v85 );
      v1 = v88;
      v97 = (int)(v90 + 1);
      v98 = *(_DWORD *)&v86[4] + 2;
      v84 = *(_DWORD *)&v86[12] - *(_DWORD *)&v86[4];
      v96 = (unsigned int)&v90[-*(_DWORD *)&v86[4]];
      v87 = *(_DWORD *)&v86[8] - *(_DWORD *)&v86[4];
      v38 = v89;
      v80 = *(_DWORD *)&v86[12] - (_DWORD)v90;
      v39 = v94;
      v82 = *(_DWORD *)&v86[8] - (_DWORD)v90;
      v40 = *(_DWORD *)&v86[4] + 2;
      v95 = *(_DWORD *)&v86[12] - *(_DWORD *)&v86[8];
      do
      {
        v38[2] = (*(_DWORD *)(v1 + 4 * *(unsigned __int8 *)v98 + 1024)
                + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v96 + v98))
                + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v40 + v87) + 2048)
                + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v84 + v40) + 3072)) >> 13;
        v41 = v98;
        v42 = v95;
        v38[1] = (*(_DWORD *)(v1 + 4 * *(unsigned __int8 *)v97)
                + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v98 - 1) + 1024)
                + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v97 + v80) + 3072)
                + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v97 + v82) + 2048)) >> 13;
        v43 = *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v41 - 2) + 1024) + *(_DWORD *)(v1 + 4 * v39[v42] + 3072);
        v44 = *(unsigned __int8 *)(v97 - 1);
        v97 += 3;
        v45 = *(_DWORD *)(v1 + 4 * v44) + v43;
        v46 = *v39;
        v39 += 3;
        *v38 = (*(_DWORD *)(v1 + 4 * v46 + 2048) + v45) >> 13;
        v38 += v99[88];
        v40 = v98 + 3;
        v98 += 3;
      }
      while ( v38 != (unsigned __int8 *)v99[87] );
      v2 = v90;
    }
    else if ( HIWORD(v92) )
    {
      v47 = v96;
      v95 = v1 + 2048;
      v48 = (int *)(v1 + 2048);
      do
      {
        v47 += HIWORD(v92);
        v33 += v98;
        v34 += HIWORD(v93);
        *(v48 - 256) = v47;
        *v48++ = v33;
        v48[255] = v34;
      }
      while ( (unsigned int)(v48 - 512) < v85 );
      v49 = v89;
      v1 = v88;
      v96 = *(_DWORD *)&v86[12];
      v97 = *(_DWORD *)&v86[8] + 1;
      v98 = *(_DWORD *)&v86[4] + 2;
      v81 = *(_DWORD *)&v86[12] - *(_DWORD *)&v86[4];
      v50 = *(_DWORD *)&v86[4] + 2;
      v95 = *(_DWORD *)&v86[8] - *(_DWORD *)&v86[4];
      v2 = v90;
      v83 = *(_DWORD *)&v86[12] - *(_DWORD *)&v86[8];
      do
      {
        v51 = *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v81 + v50) + 3072)
            + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v50 + v95) + 2048);
        v52 = v98;
        v53 = v97;
        v49[2] = (*(_DWORD *)(v1 + 4 * *(unsigned __int8 *)v98 + 1024) + v51) >> 13;
        v54 = *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v52 - 1) + 1024)
            + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v53 + v83) + 3072);
        v55 = (unsigned __int8 *)v97;
        v97 += 3;
        v56 = v98;
        v49[1] = (*(_DWORD *)(v1 + 4 * *v55 + 2048) + v54) >> 13;
        v57 = *(_DWORD *)(v1 + 4 * *(v55 - 1) + 2048) + *(_DWORD *)(v1 + 4 * *(unsigned __int8 *)(v56 - 2) + 1024);
        v58 = *(unsigned __int8 *)v96;
        v96 += 3;
        v50 = v98 + 3;
        *v49 = (*(_DWORD *)(v1 + 4 * v58 + 3072) + v57) >> 13;
        v49 += v99[88];
        v98 = v50;
      }
      while ( v49 != (unsigned __int8 *)v99[87] );
    }
    else if ( (_WORD)v93 )
    {
      v59 = v98;
      v60 = (int *)(v1 + 3072);
      v61 = HIWORD(v93);
      do
      {
        v33 += v59;
        v34 += v61;
        *(v60 - 256) = v33;
        *v60++ = v34;
      }
      while ( (unsigned int)(v60 - 768) < v85 );
      v2 = v90;
      v62 = v89;
      v1 = v88;
      v63 = (unsigned __int8 *)(*(_DWORD *)&v86[12] + 1);
      v95 = *(_DWORD *)&v86[8] - *(_DWORD *)&v86[12];
      do
      {
        v62[2] = (*(_DWORD *)(v1 + 4 * v94[2] + 2048) + *(_DWORD *)(v1 + 4 * v63[1] + 3072)) >> 13;
        v64 = *v63;
        v65 = v63[v95];
        v63 += 3;
        v66 = *(_DWORD *)(v1 + 4 * v64 + 3072) + *(_DWORD *)(v1 + 4 * v65 + 2048);
        v67 = v94;
        v94 += 3;
        v62[1] = v66 >> 13;
        *v62 = (*(_DWORD *)(v1 + 4 * *v67 + 2048) + *(_DWORD *)(v1 + 4 * *(v63 - 4) + 3072)) >> 13;
        v62 += v99[88];
      }
      while ( v62 != (unsigned __int8 *)v99[87] );
    }
    else
    {
      v68 = v95;
      v69 = HIWORD(v93);
      do
      {
        v34 += v69;
        *(_DWORD *)(v68 + 3072) = v34;
        v68 += 4;
      }
      while ( v68 < v85 );
      v70 = (unsigned __int8 *)(*(_DWORD *)&v86[12] + 1);
      do
      {
        v32[2] = *(int *)(v1 + 4 * v70[1] + 3072) >> 13;
        v71 = *v70;
        v70 += 3;
        v32[1] = *(int *)(v1 + 4 * v71 + 3072) >> 13;
        *v32 = *(int *)(v1 + 4 * *(v70 - 4) + 3072) >> 13;
        v32 += v99[88];
      }
      while ( v32 != (_BYTE *)v99[87] );
    }
    v72 = v99[0];
    if ( SLOBYTE(v99[0]) < 0 )
    {
      ((void (__cdecl *)(_DWORD *))v99[31])(v99);
      v72 = v99[0];
    }
    if ( (v72 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v99);
      LOBYTE(v72) = v99[0];
    }
    if ( (v72 & 0x10) != 0 )
    {
      MappingBGRF((unsigned __int8 *)v99[82], v99[83], v99[59], (unsigned __int8 *)v99[68]);
      v99[68] += v99[71];
      if ( v99[68] == v99[69] )
        v99[68] = v99[70];
    }
    ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v99[43])(
      v99,
      v99[84],
      v99[85],
      v99[21],
      v99[58],
      v99[61],
      v99[61] + v99[65],
      v99[66],
      v99[44]);
    v99[61] += v99[64];
    if ( v99[61] == v99[62] )
      v99[61] = v99[63];
    v99[21] += v99[25];
    v21 = v79;
    v20 = v78;
  }
  return v99[23];
}
