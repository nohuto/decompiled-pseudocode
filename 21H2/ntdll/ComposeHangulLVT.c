/*
 * XREFs of ComposeHangulLVT @ 0x1800FF5D8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080D8C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     IsHangulLV @ 0x1800FF60C (IsHangulLV.c)
 */

__int64 __fastcall ComposeHangulLVT(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // r9d

  if ( (unsigned int)(a2 - 4520) <= 0x1A && (unsigned __int8)IsHangulLV(a1) )
    return (unsigned int)(v3 + v2);
  else
    return 0LL;
}
