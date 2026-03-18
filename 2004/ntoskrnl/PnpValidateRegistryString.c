/*
 * XREFs of PnpValidateRegistryString @ 0x14036C0D4
 * Callers:
 *     PiDevCfgBuildIndirectString @ 0x14072CF50 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x140768FB0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407698D0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A4A44 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A6280 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A698C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408A7160 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408A7340 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     PnpValidateStringData @ 0x14036C110 (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
