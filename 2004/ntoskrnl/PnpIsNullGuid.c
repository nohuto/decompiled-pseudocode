/*
 * XREFs of PnpIsNullGuid @ 0x140648C04
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405D243C (PiDqIrpQueryCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14072D20C (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x14072DE0C (PiDevCfgFindDeviceDriver.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074FEB0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
