/*
 * XREFs of IoAsynchronousPageWrite @ 0x140326468
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiIssueAsynchronousFlush @ 0x140537E18 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x140227A0C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopSetDiskIoAttributionExtension @ 0x140326A58 (IopSetDiskIoAttributionExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IopAllocateBackpocketIrp @ 0x1404FACA0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FAF2C (IopAllocateReserveIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x1405C3E10 (StRtlIoStorInfoSetNvCachePriority.c)
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
  __int64 v17; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v21; // rdx
  NTSTATUS result; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8134u);
    __addgsdword(0x8138u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v17, 0LL, retaddr);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)a1) )
    {
      _InterlockedAdd(&IoAsynchronousPageWriteIrpAllocationFailure, 1u);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v24, v23, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v23, 0LL);
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
  IopQueueThreadIrp((__int64)Irp);
  if ( a7 )
  {
    LOBYTE(v21) = a7;
    StRtlIoStorInfoSetNvCachePriority(Irp, v21);
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
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}
