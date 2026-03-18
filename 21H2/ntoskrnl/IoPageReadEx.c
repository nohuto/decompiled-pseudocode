/*
 * XREFs of IoPageReadEx @ 0x140342C50
 * Callers:
 *     MiPageRead @ 0x1402792AC (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x14027AEA0 (MiIssueHardFaultIo.c)
 *     IoPageRead @ 0x140388EE0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140594898 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14020C178 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x14020C21C (IopSetDriverFlagsExtension.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PsGetBaseIoPriorityThread @ 0x140343770 (PsGetBaseIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1403437A0 (IoSetDiskIoAttributionFromThread.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     MmIsFileObjectAPagingFile @ 0x140374EA8 (MmIsFileObjectAPagingFile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     IopAllocateBackpocketIrp @ 0x140556050 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1405562E8 (IopAllocateReserveIrp.c)
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
  __int64 v9; // r14
  unsigned __int8 v10; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  int v12; // ebp
  __int64 v13; // rsi
  __int64 Irp; // rbx
  int v15; // r12d
  KIRQL v16; // al
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  int BaseIoPriorityThread; // r8d
  __int64 v21; // r9
  _QWORD *v22; // rdi
  __int64 v23; // rbp
  __int64 *v24; // rsi
  unsigned __int8 v25; // r14
  __int64 v26; // rax
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v29; // r9
  struct _KTHREAD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+28h] [rbp-40h]

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  v12 = 1027;
  v13 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v12 = 67;
  if ( v10 >= 4u )
    v13 = -1LL;
  Irp = IopAllocateIrpExReturn(v13, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
    {
      _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
      Irp = IopAllocateReserveIrp(v31, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
      if ( Irp )
        goto LABEL_10;
    }
    else
    {
      _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
      if ( (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v12 & 0x40) != 0 )
      {
        LOBYTE(v32) = 1;
        Irp = IopAllocateBackpocketIrp(v13, (unsigned __int8)RelatedDeviceObject->StackSize, v32);
        if ( Irp )
          goto LABEL_10;
      }
    }
    return -1073741670;
  }
LABEL_10:
  v15 = 0;
  v16 = ExAcquireSpinLockShared(&dword_140C531C8);
  v17 = (_QWORD *)qword_140C531C0;
  v18 = v16;
  if ( !qword_140C531C0 )
    goto LABEL_18;
  while ( (unsigned __int64)FileObject < *(v17 - 25) )
  {
    v17 = (_QWORD *)*v17;
LABEL_13:
    if ( !v17 )
      goto LABEL_18;
  }
  if ( (unsigned __int64)FileObject > *(v17 - 25) )
  {
    v17 = (_QWORD *)v17[1];
    goto LABEL_13;
  }
  if ( v17 )
    v15 = 1;
LABEL_18:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C531C8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v37 = (v36 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v36;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v18);
  if ( v15 || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v12 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_DWORD *)(Irp + 16) = v12;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread());
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (struct _KTHREAD *)v21 == KeGetCurrentThread() && *(_DWORD *)(v21 + 1440) )
    {
      BaseIoPriorityThread = 2;
    }
    else if ( (v10 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      BaseIoPriorityThread = 2;
    }
  }
  if ( (v10 & 2) != 0 && BaseIoPriorityThread == 2 )
    BaseIoPriorityThread = 3;
  *(_QWORD *)(Irp + 8) = a2;
  *(_DWORD *)(Irp + 16) = v12 | ((BaseIoPriorityThread + 1) << 17);
  *(_QWORD *)(Irp + 80) = a4;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v19 - 72) = 3;
  *(_QWORD *)(v19 - 24) = FileObject;
  *(_DWORD *)(v19 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v19 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), *(_QWORD *)(Irp + 152), 0);
  else
    IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  *(_QWORD *)(a5 + 8) = Irp;
  v22 = (_QWORD *)(Irp + 32);
  v23 = *(_QWORD *)(Irp + 152);
  v24 = (__int64 *)(v23 + 1280);
  v25 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
  {
    v29 = KeGetCurrentPrcb()->SchedulerAssist;
    v29[5] |= (-1 << (v25 + 1)) & 4;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v23 + 1496));
  v26 = *v24;
  if ( *(__int64 **)(*v24 + 8) != v24 )
    __fastfail(3u);
  *v22 = v26;
  *(_QWORD *)(Irp + 40) = v24;
  *(_QWORD *)(v26 + 8) = v22;
  *v24 = (__int64)v22;
  KxReleaseSpinLock((PKSPIN_LOCK)(v23 + 1496));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && v25 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v37 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
  }
  __writecr8(v25);
  CurrentThread = KeGetCurrentThread();
  if ( BYTE5(CurrentThread[1].Queue) || BYTE4(CurrentThread[1].Queue) == 1 )
  {
    v30 = KeGetCurrentThread();
    v30[1].Timer.DueTime.HighPart += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(DeviceObject, (PIRP)Irp);
}
