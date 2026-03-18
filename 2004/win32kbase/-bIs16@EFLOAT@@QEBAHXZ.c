/*
 * XREFs of ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C007A530
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C007CF00 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs16(EFLOAT *this)
{
  return *(float *)this == 16.0;
}
