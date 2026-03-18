/*
 * XREFs of IopDeleteFile @ 0x140600E60
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpMustSucceed @ 0x140253450 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x140255700 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140255810 (IopIncrementDeviceObjectRefCount.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopDeleteFileObjectExtension @ 0x1402D7140 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14033FE5C (IopDecrementDeviceObjectRefCount.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406BAB70 (FsRtlPTeardownPerFileObjectContexts.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  PVPB Vpb; // r15
  PDEVICE_OBJECT v12; // rcx
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  PADAPTER_OBJECT *CompletionContext; // rcx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0LL;
  DeviceObject = FileObject->DeviceObject;
  memset(&Event, 0, sizeof(Event));
  v17 = 0LL;
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
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, v6->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = FileObject;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v17;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v9, v10);
    Vpb = FileObject->Vpb;
    if ( Vpb )
    {
      if ( (FileObject->Flags & 0x800) == 0 )
      {
        IopDecrementVpbRefCount((__int64)FileObject->Vpb, 1);
        v2 = (ULONG_PTR)Vpb->DeviceObject;
        if ( v2 )
          IopIncrementDeviceObjectRefCount((ULONG_PTR)Vpb->DeviceObject, 1);
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
    IopDequeueIrpFromThread(MustSucceed, v14, v15);
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
      IopDecrementDeviceObjectRef((ULONG_PTR)FileObject->DeviceObject, 0);
    if ( v2 && Vpb )
      IopDecrementDeviceObjectRef(v2, 0);
  }
  if ( FileObject->FileObjectExtension )
    IopDeleteFileObjectExtension((__int64)FileObject);
}
