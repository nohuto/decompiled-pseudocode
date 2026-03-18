/*
 * XREFs of IoVolumeDeviceToDosName @ 0x1405FA930
 * Callers:
 *     IopQueryNameInternal @ 0x1406361C4 (IopQueryNameInternal.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     IopValidateJunctionTarget @ 0x140895924 (IopValidateJunctionTarget.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14020A090 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IoGetDeviceObjectPointer @ 0x1405DDA50 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoVolumeDeviceToDosName(PVOID VolumeDeviceObject, PUNICODE_STRING DosName)
{
  unsigned __int64 v2; // rax
  __int64 v5; // rcx
  IRP *v6; // rax
  NTSTATUS result; // eax
  IRP *v8; // rax
  int Status; // ebx
  ULONG OutputBufferLength; // ebx
  _WORD *PoolWithTag; // rdi
  IRP *v12; // rax
  unsigned __int16 v13; // ax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int OutputBuffer; // [rsp+98h] [rbp-68h] BYREF
  _BYTE InputBuffer[512]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = *((unsigned int *)VolumeDeviceObject + 18);
  FileObject = 0LL;
  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( (unsigned int)v2 > 0x24 )
    return -1073741811;
  v5 = 0x1080000084LL;
  if ( !_bittest64(&v5, v2) )
    return -1073741811;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(
         0x4D0008u,
         (PDEVICE_OBJECT)VolumeDeviceObject,
         0LL,
         0,
         InputBuffer,
         0x200u,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  result = IofCallDriver((PDEVICE_OBJECT)VolumeDeviceObject, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
    result = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
    if ( result >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v8 = IoBuildDeviceIoControlRequest(
             0x6D0030u,
             DeviceObject,
             InputBuffer,
             0x200u,
             &OutputBuffer,
             8u,
             0,
             &Event,
             &IoStatusBlock);
      if ( v8 )
      {
        Status = IofCallDriver(DeviceObject, v8);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( (int)(Status + 0x80000000) >= 0 && Status != -2147483643 )
          goto LABEL_19;
        OutputBufferLength = OutputBuffer + 8;
        if ( (unsigned int)(OutputBuffer + 8) > 0xFFFF )
        {
          Status = -1073741306;
LABEL_19:
          HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
          return Status;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x20643244u);
        if ( PoolWithTag )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v12 = IoBuildDeviceIoControlRequest(
                  0x6D0030u,
                  DeviceObject,
                  InputBuffer,
                  0x200u,
                  PoolWithTag,
                  OutputBufferLength,
                  0,
                  &Event,
                  &IoStatusBlock);
          if ( v12 )
          {
            Status = IofCallDriver(DeviceObject, v12);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status < 0 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            else
            {
              v13 = *PoolWithTag - 4;
              DosName->Buffer = PoolWithTag;
              DosName->Length = v13;
              DosName->MaximumLength = v13 + 2;
              memmove(PoolWithTag, PoolWithTag + 2, v13);
              Status = 0;
              DosName->Buffer[(unsigned __int64)DosName->Length >> 1] = 0;
            }
            goto LABEL_19;
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
      Status = -1073741670;
      goto LABEL_19;
    }
  }
  return result;
}
