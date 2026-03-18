/*
 * XREFs of PnpValidateRegistryString @ 0x14036A86C
 * Callers:
 *     PiDevCfgBuildIndirectString @ 0x1407228CC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x140766BD0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407674F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A3724 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A4F60 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A566C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408A5E40 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408A6020 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     PnpValidateStringData @ 0x14036A8A8 (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
