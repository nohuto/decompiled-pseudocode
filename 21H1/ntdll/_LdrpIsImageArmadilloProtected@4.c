/*
 * XREFs of _LdrpIsImageArmadilloProtected@4 @ 0x4B2E760B
 * Callers:
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpCalloutExceptionFilter@4 @ 0x4B334818 (_LdrpCalloutExceptionFilter@4.c)
 * Callees:
 *     <none>
 */

bool __thiscall LdrpIsImageArmadilloProtected(_BYTE *this)
{
  return this[26] == 83 && this[27] == 82;
}
