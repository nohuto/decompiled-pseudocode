/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900 (-vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x861B6 (-bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x86460 (-bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x87132 (-bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207B5A (-pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207BE7 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x240FBD (-bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  int v2; // esi
  int v3; // ebx
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int *v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  char *v10; // eax
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int *v13; // ebx
  unsigned __int16 *v14; // edi
  _DWORD *v15; // edx
  int v16; // eax
  int v17; // eax
  char *v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned __int16 *v25; // edi
  _DWORD *v26; // edx
  unsigned int *v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  ULONG *v32; // [esp+0h] [ebp-38h]
  ULONG *v33; // [esp+0h] [ebp-38h]
  unsigned int v34; // [esp+0h] [ebp-38h]
  unsigned int v35; // [esp+0h] [ebp-38h]
  unsigned int *v36; // [esp+4h] [ebp-34h]
  unsigned int *v37; // [esp+4h] [ebp-34h]
  char *v38; // [esp+Ch] [ebp-2Ch]
  unsigned int v39; // [esp+10h] [ebp-28h]
  int v40; // [esp+14h] [ebp-24h]
  unsigned int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+20h] [ebp-18h]
  unsigned int *v44; // [esp+24h] [ebp-14h]
  unsigned int v45; // [esp+2Ch] [ebp-Ch]
  unsigned int v46; // [esp+30h] [ebp-8h]
  unsigned int v47; // [esp+34h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this;
  v3 = 0;
  v43 = 0;
  v4 = 2 * *(_DWORD *)(*(_DWORD *)this + 632);
  v5 = *(_DWORD *)(*(_DWORD *)this + 56) & 2;
  v42 = v4;
  v47 = 0;
  v40 = v5;
  if ( v5 )
  {
    v43 = *(_DWORD *)(v2 + 532);
    v6 = *(_DWORD *)(v43 + 12);
    v7 = (unsigned int *)(v43 + 8);
  }
  else
  {
    v3 = *(_DWORD *)(*(_DWORD *)(v2 + 80) + 44);
    if ( !v3 )
      return 0;
    v6 = *(_DWORD *)(v3 + 4);
    v7 = *(unsigned int **)(*(_DWORD *)(v2 + 80) + 44);
  }
  v45 = *v7;
  v46 = v6;
  if ( ULongLongToULong(12LL * v6, v32) < 0
    || ULongLongToULong(4LL * v45, v33) < 0
    || (ULongAdd(0, 8u, (int *)&v47, v34, v36) & 0x80000000) != 0
    || (ULongAdd(0, v47, (int *)&v47, v35, v37) & 0x80000000) != 0 )
  {
    return 0;
  }
  v8 = (v47 + 7) & 0xFFFFFFF8;
  v39 = v8;
  v9 = (*(_DWORD *)(v2 + 640) != 0 ? 0xFFFFFA80 : 0) + v8 + 2048;
  v47 = v9;
  if ( v9 + 8 > 0xC00 )
  {
    v9 = (v8 + 4095) & 0xFFFFF000;
    v47 = v9;
    if ( v9 - v8 < 0x80 )
    {
      v9 += 4096;
      v47 = v9;
    }
  }
  v10 = (char *)PALLOCMEM2(v9, 1667326791, 0);
  v38 = v10;
  v11 = *(_DWORD *)this;
  if ( !v10 )
  {
    *(_DWORD *)(v11 + 56) |= 8u;
    return 0;
  }
  *(_DWORD *)(v11 + 536) = v10;
  v44 = *(unsigned int **)(*(_DWORD *)this + 536);
  v44[1] = 0;
  *v44 = v46;
  memset(&v44[3 * v46 + 2], 0, 4 * v45);
  v12 = v46;
  if ( v46 )
  {
    if ( v40 )
    {
      v13 = &v44[3 * v46 + 2];
      v14 = (unsigned __int16 *)(v43 + 16);
      v15 = v44 + 3;
      do
      {
        v15[1] = v13;
        v16 = *v14;
        v14 += 4;
        *(v15 - 1) = v16;
        v17 = *(v14 - 3);
        *v15 = v17;
        v15 += 3;
        v13 += v17;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v25 = (unsigned __int16 *)(v3 + 8);
      v26 = v44 + 3;
      v27 = &v44[3 * v46 + 2];
      do
      {
        v26[1] = v27;
        v28 = *v25;
        v25 += 2;
        *(v26 - 1) = v28;
        v29 = *(v25 - 1);
        *v26 = v29;
        v26 += 3;
        v27 += v29;
        --v12;
      }
      while ( v12 );
    }
    v4 = v42;
  }
  *(_DWORD *)(v2 + 564) = &v38[v39];
  *(_DWORD *)&v38[v39] = 0;
  *(_DWORD *)(v2 + 552) = *(_DWORD *)(v2 + 564) + 8;
  v18 = &v38[v47];
  *(_DWORD *)(v2 + 560) = &v38[v47];
  *(_DWORD *)(v2 + 556) = v18;
  v19 = *(_DWORD *)this;
  v20 = *(_DWORD *)(*(_DWORD *)this + 60);
  if ( !v20 || (*(_BYTE *)(*(_DWORD *)this + 56) & 1) != 0 )
    goto LABEL_23;
  if ( v20 == 2 )
    goto LABEL_35;
  v21 = *(_DWORD *)(v2 + 632);
  v4 = 16 * v21;
  v22 = (16 * v21 + 4095) & 0xFFFFF000;
  if ( v22 <= 0x2000 )
  {
    *(_DWORD *)(v2 + 576) = v22;
    if ( v4 >= 0xC00 )
      v4 = (v4 + 4095) & 0xFFFFF000;
    goto LABEL_22;
  }
  if ( (unsigned int)(8 * v21) > 0x2000 )
  {
    v4 = (8 * v21 + 4095) & 0xFFFFF000;
    if ( v4 >= 0x10000 )
      v4 = 0x10000;
LABEL_35:
    *(_DWORD *)(v2 + 576) = v4;
    goto LABEL_22;
  }
  *(_DWORD *)(v2 + 576) = 0x2000;
  v4 = 0x2000;
LABEL_22:
  *(_DWORD *)(v2 + 572) = v4;
  *(_DWORD *)(v2 + 580) = ((v45 + 1023) >> 10 << 16) / *(_DWORD *)(v2 + 576);
  v19 = *(_DWORD *)this;
LABEL_23:
  v23 = **(_DWORD **)(v19 + 536);
  if ( v23 > 0xC8 )
  {
    v30 = v23 - 1;
    *(_DWORD *)(v2 + 612) = v30;
    if ( (v30 & 0xF000) != 0 )
    {
      v31 = *((unsigned __int8 *)&acBits + ((v30 >> 12) & 0xF)) + 12;
    }
    else if ( (v30 & 0xF00) != 0 )
    {
      v31 = *((unsigned __int8 *)&acBits + ((v30 >> 8) & 0xF)) + 8;
    }
    else if ( (v30 & 0xF0) != 0 )
    {
      v31 = *((unsigned __int8 *)&acBits + ((v30 >> 4) & 0xF)) + 4;
    }
    else
    {
      v31 = *((unsigned __int8 *)&acBits + (v30 & 0xF));
    }
    *(_DWORD *)(v2 + 620) = v31;
    *(const int **)(v2 + 616) = (&aiStart)[v31];
  }
  else
  {
    *(_DWORD *)(v2 + 612) = 0;
  }
  return 1;
}
