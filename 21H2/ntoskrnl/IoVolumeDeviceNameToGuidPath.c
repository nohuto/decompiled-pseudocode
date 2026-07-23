/*
 * XREFs of IoVolumeDeviceNameToGuidPath @ 0x1406F9CC0
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x1406F9B50 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuid @ 0x140895980 (IoVolumeDeviceNameToGuid.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D09B0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoGetDeviceObjectPointer @ 0x14068AA90 (IoGetDeviceObjectPointer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuidPath(const void **a1, unsigned __int16 *a2)
{
  _DWORD *v3; // rdi
  int v4; // eax
  char v5; // r13
  ULONG v7; // r14d
  unsigned int v8; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r15
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v12; // r12
  IRP *v13; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v15; // rax
  __int64 v16; // r14
  const wchar_t *v17; // r12
  unsigned __int16 v18; // ax
  PVOID v19; // rax
  char v21; // [rsp+51h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-51h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  _DWORD OutputBuffer[8]; // [rsp+A0h] [rbp-9h] BYREF

  v21 = 0;
  v3 = 0LL;
  FileObject = 0LL;
  v4 = *(unsigned __int16 *)a1;
  v5 = 0;
  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( (unsigned __int16)v4 > 0xF000u )
    return (unsigned int)-1073741811;
  v7 = v4 + 26;
  v8 = v4 + 26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v4 + 26), 0x20473244u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v8);
  v10[4] = 24;
  *v10 = 0;
  *((_WORD *)v10 + 2) = 0;
  v10[2] = 0;
  *((_WORD *)v10 + 6) = 0;
  *((_WORD *)v10 + 10) = *(_WORD *)a1;
  memmove(v10 + 6, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    v5 = 1;
    v3 = OutputBuffer;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v12 = DeviceObject;
    v13 = IoBuildDeviceIoControlRequest(
            0x6D0008u,
            DeviceObject,
            v10,
            v7,
            OutputBuffer,
            0x20u,
            0,
            &Event,
            &IoStatusBlock);
    if ( v13 )
    {
      DeviceObjectPointer = IofCallDriver(v12, v13);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( (int)(DeviceObjectPointer + 0x80000000) >= 0 && DeviceObjectPointer != -2147483643 )
        goto LABEL_19;
      OutputBufferLength = OutputBuffer[0] + 32;
      if ( (unsigned int)(OutputBuffer[0] + 32) > 0xFFFF )
      {
        DeviceObjectPointer = -1073741306;
        goto LABEL_19;
      }
      v3 = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x20473244u);
      if ( v3 )
      {
        v21 = 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v15 = IoBuildDeviceIoControlRequest(0x6D0008u, v12, v10, v7, v3, OutputBufferLength, 0, &Event, &IoStatusBlock);
        v16 = 0LL;
        if ( v15 )
        {
          DeviceObjectPointer = IofCallDriver(v12, v15);
          if ( DeviceObjectPointer == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            DeviceObjectPointer = IoStatusBlock.Status;
          }
          if ( DeviceObjectPointer >= 0 )
          {
            DeviceObjectPointer = -1073741275;
            if ( v3[1] )
            {
              while ( 1 )
              {
                v17 = (const wchar_t *)((char *)v3 + (unsigned int)v3[6 * v16 + 2]);
                if ( !wcsnicmp(L"\\??\\Volume", v17, 0xAuLL) )
                  break;
                v16 = (unsigned int)(v16 + 1);
                if ( (unsigned int)v16 >= v3[1] )
                  goto LABEL_18;
              }
              v18 = v3[6 * v16 + 3];
              *a2 = v18;
              v18 += 2;
              a2[1] = v18;
              v19 = ExAllocatePoolWithTag(PagedPool, v18, 0x20473244u);
              DeviceObjectPointer = 0;
              *((_QWORD *)a2 + 1) = v19;
              if ( v19 )
              {
                memmove(v19, v17, *a2);
                *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
              }
              else
              {
                *(_DWORD *)a2 = 0;
                DeviceObjectPointer = -1073741670;
              }
LABEL_18:
              v5 = 1;
            }
          }
          goto LABEL_19;
        }
      }
    }
    DeviceObjectPointer = -1073741670;
  }
LABEL_19:
  ExFreePoolWithTag(v10, 0);
  if ( v21 )
    ExFreePoolWithTag(v3, 0);
  if ( v5 )
    HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
  return (unsigned int)DeviceObjectPointer;
}
