/*
 * XREFs of _ComposeHangulLV@8 @ 0x4B366AF4
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     <none>
 */

int __fastcall ComposeHangulLV(int a1, int a2)
{
  if ( (unsigned int)(a1 - 4352) > 0x12 || (unsigned int)(a2 - 4449) > 0x14 )
    return 0;
  else
    return 28 * (a2 + 21 * a1) - 2639516;
}
