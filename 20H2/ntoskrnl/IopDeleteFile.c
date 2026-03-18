/*
 * XREFs of IopDeleteFile @ 0x1405FE150
 * Callers:
 *     <none>
 * Callees:
 *     IopDecrementDeviceObjectRefCount @ 0x14020391C (IopDecrementDeviceObjectRefCount.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopDecrementVpbRefCount @ 0x14020DC10 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14020DD20 (IopIncrementDeviceObjectRefCount.c)
 *     IopAllocateIrpMustSucceed @ 0x140211230 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x14021B3A0 (IopDequeueIrpFromThread.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1405FE100 (FsRtlPTeardownPerFileObjectContexts.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rcx
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v3 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v16 = 0LL;
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
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v16;
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
    v15 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v15, 0x80uLL, *(_QWORD *)(v15 + 16));
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)v15);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
      FsRtlPTeardownPerFileObjectContexts(BugCheckParameter1, v12, v13, v14);
    if ( !v11 )
      IopDecrementDeviceObjectRef(
        *(_QWORD *)(BugCheckParameter1 + 8),
        0,
        (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
    if ( v3 && v9 )
      IopDecrementDeviceObjectRef(v3, 0, (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    IopDeleteFileObjectExtension(BugCheckParameter1);
}
