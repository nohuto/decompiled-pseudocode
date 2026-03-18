/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x1407644D4
 * Callers:
 *     HalpArmAcpiWakeAlarm @ 0x140764488 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14085F57C (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x14085F660 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408619F0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
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
