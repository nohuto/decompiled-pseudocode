/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140774F24
 * Callers:
 *     HalpArmAcpiWakeAlarm @ 0x140774ED8 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408662EC (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408663D0 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140868730 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
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
