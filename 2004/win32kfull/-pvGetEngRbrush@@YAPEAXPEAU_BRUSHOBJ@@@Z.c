/*
 * XREFs of ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00CCC68
 * Callers:
 *     EngBitBlt @ 0x1C00CD5F0 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00CF2B0 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013A5F8 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00CB880 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CBD3C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 */

PVOID __fastcall pvGetEngRbrush(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  __int64 v2; // rbx
  int RealizedBrush; // eax
  struct RBRUSH *pvRbrush; // rdx

  result = a1[1].pvRbrush;
  v2 = 0LL;
  if ( !result )
  {
    RealizedBrush = bGetRealizedBrush(*(struct BRUSH **)&a1[4].flColorType, (struct EBRUSHOBJ *)a1, EngRealizeBrush);
    pvRbrush = (struct RBRUSH *)a1[1].pvRbrush;
    if ( RealizedBrush )
    {
      vTryToCacheRealization((struct EBRUSHOBJ *)a1, pvRbrush, *(struct BRUSH **)&a1[4].flColorType, 1);
      return a1[1].pvRbrush;
    }
    else if ( pvRbrush )
    {
      Win32FreePool(a1[1].pvRbrush);
      a1[1].pvRbrush = 0LL;
    }
    return (PVOID)v2;
  }
  return result;
}
