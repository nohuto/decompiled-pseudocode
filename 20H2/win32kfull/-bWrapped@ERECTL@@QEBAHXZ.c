/*
 * XREFs of ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0068954
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0068268 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C0087364 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreGetBoundsRect @ 0x1C009EF48 (GreGetBoundsRect.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     xxEngNineGrid @ 0x1C00DF658 (xxEngNineGrid.c)
 *     GreSetBoundsRect @ 0x1C0108B24 (GreSetBoundsRect.c)
 *     GreRectangle @ 0x1C0139384 (GreRectangle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026F8FC (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreLockDisplayArea @ 0x1C0284D48 (GreLockDisplayArea.c)
 *     GreUnlockDisplayArea @ 0x1C0284F4C (GreUnlockDisplayArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bWrapped(ERECTL *this)
{
  return *(_DWORD *)this >= *((_DWORD *)this + 2) || *((_DWORD *)this + 1) >= *((_DWORD *)this + 3);
}
