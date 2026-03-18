/*
 * XREFs of RawPerformDevIoCtrl @ 0x14090ACA4
 * Callers:
 *     RawQueryFileSystemInformation @ 0x14090B248 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x1402042E0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall RawPerformDevIoCtrl(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        PVOID OutputBuffer)
{
  PIRP v6; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(0x70000u, a2, 0LL, 0, OutputBuffer, 0x18u, 0, &Event, &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  v6->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  result = IofCallDriver(a2, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
