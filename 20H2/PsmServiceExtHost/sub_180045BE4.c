/*
 * XREFs of sub_180045BE4 @ 0x180045BE4
 * Callers:
 *     sub_1800355F8 @ 0x1800355F8 (sub_1800355F8.c)
 *     sub_180035844 @ 0x180035844 (sub_180035844.c)
 *     sub_180035A10 @ 0x180035A10 (sub_180035A10.c)
 *     sub_1800374BC @ 0x1800374BC (sub_1800374BC.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_180045BE4()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C84 == 1 )
    return 1;
  if ( dword_1800B3C84 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence((__int64)L"JL", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C84 = 2 - (v1 != 0);
  return result;
}
