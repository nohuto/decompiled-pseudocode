/*
 * XREFs of ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C0009530
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C0008D70 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x1C00D0F04 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C016B5A0 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 * Callees:
 *     RIMRegQueryDWordFromKey @ 0x1C00095AC (RIMRegQueryDWordFromKey.c)
 */

bool __fastcall ReadDevicePropertyFromRegistry(const unsigned __int16 *a1, void *a2, void *a3, int a4, int *a5)
{
  bool v6; // bl
  bool result; // al

  v6 = 0;
  if ( (unsigned int)RIMRegQueryDWordFromKey(a2) || (unsigned int)RIMRegQueryDWordFromKey(a3) )
    v6 = 1;
  result = v6;
  *a5 = a4;
  return result;
}
