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

char __fastcall RtlUpperChar(char a1)
{
  if ( (unsigned __int8)(a1 - 97) <= 0x19u )
    return a1 ^ 0x20;
  return a1;
}
