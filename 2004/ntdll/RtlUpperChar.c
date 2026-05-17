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

char __fastcall RtlUpperChar(char a1)
{
  if ( (unsigned __int8)(a1 - 97) <= 0x19u )
    return a1 ^ 0x20;
  return a1;
}
