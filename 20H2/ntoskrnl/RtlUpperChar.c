/*
 * XREFs of RtlUpperChar @ 0x140670F70
 * Callers:
 *     RtlEqualString @ 0x140267F30 (RtlEqualString.c)
 *     RtlCompareString @ 0x140670EC0 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1406BBC60 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x140671F10 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
