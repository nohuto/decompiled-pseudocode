/*
 * XREFs of HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408619F0
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098B9E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x1402042E0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     HalpGetDynamicDevicePointer @ 0x1407644D4 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpQueryAcpiWakeAlarmSystemPowerState(PLARGE_INTEGER Timeout)
{
  struct _DEVICE_OBJECT *DynamicDevicePointer; // rdi
  unsigned int Status; // ebx
  IRP *v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = (struct _DEVICE_OBJECT *)HalpGetDynamicDevicePointer();
  if ( DynamicDevicePointer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(0x294218u, DynamicDevicePointer, 0LL, 0, Timeout, 4u, 0, &Event, &IoStatusBlock);
    if ( v4 )
    {
      Status = IofCallDriver(DynamicDevicePointer, v4);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)DynamicDevicePointer);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return Status;
}
