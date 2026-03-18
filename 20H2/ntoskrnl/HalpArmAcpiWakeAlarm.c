/*
 * XREFs of HalpArmAcpiWakeAlarm @ 0x140774ED8
 * Callers:
 *     HaliSetWakeAlarm @ 0x14099B5E0 (HaliSetWakeAlarm.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     HalpGetDynamicDevicePointer @ 0x140774F24 (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x140868650 (HalpCallWakeAlarmDriver.c)
 */

__int64 HalpArmAcpiWakeAlarm()
{
  struct _DEVICE_OBJECT *DynamicDevicePointer; // rax
  unsigned int v1; // ebx
  struct _DEVICE_OBJECT *v2; // rdi

  DynamicDevicePointer = (struct _DEVICE_OBJECT *)HalpGetDynamicDevicePointer();
  v1 = 0;
  v2 = DynamicDevicePointer;
  if ( !DynamicDevicePointer )
    return 3221225473LL;
  if ( (int)HalpCallWakeAlarmDriver(DynamicDevicePointer) < 0
    || (int)HalpCallWakeAlarmDriver(v2) < 0
    || (int)HalpCallWakeAlarmDriver(v2) < 0
    || (int)HalpCallWakeAlarmDriver(v2) < 0 )
  {
    v1 = -1073741823;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)v2);
  return v1;
}
