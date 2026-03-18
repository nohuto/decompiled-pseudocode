/*
 * XREFs of PnpValidateStringData @ 0x1402D19D8
 * Callers:
 *     PnpValidateRegistryString @ 0x1402D199C (PnpValidateRegistryString.c)
 *     PnpValidateRegistryValue @ 0x1403965A0 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryResolveValue @ 0x140561D38 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406E67F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14080A890 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14094C79C (PiDevCfgMakeServiceBootStart.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateStringData(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
