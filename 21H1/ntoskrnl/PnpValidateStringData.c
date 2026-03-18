/*
 * XREFs of PnpValidateStringData @ 0x14036A8A8
 * Callers:
 *     PnpValidateRegistryString @ 0x14036A86C (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1405089F4 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x140508B78 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14076699C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407674F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A29D4 (PiDevCfgMakeServiceBootStart.c)
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
