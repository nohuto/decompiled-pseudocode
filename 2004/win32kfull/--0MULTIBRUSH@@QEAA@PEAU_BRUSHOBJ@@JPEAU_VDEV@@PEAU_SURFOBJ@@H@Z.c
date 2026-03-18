/*
 * XREFs of ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02A1760
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A23D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A3E50 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A4420 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A5240 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A5520 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A58A0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A6228 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A66B8 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     MulDestroyBrushInternal @ 0x1C02A7A10 (MulDestroyBrushInternal.c)
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C026E2B0 (BRUSHOBJ_pvGetRbrush.c)
 */

MULTIBRUSH *__fastcall MULTIBRUSH::MULTIBRUSH(
        MULTIBRUSH *this,
        struct _BRUSHOBJ *a2,
        int a3,
        struct _VDEV *a4,
        struct _SURFOBJ *a5,
        int a6)
{
  void *v9; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = -1LL;
  *((_QWORD *)this + 2) = (unsigned __int64)&a5[-1].pvScan0 & -(__int64)(a5 != 0LL);
  *((_DWORD *)this + 1) = -1;
  if ( a2 )
  {
    *((_QWORD *)this + 4) = a2->pvRbrush;
    if ( a6 && a2->iSolidColor == -1 )
    {
      *((_QWORD *)this + 3) = *(_QWORD *)&a2[3].flColorType;
      if ( !a2->pvRbrush )
      {
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = BRUSHOBJ_pvGetRbrush(a2);
        v9 = *(void **)(*((_QWORD *)this + 1) + 8LL);
        *((_QWORD *)this + 4) = v9;
        if ( v9 )
        {
          memset(v9, 0, 16 * a3 + 8);
          **((_DWORD **)this + 4) = *((_DWORD *)a4 + 4);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) - 8LL) = 1;
        }
        else
        {
          *(_DWORD *)this = 0;
        }
      }
    }
    else
    {
      *((_DWORD *)this + 1) = a2->iSolidColor;
    }
  }
  return this;
}
