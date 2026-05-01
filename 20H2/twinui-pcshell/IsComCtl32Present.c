/*
 * XREFs of IsComCtl32Present @ 0x180090D9C
 * Callers:
 *     _dynamic_initializer_for__s_rgShellComponent__ @ 0x180001E50 (_dynamic_initializer_for__s_rgShellComponent__.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180091780 (ApiSetQueryApiSetPresence_0.c)
 */

char IsComCtl32Present()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1805CB560 == 1 )
    return 1;
  if ( dword_1805CB560 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1805CB560 = 2 - (v1 != 0);
  return result;
}
