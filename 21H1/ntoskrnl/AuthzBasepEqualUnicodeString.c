/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140338E68
 * Callers:
 *     AuthzBasepFindSecurityAttribute @ 0x140259DD0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140338AC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindTokenAttribute @ 0x1405BB8C8 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1406F7850 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403185C8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const void **a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, (__int64)a2);
  else
    return RtlEqualUnicodeString((PCUNICODE_STRING)a1, a2, 1u);
}
