/*
 * XREFs of PnpValidateStringData @ 0x14036EF78
 * Callers:
 *     PnpValidateRegistryString @ 0x14036EF3C (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x14050E4A4 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x14050E628 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073CE44 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B33C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BE90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6DF4 (PiDevCfgMakeServiceBootStart.c)
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
