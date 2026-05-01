/*
 * XREFs of sub_18004631C @ 0x18004631C
 * Callers:
 *     sub_180086FC4 @ 0x180086FC4 (sub_180086FC4.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_18004631C()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3CFC == 1 )
    return 1;
  if ( dword_1800B3CFC == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3CFC = 2 - (v1 != 0);
  return result;
}
