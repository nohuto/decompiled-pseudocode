/*
 * XREFs of sub_180045700 @ 0x180045700
 * Callers:
 *     sub_180012D80 @ 0x180012D80 (sub_180012D80.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x1800459D0 (ApiSetQueryApiSetPresence.c)
 */

char sub_180045700()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18005AB08 == 1 )
    return 1;
  if ( dword_18005AB08 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L">@", &v1) < 0 )
    return 0;
  result = v1;
  dword_18005AB08 = 2 - (v1 != 0);
  return result;
}
