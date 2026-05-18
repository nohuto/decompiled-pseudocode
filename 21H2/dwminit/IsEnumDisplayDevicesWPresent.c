/*
 * XREFs of IsEnumDisplayDevicesWPresent @ 0x18000D324
 * Callers:
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x180009370 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18000DD80 (ApiSetQueryApiSetPresence_0.c)
 */

char IsEnumDisplayDevicesWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800148A8 == 1 )
    return 1;
  if ( dword_1800148A8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800148A8 = 2 - (v1 != 0);
  return result;
}
