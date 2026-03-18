/*
 * XREFs of IoSynchronousPageWriteEx @ 0x140280E18
 * Callers:
 *     MiIssueSynchronousFlush @ 0x1402FFCB0 (MiIssueSynchronousFlush.c)
 *     MiZeroPageWrite @ 0x140310298 (MiZeroPageWrite.c)
 *     IoSynchronousPageWrite @ 0x140312870 (IoSynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x1403BBD64 (MiSynchronousPageWrite.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x140280A5C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402ED128 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1404FA650 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FA8DC (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  IRP *Irp; // rbx
  int IoPriorityThread; // r8d
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 ReserveIrp; // rax

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8134u);
    __addgsdword(0x8138u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = (IRP *)IopAllocateIrpExReturn();
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v20) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v21, v20, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v20) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v20, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  Irp->AllocationFlags |= 0x20u;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->PreviousMode == 1
      || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
      || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
    {
      ++IoPagingWriteLowPriorityCount;
    }
    else
    {
      ++IoPagingWriteLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  Irp->UserIosb = a7;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->Flags = ((IoPriorityThread << 17) + 0x20000) | 0x43;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v15 - 72) = 4;
  *(_DWORD *)(v15 - 64) = a2->ByteCount;
  *(_QWORD *)(v15 - 48) = *a3;
  *(_BYTE *)(v15 - 70) |= a5;
  *(_QWORD *)(v15 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  IopQueueThreadIrp((__int64)Irp, v16, v17);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
