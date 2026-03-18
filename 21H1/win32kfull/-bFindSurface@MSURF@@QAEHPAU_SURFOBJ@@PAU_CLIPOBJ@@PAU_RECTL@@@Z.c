/*
 * XREFs of ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F
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

int __thiscall MSURF::bFindSurface(struct DHPDEV__ *this, struct _SURFOBJ *a2, struct _CLIPOBJ *a3, struct _RECTL *a4)
{
  int iType; // eax
  DHPDEV dhpdev; // ecx
  DHSURF dhsurf; // esi
  _DWORD *v8; // edx
  int v9; // eax
  const struct _RECTL *v11; // esi
  const struct _RECTL *v12; // edx
  int *v13; // ecx
  _DWORD *v14; // edi
  CLIPOBJ *Clip; // eax
  LONG *v16; // esi
  struct _CLIPOBJ *v17; // esi
  RECTL *p_rclBounds; // esi
  LONG *v19; // edi
  LONG *p_top; // esi
  struct DHPDEV__ *v21; // edx
  char v22; // cl
  struct DHPDEV__ *v23; // ecx
  LONG *v24; // edi

  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 11) = 0;
  iType = a2->iType;
  if ( iType == 3 )
  {
    dhpdev = a2->dhpdev;
    *(_DWORD *)this = dhpdev;
    *((_DWORD *)this + 14) = a3;
    dhsurf = a2->dhsurf;
    this[5] = a2->dhsurf;
    v8 = *(_DWORD **)dhpdev;
    this[12] = *(_DWORD *)dhpdev;
    while ( v8 )
    {
      v9 = *(_DWORD *)(*((_DWORD *)dhsurf + 1) + 4 * v8[2]);
      if ( v9 )
      {
        *((_DWORD *)this + 13) = v9;
        *((_DWORD *)this + 15) = &gptlZero;
        return 1;
      }
      v8 = (_DWORD *)*v8;
      *((_DWORD *)this + 12) = v8;
    }
    goto LABEL_38;
  }
  if ( (_WORD)iType == 1 && ((unsigned int)&loc_20000 & (_DWORD)a2->hdev[6]) == 0 )
    return 0;
  *(_DWORD *)this = a2->dhpdev;
  if ( a3 && a3->iDComplexity )
  {
    *((_DWORD *)this + 14) = a3;
    *((_BYTE *)this + 64) = a3->iDComplexity;
    *(RECTL *)(this + 1) = a3->rclBounds;
    v11 = (const struct _RECTL *)(this + 6);
    if ( bIntersect(a4, (const struct _RECTL *)(this + 1), (struct _RECTL *)(this + 6)) )
    {
LABEL_14:
      v12 = (const struct _RECTL *)(this + 1);
      goto LABEL_15;
    }
    return 0;
  }
  Clip = EngCreateClip();
  *((_DWORD *)this + 14) = Clip;
  if ( !Clip )
    return 0;
  v16 = (LONG *)(*(_DWORD *)this + 40);
  *((_DWORD *)this + 11) = 1;
  Clip->rclBounds.left = *v16++;
  Clip->rclBounds.top = *v16++;
  Clip->rclBounds.right = *v16;
  Clip->rclBounds.bottom = v16[1];
  RGNOBJ::vSet((RGNOBJ *)(*((_DWORD *)this + 14) + 48), (struct _RECTL *)(*((_DWORD *)this + 14) + 4));
  v17 = a3;
  *((_BYTE *)this + 64) = 0;
  if ( !a3 )
    v17 = (struct _CLIPOBJ *)*((_DWORD *)this + 14);
  p_rclBounds = &v17->rclBounds;
  v12 = (const struct _RECTL *)(this + 1);
  this[1] = p_rclBounds->left;
  p_rclBounds = (RECTL *)((char *)p_rclBounds + 4);
  this[2] = p_rclBounds->left;
  p_rclBounds = (RECTL *)((char *)p_rclBounds + 4);
  this[3] = p_rclBounds->left;
  *(_DWORD *)(this + 4) = p_rclBounds->top;
  v11 = (const struct _RECTL *)(this + 6);
  if ( a3 )
  {
    if ( !bIntersect(a4, v12, (struct _RECTL *)(this + 6)) )
    {
LABEL_38:
      if ( *((_DWORD *)this + 11) == 1 )
        EngDeleteClip(*((CLIPOBJ **)this + 14));
      return 0;
    }
    goto LABEL_14;
  }
  *(struct _RECTL *)(this + 6) = *a4;
  v11 = (const struct _RECTL *)(this + 6);
LABEL_15:
  v13 = **(int ***)this;
  *((_DWORD *)this + 12) = v13;
  if ( !v13 )
  {
LABEL_37:
    v24 = (LONG *)(*((_DWORD *)this + 14) + 4);
    *v24++ = v12->left;
    *v24++ = v12->top;
    *v24 = v12->right;
    v24[1] = v12->bottom;
    *(_BYTE *)(*((_DWORD *)this + 14) + 20) = *((_BYTE *)this + 64);
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(v13[10] + 24) & 0x400) != 0 )
      goto LABEL_24;
    if ( !*((_BYTE *)this + 64)
      && v11->left >= v13[5]
      && *((_DWORD *)this + 7) >= v13[6]
      && *((_DWORD *)this + 8) <= v13[7]
      && *((_DWORD *)this + 9) <= v13[8] )
    {
      *(_BYTE *)(*((_DWORD *)this + 14) + 20) = 0;
      v19 = (LONG *)(*((_DWORD *)this + 14) + 4);
      *v19 = v11->left;
      p_top = &v11->top;
      *++v19 = *p_top++;
      *++v19 = *p_top;
      v19[1] = p_top[1];
      v21 = (struct DHPDEV__ *)*((_DWORD *)this + 12);
      this[13] = v21[11];
      *((_DWORD *)this + 15) = v21 + 12;
      return 1;
    }
    if ( bIntersect(v11, (const struct _RECTL *)(v13 + 5), (struct _RECTL *)(*((_DWORD *)this + 14) + 4)) )
      break;
    v12 = (const struct _RECTL *)(this + 1);
    v14 = (_DWORD *)(*((_DWORD *)this + 14) + 4);
    *v14++ = *((_DWORD *)this + 1);
    *v14++ = *((_DWORD *)this + 2);
    *v14 = *((_DWORD *)this + 3);
    v14[1] = *((_DWORD *)this + 4);
    v13 = (int *)*((_DWORD *)this + 12);
LABEL_24:
    v13 = (int *)*v13;
    *((_DWORD *)this + 12) = v13;
    if ( !v13 )
      goto LABEL_37;
    v11 = (const struct _RECTL *)(this + 6);
  }
  v22 = *((_BYTE *)this + 64);
  if ( !v22 )
    v22 = 1;
  *(_BYTE *)(*((_DWORD *)this + 14) + 20) = v22;
  v23 = (struct DHPDEV__ *)*((_DWORD *)this + 12);
  this[13] = v23[11];
  *((_DWORD *)this + 15) = v23 + 12;
  return 1;
}
