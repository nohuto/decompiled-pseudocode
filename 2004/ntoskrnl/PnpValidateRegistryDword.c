/*
 * XREFs of PnpValidateRegistryDword @ 0x1403980D8
 * Callers:
 *     PnpGetRegistryDword @ 0x1403B438C (PnpGetRegistryDword.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1407553B4 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x1407696C0 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407698D0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140769D68 (PiDevCfgVerifyDeviceAllowed.c)
 *     PipDmgInitReadGroupPolicy @ 0x1408A0430 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A2D04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A3CF4 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A3F1C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A49D4 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A4A44 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
