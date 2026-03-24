/*
 * XREFs of PnpValidateMultiSzData @ 0x14036EF08
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x140392E7C (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x14050E628 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073CE44 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B33C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BE90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A55FC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A7234 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpValidateMultiSzData(_WORD *a1, unsigned int a2)
{
  char result; // al
  unsigned __int64 v3; // r8

  result = 0;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( !a1[v3 - 1] && !a1[v3 - 2] )
      return 1;
  }
  if ( a2 == 2 && !*a1 )
    return 1;
  return result;
}
