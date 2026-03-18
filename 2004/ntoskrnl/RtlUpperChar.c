/*
 * XREFs of RtlUpperChar @ 0x1405E5AE0
 * Callers:
 *     RtlEqualString @ 0x140202CC0 (RtlEqualString.c)
 *     RtlCompareString @ 0x1405E4720 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1406E4DA0 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1405E6930 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
