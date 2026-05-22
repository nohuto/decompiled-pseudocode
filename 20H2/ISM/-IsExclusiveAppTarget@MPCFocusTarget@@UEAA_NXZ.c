/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x18001C5D0
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WEA@EAA_NXZ @ 0x18004AF00 (-IsExclusiveAppTarget@MPCFocusTarget@@WEA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 40);
}
