/*
 * XREFs of _ComposeHangulLVT@8 @ 0x4B366B1B
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _IsHangulLV@4 @ 0x4B366B78 (_IsHangulLV@4.c)
 */

int __fastcall ComposeHangulLVT(int a1, int a2)
{
  if ( (unsigned int)(a2 - 4520) <= 0x1A && (unsigned __int8)IsHangulLV() )
    return a2 + a1 - 4519;
  else
    return 0;
}
