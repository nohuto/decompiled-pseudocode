/*
 * XREFs of IoSynchronousPageWriteEx @ 0x140340130
 * Callers:
 *     MiZeroPageWrite @ 0x1402459E8 (MiZeroPageWrite.c)
 *     IoSynchronousPageWrite @ 0x140248520 (IoSynchronousPageWrite.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiSynchronousPageWrite @ 0x1403CF888 (MiSynchronousPageWrite.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14020C178 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1403437A0 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x140374EA8 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x140556050 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1405562E8 (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v13; // rdx
  __int64 Irp; // rbx
  int IoPriorityThread; // r8d
  __int64 v16; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 ReserveIrp; // rax

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8474u);
    __addgsdword(0x8478u, (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v13, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v20, v19, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v19, 0LL);
    }
    Irp = ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_QWORD *)(Irp + 8) = a2;
  *(_DWORD *)(Irp + 16) = 67;
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
  *(_QWORD *)(Irp + 72) = a7;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = a4;
  *(_DWORD *)(Irp + 16) = ((IoPriorityThread << 17) + 0x20000) | 0x43;
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = a1;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 4;
  *(_DWORD *)(v16 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v16 - 48) = *a3;
  *(_BYTE *)(v16 - 70) |= a5;
  *(_QWORD *)(v16 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), *(_QWORD *)(Irp + 152), 0);
  else
    IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
  IopQueueThreadIrp(Irp);
  return IofCallDriver(RelatedDeviceObject, (PIRP)Irp);
}
