/*
 * XREFs of _STROBJ_fxCharacterExtra@4 @ 0x1EFDE7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FIX __stdcall STROBJ_fxCharacterExtra(STROBJ *pstro)
{
  if ( (pstro->flAccel & 0x800) != 0 )
    return pstro[2].rclBkGround.bottom;
  else
    return 0;
}
