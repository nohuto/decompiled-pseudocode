/*
 * XREFs of IopLoadFileSystemDriver @ 0x14076ADE4
 * Callers:
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14027D5F0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopLoadFileSystemDriver(struct _DEVICE_OBJECT *BugCheckParameter2)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  __int64 v5; // r8
  _DWORD *v6; // r9
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  AttachedDevice = BugCheckParameter2->AttachedDevice;
  v3 = BugCheckParameter2;
  while ( AttachedDevice )
  {
    v3 = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0xEu, v3, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( v4 )
  {
    *(_WORD *)&v4->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 781;
    if ( IofCallDriver(v3, v4) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  LOBYTE(v5) = 1;
  return IopDecrementDeviceObjectRef((ULONG_PTR)BugCheckParameter2, 1, v5, v6);
}
