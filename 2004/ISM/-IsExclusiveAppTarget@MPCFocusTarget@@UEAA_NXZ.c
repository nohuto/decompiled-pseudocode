/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x18001C5A0
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WEA@EAA_NXZ @ 0x18004AF50 (-IsExclusiveAppTarget@MPCFocusTarget@@WEA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 40);
}
