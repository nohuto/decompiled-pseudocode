/*
 * XREFs of PnpValidateStringData @ 0x14036E0F0
 * Callers:
 *     PnpValidateRegistryString @ 0x14036E0B4 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x14050C974 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x14050CAF8 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073C448 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14075942C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077738C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140777EE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A9824 (PiDevCfgMakeServiceBootStart.c)
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
