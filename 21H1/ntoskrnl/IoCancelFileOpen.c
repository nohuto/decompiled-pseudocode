/*
 * XREFs of IoCancelFileOpen @ 0x14088F240
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140253450 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopCloseFileObjectExtension @ 0x1403073C8 (IopCloseFileObjectExtension.c)
 *     PoCallDriver @ 0x1403973F0 (PoCallDriver.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  bool v2; // zf
  IRP *MustSucceed; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = (FileObject->Flags & 0x40000) == 0;
  memset(&Event, 0, sizeof(Event));
  if ( !v2 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( (FileObject->Flags & 0x4000000) == 0 )
    KeResetEvent(&FileObject->Event);
  MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)DeviceObject, DeviceObject->StackSize);
  MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
  MustSucceed->Tail.Overlay.Thread = CurrentThread;
  MustSucceed->UserIosb = &MustSucceed->IoStatus;
  CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
  MustSucceed->RequestorMode = 0;
  MustSucceed->UserEvent = &Event;
  MustSucceed->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  IopQueueThreadIrp((__int64)MustSucceed, v8, v9);
  if ( PoCallDriver(DeviceObject, MustSucceed) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(MustSucceed, v10, v11);
  IoFreeIrp(MustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
  if ( FileObject->FileObjectExtension )
    IopCloseFileObjectExtension((__int64)FileObject);
}
