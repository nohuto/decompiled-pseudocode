/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x1406C844C
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1406C8380 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_1400024F0, (PCUNICODE_STRING)(a1 + 32), 1u);
}
