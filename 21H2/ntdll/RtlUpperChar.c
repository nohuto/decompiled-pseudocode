/*
 * XREFs of RtlUpperChar @ 0x180062260
 * Callers:
 *     RtlEqualString @ 0x180061F80 (RtlEqualString.c)
 *     RtlPrefixString @ 0x180062120 (RtlPrefixString.c)
 *     RtlCompareString @ 0x18008B790 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800EB800 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlUpperChar(char a1)
{
  if ( (unsigned __int8)(a1 - 97) <= 0x19u )
    return a1 ^ 0x20;
  return a1;
}
