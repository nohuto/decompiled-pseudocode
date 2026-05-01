/*
 * XREFs of sub_180045A78 @ 0x180045A78
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_180045A78()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C58 == 1 )
    return 1;
  if ( dword_1800B3C58 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence((__int64)L"BD", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C58 = 2 - (v1 != 0);
  return result;
}
