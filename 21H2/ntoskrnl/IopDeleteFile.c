/*
 * XREFs of IopDeleteFile @ 0x14072B630
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteFileObjectExtension @ 0x140203B8C (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x140259288 (IopDecrementDeviceObjectRefCount.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402A6E00 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1402A6FB0 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402A7190 (IopDecrementDeviceObjectRef.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x1402AA860 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14071CD2C (FsRtlPTeardownPerFileObjectContexts.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  ULONG_PTR v3; // rsi
  int v4; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v6; // r15
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rbp
  ULONG_PTR v10; // rcx
  char v11; // r14
  ULONG_PTR v12; // rcx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v3 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v13 = 0LL;
  if ( v2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter1 + 80);
    if ( (v4 & 0x800) != 0 )
    {
      AttachedDevice = IoGetAttachedDevice(v2);
    }
    else
    {
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)BugCheckParameter1);
      v4 = *(_DWORD *)(BugCheckParameter1 + 80);
    }
    v6 = AttachedDevice;
    if ( (v4 & 0x240000) == 0 )
      IopCloseFile(0LL, BugCheckParameter1, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(BugCheckParameter1 + 152));
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, (unsigned __int8)v6->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v13;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed);
    v9 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v9 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1);
        v3 = *(_QWORD *)(v9 + 8);
        if ( v3 )
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v9 + 8), 1);
      }
    }
    v10 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v10 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v10, 1);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( IofCallDriver(v6, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v12 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v12, 0x80uLL, *(_QWORD *)(v12 + 16));
      ObfDereferenceObject(*(PVOID *)v12);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
      FsRtlPTeardownPerFileObjectContexts(BugCheckParameter1);
    if ( !v11 )
      IopDecrementDeviceObjectRef(*(_QWORD *)(BugCheckParameter1 + 8), 0);
    if ( v3 && v9 )
      IopDecrementDeviceObjectRef(v3, 0);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    IopDeleteFileObjectExtension(BugCheckParameter1);
}
