/*
 * XREFs of IoPageReadEx @ 0x14024E230
 * Callers:
 *     MiPageRead @ 0x14024E1FC (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x1402D0F14 (MiIssueHardFaultIo.c)
 *     IoPageRead @ 0x14037F0B0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1405377A8 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopSetDiskIoAttributionExtension @ 0x14024C158 (IopSetDiskIoAttributionExtension.c)
 *     MmIsRecursiveIoFault @ 0x14024E480 (MmIsRecursiveIoFault.c)
 *     MmIsFileObjectAPagingFile @ 0x14024E4A8 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14024E710 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDriverFlagsExtension @ 0x14024E854 (IopSetDriverFlagsExtension.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     IopAllocateBackpocketIrp @ 0x1404FE530 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FE7D0 (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        PFILE_OBJECT FileObject,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v12; // r13
  int v13; // esi
  __int64 v14; // r12
  __int64 Irp; // rbx
  int IoPriorityThread; // eax
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 retaddr; // [rsp+68h] [rbp+0h]

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
  Irp = IopAllocateIrpExReturn(v14, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  if ( Irp )
    goto LABEL_10;
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    Irp = IopAllocateReserveIrp(v20, (unsigned __int8)v12->StackSize, 0LL);
    if ( !Irp )
      return -1073741670;
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (*(_WORD *)(a2 + 10) & 0x40) == 0 || (v13 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v21) = 1;
    Irp = IopAllocateBackpocketIrp(v14, (unsigned __int8)v12->StackSize, v21);
    if ( !Irp )
      return -1073741670;
  }
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v13 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_DWORD *)(Irp + 16) = v13;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
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
  *(_QWORD *)(Irp + 8) = a2;
  *(_BYTE *)(Irp + 64) = 0;
  *(_DWORD *)(Irp + 16) = v13 | ((IoPriorityThread << 17) + 0x20000);
  *(_QWORD *)(Irp + 80) = a4;
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v17 - 72) = 3;
  *(_QWORD *)(v17 - 24) = FileObject;
  *(_DWORD *)(v17 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v17 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), *(_QWORD *)(Irp + 152), 0);
  else
    IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  *(_QWORD *)(a5 + 8) = Irp;
  IopQueueThreadIrp(Irp);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread[1].Timer.DueTime.HighPart += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(v12, (PIRP)Irp);
}
