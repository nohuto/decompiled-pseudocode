/*
 * XREFs of RtlUpperChar @ 0x14061B100
 * Callers:
 *     RtlEqualString @ 0x14025BBE0 (RtlEqualString.c)
 *     RtlCompareString @ 0x140619D40 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1406C5390 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x14061BF50 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
