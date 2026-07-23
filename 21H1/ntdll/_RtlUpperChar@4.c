/*
 * XREFs of _RtlUpperChar@4 @ 0x4B2E0B70
 * Callers:
 *     _RtlEqualString@12 @ 0x4B2A93F0 (_RtlEqualString@12.c)
 *     _RtlPrefixString@12 @ 0x4B2E0A70 (_RtlPrefixString@12.c)
 *     _RtlCompareString@12 @ 0x4B34E130 (_RtlCompareString@12.c)
 *     _RtlUpperString@8 @ 0x4B34E1F0 (_RtlUpperString@8.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR result; // al

  result = Character;
  if ( Character >= 97 && Character <= 122 )
    return Character ^ 0x20;
  return result;
}
