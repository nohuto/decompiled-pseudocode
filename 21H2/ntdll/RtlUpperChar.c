/*
 * XREFs of RtlUpperChar @ 0x180062260
 * Callers:
 *     RtlEqualString @ 0x180061F80 (RtlEqualString.c)
 *     RtlPrefixString @ 0x180062120 (RtlPrefixString.c)
 *     RtlCompareString @ 0x18008B790 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800EB7C0 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
