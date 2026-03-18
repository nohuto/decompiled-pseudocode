/*
 * XREFs of ?pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x95952
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x94E94 (-BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z.c)
 *     ?EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238843 (-EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?vTryToCacheRealization@@YGXPAVEBRUSHOBJ@@PAVRBRUSH@@PAVBRUSH@@H@Z @ 0x96A78 (-vTryToCacheRealization@@YGXPAVEBRUSHOBJ@@PAVRBRUSH@@PAVBRUSH@@H@Z.c)
 */

void *__thiscall pvGetEngRbrush(int this)
{
  void *result; // eax
  int v3; // edi
  struct EBRUSHOBJ *v4; // [esp+0h] [ebp-8h]
  struct BRUSH *v5; // [esp+0h] [ebp-8h]
  int (__stdcall *v6)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [esp+4h] [ebp-4h]
  int v7; // [esp+4h] [ebp-4h]

  result = *(void **)(this + 20);
  if ( !result )
  {
    if ( bGetRealizedBrush((struct BRUSH *)EngRealizeBrush, v4, v6) )
    {
      vTryToCacheRealization(*(struct EBRUSHOBJ **)(this + 72), (struct RBRUSH *)1, v5, v7);
      return *(void **)(this + 20);
    }
    else
    {
      v3 = 0;
      if ( *(_DWORD *)(this + 20) )
      {
        Win32FreePool(*(_DWORD *)(this + 20));
        *(_DWORD *)(this + 20) = 0;
      }
    }
    return (void *)v3;
  }
  return result;
}
