/*
 * XREFs of IoSynchronousPageWriteEx @ 0x140227DC8
 * Callers:
 *     MiIssueSynchronousFlush @ 0x14033C5B0 (MiIssueSynchronousFlush.c)
 *     MiZeroPageWrite @ 0x14034D928 (MiZeroPageWrite.c)
 *     IoSynchronousPageWrite @ 0x140350700 (IoSynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x1403BD084 (MiSynchronousPageWrite.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x140227A0C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x140326A58 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1404FACA0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FAF2C (IopAllocateReserveIrp.c)
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
  __int64 v13; // rdx
  __int64 v14; // rdx
  IRP *Irp; // rbx
  __int64 v16; // r8
  int IoPriorityThread; // r8d
  __int64 v18; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 ReserveIrp; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8134u);
    __addgsdword(0x8138u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn(RelatedDeviceObject, v13, 0LL, retaddr);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v22, v21, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v21, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  Irp->AllocationFlags |= 0x20u;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v14, v16);
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
  *(_BYTE *)(v18 - 72) = 4;
  *(_DWORD *)(v18 - 64) = a2->ByteCount;
  *(_QWORD *)(v18 - 48) = *a3;
  *(_BYTE *)(v18 - 70) |= a5;
  *(_QWORD *)(v18 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  IopQueueThreadIrp((__int64)Irp);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
