/*
 * XREFs of _GrayExpandDIB_CY @ 0x1C9547
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 */

int __cdecl GrayExpandDIB_CY(const void *a1)
{
  unsigned int v1; // edi
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
  unsigned __int8 *v12; // esi
  char *v13; // edi
  void *v14; // eax
  char *v15; // edi
  int v16; // ecx
  int *v17; // edx
  int v18; // eax
  int v19; // eax
  size_t v20; // edi
  unsigned __int8 *v21; // esi
  void *v22; // eax
  int v23; // edx
  unsigned int v24; // edi
  int v25; // ecx
  unsigned __int16 v26; // ax
  _WORD *v27; // esi
  int v28; // edx
  int v29; // ecx
  int v30; // ebx
  int *v31; // edi
  int v32; // esi
  unsigned __int8 *v33; // edi
  unsigned __int8 *v34; // esi
  int v35; // ecx
  unsigned int v36; // ebx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // ebx
  int *v41; // edi
  unsigned __int8 *v42; // edi
  int v43; // ecx
  int v44; // edx
  unsigned __int8 *v45; // esi
  int v46; // edx
  int v47; // esi
  int *v48; // edi
  int v49; // edx
  unsigned __int8 *v50; // esi
  unsigned __int8 *v51; // ebx
  int v52; // eax
  unsigned int v53; // eax
  int v54; // edx
  unsigned __int8 *v55; // ecx
  int v56; // eax
  __int16 v57; // ax
  int v59; // [esp-Ch] [ebp-1D8h]
  int v60; // [esp-8h] [ebp-1D4h]
  unsigned __int8 *v61; // [esp-8h] [ebp-1D4h]
  unsigned __int8 *v62; // [esp-8h] [ebp-1D4h]
  int *v63; // [esp+Ch] [ebp-1C0h]
  int v64; // [esp+10h] [ebp-1BCh]
  unsigned __int8 *v65; // [esp+14h] [ebp-1B8h]
  unsigned __int8 *v66; // [esp+1Ch] [ebp-1B0h]
  unsigned int v67; // [esp+20h] [ebp-1ACh]
  _BYTE v68[24]; // [esp+24h] [ebp-1A8h] BYREF
  int v69; // [esp+3Ch] [ebp-190h]
  int v70; // [esp+40h] [ebp-18Ch]
  int v71; // [esp+44h] [ebp-188h]
  size_t MaxCount; // [esp+48h] [ebp-184h]
  unsigned __int8 *v73; // [esp+4Ch] [ebp-180h]
  unsigned __int8 *v74; // [esp+50h] [ebp-17Ch]
  int v75; // [esp+54h] [ebp-178h]
  int v76; // [esp+58h] [ebp-174h]
  int v77; // [esp+5Ch] [ebp-170h]
  unsigned int v78; // [esp+60h] [ebp-16Ch]
  _DWORD v79[89]; // [esp+64h] [ebp-168h] BYREF

  qmemcpy(v79, a1, sizeof(v79));
  v1 = *(_DWORD *)(v79[48] + 28);
  v78 = v1;
  v67 = v1 + 1024;
  v2 = (unsigned __int8 *)(v1 + 4099);
  v74 = (unsigned __int8 *)(v1 + 4099);
  *(_DWORD *)&v68[4] = v1 + 4099 + v79[22] + 6;
  *(_DWORD *)&v68[8] = v79[22] + 6 + *(_DWORD *)&v68[4];
  *(_DWORD *)&v68[12] = v79[22] + 6 + *(_DWORD *)&v68[8];
  *(_DWORD *)v68 = v1 + 4099;
  v3 = *(_DWORD *)&v68[12] + v79[22] + 6;
  v4 = (char *)(v3 + v79[22] + 6);
  *(_DWORD *)&v68[16] = v3;
  *(_DWORD *)&v68[20] = v4;
  MaxCount = v79[22];
  v60 = v3 + v79[22];
  v59 = v3;
  FixupScan = GetFixupScan((int)v79, (void *)v79[81]);
  ((void (__cdecl *)(_DWORD, void *, int, int, int))v79[45])(v79[47], FixupScan, v59, v60, 1);
  if ( (*(_BYTE *)(v79[48] + 8) & 1) != 0 )
  {
    v6 = GetFixupScan((int)v79, (void *)v79[81]);
    ((void (__cdecl *)(_DWORD, void *, char *, char *, int))v79[45])(v79[47], v6, v4, &v4[MaxCount], 1);
  }
  else
  {
    memcpy(v4, *(const void **)&v68[16], MaxCount);
  }
  v7 = v79[48];
  v8 = *(unsigned __int16 *)(v79[48] + 12);
  v9 = v8 & 0xF;
  v10 = v8 >> 4;
  v11 = v10 + v9;
  if ( v11 )
  {
    while ( 1 )
    {
      v77 = v11 - 1;
      qmemcpy(v68, &v68[4], 0x14u);
      v12 = *(unsigned __int8 **)&v68[12];
      v13 = *(char **)&v68[16];
      *(_DWORD *)&v68[20] = v2;
      v73 = &v2[MaxCount];
      v71 = v10 - 1;
      if ( v10 <= 0 )
      {
        v61 = v73;
        v14 = GetFixupScan((int)v79, (void *)v79[81]);
        ((void (__cdecl *)(_DWORD, void *, unsigned __int8 *, unsigned __int8 *, int))v79[45])(v79[47], v14, v2, v61, 1);
      }
      else
      {
        memcpy(v2, *(const void **)&v68[16], MaxCount);
      }
      if ( (v79[0] & 0x200) != 0 )
      {
        memcpy(v12, v13, MaxCount);
      }
      else
      {
        v15 = &v13[-*(_DWORD *)&v68[12]];
        do
        {
          v16 = (6 * v12[(_DWORD)v15] - *v2 - *v12) >> 2;
          if ( (v16 & 0xFF00) != 0 )
            LOBYTE(v16) = ~HIBYTE(v16);
          *v12++ = v16;
          ++v2;
        }
        while ( v2 < v73 );
      }
      v11 = v77;
      v2 = *(unsigned __int8 **)v68;
      if ( !v77 )
        break;
      v10 = v71;
    }
    v7 = v79[48];
    v1 = v78;
    v74 = *(unsigned __int8 **)v68;
  }
  v17 = *(int **)(v7 + 32);
  v18 = *(_DWORD *)(v7 + 16);
  while ( v18 )
  {
    v64 = v18 - 1;
    v19 = v17[1];
    v75 = *v17;
    v76 = v19;
    v63 = v17 + 2;
    if ( (v75 & 0x8000) != 0 )
    {
      qmemcpy(v68, &v68[4], 0x14u);
      v20 = MaxCount;
      v21 = *(unsigned __int8 **)&v68[12];
      *(_DWORD *)&v68[20] = v2;
      v62 = &v2[MaxCount];
      v77 = (int)&v2[MaxCount];
      v22 = GetFixupScan((int)v79, (void *)v79[81]);
      ((void (__cdecl *)(_DWORD, void *, unsigned __int8 *, unsigned __int8 *, int))v79[45])(v79[47], v22, v2, v62, 1);
      if ( (v79[0] & 0x200) != 0 )
      {
        memcpy(v21, *(const void **)&v68[16], v20);
      }
      else
      {
        v23 = *(_DWORD *)&v68[16] - *(_DWORD *)&v68[12];
        v24 = v77;
        do
        {
          v25 = (6 * v21[v23] - *v2 - *v21) >> 2;
          if ( (v25 & 0xFF00) != 0 )
            LOBYTE(v25) = ~HIBYTE(v25);
          *v21++ = v25;
          ++v2;
        }
        while ( (unsigned int)v2 < v24 );
      }
      v2 = *(unsigned __int8 **)v68;
      v26 = v75 & 0x3FFF;
      v1 = v78;
      v74 = *(unsigned __int8 **)v68;
    }
    else
    {
      v26 = v75;
    }
    v27 = (_WORD *)v79[86];
    v28 = -(unsigned __int16)v76;
    v69 = v26;
    v71 = -v26;
    v77 = -HIWORD(v75);
    v70 = HIWORD(v76);
    v65 = *(unsigned __int8 **)&v68[12];
    v66 = *(unsigned __int8 **)&v68[8];
    v29 = 256 - HIWORD(v76);
    v73 = (unsigned __int8 *)v79[86];
    if ( v26 )
    {
      v30 = v77;
      v31 = (int *)(v1 + 2048);
      v32 = v71;
      do
      {
        v32 += v69;
        v30 += HIWORD(v75);
        v28 += (unsigned __int16)v76;
        *(v31 - 512) = v32;
        v29 += HIWORD(v76);
        *(v31 - 256) = v30;
        *v31++ = v28;
        v31[255] = v29;
        v71 = v32;
      }
      while ( (unsigned int)(v31 - 512) < v67 );
      v33 = *(unsigned __int8 **)&v68[4];
      v34 = v73;
      v35 = *(_DWORD *)&v68[12] - *(_DWORD *)&v68[4];
      v36 = v78;
      v69 = (int)&v74[-*(_DWORD *)&v68[4]];
      v37 = *(_DWORD *)&v68[8] - *(_DWORD *)&v68[4];
      v70 = *(_DWORD *)&v68[12] - *(_DWORD *)&v68[4];
      v77 = *(_DWORD *)&v68[8] - *(_DWORD *)&v68[4];
      do
      {
        v38 = *(_DWORD *)(v36 + 4 * v33[v35] + 3072) + *(_DWORD *)(v36 + 4 * v33[v37] + 2048);
        v35 = v70;
        v39 = (*(_DWORD *)(v36 + 4 * *v33 + 1024) + *(_DWORD *)(v36 + 4 * v33[v69]) + v38) >> 5;
        ++v33;
        *(_WORD *)v34 = v39;
        v34 += v79[88];
        v37 = v77;
      }
      while ( v34 != (unsigned __int8 *)v79[87] );
      v2 = v74;
LABEL_38:
      v1 = v78;
      goto LABEL_49;
    }
    if ( HIWORD(v75) )
    {
      v40 = v77;
      v41 = (int *)(v1 + 2048);
      do
      {
        v40 += HIWORD(v75);
        v29 += HIWORD(v76);
        v28 += (unsigned __int16)v76;
        *(v41 - 256) = v40;
        *v41++ = v28;
        v41[255] = v29;
      }
      while ( (unsigned int)(v41 - 512) < v67 );
      v42 = *(unsigned __int8 **)&v68[4];
      v43 = *(_DWORD *)&v68[12] - *(_DWORD *)&v68[4];
      v2 = v74;
      v44 = *(_DWORD *)&v68[8] - *(_DWORD *)&v68[4];
      v45 = v73;
      v69 = *(_DWORD *)&v68[12] - *(_DWORD *)&v68[4];
      v70 = *(_DWORD *)&v68[8] - *(_DWORD *)&v68[4];
      do
      {
        v46 = *(_DWORD *)(v78 + 4 * *v42 + 1024)
            + *(_DWORD *)(v78 + 4 * v42[v43] + 3072)
            + *(_DWORD *)(v78 + 4 * v42[v44] + 2048);
        v43 = v69;
        ++v42;
        *(_WORD *)v45 = v46 >> 5;
        v45 += v79[88];
        v44 = v70;
      }
      while ( v45 != (unsigned __int8 *)v79[87] );
      goto LABEL_38;
    }
    if ( (_WORD)v76 )
    {
      v47 = HIWORD(v76);
      v48 = (int *)(v1 + 3072);
      do
      {
        v29 += v47;
        v28 += (unsigned __int16)v76;
        *v48 = v29;
        *(v48 - 256) = v28;
        ++v48;
      }
      while ( (unsigned int)(v48 - 768) < v67 );
      v49 = *(_DWORD *)&v68[12] - *(_DWORD *)&v68[8];
      v50 = v73;
      v1 = v78;
      v51 = v66;
      do
      {
        v52 = (*(_DWORD *)(v1 + 4 * *v51 + 2048) + *(_DWORD *)(v1 + 4 * v51[v49] + 3072)) >> 5;
        ++v51;
        *(_WORD *)v50 = v52;
        v50 += v79[88];
      }
      while ( v50 != (unsigned __int8 *)v79[87] );
      v2 = v74;
    }
    else
    {
      v53 = v1;
      v54 = HIWORD(v76);
      do
      {
        v29 += v54;
        *(_DWORD *)(v53 + 3072) = v29;
        v53 += 4;
      }
      while ( v53 < v67 );
      v55 = v65;
      do
      {
        v56 = *(int *)(v1 + 4 * *v55++ + 3072) >> 5;
        *v27 = v56;
        v27 = (_WORD *)((char *)v27 + v79[88]);
      }
      while ( v27 != (_WORD *)v79[87] );
    }
LABEL_49:
    v57 = v79[0];
    if ( SLOBYTE(v79[0]) < 0 )
    {
      ((void (__cdecl *)(_DWORD *))v79[31])(v79);
      v57 = v79[0];
    }
    if ( (v57 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v79);
      LOBYTE(v57) = v79[0];
    }
    if ( (v57 & 0x10) != 0 )
    {
      MappingBGRF((unsigned __int8 *)v79[82], v79[83], v79[59], (unsigned __int8 *)v79[68]);
      v79[68] += v79[71];
      if ( v79[68] == v79[69] )
        v79[68] = v79[70];
    }
    ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v79[43])(
      v79,
      v79[84],
      v79[85],
      v79[21],
      v79[58],
      v79[61],
      v79[61] + v79[65],
      v79[66],
      v79[44]);
    v79[61] += v79[64];
    if ( v79[61] == v79[62] )
      v79[61] = v79[63];
    v79[21] += v79[25];
    v18 = v64;
    v17 = v63;
  }
  return v79[23];
}
