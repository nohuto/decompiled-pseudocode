/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x1C001CAD0
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001B710 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001BA60 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001C0D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C002D360 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C002D460 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C0050530 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C00519B0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001CB1C (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
