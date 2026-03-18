/*
 * XREFs of _BRUSHOBJ_pvGetRbrush@4 @ 0x1CC89F
 * Callers:
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?vTryToCacheRealization@@YGXPAVEBRUSHOBJ@@PAVRBRUSH@@PAVBRUSH@@H@Z @ 0x96A78 (-vTryToCacheRealization@@YGXPAVEBRUSHOBJ@@PAVRBRUSH@@PAVBRUSH@@H@Z.c)
 */

PVOID __stdcall BRUSHOBJ_pvGetRbrush(BRUSHOBJ *pbo)
{
  struct EBRUSHOBJ *v1; // edi
  PVOID result; // eax
  int RealizedBrush; // eax
  _DWORD *pvRbrush; // edx
  void *v5; // edi
  struct BRUSH *v6; // [esp-4h] [ebp-8h]
  int (__stdcall *v7)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [esp+0h] [ebp-4h]
  int v8; // [esp+0h] [ebp-4h]

  result = pbo->pvRbrush;
  if ( !result )
  {
    RealizedBrush = bGetRealizedBrush(
                      (EBRUSHOBJ *)pbo,
                      (BRUSH *)pbo[6].iSolidColor,
                      *(struct BRUSH **)(*(_DWORD *)(pbo[4].flColorType + 28) + 1948),
                      v1,
                      v7);
    pvRbrush = pbo->pvRbrush;
    v5 = 0;
    if ( RealizedBrush )
    {
      if ( pvRbrush )
      {
        vTryToCacheRealization(pvRbrush - 4, pbo, (struct EBRUSHOBJ *)pbo[6].iSolidColor, 0, v6, v8);
        return pbo->pvRbrush;
      }
    }
    else if ( pvRbrush )
    {
      Win32FreePool(pvRbrush - 4);
      pbo->pvRbrush = 0;
    }
    return v5;
  }
  return result;
}
