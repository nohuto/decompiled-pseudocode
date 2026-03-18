/*
 * XREFs of WorkerRoutine @ 0x1C000A0D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 */

void __fastcall WorkerRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  NTSTATUS v2; // ebx
  bool v3; // di
  int DpcData; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-28h] BYREF

  InputBuffer[0] = 1048577LL;
  InputBuffer[1] = -1LL;
  IoStatusBlock = 0LL;
  v2 = 0;
  ExAcquirePushLockExclusiveEx(&::DeviceObject.Queue, 0LL);
  ::DeviceObject.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  v3 = LODWORD(::DeviceObject.DeviceExtension) != 0;
  if ( (LODWORD(::DeviceObject.DeviceExtension) != 0) != byte_1C0007248 )
  {
    DpcData = -1;
    if ( LODWORD(::DeviceObject.DeviceExtension) )
      DpcData = (int)::DeviceObject.Dpc.DpcData;
    HIDWORD(InputBuffer[0]) = DpcData;
    v2 = ZwDeviceIoControlFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x170040u, InputBuffer, 0x10u, 0LL, 0);
    if ( v2 >= 0 )
      byte_1C0007248 = v3;
  }
  byte_1C0007249 = 0;
  ::DeviceObject.Queue.ListEntry.Blink = 0LL;
  ExReleasePushLockExclusiveEx(&::DeviceObject.Queue, 0LL);
  if ( v2 < 0 && (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xDu, (__int64)&unk_1C0005438, v2);
}
