/*
 * XREFs of IsPicRetrieveFileInfoPresent @ 0x180090498
 * Callers:
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x18043B418 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180091220 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPicRetrieveFileInfoPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18059F2E0 == 1 )
    return 1;
  if ( dword_18059F2E0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_18059F2E0 = 2 - (v1 != 0);
  return result;
}
