/*
 * XREFs of IopAssignBootDriveLetter @ 0x140A62AA8
 * Callers:
 *     IopMarkBootPartition @ 0x140A62890 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IoGetDeviceObjectPointer @ 0x14068AA90 (IoGetDeviceObjectPointer.c)
 */

NTSTATUS IopAssignBootDriveLetter()
{
  NTSTATUS result; // eax
  IRP *v1; // rax
  NTSTATUS Status; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK v4; // [rsp+60h] [rbp+27h] BYREF
  struct _KEVENT Object; // [rsp+70h] [rbp+37h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+5Fh]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+6Fh] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  Object.Header.Reserved1 = 0;
  DestinationString = 0LL;
  v4 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    v1 = IopBuildDeviceIoControlRequest(7192644, (__int64)DeviceObject, 0LL, 0, 0LL, 0, 0, &Object, &v4, retaddr);
    if ( v1 )
    {
      Status = IofCallDriver(DeviceObject, v1);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v4.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    return Status;
  }
  return result;
}
