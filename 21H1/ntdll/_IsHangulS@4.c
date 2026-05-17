/*
 * XREFs of _IsHangulS@4 @ 0x4B366B99
 * Callers:
 *     _IsHangulLV@4 @ 0x4B366B78 (_IsHangulLV@4.c)
 *     _Normalization__IsNormalized@16 @ 0x4B3676FC (_Normalization__IsNormalized@16.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsHangulS(char *this)
{
  return (unsigned int)(this - 44032) <= 0x2BA3;
}
