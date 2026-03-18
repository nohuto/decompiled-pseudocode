/*
 * XREFs of IoPageReadEx @ 0x140227B50
 * Callers:
 *     MiIssueHardFaultIo @ 0x14025DE24 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x140263414 (MiPageRead.c)
 *     IoPageRead @ 0x14037D380 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140533DD8 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x140227A0C (MmIsFileObjectAPagingFile.c)
 *     MmIsRecursiveIoFault @ 0x140227DA0 (MmIsRecursiveIoFault.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x140326A58 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x140326AD4 (IopSetDriverFlagsExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1404FACA0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FAF2C (IopAllocateReserveIrp.c)
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
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v12; // r13
  int v13; // esi
  __int64 v14; // r12
  IRP *Irp; // rbx
  __int64 v16; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int IoPriorityThread; // eax
  __int64 v19; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v12 = RelatedDeviceObject;
  v13 = 1027;
  v14 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v13 = 67;
  if ( v10 >= 4u )
    v14 = -1LL;
  Irp = (IRP *)IopAllocateIrpExReturn(v14, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  if ( Irp )
    goto LABEL_10;
  if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)FileObject) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v22, (unsigned __int8)v12->StackSize, 0LL);
    if ( !Irp )
      return -1073741670;
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (a2->MdlFlags & 0x40) == 0 || (v13 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v23) = 1;
    Irp = (IRP *)IopAllocateBackpocketIrp(v14, (unsigned __int8)v12->StackSize, v23);
    if ( !Irp )
      return -1073741670;
  }
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)FileObject)
    || (a2->MdlFlags & 0x40) != 0 && (v13 & 0x40) != 0 )
  {
    Irp->AllocationFlags |= 0x20u;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Flags = v13;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v16, CurrentStackLocation);
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
  Irp->Flags = v13 | ((IoPriorityThread << 17) + 0x20000);
  Irp->UserEvent = a4;
  Irp->UserIosb = a5;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v19 - 72) = 3;
  *(_QWORD *)(v19 - 24) = FileObject;
  *(_DWORD *)(v19 - 64) = a2->ByteCount;
  *(_QWORD *)(v19 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  a5->Information = (ULONG_PTR)Irp;
  IopQueueThreadIrp((__int64)Irp);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread[1].Timer.DueTime.HighPart += (a2->ByteCount + 4095) >> 12;
  }
  return IofCallDriver(v12, Irp);
}
