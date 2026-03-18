/*
 * XREFs of PipSendGuestAssignedNotification @ 0x1408B0040
 * Callers:
 *     PiUpdateGuestAssignedState @ 0x14072EB84 (PiUpdateGuestAssignedState.c)
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x14037EAF0 (IoQueueThreadIrp.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B432C (PpIrpAllocateDeviceUsageNotification.c)
 */

NTSTATUS __fastcall PipSendGuestAssignedNotification(__int64 a1, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS result; // eax
  PDEVICE_OBJECT DeviceObject[9]; // [rsp+30h] [rbp-48h] BYREF

  memset(DeviceObject, 0, 0x40uLL);
  DeviceObject[0] = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(a1 + 32));
  LODWORD(DeviceObject[1]) = 6;
  BYTE4(DeviceObject[1]) = a2;
  DeviceUsageNotification = PpIrpAllocateDeviceUsageNotification((__int64)DeviceObject);
  v5 = DeviceUsageNotification;
  if ( !DeviceUsageNotification )
    return -1073741801;
  IoQueueThreadIrp(DeviceUsageNotification);
  result = IofCallDriver(DeviceObject[0], v5);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
    return (NTSTATUS)DeviceObject[3];
  }
  return result;
}
