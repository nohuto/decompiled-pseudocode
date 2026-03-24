/*
 * XREFs of PnpIsNullGuid @ 0x1406E76C0
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14062F0BC (PiDqIrpQueryCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140730420 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BD08 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073D468 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x140742E20 (PiDevCfgConfigureDevice.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140763120 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlCompareMemory @ 0x1404081B0 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
