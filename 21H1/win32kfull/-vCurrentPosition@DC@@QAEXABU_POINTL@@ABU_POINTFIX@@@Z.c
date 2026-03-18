/*
 * XREFs of ?vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z @ 0x1FDD2F
 * Callers:
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDD88 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 *     _GrePolyBezierTo@12 @ 0x1FFDFC (_GrePolyBezierTo@12.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 *     _GrePolylineTo@12 @ 0x2009B9 (_GrePolylineTo@12.c)
 * Callees:
 *     <none>
 */

void __thiscall DC::vCurrentPosition(DC *this, const struct _POINTL *a2, const struct _POINTFIX *a3)
{
  *(_DWORD *)(*((_DWORD *)this + 255) + 184) &= 0xFFFFFCFF;
  *(struct _POINTL *)(*((_DWORD *)this + 255) + 236) = *a2;
  *(struct _POINTFIX *)(*((_DWORD *)this + 255) + 8) = *a3;
}
