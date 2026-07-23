/*
 * XREFs of PnpIsNullGuid @ 0x1406FEAA0
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14062413C (PiDqIrpQueryCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407305EC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073D628 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     IopRegisterDeviceInterface @ 0x140748630 (IopRegisterDeviceInterface.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407632E0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
