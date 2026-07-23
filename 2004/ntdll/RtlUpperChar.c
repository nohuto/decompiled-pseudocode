/*
 * XREFs of RtlUpperChar @ 0x180060C60
 * Callers:
 *     RtlEqualString @ 0x180060980 (RtlEqualString.c)
 *     RtlPrefixString @ 0x180060B20 (RtlPrefixString.c)
 *     RtlCompareString @ 0x18008B090 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800EB460 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
