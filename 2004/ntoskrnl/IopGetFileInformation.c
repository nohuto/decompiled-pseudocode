/*
 * XREFs of IopGetFileInformation @ 0x1406613F4
 * Callers:
 *     IopGetRelatedFileName @ 0x1405CF378 (IopGetRelatedFileName.c)
 *     IopGetBasicInformationFile @ 0x140617B38 (IopGetBasicInformationFile.c)
 *     IopQueryNameInternal @ 0x140660EE4 (IopQueryNameInternal.c)
 *     IopGraftName @ 0x1406EF340 (IopGraftName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 */

__int64 __fastcall IopGetFileInformation(
        struct _FILE_OBJECT *DmaAdapter,
        ULONG a2,
        ULONG a3,
        struct _IRP *a4,
        _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v10; // rdx
  __int64 Irp; // rax
  IRP *v12; // rbx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v16; // edx
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  ObfReferenceObject(DmaAdapter);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(DmaAdapter);
  LOBYTE(v10) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v10, 0LL, retaddr);
  v12 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = DmaAdapter;
    v13 = Irp;
    CurrentThread = KeGetCurrentThread();
    v12->Overlay.AllocationSize.QuadPart = 0LL;
    v12->Tail.Overlay.Thread = CurrentThread;
    v12->UserEvent = &Event;
    v12->UserIosb = (PIO_STATUS_BLOCK)&v18;
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    v12->Flags = 4100;
    v12->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = DmaAdapter;
    v12->Flags |= 0x10u;
    v12->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v13);
    v16 = IofCallDriver(RelatedDeviceObject, v12);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v18;
    }
    *a5 = DWORD2(v18);
    return v16;
  }
  else
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
    return 3221225626LL;
  }
}
