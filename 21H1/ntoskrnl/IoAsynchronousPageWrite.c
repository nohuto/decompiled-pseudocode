/*
 * XREFs of IoAsynchronousPageWrite @ 0x1402ECB38
 * Callers:
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiIssueAsynchronousFlush @ 0x1405377C8 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x140280A5C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402ED128 (IopSetDiskIoAttributionExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopAllocateBackpocketIrp @ 0x1404FA650 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FA8DC (IopAllocateReserveIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x1405C36E0 (StRtlIoStorInfoSetNvCachePriority.c)
 */

NTSTATUS __fastcall IoAsynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        void (__fastcall *a4)(void *, struct _IO_STATUS_BLOCK *, _QWORD),
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 a9,
        struct _IO_STATUS_BLOCK *a10,
        IRP **a11)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  NTSTATUS result; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf

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
      _InterlockedAdd(&IoAsynchronousPageWriteIrpAllocationFailure, 1u);
      LOBYTE(v24) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v25, v24, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v24) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v24, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  if ( a11 )
    *a11 = Irp;
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = ((a6 + 1) << 17) | 3;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->RequestorMode = 0;
  Irp->UserIosb = a10;
  Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)a4;
  Irp->Overlay.AsynchronousParameters.UserApcContext = a5;
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a8;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentThread = KeGetCurrentThread();
  if ( a9 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a9 + 24), CurrentThread, 0LL);
  else
    IoSetDiskIoAttributionFromThread((__int64)Irp, CurrentThread);
  IopQueueThreadIrp((__int64)Irp, v20, v21);
  if ( a7 )
  {
    LOBYTE(v22) = a7;
    StRtlIoStorInfoSetNvCachePriority(Irp, v22);
  }
  result = IofCallDriver(RelatedDeviceObject, Irp);
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    a10->Information = 0LL;
    a10->Status = result;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    a4(a5, a10, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}
