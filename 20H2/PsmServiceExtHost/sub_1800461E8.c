/*
 * XREFs of sub_1800461E8 @ 0x1800461E8
 * Callers:
 *     sub_1800872E8 @ 0x1800872E8 (sub_1800872E8.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_1800461E8()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3CC8 == 1 )
    return 1;
  if ( dword_1800B3CC8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence((__int64)L"8:", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3CC8 = 2 - (v1 != 0);
  return result;
}
