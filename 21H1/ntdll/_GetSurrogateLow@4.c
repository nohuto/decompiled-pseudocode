/*
 * XREFs of _GetSurrogateLow@4 @ 0x4B366B63
 * Callers:
 *     _NormBuffer__Append@8 @ 0x4B366BAB (_NormBuffer__Append@8.c)
 *     _NormBuffer__Insert@12 @ 0x4B366DBE (_NormBuffer__Insert@12.c)
 *     _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2 (_Normalization__CanCombinableCharactersCombine@12.c)
 * Callees:
 *     <none>
 */

int __thiscall GetSurrogateLow(void *this)
{
  return ((int)this - 0x10000) % 1024 - 9216;
}
