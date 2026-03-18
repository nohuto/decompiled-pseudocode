/*
 * XREFs of _ShrinkDIB_CY_SrkCX @ 0x1CB85E
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 *     _SrkYDIB_SrkCX @ 0x1CC2A4 (_SrkYDIB_SrkCX.c)
 */

int __cdecl ShrinkDIB_CY_SrkCX(_DWORD *a1)
{
  int v2; // edx
  int *v3; // edi
  int v4; // eax
  char *v5; // ebx
  char *v6; // esi
  int *v7; // ecx
  int v8; // eax
  char *v9; // ecx
  unsigned int v10; // esi
  unsigned __int8 *v11; // edx
  int v12; // eax
  unsigned __int16 *v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // ecx
  int *v16; // edx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  unsigned __int8 *v20; // edx
  _DWORD *v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // esi
  unsigned __int8 *v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // esi
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  char *v34; // edx
  char *v35; // esi
  int v36; // esi
  char *v37; // ecx
  _DWORD *v38; // edx
  __int16 *v39; // esi
  __int16 v40; // ax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  __int16 v44; // ax
  int v45; // esi
  __int16 v46; // ax
  _DWORD *v47; // ecx
  int v48; // esi
  unsigned __int8 *v49; // edx
  int v50; // eax
  unsigned int v51; // esi
  char *v52; // esi
  char *v53; // edi
  char *v54; // ecx
  char *v55; // edx
  int v56; // esi
  _BYTE *v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int16 v61; // ax
  int v62; // [esp-Ch] [ebp-1BCh]
  int v63; // [esp-Ch] [ebp-1BCh]
  int v64; // [esp-Ch] [ebp-1BCh]
  int v65; // [esp+4h] [ebp-1ACh]
  int v66; // [esp+8h] [ebp-1A8h]
  int v67; // [esp+Ch] [ebp-1A4h]
  char *v68; // [esp+10h] [ebp-1A0h]
  _BYTE *v69; // [esp+10h] [ebp-1A0h]
  int *v70; // [esp+14h] [ebp-19Ch]
  int v71; // [esp+18h] [ebp-198h]
  int v72; // [esp+1Ch] [ebp-194h]
  unsigned __int16 *v73; // [esp+20h] [ebp-190h]
  int *v74; // [esp+24h] [ebp-18Ch]
  int MaxCount; // [esp+28h] [ebp-188h]
  int v76; // [esp+2Ch] [ebp-184h]
  unsigned int v77; // [esp+2Ch] [ebp-184h]
  int v78; // [esp+30h] [ebp-180h]
  _BYTE *v79; // [esp+30h] [ebp-180h]
  unsigned int v80; // [esp+34h] [ebp-17Ch]
  char *v81; // [esp+34h] [ebp-17Ch]
  char *Src; // [esp+38h] [ebp-178h]
  int v83; // [esp+3Ch] [ebp-174h]
  int v84; // [esp+3Ch] [ebp-174h]
  __int16 *v85; // [esp+3Ch] [ebp-174h]
  int v86; // [esp+3Ch] [ebp-174h]
  char *v87; // [esp+40h] [ebp-170h]
  int v88; // [esp+44h] [ebp-16Ch]
  char *v89; // [esp+44h] [ebp-16Ch]
  __int16 v90; // [esp+44h] [ebp-16Ch]
  _DWORD v91[89]; // [esp+48h] [ebp-168h] BYREF

  v71 = 0;
  if ( *(_WORD *)(a1[48] + 14) && !a1[81] )
    return 0;
  qmemcpy(v91, a1, sizeof(v91));
  v2 = v91[48];
  v3 = *(int **)(v91[48] + 28);
  v72 = *(_DWORD *)(v91[48] + 24);
  v74 = v3;
  v70 = v3 + 256;
  MaxCount = 12 * *(_DWORD *)(v91[47] + 20);
  v4 = (int)&v3[MaxCount / 4u + 518];
  v5 = (char *)(v3 + 515);
  Src = (char *)(v4 + 12);
  v6 = (char *)(v4 + MaxCount + 36);
  v87 = v6;
  v67 = *(unsigned __int16 *)(v91[47] + 12) - 1;
  v76 = *(unsigned __int16 *)(v91[48] + 14);
  if ( *(_WORD *)(v91[48] + 14) )
  {
    v62 = v91[81];
    v83 = v91[81];
    GetFixupScan((int)v91, (void *)v91[81]);
    SrkYDIB_SrkCX(v62);
    v7 = v3;
    v8 = -v76;
    do
    {
      v8 += v76;
      *v7++ = v8;
    }
    while ( v7 < v70 );
    v9 = v6;
    v10 = (unsigned int)&v6[MaxCount];
    v11 = (unsigned __int8 *)(v83 + 1);
    do
    {
      *(_DWORD *)v9 = v3[v11[1]];
      v12 = *v11;
      v11 += 3;
      *((_DWORD *)v9 + 1) = v3[v12];
      *((_DWORD *)v9 + 2) = v3[*(v11 - 4)];
      v9 += 12;
    }
    while ( (unsigned int)v9 < v10 );
    v2 = v91[48];
    if ( !*(_WORD *)(v91[48] + 10) )
      v91[0] |= 0x20u;
  }
  v13 = *(unsigned __int16 **)(v2 + 32);
  v73 = v13;
  v84 = *(unsigned __int16 *)(v2 + 12);
  if ( *(_WORD *)(v2 + 12) )
  {
    do
    {
      v14 = *v13;
      v80 = (unsigned int)&v87[MaxCount];
      v73 = v13 + 1;
      v63 = v91[81];
      v78 = v91[81];
      GetFixupScan((int)v91, (void *)v91[81]);
      SrkYDIB_SrkCX(v63);
      if ( (v14 & 0x4000) != 0 )
      {
        v15 = v14;
        v16 = v3;
        v17 = v14 & 0x3FFF;
        v88 = (v15 >> 15) + *(_DWORD *)(v72 + 4) - v17;
        v18 = -v17;
        v19 = -v88;
        do
        {
          v19 += v88;
          v18 += v17;
          *v16 = v18;
          v16[256] = v19;
          ++v16;
        }
        while ( v16 < v70 );
        v20 = (unsigned __int8 *)(v78 + 1);
        v89 = v5;
        v21 = v87 + 8;
        v22 = v5 - v87;
        do
        {
          *(v21 - 2) += v3[v20[1]];
          *(v21 - 1) += v3[*v20];
          *v21 += v3[*(v20 - 1)];
          *(_DWORD *)v5 = v3[v20[1] + 256];
          v5 += 12;
          v23 = *v20;
          v20 += 3;
          *(_DWORD *)((char *)v21 + v22 - 4) = v3[v23 + 256];
          *(_DWORD *)((char *)v21 + v22) = v3[*(v20 - 4) + 256];
          v21 += 3;
        }
        while ( (unsigned int)(v21 - 2) < v80 );
        v5 = Src;
        Src = v87;
        v24 = v84 - 1;
        v87 = v89;
        --v84;
      }
      else
      {
        v25 = v87 + 8;
        v26 = v72 + ((v14 >> 5) & 0x400);
        v27 = (unsigned __int8 *)(v78 + 1);
        do
        {
          *(v25 - 2) += *(_DWORD *)(v26 + 4 * v27[1]);
          v28 = *v27;
          v27 += 3;
          *(v25 - 1) += *(_DWORD *)(v26 + 4 * v28);
          *v25 += *(_DWORD *)(v26 + 4 * *(v27 - 4));
          v25 += 3;
        }
        while ( (unsigned int)(v25 - 2) < v80 );
        v24 = v84;
      }
      v13 = v73;
    }
    while ( v24 );
    v2 = v91[48];
  }
  if ( *(_WORD *)(v2 + 12) == 1 )
    memcpy(v5, Src, MaxCount);
  while ( 1 )
  {
    v51 = *v73;
    if ( !*v73 )
      break;
    ++v73;
    v81 = v87;
    v77 = (unsigned int)&v87[MaxCount];
    v64 = v91[81];
    v85 = (__int16 *)v91[81];
    GetFixupScan((int)v91, (void *)v91[81]);
    SrkYDIB_SrkCX(v64);
    if ( (v51 & 0x4000) != 0 )
    {
      v29 = v51;
      v30 = v51 & 0x3FFF;
      v31 = -v30;
      v32 = *(_DWORD *)(v72 + 4) - v30 + (v29 >> 15);
      v33 = -v32;
      do
      {
        v31 += v30;
        v33 += v32;
        *v3 = v31;
        v3[256] = v33;
        ++v3;
      }
      while ( v3 < v70 );
      v34 = Src;
      v68 = v5;
      v35 = &Src[MaxCount - 12];
      *(_DWORD *)&Src[MaxCount] = *(_DWORD *)v35;
      v35 += 4;
      *(_DWORD *)&Src[MaxCount + 4] = *(_DWORD *)v35;
      *(_DWORD *)&Src[MaxCount + 8] = *((_DWORD *)v35 + 1);
      v79 = (_BYTE *)v91[86];
      if ( v67 )
      {
        v90 = *v85;
        v36 = *((unsigned __int8 *)v85 + 2);
        v85 = (__int16 *)((char *)v85 + 3);
        *(_DWORD *)v87 += v74[v36];
        *((_DWORD *)v87 + 1) += v74[HIBYTE(v90)];
        *((_DWORD *)v87 + 2) += v74[(unsigned __int8)v90];
        v3 = v74;
        v81 = v87 + 12;
        *(_DWORD *)v5 = v74[v36 + 256];
        *((_DWORD *)v5 + 1) = v74[HIBYTE(v90) + 256];
        *((_DWORD *)v5 + 2) = v74[(unsigned __int8)v90 + 256];
        v5 += 12;
        v34 = Src + 12;
      }
      else
      {
        *((_DWORD *)Src - 3) = *(_DWORD *)Src;
        *((_DWORD *)Src - 2) = *((_DWORD *)Src + 1);
        *((_DWORD *)Src - 1) = *((_DWORD *)Src + 2);
        v3 = v74;
      }
      v37 = v81;
      v38 = v34 + 20;
      v39 = v85;
      do
      {
        v40 = *v39;
        v39 = (__int16 *)((char *)v39 + 3);
        v86 = *((unsigned __int8 *)v39 - 1);
        *(_DWORD *)v37 += v3[v86];
        v66 = HIBYTE(v40);
        *((_DWORD *)v37 + 1) += v3[HIBYTE(v40)];
        v65 = (unsigned __int8)v40;
        *((_DWORD *)v37 + 2) += v3[(unsigned __int8)v40];
        v41 = (12 * *(v38 - 3) - *(v38 - 6) - *((_DWORD *)v5 + 2) - *v38 - *((_DWORD *)v37 + 2)) >> 16;
        if ( (v41 & 0xFF00) != 0 )
          LOBYTE(v41) = ~HIBYTE(v41);
        *v79 = v41;
        v42 = (12 * *(v38 - 4) - *(v38 - 7) - *(v38 - 1) - *((_DWORD *)v81 + 1) - *((_DWORD *)v5 + 1)) >> 16;
        if ( (v42 & 0xFF00) != 0 )
          LOBYTE(v42) = ~HIBYTE(v42);
        v79[1] = v42;
        v3 = v74;
        v43 = (12 * *(v38 - 5) - *(v38 - 8) - *(v38 - 2) - *(_DWORD *)v81 - *(_DWORD *)v5) >> 16;
        if ( (v43 & 0xFF00) != 0 )
          LOBYTE(v43) = ~HIBYTE(v43);
        v38 += 3;
        v79[2] = v43;
        v37 = v81 + 12;
        v81 += 12;
        *(_DWORD *)v5 = v74[v86 + 256];
        *((_DWORD *)v5 + 1) = v74[v66 + 256];
        *((_DWORD *)v5 + 2) = v74[v65 + 256];
        v5 += 12;
        v79 += v91[88];
      }
      while ( v79 != (_BYTE *)v91[87] );
      if ( (unsigned int)v37 < v77 )
      {
        v44 = *v39;
        v45 = *((unsigned __int8 *)v39 + 2);
        *(_DWORD *)v37 += v74[v45];
        *((_DWORD *)v37 + 1) += v74[HIBYTE(v44)];
        *((_DWORD *)v81 + 2) += v74[(unsigned __int8)v44];
        v3 = v74;
        *(_DWORD *)v5 = v74[v45 + 256];
        *((_DWORD *)v5 + 1) = v74[HIBYTE(v44) + 256];
        *((_DWORD *)v5 + 2) = v74[(unsigned __int8)v44 + 256];
      }
      v5 = Src;
      Src = v87;
      v87 = v68;
      v46 = v91[0];
      if ( SLOBYTE(v91[0]) < 0 )
      {
        ((void (__cdecl *)(_DWORD *))v91[31])(v91);
        v46 = v91[0];
      }
      if ( (v46 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v91);
        LOBYTE(v46) = v91[0];
      }
      if ( (v46 & 0x10) != 0 )
      {
        MappingBGRF((unsigned __int8 *)v91[82], v91[83], v91[59], (unsigned __int8 *)v91[68]);
        v91[68] += v91[71];
        if ( v91[68] == v91[69] )
          v91[68] = v91[70];
      }
      ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v91[43])(
        v91,
        v91[84],
        v91[85],
        v91[21],
        v91[58],
        v91[61],
        v91[61] + v91[65],
        v91[66],
        v91[44]);
      v91[61] += v91[64];
      if ( v91[61] == v91[62] )
        v91[61] = v91[63];
      v91[21] += v91[25];
      ++v71;
    }
    else
    {
      v47 = v87 + 8;
      v48 = v72 + ((v51 >> 5) & 0x400);
      v49 = (unsigned __int8 *)v85 + 1;
      do
      {
        *(v47 - 2) += *(_DWORD *)(v48 + 4 * v49[1]);
        v50 = *v49;
        v49 += 3;
        *(v47 - 1) += *(_DWORD *)(v48 + 4 * v50);
        *v47 += *(_DWORD *)(v48 + 4 * *(v49 - 4));
        v47 += 3;
      }
      while ( (unsigned int)(v47 - 2) < v77 );
    }
  }
  if ( v91[21] == v91[49] )
    return v71;
  v52 = &Src[MaxCount - 12];
  *(_DWORD *)&Src[MaxCount] = *(_DWORD *)v52;
  v52 += 4;
  v53 = &Src[MaxCount + 4];
  v54 = &Src[12 * v67];
  *(_DWORD *)v53 = *(_DWORD *)v52;
  *((_DWORD *)v53 + 1) = *((_DWORD *)v52 + 1);
  v69 = (_BYTE *)v91[86];
  v55 = &v5[12 * v67 + 4];
  *((_DWORD *)Src - 3) = *(_DWORD *)Src;
  *((_DWORD *)Src - 2) = *((_DWORD *)Src + 1);
  *((_DWORD *)Src - 1) = *((_DWORD *)Src + 2);
  v56 = Src - v5;
  v57 = v69;
  do
  {
    v58 = (11 * *((_DWORD *)v54 + 2) - *((_DWORD *)v55 + 1) - *((_DWORD *)v54 + 5) - *((_DWORD *)v54 - 1)) >> 16;
    if ( (v58 & 0xFF00) != 0 )
      LOBYTE(v58) = ~HIBYTE(v58);
    *v57 = v58;
    v59 = (11 * *(_DWORD *)&v55[v56] - *((_DWORD *)v54 + 4) - *((_DWORD *)v54 - 2) - *(_DWORD *)v55) >> 16;
    if ( (v59 & 0xFF00) != 0 )
      LOBYTE(v59) = ~HIBYTE(v59);
    v57[1] = v59;
    v60 = (11 * *(_DWORD *)v54 - *((_DWORD *)v55 - 1) - *((_DWORD *)v54 - 3) - *((_DWORD *)v54 + 3)) >> 16;
    if ( (v60 & 0xFF00) != 0 )
      LOBYTE(v60) = ~HIBYTE(v60);
    v57[2] = v60;
    v54 += 12;
    v57 += v91[88];
    v55 += 12;
  }
  while ( v57 != (_BYTE *)v91[87] );
  v61 = v91[0];
  if ( SLOBYTE(v91[0]) < 0 )
  {
    ((void (__cdecl *)(_DWORD *))v91[31])(v91);
    v61 = v91[0];
  }
  if ( (v61 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v91);
    LOBYTE(v61) = v91[0];
  }
  if ( (v61 & 0x10) != 0 )
  {
    MappingBGRF((unsigned __int8 *)v91[82], v91[83], v91[59], (unsigned __int8 *)v91[68]);
    v91[68] += v91[71];
    if ( v91[68] == v91[69] )
      v91[68] = v91[70];
  }
  ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v91[43])(
    v91,
    v91[84],
    v91[85],
    v91[21],
    v91[58],
    v91[61],
    v91[61] + v91[65],
    v91[66],
    v91[44]);
  return v71 + 1;
}
