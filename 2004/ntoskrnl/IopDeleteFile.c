/*
 * XREFs of IopDeleteFile @ 0x140678F40
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopDeleteFileObjectExtension @ 0x140269E64 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14026FCCC (IopDecrementDeviceObjectRefCount.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IopAllocateIrpMustSucceed @ 0x14028FCD0 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x140290C50 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x140291F80 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140292090 (IopIncrementDeviceObjectRefCount.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406DBE80 (FsRtlPTeardownPerFileObjectContexts.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFile(PFILE_OBJECT FileObject)
{
  ULONG_PTR v2; // rsi
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v6; // r14
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  PVPB Vpb; // r15
  __int64 v10; // r8
  _DWORD *v11; // r9
  PDEVICE_OBJECT v12; // rcx
  char v13; // bp
  _DWORD *v14; // r9
  PADAPTER_OBJECT *CompletionContext; // rcx
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0LL;
  DeviceObject = FileObject->DeviceObject;
  memset(&Event, 0, sizeof(Event));
  v16 = 0LL;
  if ( DeviceObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x800) != 0 )
    {
      AttachedDevice = IoGetAttachedDevice(DeviceObject);
    }
    else
    {
      AttachedDevice = IoGetRelatedDeviceObject(FileObject);
      Flags = FileObject->Flags;
    }
    v6 = AttachedDevice;
    if ( (Flags & 0x240000) == 0 )
      IopCloseFile(0LL, FileObject, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (FileObject->Flags & 0x4000000) == 0 )
      KeResetEvent(&FileObject->Event);
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, (unsigned __int8)v6->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = FileObject;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v16;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed);
    Vpb = FileObject->Vpb;
    if ( Vpb )
    {
      if ( (FileObject->Flags & 0x800) == 0 )
      {
        IopDecrementVpbRefCount((__int64)FileObject->Vpb, 1);
        v2 = (ULONG_PTR)Vpb->DeviceObject;
        if ( v2 )
          IopIncrementDeviceObjectRefCount((ULONG_PTR)Vpb->DeviceObject, 1, v10, v11);
      }
    }
    v12 = FileObject->DeviceObject;
    if ( (v12->Flags & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount((ULONG_PTR)v12, 1);
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    if ( IofCallDriver(v6, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed);
    IoFreeIrp(MustSucceed);
    if ( FileObject->FileName.Length )
      ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
    CompletionContext = (PADAPTER_OBJECT *)FileObject->CompletionContext;
    if ( CompletionContext )
    {
      HalPutDmaAdapter(*CompletionContext);
      ExFreePoolWithTag(FileObject->CompletionContext, 0);
    }
    if ( FileObject->FileObjectExtension )
      FsRtlPTeardownPerFileObjectContexts(FileObject);
    if ( !v13 )
      IopDecrementDeviceObjectRef(
        (ULONG_PTR)FileObject->DeviceObject,
        0,
        (unsigned __int8)~BYTE3(FileObject[-1].IrpList.Flink) >> 7,
        v14);
    if ( v2 && Vpb )
      IopDecrementDeviceObjectRef(v2, 0, (unsigned __int8)~BYTE3(FileObject[-1].IrpList.Flink) >> 7, v14);
  }
  if ( FileObject->FileObjectExtension )
    IopDeleteFileObjectExtension((__int64)FileObject);
}
