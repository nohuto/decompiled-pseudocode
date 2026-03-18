/*
 * XREFs of ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004C100
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C000AD60 (EngUpdateDeviceSurface.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A380 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bEmpty(ERECTL *this)
{
  return *(_DWORD *)this == *((_DWORD *)this + 2) || *((_DWORD *)this + 1) == *((_DWORD *)this + 3);
}
