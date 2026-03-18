/*
 * XREFs of PnpValidateStringData @ 0x14036C110
 * Callers:
 *     PnpValidateRegistryString @ 0x14036C0D4 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x140509044 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1405091C8 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14072D9CC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140768D7C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407698D0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A3CF4 (PiDevCfgMakeServiceBootStart.c)
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
