/*
 * XREFs of PnpValidateRegistryDword @ 0x1402088DC
 * Callers:
 *     PnpGetRegistryDword @ 0x1403D2D2C (PnpGetRegistryDword.c)
 *     PiDevCfgVerifyService @ 0x14067996C (PiDevCfgVerifyService.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14069760C (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140697824 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406E67F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipDmgInitReadGroupPolicy @ 0x140949330 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14094C79C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14094C9C4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14094D458 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14094D4C8 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
