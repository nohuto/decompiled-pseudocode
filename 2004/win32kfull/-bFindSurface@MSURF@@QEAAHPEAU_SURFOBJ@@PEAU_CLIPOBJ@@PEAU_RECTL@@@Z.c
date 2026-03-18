/*
 * XREFs of ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A6E60
 * Callers:
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A1DA0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A23D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02A29D0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02A36B0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02A3CF0 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A3E50 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A40F0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A4420 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A4A10 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A5240 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A5520 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A58A0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A5BB0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A6228 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MSURF::bFindSurface(__int64 ***this, struct _SURFOBJ *a2, struct _CLIPOBJ *a3, struct _RECTL *a4)
{
  USHORT iType; // ax
  DHPDEV dhpdev; // rax
  DHSURF dhsurf; // r9
  __int64 **v10; // rdx
  __int64 **v11; // r8
  __int64 *v12; // rax
  POINTL *v13; // rax
  _OWORD *v15; // r14
  struct _RECTL *v16; // rbp
  CLIPOBJ *Clip; // rax
  __int64 **v18; // rcx
  struct _CLIPOBJ *v19; // rax
  __int64 *i; // rdx
  __int64 **v21; // rcx
  char v22; // cl

  *((_DWORD *)this + 12) = 0;
  this[3] = 0LL;
  *((_DWORD *)this + 13) = 0;
  iType = a2->iType;
  if ( iType == 3 )
  {
    dhpdev = a2->dhpdev;
    *this = (__int64 **)dhpdev;
    this[9] = (__int64 **)a3;
    dhsurf = a2->dhsurf;
    this[3] = (__int64 **)a2->dhsurf;
    v10 = *(__int64 ***)dhpdev;
    this[7] = *(__int64 ***)dhpdev;
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = *(__int64 ***)(*((_QWORD *)dhsurf + 1) + 8LL * *((unsigned int *)v10 + 4));
        if ( v11 )
          break;
        v12 = *v10;
        this[7] = (__int64 **)*v10;
        v10 = (__int64 **)v12;
        if ( !v12 )
          goto LABEL_33;
      }
      this[8] = v11;
      v13 = &gptlZero;
      goto LABEL_7;
    }
    goto LABEL_33;
  }
  if ( iType == 1 && ((_DWORD)a2->hdev[10] & 0x20000) == 0 )
    return 0LL;
  *this = (__int64 **)a2->dhpdev;
  if ( a3 && a3->iDComplexity )
  {
    this[9] = (__int64 **)a3;
    v15 = this + 1;
    v16 = (struct _RECTL *)(this + 4);
    *((_BYTE *)this + 88) = a3->iDComplexity;
    *(RECTL *)(this + 1) = a3->rclBounds;
    if ( !bIntersect(a4, (const struct _RECTL *)(this + 1), (struct _RECTL *)this + 2) )
      return 0LL;
  }
  else
  {
    Clip = EngCreateClip();
    this[9] = (__int64 **)Clip;
    if ( !Clip )
      return 0LL;
    v18 = *this;
    *((_DWORD *)this + 13) = 1;
    Clip->rclBounds = *(RECTL *)(v18 + 9);
    RGNOBJ::vSet((RGNOBJ *)(this[9] + 7), (struct _RECTL *)((char *)this[9] + 4));
    *((_BYTE *)this + 88) = 0;
    v19 = a3;
    if ( !a3 )
      v19 = (struct _CLIPOBJ *)this[9];
    v15 = this + 1;
    v16 = (struct _RECTL *)(this + 4);
    *(RECTL *)(this + 1) = v19->rclBounds;
    if ( a3 )
    {
      if ( !bIntersect(a4, (const struct _RECTL *)(this + 1), (struct _RECTL *)this + 2) )
      {
LABEL_33:
        if ( *((_DWORD *)this + 13) == 1 )
          EngDeleteClip((CLIPOBJ *)this[9]);
        return 0LL;
      }
    }
    else
    {
      *v16 = *a4;
    }
  }
  for ( i = **this; ; i = (__int64 *)*i )
  {
    this[7] = (__int64 **)i;
    if ( !i )
    {
      *(_OWORD *)((char *)this[9] + 4) = *v15;
      *((_BYTE *)this[9] + 20) = *((_BYTE *)this + 88);
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(i[7] + 40) & 0x400) == 0 )
      break;
LABEL_30:
    ;
  }
  if ( !*((_BYTE *)this + 88)
    && v16->left >= *((_DWORD *)i + 7)
    && *((_DWORD *)this + 9) >= *((_DWORD *)i + 8)
    && *((_DWORD *)this + 10) <= *((_DWORD *)i + 9)
    && *((_DWORD *)this + 11) <= *((_DWORD *)i + 10) )
  {
    *((_BYTE *)this[9] + 20) = 0;
    *(struct _RECTL *)((char *)this[9] + 4) = *v16;
    goto LABEL_37;
  }
  if ( !bIntersect(v16, (const struct _RECTL *)((char *)i + 28), (struct _RECTL *)((char *)this[9] + 4)) )
  {
    *(_OWORD *)((char *)this[9] + 4) = *v15;
    i = (__int64 *)this[7];
    goto LABEL_30;
  }
  v22 = 1;
  if ( *((_BYTE *)this + 88) )
    v22 = *((_BYTE *)this + 88);
  *((_BYTE *)this[9] + 20) = v22;
LABEL_37:
  v21 = this[7];
  this[8] = (__int64 **)v21[8];
  v13 = (POINTL *)(v21 + 9);
LABEL_7:
  this[10] = (__int64 **)v13;
  return 1LL;
}
