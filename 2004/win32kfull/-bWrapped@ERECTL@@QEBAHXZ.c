/*
 * XREFs of ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C001BAB8
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C001B3CC (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00CB5A8 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     xxEngNineGrid @ 0x1C00E4408 (xxEngNineGrid.c)
 *     GreGetBoundsRect @ 0x1C00F61E8 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C0107E24 (GreSetBoundsRect.c)
 *     GreRectangle @ 0x1C0137434 (GreRectangle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270F1C (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreLockDisplayArea @ 0x1C02862B8 (GreLockDisplayArea.c)
 *     GreUnlockDisplayArea @ 0x1C02864BC (GreUnlockDisplayArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bWrapped(ERECTL *this)
{
  return *(_DWORD *)this >= *((_DWORD *)this + 2) || *((_DWORD *)this + 1) >= *((_DWORD *)this + 3);
}
