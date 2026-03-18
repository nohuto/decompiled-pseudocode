/*
 * XREFs of KeInitializeDeviceQueue @ 0x140379740
 * Callers:
 *     IoCreateDevice @ 0x1405D91C0 (IoCreateDevice.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407617BC (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140896330 (IoCreateController.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  *(_DWORD *)&DeviceQueue->Type = 2621460;
  DeviceQueue->DeviceListHead.Blink = &DeviceQueue->DeviceListHead;
  DeviceQueue->DeviceListHead.Flink = &DeviceQueue->DeviceListHead;
  DeviceQueue->Lock = 0LL;
  DeviceQueue->Busy = 0;
  DeviceQueue->1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)(unsigned __int8)*(_QWORD *)&DeviceQueue->1;
}
