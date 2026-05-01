/*
 * XREFs of sub_180045600 @ 0x180045600
 * Callers:
 *     sub_180035844 @ 0x180035844 (sub_180035844.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_180045600()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C10 == 1 )
    return 1;
  if ( dword_1800B3C10 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C10 = 2 - (v1 != 0);
  return result;
}
