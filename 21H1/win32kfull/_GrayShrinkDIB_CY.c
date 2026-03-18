/*
 * XREFs of _GrayShrinkDIB_CY @ 0x1CA729
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 */

int __cdecl GrayShrinkDIB_CY(const void *a1)
{
  int v1; // ecx
  int *v2; // edi
  char *v3; // ebx
  int *v4; // esi
  int v5; // edx
  int *v6; // ecx
  int v7; // eax
  unsigned __int8 *v8; // edi
  void *FixupScan; // eax
  unsigned __int8 *v10; // ecx
  int v11; // eax
  int v12; // edi
  unsigned __int16 *v13; // eax
  int v14; // edx
  int v15; // ecx
  unsigned __int8 *v16; // edi
  void *v17; // eax
  unsigned __int16 v18; // ax
  char *v19; // ecx
  int v20; // edx
  int *v21; // ebx
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  unsigned __int8 *v26; // edi
  char *v27; // ecx
  int v28; // eax
  char *v29; // esi
  char *v30; // ebx
  int *v31; // edx
  int v32; // edx
  int v33; // eax
  __int16 v34; // ax
  unsigned __int8 *v35; // eax
  _WORD *v36; // ecx
  int *v37; // edx
  int v38; // ebx
  int v39; // eax
  __int16 v40; // ax
  int v42; // [esp+Ch] [ebp-1B8h]
  int v43; // [esp+18h] [ebp-1ACh]
  int v44; // [esp+1Ch] [ebp-1A8h]
  BOOL v45; // [esp+20h] [ebp-1A4h]
  int v46; // [esp+24h] [ebp-1A0h]
  unsigned int v47; // [esp+28h] [ebp-19Ch]
  unsigned __int16 *v48; // [esp+2Ch] [ebp-198h]
  unsigned __int8 *v49; // [esp+30h] [ebp-194h]
  int MaxCount; // [esp+34h] [ebp-190h]
  int v51; // [esp+38h] [ebp-18Ch]
  char *v52; // [esp+3Ch] [ebp-188h]
  unsigned __int8 *v53; // [esp+40h] [ebp-184h]
  _WORD *v54; // [esp+44h] [ebp-180h]
  int *v55; // [esp+4Ch] [ebp-178h]
  int *v56; // [esp+50h] [ebp-174h]
  char *v57; // [esp+54h] [ebp-170h]
  unsigned __int8 *Src; // [esp+58h] [ebp-16Ch]
  _DWORD v59[89]; // [esp+5Ch] [ebp-168h] BYREF

  qmemcpy(v59, a1, sizeof(v59));
  v1 = v59[48];
  v2 = *(int **)(v59[48] + 28);
  v44 = *(_DWORD *)(v59[48] + 24);
  v47 = (unsigned int)(v2 + 256);
  v3 = (char *)(v2 + 512);
  MaxCount = 4 * v59[22];
  v56 = v2;
  v57 = (char *)(v2 + 512);
  v4 = &v2[v59[22] + 512];
  v55 = v4;
  Src = (unsigned __int8 *)&v4[v59[22]];
  v53 = &Src[4 * v59[22]];
  v5 = *(unsigned __int16 *)(v59[48] + 14);
  v49 = &v53[v59[22]];
  if ( *(_WORD *)(v59[48] + 14) )
  {
    v6 = *(int **)(v59[48] + 28);
    v7 = -v5;
    do
    {
      v7 += v5;
      *v6++ = v7;
    }
    while ( (unsigned int)v6 < v47 );
    v8 = v53;
    FixupScan = GetFixupScan((int)v59, (void *)v59[81]);
    ((void (__cdecl *)(_DWORD, void *, unsigned __int8 *, unsigned __int8 *, int))v59[45])(
      v59[47],
      FixupScan,
      v53,
      v49,
      1);
    v10 = Src;
    do
    {
      v11 = *v8++;
      *(_DWORD *)v10 = v56[v11];
      v10 += 4;
    }
    while ( v10 < v53 );
    v1 = v59[48];
    v12 = 0;
    v3 = v57;
    if ( !*(_WORD *)(v59[48] + 10) )
      v59[0] |= 0x20u;
  }
  else
  {
    v12 = 0;
  }
  v13 = *(unsigned __int16 **)(v1 + 32);
  v14 = *(unsigned __int16 *)(v1 + 12);
  v15 = *(_DWORD *)(v1 + 16);
  v48 = v13;
  v46 = v14;
  v51 = 0;
  if ( v15 )
  {
    v45 = v14 == 1;
    do
    {
      v16 = v53;
      v42 = v15 - 1;
      v17 = GetFixupScan((int)v59, (void *)v59[81]);
      ((void (__cdecl *)(_DWORD, void *, unsigned __int8 *, unsigned __int8 *, int))v59[45])(v59[47], v17, v53, v49, 1);
      v4 = v55;
      v18 = *v48++;
      v19 = (char *)Src;
      v52 = (char *)&Src[MaxCount];
      LOWORD(v43) = v18;
      if ( (v18 & 0x4000) != 0 )
      {
        v20 = v18 & 0x3FFF;
        v21 = v56;
        v22 = -v20;
        v23 = *(_DWORD *)(v44 + 4) + ((v43 >> 15) & 1) - v20;
        v24 = v20 - (*(_DWORD *)(v44 + 4) + ((v43 >> 15) & 1));
        do
        {
          v22 += v20;
          v24 += v23;
          *v21 = v22;
          v21[256] = v24;
          ++v21;
        }
        while ( (unsigned int)v21 < v47 );
        v25 = v46;
        v26 = v53;
        --v46;
        v27 = (char *)Src;
        if ( v25 <= 0 )
        {
          v31 = v56;
          v54 = (_WORD *)v59[86];
          do
          {
            *(_DWORD *)v27 += v31[*v26];
            v32 = (6 * *(int *)((char *)v55 + v27 - (char *)Src) - *(_DWORD *)&v27[v57 - (char *)Src] - *(_DWORD *)v27) >> 7;
            if ( (v32 & 0xFF0000) != 0 )
              LOWORD(v32) = ~HIWORD(v32);
            *v54 = v32;
            v31 = v56;
            v54 = (_WORD *)((char *)v54 + v59[88]);
            v33 = *v26++;
            *(_DWORD *)&v27[v57 - (char *)Src] = v56[v33 + 256];
            v27 += 4;
          }
          while ( v27 < v52 );
          v34 = v59[0];
          v29 = (char *)v55;
          v30 = v57;
          if ( SLOBYTE(v59[0]) < 0 )
          {
            ((void (__cdecl *)(_DWORD *))v59[31])(v59);
            v34 = v59[0];
          }
          if ( (v34 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v59);
            LOBYTE(v34) = v59[0];
          }
          if ( (v34 & 0x10) != 0 )
          {
            MappingBGRF((unsigned __int8 *)v59[82], v59[83], v59[59], (unsigned __int8 *)v59[68]);
            v59[68] += v59[71];
            if ( v59[68] == v59[69] )
              v59[68] = v59[70];
          }
          ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v59[43])(
            v59,
            v59[84],
            v59[85],
            v59[21],
            v59[58],
            v59[61],
            v59[61] + v59[65],
            v59[66],
            v59[44]);
          v59[61] += v59[64];
          if ( v59[61] == v59[62] )
            v59[61] = v59[63];
          v59[21] += v59[25];
          ++v51;
        }
        else
        {
          do
          {
            *(_DWORD *)v27 += v56[*v26];
            v28 = *v26++;
            *(_DWORD *)&v27[v57 - (char *)Src] = v56[v28 + 256];
            v27 += 4;
          }
          while ( v27 < v52 );
          v29 = (char *)v55;
          v30 = v57;
          if ( v45 )
          {
            memcpy(v55, Src, MaxCount);
            v45 = 0;
          }
        }
        v35 = (unsigned __int8 *)v30;
        v3 = v29;
        v4 = (int *)Src;
        v57 = v3;
        v55 = (int *)Src;
        Src = v35;
      }
      else
      {
        do
        {
          *(_DWORD *)v19 += *(_DWORD *)(v44 + ((v18 >> 5) & 0x400) + 4 * *v16);
          v19 += 4;
          ++v16;
        }
        while ( v19 < v52 );
        v3 = v57;
      }
      v15 = v42;
    }
    while ( v42 );
    v12 = v51;
  }
  if ( v59[21] != v59[49] )
  {
    v36 = (_WORD *)v59[86];
    v37 = &v4[MaxCount / 4u];
    v38 = v3 - (char *)v4;
    do
    {
      v39 = (5 * *v4 - *(int *)((char *)v4 + v38)) >> 7;
      if ( (v39 & 0xFF0000) != 0 )
        LOWORD(v39) = ~HIWORD(v39);
      *v36 = v39;
      ++v4;
      v36 = (_WORD *)((char *)v36 + v59[88]);
    }
    while ( v4 < v37 );
    v40 = v59[0];
    if ( SLOBYTE(v59[0]) < 0 )
    {
      ((void (__cdecl *)(_DWORD *))v59[31])(v59);
      v40 = v59[0];
    }
    if ( (v40 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v59);
      LOBYTE(v40) = v59[0];
    }
    if ( (v40 & 0x10) != 0 )
    {
      MappingBGRF((unsigned __int8 *)v59[82], v59[83], v59[59], (unsigned __int8 *)v59[68]);
      v59[68] += v59[71];
      if ( v59[68] == v59[69] )
        v59[68] = v59[70];
    }
    ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v59[43])(
      v59,
      v59[84],
      v59[85],
      v59[21],
      v59[58],
      v59[61],
      v59[61] + v59[65],
      v59[66],
      v59[44]);
    ++v12;
  }
  return v12;
}
