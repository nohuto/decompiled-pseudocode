/*
 * XREFs of sub_18003AB74 @ 0x18003AB74
 * Callers:
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x18003ABD0 (ApiSetQueryApiSetPresence.c)
 */

char sub_18003AB74()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18004FCB8 == 1 )
    return 1;
  if ( dword_18004FCB8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_18004FCB8 = 2 - (v1 != 0);
  return result;
}
