/*
 * XREFs of _IsHangulLV@4 @ 0x4B366B78
 * Callers:
 *     _CanComposeHangul@8 @ 0x4B366ABF (_CanComposeHangul@8.c)
 *     _ComposeHangulLVT@8 @ 0x4B366B1B (_ComposeHangulLVT@8.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _IsHangulS@4 @ 0x4B366B99 (_IsHangulS@4.c)
 */

bool __thiscall IsHangulLV(void *this)
{
  int v1; // edx

  return (unsigned __int8)IsHangulS(this, this) && !((v1 - 44032) % 28);
}
