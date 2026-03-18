/*
 * XREFs of ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E
 * Callers:
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x203534 (-MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x203A11 (-MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x2046EE (-MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 *     ?MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20495E (-MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 *     ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E (-MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     _MulDestroyBrushInternal@4 @ 0x20689F (_MulDestroyBrushInternal@4.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     _BRUSHOBJ_pvGetRbrush@4 @ 0x1CC89F (_BRUSHOBJ_pvGetRbrush@4.c)
 */

MULTIBRUSH *__thiscall MULTIBRUSH::MULTIBRUSH(
        MULTIBRUSH *this,
        BRUSHOBJ *pbo,
        int a3,
        struct _VDEV *a4,
        struct _SURFOBJ *a5,
        int a6)
{
  void *v7; // ecx

  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 2) = pbo;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 3) = a5 != 0 ? &a5[-1].lDelta : 0;
  if ( pbo )
  {
    *((_DWORD *)this + 5) = pbo->pvRbrush;
    if ( a6 && pbo->iSolidColor == -1 )
    {
      *((_DWORD *)this + 4) = pbo[5].iSolidColor;
      if ( !pbo->pvRbrush )
      {
        *(_DWORD *)(*((_DWORD *)this + 2) + 4) = BRUSHOBJ_pvGetRbrush(pbo);
        v7 = *(void **)(*((_DWORD *)this + 2) + 4);
        *((_DWORD *)this + 5) = v7;
        if ( v7 )
        {
          memset(v7, 0, 8 * a3 + 4);
          **((_DWORD **)this + 5) = *((_DWORD *)a4 + 2);
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4) - 8) = 1;
        }
        else
        {
          *(_DWORD *)this = 0;
        }
      }
    }
    else
    {
      *((_DWORD *)this + 1) = pbo->iSolidColor;
    }
  }
  return this;
}
