/*
 * XREFs of PnpValidateStringData @ 0x14036F128
 * Callers:
 *     PnpValidateRegistryString @ 0x14036F0EC (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x14050E6E4 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x14050E868 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B4FC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077C050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6F54 (PiDevCfgMakeServiceBootStart.c)
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
