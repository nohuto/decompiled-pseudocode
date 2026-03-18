/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C02148F8
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C000EE90 (_SetMagnificationInputTransform.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  __int64 v1; // rdx
  const struct tagRECT *v2; // rcx
  __int64 v3; // r8

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v2 + 1) )
    return 1LL;
  UserSetLastError(87LL, v1, v3);
  return 0LL;
}
