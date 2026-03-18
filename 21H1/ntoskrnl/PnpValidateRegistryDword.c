/*
 * XREFs of PnpValidateRegistryDword @ 0x1403974C8
 * Callers:
 *     PnpGetRegistryDword @ 0x1403B2594 (PnpGetRegistryDword.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140750D24 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x1407672E0 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407674F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140767988 (PiDevCfgVerifyDeviceAllowed.c)
 *     PipDmgInitReadGroupPolicy @ 0x14089F110 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A29D4 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A2BFC (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A36B4 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A3724 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
