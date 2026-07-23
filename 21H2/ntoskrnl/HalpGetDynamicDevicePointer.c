/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140779094
 * Callers:
 *     HalpArmAcpiWakeAlarm @ 0x140779048 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140864044 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864128 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408664A0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 */

PVOID HalpGetDynamicDevicePointer()
{
  PVOID v0; // rbx

  if ( !HalpDynamicDevicesReady )
    return 0LL;
  KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
  v0 = HalpDynamicDevices;
  if ( HalpDynamicDevices )
    ObfReferenceObject(HalpDynamicDevices);
  KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
  return v0;
}
