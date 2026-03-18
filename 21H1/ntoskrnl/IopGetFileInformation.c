/*
 * XREFs of IopGetFileInformation @ 0x1405DB0F4
 * Callers:
 *     IopGetRelatedFileName @ 0x1405CDFA8 (IopGetRelatedFileName.c)
 *     IopQueryNameInternal @ 0x1405DABE4 (IopQueryNameInternal.c)
 *     IopGetBasicInformationFile @ 0x14066F258 (IopGetBasicInformationFile.c)
 *     IopGraftName @ 0x1406CE040 (IopGraftName.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopGetFileInformation(
        struct _FILE_OBJECT *DmaAdapter,
        ULONG a2,
        ULONG a3,
        struct _IRP *a4,
        _DWORD *a5)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  IRP *v13; // rbx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v17; // edx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v19 = 0LL;
  ObfReferenceObject(DmaAdapter);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(DmaAdapter);
  Irp = IopAllocateIrpExReturn();
  v13 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = DmaAdapter;
    v14 = Irp;
    CurrentThread = KeGetCurrentThread();
    v13->Overlay.AllocationSize.QuadPart = 0LL;
    v13->Tail.Overlay.Thread = CurrentThread;
    v13->UserEvent = &Event;
    v13->UserIosb = (PIO_STATUS_BLOCK)&v19;
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    v13->Flags = 4100;
    v13->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = DmaAdapter;
    v13->Flags |= 0x10u;
    v13->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v14, v11, v12);
    v17 = IofCallDriver(RelatedDeviceObject, v13);
    if ( v17 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v17 = v19;
    }
    *a5 = DWORD2(v19);
    return v17;
  }
  else
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
    return 3221225626LL;
  }
}
