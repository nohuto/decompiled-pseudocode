/*
 * XREFs of _IsSurrogate@4 @ 0x4B3652AA
 * Callers:
 *     _GetUTF32@4 @ 0x4B365232 (_GetUTF32@4.c)
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 *     _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2 (_Normalization__CanCombinableCharactersCombine@12.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSurrogate(__int16 a1)
{
  return (unsigned __int16)(a1 + 10240) <= 0x7FFu;
}
