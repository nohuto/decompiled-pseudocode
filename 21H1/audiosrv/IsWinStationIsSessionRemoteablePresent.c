/*
 * XREFs of IsWinStationIsSessionRemoteablePresent @ 0x18006C8D8
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002B240 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18006D240 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWinStationIsSessionRemoteablePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18019F2B8 == 1 )
    return 1;
  if ( dword_18019F2B8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18019F2B8 = 2 - (v1 != 0);
  return result;
}
