/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x1407177E0
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140717714 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_140005500, (PCUNICODE_STRING)(a1 + 32), 1u);
}
