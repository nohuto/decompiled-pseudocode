/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140765EF4
 * Callers:
 *     HalpArmAcpiWakeAlarm @ 0x140765EA8 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408608D0 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408609B4 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140862D10 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 * Callees:
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
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
