/*
 * XREFs of _ShrinkDIB_CY @ 0x1CB175
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 */

int __cdecl ShrinkDIB_CY(_DWORD *a1)
{
  int v1; // eax
  int *v2; // ebx
  int *v3; // esi
  int *v4; // edi
  int v5; // ecx
  int v6; // edx
  int *v7; // ecx
  int v8; // eax
  char *FixupScan; // eax
  int *v10; // ecx
  unsigned __int8 *v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned __int16 v15; // ax
  int *v16; // edx
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  _DWORD *v22; // ecx
  unsigned __int8 *v23; // esi
  int v24; // edx
  int *v25; // edi
  int v26; // eax
  int *v27; // esi
  int *v28; // edi
  char *v29; // edx
  int *v30; // edi
  _DWORD *v31; // ecx
  _BYTE *v32; // esi
  _WORD *v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int16 v37; // ax
  int *v38; // eax
  _DWORD *v39; // edx
  int v40; // ecx
  unsigned __int8 *v41; // ebx
  int v42; // eax
  int *v43; // ebx
  _BYTE *v44; // edx
  char *v45; // edi
  _DWORD *v46; // ecx
  int v47; // eax
  int v48; // eax
  unsigned int v49; // eax
  __int16 v50; // ax
  int v52; // [esp+18h] [ebp-1B8h]
  int *v53; // [esp+1Ch] [ebp-1B4h]
  int v54; // [esp+20h] [ebp-1B0h]
  BOOL v55; // [esp+24h] [ebp-1ACh]
  int v56; // [esp+28h] [ebp-1A8h]
  unsigned int v57; // [esp+2Ch] [ebp-1A4h]
  unsigned __int16 *v58; // [esp+30h] [ebp-1A0h]
  int *v59; // [esp+34h] [ebp-19Ch]
  int v60; // [esp+34h] [ebp-19Ch]
  int v61; // [esp+38h] [ebp-198h]
  unsigned int v62; // [esp+3Ch] [ebp-194h]
  __int16 v63; // [esp+40h] [ebp-190h]
  int v64; // [esp+44h] [ebp-18Ch]
  unsigned int v65; // [esp+48h] [ebp-188h]
  int MaxCount; // [esp+4Ch] [ebp-184h]
  int *v67; // [esp+50h] [ebp-180h]
  char *Src; // [esp+54h] [ebp-17Ch]
  unsigned int v69; // [esp+58h] [ebp-178h]
  char *v70; // [esp+58h] [ebp-178h]
  _WORD *v71; // [esp+5Ch] [ebp-174h]
  int *v72; // [esp+60h] [ebp-170h]
  _DWORD v73[89]; // [esp+68h] [ebp-168h] BYREF

  qmemcpy(v73, a1, sizeof(v73));
  v1 = v73[48];
  v2 = *(int **)(v73[48] + 28);
  v54 = *(_DWORD *)(v73[48] + 24);
  MaxCount = 3 * v73[8];
  v53 = v2;
  v57 = (unsigned int)(v2 + 256);
  v67 = v2 + 512;
  v3 = &v2[3 * v73[8] + 512];
  v4 = &v3[3 * v73[8]];
  v72 = v3;
  Src = (char *)v4;
  v69 = (unsigned int)&v4[3 * v73[8]];
  v65 = v69 + 9;
  v5 = a1[48];
  if ( *(_DWORD *)(v5 + 16) || (v3 = &v2[3 * v73[8] + 512], *(_WORD *)(v5 + 14)) )
  {
    if ( !*(_DWORD *)(v5 + 28) || !a1[81] )
      return a1[23];
  }
  v6 = *(unsigned __int16 *)(v73[48] + 14);
  if ( *(_WORD *)(v73[48] + 14) )
  {
    v7 = *(int **)(v73[48] + 28);
    v8 = -v6;
    do
    {
      v8 += v6;
      *v7++ = v8;
    }
    while ( (unsigned int)v7 < v57 );
    FixupScan = (char *)GetFixupScan((int)v73, (void *)v73[81]);
    v10 = v4;
    v11 = (unsigned __int8 *)(FixupScan + 1);
    do
    {
      *v10 = v2[v11[1]];
      v12 = *v11;
      v11 += 3;
      v10[1] = v2[v12];
      v10[2] = v2[*(v11 - 4)];
      v10 += 3;
    }
    while ( (unsigned int)v10 < v69 );
    v1 = v73[48];
    v3 = v72;
    if ( !*(_WORD *)(v73[48] + 10) )
      v73[0] |= 0x20u;
  }
  v58 = *(unsigned __int16 **)(v1 + 32);
  v13 = 0;
  v56 = *(unsigned __int16 *)(v1 + 12);
  v64 = 0;
  if ( *(_DWORD *)(v1 + 16) )
  {
    v55 = *(unsigned __int16 *)(v1 + 12) == 1;
    v14 = *(_DWORD *)(v1 + 16);
    do
    {
      v61 = v14 - 1;
      v71 = GetFixupScan((int)v73, (void *)v73[81]);
      v59 = v4;
      v15 = *v58++;
      LOWORD(v52) = v15;
      v62 = (unsigned int)&v4[MaxCount];
      if ( (v15 & 0x4000) != 0 )
      {
        v16 = v2;
        v17 = v15 & 0x3FFF;
        v18 = -v17;
        v19 = *(_DWORD *)(v54 + 4) + ((v52 >> 15) & 1) - v17;
        v2 = v53;
        v20 = v17 - (*(_DWORD *)(v54 + 4) + ((v52 >> 15) & 1));
        do
        {
          v18 += v17;
          v20 += v19;
          *v16 = v18;
          v16[256] = v20;
          ++v16;
        }
        while ( (unsigned int)v16 < v57 );
        v21 = v56--;
        if ( v21 <= 0 )
        {
          v70 = (char *)((char *)v72 - (char *)v67);
          v29 = (char *)(Src - (char *)v67);
          v30 = v59;
          v31 = v67 + 1;
          v32 = (_BYTE *)(v65 + 2);
          do
          {
            v63 = *v71;
            v33 = v71;
            v71 = (_WORD *)((char *)v71 + 3);
            v60 = *((unsigned __int8 *)v33 + 2);
            *v30 += v53[v60];
            *(_DWORD *)&v29[(_DWORD)v31] += v53[HIBYTE(v63)];
            v30[2] += v53[(unsigned __int8)v63];
            v34 = (6 * *(_DWORD *)((char *)v31 + (_DWORD)v70 + 4) - v31[1] - v30[2]) >> 15;
            if ( (v34 & 0xFF00) != 0 )
              LOBYTE(v34) = ~HIBYTE(v34);
            *(v32 - 2) = v34;
            v29 = (char *)(Src - (char *)v67);
            v35 = (6 * *(_DWORD *)((char *)v31 + (_DWORD)v70) - *v31 - *(_DWORD *)((char *)v31 + Src - (char *)v67)) >> 15;
            if ( (v35 & 0xFF00) != 0 )
              LOBYTE(v35) = ~HIBYTE(v35);
            *(v32 - 1) = v35;
            v36 = (6 * *(int *)((char *)v30 + (char *)v72 - Src) - *v30 - *(v31 - 1)) >> 15;
            if ( (v36 & 0xFF00) != 0 )
              LOBYTE(v36) = ~HIBYTE(v36);
            *v32 = v36;
            v30 += 3;
            v32 += 3;
            *(v31 - 1) = v53[v60 + 256];
            *v31 = v53[HIBYTE(v63) + 256];
            v31[1] = v53[(unsigned __int8)v63 + 256];
            v31 += 3;
          }
          while ( (unsigned int)v30 < v62 );
          ((void (__cdecl *)(_DWORD, unsigned int, _DWORD, _DWORD, _DWORD))v73[45])(
            v73[47],
            v65,
            v73[86],
            v73[87],
            v73[88]);
          v37 = v73[0];
          v27 = v72;
          v28 = (int *)Src;
          if ( SLOBYTE(v73[0]) < 0 )
          {
            ((void (__cdecl *)(_DWORD *))v73[31])(v73);
            v37 = v73[0];
          }
          if ( (v37 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v73);
            LOBYTE(v37) = v73[0];
          }
          if ( (v37 & 0x10) != 0 )
          {
            MappingBGRF((unsigned __int8 *)v73[82], v73[83], v73[59], (unsigned __int8 *)v73[68]);
            v73[68] += v73[71];
            if ( v73[68] == v73[69] )
              v73[68] = v73[70];
          }
          ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v73[43])(
            v73,
            v73[84],
            v73[85],
            v73[21],
            v73[58],
            v73[61],
            v73[61] + v73[65],
            v73[66],
            v73[44]);
          v73[61] += v73[64];
          if ( v73[61] == v73[62] )
            v73[61] = v73[63];
          v73[21] += v73[25];
          ++v64;
        }
        else
        {
          v22 = Src + 8;
          v23 = (unsigned __int8 *)v71 + 1;
          v24 = (char *)v67 - Src;
          v25 = v67;
          do
          {
            *(v22 - 2) += v53[v23[1]];
            *(v22 - 1) += v53[*v23];
            *v22 += v53[*(v23 - 1)];
            *v25 = v53[v23[1] + 256];
            v25 += 3;
            v26 = *v23;
            v23 += 3;
            *(_DWORD *)((char *)v22 + v24 - 4) = v53[v26 + 256];
            *(_DWORD *)((char *)v22 + v24) = v53[*(v23 - 4) + 256];
            v22 += 3;
          }
          while ( (unsigned int)(v22 - 2) < v62 );
          v27 = v72;
          v28 = (int *)Src;
          if ( v55 )
          {
            memcpy(v72, Src, MaxCount * 4);
            v55 = 0;
          }
        }
        v38 = v67;
        v67 = v27;
        v3 = v28;
        v4 = v38;
        v72 = v3;
        Src = (char *)v38;
      }
      else
      {
        v39 = v4 + 2;
        v40 = v54 + ((v15 >> 5) & 0x400);
        v41 = (unsigned __int8 *)v71 + 1;
        do
        {
          *(v39 - 2) += *(_DWORD *)(v40 + 4 * v41[1]);
          v42 = *v41;
          v41 += 3;
          *(v39 - 1) += *(_DWORD *)(v40 + 4 * v42);
          *v39 += *(_DWORD *)(v40 + 4 * *(v41 - 4));
          v39 += 3;
        }
        while ( (unsigned int)(v39 - 2) < v62 );
        v2 = v53;
      }
      v14 = v61;
    }
    while ( v61 );
    v13 = v64;
  }
  if ( v73[21] != v73[49] )
  {
    v43 = &v3[MaxCount];
    v44 = (_BYTE *)(v65 + 2);
    v45 = (char *)((char *)v3 - (char *)v67);
    v46 = v67 + 1;
    do
    {
      v47 = (5 * v3[2] - v46[1]) >> 15;
      if ( (v47 & 0xFF00) != 0 )
        LOBYTE(v47) = ~HIBYTE(v47);
      *(v44 - 2) = v47;
      v48 = (5 * *(_DWORD *)((char *)v46 + (_DWORD)v45) - *v46) >> 15;
      if ( (v48 & 0xFF00) != 0 )
        LOBYTE(v48) = ~HIBYTE(v48);
      *(v44 - 1) = v48;
      v49 = (5 * *v3 - *(v46 - 1)) >> 15;
      if ( (v49 & 0xFF00) != 0 )
        v49 = ~HIBYTE(v49);
      *v44 = v49;
      v3 += 3;
      v44 += 3;
      v46 += 3;
    }
    while ( v3 < v43 );
    ((void (__cdecl *)(_DWORD, unsigned int, _DWORD, _DWORD, _DWORD))v73[45])(v73[47], v65, v73[86], v73[87], v73[88]);
    v50 = v73[0];
    if ( SLOBYTE(v73[0]) < 0 )
    {
      ((void (__cdecl *)(_DWORD *))v73[31])(v73);
      v50 = v73[0];
    }
    if ( (v50 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v73);
      LOBYTE(v50) = v73[0];
    }
    if ( (v50 & 0x10) != 0 )
    {
      MappingBGRF((unsigned __int8 *)v73[82], v73[83], v73[59], (unsigned __int8 *)v73[68]);
      v73[68] += v73[71];
      if ( v73[68] == v73[69] )
        v73[68] = v73[70];
    }
    ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v73[43])(
      v73,
      v73[84],
      v73[85],
      v73[21],
      v73[58],
      v73[61],
      v73[61] + v73[65],
      v73[66],
      v73[44]);
    return v64 + 1;
  }
  return v13;
}
