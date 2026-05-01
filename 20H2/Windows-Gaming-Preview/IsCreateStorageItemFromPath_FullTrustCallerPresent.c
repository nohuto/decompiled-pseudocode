/*
 * XREFs of IsCreateStorageItemFromPath_FullTrustCallerPresent @ 0x180045A20
 * Callers:
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180013020 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180045CF0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateStorageItemFromPath_FullTrustCallerPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18005AB08 == 1 )
    return 1;
  if ( dword_18005AB08 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L">@", &v1) < 0 )
    return 0;
  result = v1;
  dword_18005AB08 = 2 - (v1 != 0);
  return result;
}
