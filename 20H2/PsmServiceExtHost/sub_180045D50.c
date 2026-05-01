/*
 * XREFs of sub_180045D50 @ 0x180045D50
 * Callers:
 *     sub_180077404 @ 0x180077404 (sub_180077404.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_180045D50()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C94 == 1 )
    return 1;
  if ( dword_1800B3C94 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence((__int64)L"68", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C94 = 2 - (v1 != 0);
  return result;
}
