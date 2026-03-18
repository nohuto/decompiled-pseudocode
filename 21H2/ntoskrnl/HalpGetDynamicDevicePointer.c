/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x14080637C
 * Callers:
 *     HalpArmAcpiWakeAlarm @ 0x140806330 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140908124 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140908208 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14090A560 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
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
