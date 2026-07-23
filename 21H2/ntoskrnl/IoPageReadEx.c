/*
 * XREFs of IoPageReadEx @ 0x140326E80
 * Callers:
 *     MiIssueHardFaultIo @ 0x14022DB84 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x14030781C (MiPageRead.c)
 *     IoPageRead @ 0x14037F440 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1405394E8 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14020D8DC (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x14020D958 (IopSetDriverFlagsExtension.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsRecursiveIoFault @ 0x1403270D0 (MmIsRecursiveIoFault.c)
 *     MmIsFileObjectAPagingFile @ 0x1403271A4 (MmIsFileObjectAPagingFile.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopAllocateBackpocketIrp @ 0x140500050 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1405002F0 (IopAllocateReserveIrp.c)
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
  __int64 v9; // r15
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
    IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
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
