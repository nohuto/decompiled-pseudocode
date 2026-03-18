/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x14068E9D4
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14068E908 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x140671570 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_140001AC0, (PCUNICODE_STRING)(a1 + 32), 1u);
}
