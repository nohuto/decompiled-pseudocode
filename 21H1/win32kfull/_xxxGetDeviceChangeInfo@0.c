/*
 * XREFs of _xxxGetDeviceChangeInfo@0 @ 0x14B4F7
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

int __stdcall xxxGetDeviceChangeInfo()
{
  int v0; // esi
  int v1; // edi
  _DWORD *v2; // eax
  IRP *v3; // ebx
  NTSTATUS Status; // ebx
  struct _KEVENT Event; // [esp+8h] [ebp-44h] BYREF
  _DWORD v7[3]; // [esp+18h] [ebp-34h] BYREF
  _DWORD v8[3]; // [esp+24h] [ebp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+30h] [ebp-1Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+38h] [ebp-14h] BYREF
  PFILE_OBJECT FileObject; // [esp+40h] [ebp-Ch] BYREF
  PDEVICE_OBJECT DeviceObject; // [esp+44h] [ebp-8h] BYREF
  __int16 OutputBuffer; // [esp+48h] [ebp-4h] BYREF

  OutputBuffer = 0;
  memset(v7, 0, sizeof(v7));
  v0 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  FileObject = 0;
  DeviceObject = 0;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  memset(v8, 0, sizeof(v8));
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return 0;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  if ( IsListEmpty(&gMediaChangeList) )
  {
    v1 = 0;
  }
  else
  {
    v1 = dword_275318;
    if ( *(struct _LIST_ENTRY **)dword_275318 != &gMediaChangeList
      || (v2 = *(_DWORD **)(dword_275318 + 4), *v2 != dword_275318) )
    {
      __fastfail(3u);
    }
    dword_275318 = *(_DWORD *)(dword_275318 + 4);
    *v2 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  if ( !v1 )
    return 0;
  PushW32ThreadLock(v1, v7, (int)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((int)FileObject, v8, (int)UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(
           0x6DC010u,
           DeviceObject,
           (PVOID)(v1 + 20),
           *(unsigned __int16 *)(v1 + 20) + 4,
           &OutputBuffer,
           2u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v3 )
    {
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      UserSessionSwitchLeaveCrit();
      Status = IofCallDriver(DeviceObject, v3);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0, 1);
      if ( !Status && HIBYTE(OutputBuffer) )
      {
        v0 = 1 << (HIBYTE(OutputBuffer) - 65);
        if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
          v0 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((int)v8);
  }
  PopAndFreeAlwaysW32ThreadLock((int)v7);
  return v0;
}
