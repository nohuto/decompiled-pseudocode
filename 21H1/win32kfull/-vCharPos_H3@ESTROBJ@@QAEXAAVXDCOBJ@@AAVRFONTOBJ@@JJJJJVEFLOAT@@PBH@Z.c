/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJVEFLOAT@@PBH@Z @ 0x87CA4
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z @ 0xE29E4 (-bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

int __thiscall ESTROBJ::vCharPos_H3(
        int this,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int *a8,
        int a9,
        int a10)
{
  int v11; // edi
  RFONTOBJ *v12; // edx
  struct _GLYPHPOS *v13; // ebx
  POINTL *p_ptl; // ecx
  LONG *p_y; // eax
  char *v16; // ebx
  char *v17; // edi
  int result; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int *v23; // edx
  char *v24; // edx
  int v25; // edx
  _DWORD *y; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  _DWORD *v30; // edi
  int v31; // ecx
  int v32; // ebx
  int v33; // eax
  POINTL *v34; // [esp+14h] [ebp-1Ch]
  int v35; // [esp+18h] [ebp-18h]
  int v36; // [esp+1Ch] [ebp-14h] BYREF
  struct _GLYPHPOS *v37; // [esp+20h] [ebp-10h]
  int v38; // [esp+24h] [ebp-Ch]
  unsigned __int16 *v39; // [esp+28h] [ebp-8h]
  LONG *v40; // [esp+2Ch] [ebp-4h]
  int v41; // [esp+40h] [ebp+10h]

  v38 = 0;
  v11 = *(_DWORD *)(this + 4);
  if ( !a6 )
  {
    *(_DWORD *)(this + 4) = v11 | *(_DWORD *)(*(_DWORD *)a3 + 280) & 0x71 | 2;
LABEL_3:
    v12 = a3;
    goto LABEL_4;
  }
  *(_DWORD *)(this + 4) = v11 | *(_DWORD *)(*(_DWORD *)a3 + 280) & 0x40 | 2;
  if ( (_DWORD)a6 )
  {
    v29 = lCvt(a9, a10, a6);
    *(_DWORD *)(this + 96) = v29;
    if ( v29 > 0 )
      *(_DWORD *)(this + 4) |= 0x800u;
  }
  v30 = (_DWORD *)(this + 100);
  if ( !(unsigned __int8)bCalcBreakExtra(HIDWORD(a6), a7, this + 100, a9, a10) )
    goto LABEL_3;
  v12 = a3;
  v38 = *(_DWORD *)(this + 96);
  v31 = *(_DWORD *)a3;
  v32 = *(_DWORD *)(*(_DWORD *)a3 + 528);
  if ( *v30 + v32 + v38 < 0 )
  {
    *v30 = -(v32 + v38);
    v31 = *(_DWORD *)a3;
  }
  v33 = *(_DWORD *)(v31 + 524);
  *(_DWORD *)(this + 4) |= 0x1000u;
  v38 = v33;
LABEL_4:
  v13 = *(struct _GLYPHPOS **)(this + 48);
  v39 = *(unsigned __int16 **)(this + 32);
  p_ptl = &v13->ptl;
  v41 = a4 + 8;
  v35 = (a5 + 8) >> 4;
  v13->ptl.x = v41 >> 4;
  p_y = &v13->ptl.y;
  v37 = v13;
  v16 = 0;
  v36 = 0;
  *p_y = v35;
  v17 = 0;
  v40 = p_y;
  v34 = p_ptl;
  if ( a8 )
  {
    v19 = *a8;
  }
  else
  {
    result = RFONTOBJ::bGetGlyphMetricsPlus(v12, *(_DWORD *)this, v37, v39, &v36, a2, (struct ESTROBJ *)this);
    if ( !result )
      return result;
    v19 = v36;
    p_ptl = v34;
  }
  if ( v19 )
  {
    v20 = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 192) |= 2u;
    *(_DWORD *)(this + 28) = v20;
  }
  if ( (*(_BYTE *)(this + 4) & 0x30) != 0x30 || (v21 = *(_DWORD *)(this + 96), v21 < 0) || *(_DWORD *)(this + 100) )
  {
    v24 = 0;
    v37 = *(struct _GLYPHPOS **)this;
    while ( 1 )
    {
      y = (_DWORD *)p_ptl[-1].y;
      if ( (int)&v17[y[3]] < (int)v24 )
        v24 = &v17[y[3]];
      if ( (int)&v17[y[4]] > (int)v16 )
        v16 = &v17[y[4]];
      v27 = y[2];
      v17 += v27;
      v28 = *(_DWORD *)(this + 96);
      if ( v28 && v28 + v27 > 0 )
        v17 += v28;
      if ( v34[-1].x == v38 )
        v17 += *(_DWORD *)(this + 100);
      v37 = (struct _GLYPHPOS *)((char *)v37 - 1);
      if ( !v37 )
        break;
      p_ptl = v34 + 2;
      v34 = p_ptl;
      p_ptl->x = (int)&v17[v41] >> 4;
      p_ptl->y = v35;
    }
    if ( (int)v17 <= (int)v16 )
      goto LABEL_17;
  }
  else
  {
    v17 = (char *)v37->pgdf[2].pgb + v21;
    v22 = *(_DWORD *)this - 1;
    if ( *(_DWORD *)this != 1 )
    {
      v23 = v40;
      do
      {
        v23 += 4;
        *(v23 - 1) = (int)&v17[v41] >> 4;
        *v23 = v35;
        v17 += *(_DWORD *)(this + 96) + *(_DWORD *)(*(v23 - 2) + 8);
        --v22;
      }
      while ( v22 );
    }
    v24 = 0;
  }
  v16 = v17;
LABEL_17:
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 92) = v17;
  *(_DWORD *)(this + 60) = v17;
  *(_DWORD *)(this + 76) = v24;
  *(_DWORD *)(this + 84) = v16;
  v25 = *(_DWORD *)a3;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 340) & 0x40) != 0 )
  {
    *(_DWORD *)(this + 80) = -*(_DWORD *)(v25 + 324);
    result = -*(_DWORD *)(*(_DWORD *)a3 + 320);
  }
  else
  {
    *(_DWORD *)(this + 80) = *(_DWORD *)(v25 + 320);
    result = *(_DWORD *)(*(_DWORD *)a3 + 324);
  }
  *(_DWORD *)(this + 88) = result;
  *(_DWORD *)(this + 192) |= 4u;
  return result;
}
