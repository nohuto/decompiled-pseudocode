/*
 * XREFs of IsWTSQuerySessionInformationWPresent @ 0x180040434
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18003BFC8 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180040490 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWTSQuerySessionInformationWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180055E78 == 1 )
    return 1;
  if ( dword_180055E78 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_180055E78 = 2 - (v1 != 0);
  return result;
}
