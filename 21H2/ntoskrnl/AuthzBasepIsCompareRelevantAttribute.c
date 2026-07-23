/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x1406C5E30
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1406C5D64 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_1400054B0, (PCUNICODE_STRING)(a1 + 32), 1u);
}
