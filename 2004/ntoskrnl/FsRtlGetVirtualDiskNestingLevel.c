/*
 * XREFs of FsRtlGetVirtualDiskNestingLevel @ 0x140359ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
 *     IoSetThreadHardErrorMode @ 0x14027C5F0 (IoSetThreadHardErrorMode.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x1403982C0 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetVirtualDiskNestingLevel(
        PDEVICE_OBJECT DeviceObject,
        PULONG NestingLevel,
        PULONG NestingFlags)
{
  unsigned __int64 DeviceType; // rax
  ULONG MaximumVirtualDiskNestingLevel; // esi
  ULONG v8; // edi
  __int64 v9; // rcx
  BOOLEAN v10; // r12
  IRP *v11; // rax
  int Status; // ebx
  ULONG v14; // edx
  struct _KEVENT Object; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+68h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK v17; // [rsp+70h] [rbp-9h] BYREF
  __int128 v18; // [rsp+80h] [rbp+7h] BYREF
  ULONG v19; // [rsp+90h] [rbp+17h]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  DeviceType = DeviceObject->DeviceType;
  Object.Header.Reserved1 = 0;
  MaximumVirtualDiskNestingLevel = 0;
  v8 = 1;
  v17 = 0LL;
  if ( (unsigned int)DeviceType > 0x24 )
    return -1073741808;
  v9 = 0x100000018CLL;
  if ( !_bittest64(&v9, DeviceType) )
    return -1073741808;
  LOWORD(Object.Header.Lock) = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  Object.Header.SignalState = 0;
  v10 = IoSetThreadHardErrorMode(0);
  v16 = 1LL;
  v19 = 0;
  v18 = 0LL;
  v11 = IopBuildDeviceIoControlRequest(2953616, (__int64)DeviceObject, &v16, 8u, &v18, 0x14u, 0, &Object, &v17, retaddr);
  if ( v11 )
  {
    Status = IofCallDriver(DeviceObject, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = v17.Status;
    }
    if ( Status >= 0 && v17.Information >= 0x14 && (_DWORD)v18 == 1 )
    {
      if ( v19 > FsRtlQueryMaximumVirtualDiskNestingLevel() )
      {
        MaximumVirtualDiskNestingLevel = FsRtlQueryMaximumVirtualDiskNestingLevel();
      }
      else if ( v19 )
      {
        MaximumVirtualDiskNestingLevel = v19;
      }
      if ( BYTE4(v18) )
        v8 = 0;
      v14 = v8;
      v8 |= 2u;
      if ( (BYTE12(v18) & 2) == 0 )
        v8 = v14;
    }
    else if ( Status != -1073741670 )
    {
      Status = 0;
    }
  }
  else
  {
    Status = -1073741670;
  }
  *NestingLevel = MaximumVirtualDiskNestingLevel;
  if ( NestingFlags )
    *NestingFlags = v8;
  IoSetThreadHardErrorMode(v10);
  return Status;
}
