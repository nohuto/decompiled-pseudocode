/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403267EC
 * Callers:
 *     AuthzBasepFindSecurityAttribute @ 0x14022B060 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x1402E3068 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402E48A4 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x1403D2070 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
