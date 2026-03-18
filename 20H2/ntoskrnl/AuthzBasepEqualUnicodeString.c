/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x1402E3068
 * Callers:
 *     AuthzBasepFindSecurityAttribute @ 0x14022B060 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1402E2CC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindTokenAttribute @ 0x1405BFB48 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x14068F7DC (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403267EC (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
