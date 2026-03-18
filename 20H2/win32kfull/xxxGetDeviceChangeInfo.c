/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01DDF80
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  IRP *v7; // rsi
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  __int128 v12; // [rsp+70h] [rbp-9h] BYREF
  __int64 v13; // [rsp+80h] [rbp+7h]
  __int128 v14; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  struct _KEVENT Event; // [rsp+A0h] [rbp+27h] BYREF
  __int16 OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v3 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DestinationString = 0LL;
  OutputBuffer = 0;
  IoStatusBlock = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = qword_1C033A1E0;
    v5 = *(_QWORD **)(qword_1C033A1E0 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C033A1E0 != &gMediaChangeList || *v5 != qword_1C033A1E0 )
      __fastfail(3u);
    qword_1C033A1E0 = *(_QWORD *)(qword_1C033A1E0 + 8);
    *v5 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  if ( !v4 )
    return 0LL;
  PushW32ThreadLock(v4, &v14, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, &v12, UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v7 = IoBuildDeviceIoControlRequest(
           0x6DC010u,
           DeviceObject,
           (PVOID)(v4 + 36),
           (unsigned int)*(unsigned __int16 *)(v4 + 36) + 4,
           &OutputBuffer,
           2u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v7 )
    {
      if ( gdwInAtomicOperation )
      {
        v6 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v6);
      Status = IofCallDriver(DeviceObject, v7);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0LL, 1LL);
      if ( !Status && HIBYTE(OutputBuffer) )
      {
        v3 = 1 << (HIBYTE(OutputBuffer) - 65);
        if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
          v3 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)&v12);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v14);
  return v3;
}
