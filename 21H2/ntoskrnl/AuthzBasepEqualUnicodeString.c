/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x1402053BC
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140205030 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403008B0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindTokenAttribute @ 0x14064A444 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x140672284 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140253C50 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
