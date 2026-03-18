/*
 * XREFs of ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC
 * Callers:
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x202500 (-MulCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 *     ?MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x202E96 (-MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTA.c)
 *     ?MulEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z @ 0x203445 (-MulEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z.c)
 *     ?MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x203534 (-MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x203762 (-MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     ?MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x203A11 (-MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x2046EE (-MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 *     ?MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20495E (-MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 *     ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E (-MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 * Callees:
 *     <none>
 */

int __thiscall MSURF::bNextSurface(MSURF *this)
{
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // ecx
  int *i; // ecx
  _DWORD *v8; // edi
  _DWORD *v9; // edi
  _DWORD *v10; // edi
  int v11; // ecx
  char v12; // cl

  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    if ( (*(_BYTE *)(*((_DWORD *)this + 13) + 60) & 4) != 0
      && (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 12) + 40) + 1416) & 0x8000) == 0 )
    {
      *((_DWORD *)this + 10) |= 1u;
    }
    v3 = (_DWORD *)*((_DWORD *)this + 12);
    v4 = (_DWORD *)*v3;
    *((_DWORD *)this + 12) = *v3;
    while ( v4 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v4[2]);
      if ( v5 && ((*(_DWORD *)(v4[10] + 1416) & 0x8000) != 0 || (*((_BYTE *)this + 40) & 1) == 0) )
      {
        *((_DWORD *)this + 13) = v5;
        *((_DWORD *)this + 15) = &gptlZero;
        return 1;
      }
      v4 = (_DWORD *)*v4;
      *((_DWORD *)this + 12) = v4;
    }
LABEL_26:
    if ( *((_DWORD *)this + 11) == 1 )
      EngDeleteClip(*((CLIPOBJ **)this + 14));
    return 0;
  }
  for ( i = (int *)**((_DWORD **)this + 12); ; i = (int *)*i )
  {
    *((_DWORD *)this + 12) = i;
    if ( !i )
    {
      v9 = (_DWORD *)(*((_DWORD *)this + 14) + 4);
      *v9++ = *((_DWORD *)this + 1);
      *v9++ = *((_DWORD *)this + 2);
      *v9 = *((_DWORD *)this + 3);
      v9[1] = *((_DWORD *)this + 4);
      *(_BYTE *)(*((_DWORD *)this + 14) + 20) = *((_BYTE *)this + 64);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(i[10] + 24) & 0x400) == 0 )
      break;
LABEL_23:
    ;
  }
  if ( !*((_BYTE *)this + 64)
    && *((_DWORD *)this + 6) >= i[5]
    && *((_DWORD *)this + 7) >= i[6]
    && *((_DWORD *)this + 8) <= i[7]
    && *((_DWORD *)this + 9) <= i[8] )
  {
    *(_BYTE *)(*((_DWORD *)this + 14) + 20) = 0;
    v10 = (_DWORD *)(*((_DWORD *)this + 14) + 4);
    *v10++ = *((_DWORD *)this + 6);
    *v10++ = *((_DWORD *)this + 7);
    *v10 = *((_DWORD *)this + 8);
    v10[1] = *((_DWORD *)this + 9);
    goto LABEL_30;
  }
  if ( !bIntersect(
          (const struct _RECTL *)((char *)this + 24),
          (const struct _RECTL *)(i + 5),
          (struct _RECTL *)(*((_DWORD *)this + 14) + 4)) )
  {
    v8 = (_DWORD *)(*((_DWORD *)this + 14) + 4);
    *v8++ = *((_DWORD *)this + 1);
    *v8++ = *((_DWORD *)this + 2);
    *v8 = *((_DWORD *)this + 3);
    v8[1] = *((_DWORD *)this + 4);
    i = (int *)*((_DWORD *)this + 12);
    goto LABEL_23;
  }
  v12 = *((_BYTE *)this + 64);
  if ( !v12 )
    v12 = 1;
  *(_BYTE *)(*((_DWORD *)this + 14) + 20) = v12;
LABEL_30:
  v11 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 13) = *(_DWORD *)(v11 + 44);
  *((_DWORD *)this + 15) = v11 + 48;
  return 1;
}
