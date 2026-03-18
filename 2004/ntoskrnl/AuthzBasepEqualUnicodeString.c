/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140269168
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140268DC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140296650 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindTokenAttribute @ 0x1405BBFE8 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x140614464 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403560E8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
