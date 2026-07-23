/*
 * XREFs of HalpSetAcpiRealTimeClock @ 0x140864128
 * Callers:
 *     HalSetRealTimeClock @ 0x1404B6D80 (HalSetRealTimeClock.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D09B0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     HalpGetDynamicDevicePointer @ 0x140779094 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpSetAcpiRealTimeClock(PVOID InputBuffer)
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
    v4 = IoBuildDeviceIoControlRequest(
           0x298214u,
           DynamicDevicePointer,
           InputBuffer,
           0x10u,
           0LL,
           0,
           0,
           &Event,
           &IoStatusBlock);
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
