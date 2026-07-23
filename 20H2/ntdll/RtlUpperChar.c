/*
 * XREFs of RtlUpperChar @ 0x180060D70
 * Callers:
 *     RtlEqualString @ 0x180060A90 (RtlEqualString.c)
 *     RtlPrefixString @ 0x180060C30 (RtlPrefixString.c)
 *     RtlCompareString @ 0x18008B190 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800EB970 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
