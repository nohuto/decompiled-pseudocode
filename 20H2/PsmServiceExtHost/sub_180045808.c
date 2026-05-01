/*
 * XREFs of sub_180045808 @ 0x180045808
 * Callers:
 *     sub_180040850 @ 0x180040850 (sub_180040850.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_180045808()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C34 == 1 )
    return 1;
  if ( dword_1800B3C34 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"VX", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C34 = 2 - (v1 != 0);
  return result;
}
