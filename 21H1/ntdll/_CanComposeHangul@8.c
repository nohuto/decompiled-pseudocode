/*
 * XREFs of _CanComposeHangul@8 @ 0x4B366ABF
 * Callers:
 *     _Normalization__IsNormalized@16 @ 0x4B3676FC (_Normalization__IsNormalized@16.c)
 * Callees:
 *     _IsHangulLV@4 @ 0x4B366B78 (_IsHangulLV@4.c)
 */

bool __fastcall CanComposeHangul(int a1, int a2)
{
  return (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14
      || (unsigned __int8)IsHangulLV() && (unsigned int)(a2 - 4520) <= 0x1A;
}
