/*
 * XREFs of IoPageReadEx @ 0x140280BA0
 * Callers:
 *     MiIssueHardFaultIo @ 0x1402B6E54 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x1402BC444 (MiPageRead.c)
 *     IoPageRead @ 0x14037C8C0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140533788 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x140280A5C (MmIsFileObjectAPagingFile.c)
 *     MmIsRecursiveIoFault @ 0x140280DF0 (MmIsRecursiveIoFault.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402ED128 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x1402ED1A4 (IopSetDriverFlagsExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1404FA650 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FA8DC (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        PFILE_OBJECT FileObject,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v12; // esi
  __int64 v13; // r12
  IRP *Irp; // rbx
  int IoPriorityThread; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v12 = 1027;
  v13 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v12 = 67;
  if ( v10 >= 4u )
    v13 = -1LL;
  Irp = (IRP *)IopAllocateIrpExReturn();
  if ( Irp )
    goto LABEL_10;
  if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)FileObject) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v21, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
    if ( !Irp )
      return -1073741670;
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (a2->MdlFlags & 0x40) == 0 || (v12 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v22) = 1;
    Irp = (IRP *)IopAllocateBackpocketIrp(v13, (unsigned __int8)RelatedDeviceObject->StackSize, v22);
    if ( !Irp )
      return -1073741670;
  }
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)FileObject)
    || (a2->MdlFlags & 0x40) != 0 && (v12 & 0x40) != 0 )
  {
    Irp->AllocationFlags |= 0x20u;
  }
  Irp->Flags = v12;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    if ( (v10 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  if ( (v10 & 2) != 0 && IoPriorityThread == 2 )
    IoPriorityThread = 3;
  Irp->MdlAddress = a2;
  Irp->RequestorMode = 0;
  Irp->Flags = v12 | ((IoPriorityThread << 17) + 0x20000);
  Irp->UserEvent = a4;
  Irp->UserIosb = a5;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 3;
  *(_QWORD *)(v16 - 24) = FileObject;
  *(_DWORD *)(v16 - 64) = a2->ByteCount;
  *(_QWORD *)(v16 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  a5->Information = (ULONG_PTR)Irp;
  IopQueueThreadIrp((__int64)Irp, v17, v18);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread[1].Timer.DueTime.HighPart += (a2->ByteCount + 4095) >> 12;
  }
  return IofCallDriver(RelatedDeviceObject, Irp);
}
