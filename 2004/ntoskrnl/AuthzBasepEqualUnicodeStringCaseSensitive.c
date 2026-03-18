/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403560E8
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140269168 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140296650 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FC4E0 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
