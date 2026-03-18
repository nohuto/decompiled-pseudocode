/*
 * XREFs of PnpIsNullGuid @ 0x14064AEA0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiDqIrpQueryCreate @ 0x1406461E8 (PiDqIrpQueryCreate.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072C408 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgFindDeviceDriver @ 0x140731708 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073BC88 (PiDevCfgBuildDriverConfigurationId.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
