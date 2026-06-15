/*
 * XREFs of sub_18003AA5C @ 0x18003AA5C
 * Callers:
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x18003ABD0 (ApiSetQueryApiSetPresence.c)
 */

char sub_18003AA5C()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18004FC98 == 1 )
    return 1;
  if ( dword_18004FC98 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18004FC98 = 2 - (v1 != 0);
  return result;
}
