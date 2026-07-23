/*
 * XREFs of IopSynchronousServiceTail @ 0x140716160
 * Callers:
 *     IopQueueCopyWrite @ 0x1403F1B60 (IopQueueCopyWrite.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1405F79F0 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x1405FA4E0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14060CF80 (NtNotifyChangeDirectoryFileEx.c)
 *     NtQueryDirectoryFileEx @ 0x140644A10 (NtQueryDirectoryFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x1406456E0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730E70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopQueueIrpToFileObject @ 0x1402117D0 (IopQueueIrpToFileObject.c)
 *     IoGetIoPriorityHint @ 0x1402764D0 (IoGetIoPriorityHint.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     IoSetActivityIdThread @ 0x1402F9230 (IoSetActivityIdThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F11B0 (IopWaitForSynchronousIoEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PsIsProcessAppContainer @ 0x14060BF44 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        unsigned int a7)
{
  _QWORD *v7; // rsi
  LARGE_INTEGER AllocationSize; // rax
  __int64 v12; // r15
  __int64 FileObjectExtension; // rbx
  PIO_STATUS_BLOCK UserIosb; // rcx
  _DWORD *v15; // rax
  unsigned int v16; // esi
  PVOID v17; // rbp
  struct _KTHREAD *v18; // rax
  unsigned int v19; // eax
  ULONG DeviceType; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  ULONG v23; // eax
  unsigned int v24; // edx
  struct _KTHREAD *v25; // r8
  unsigned int v26; // edx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  PETHREAD Thread; // rdx
  ULONG Flags; // eax
  _BYTE *v30; // rax
  struct _LIST_ENTRY *v32; // rbx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v41; // [rsp+38h] [rbp-60h] BYREF
  __int64 v42; // [rsp+40h] [rbp-58h] BYREF
  struct _LIST_ENTRY v43; // [rsp+48h] [rbp-50h] BYREF

  v7 = (_QWORD *)a3;
  Object = (PVOID)a3;
  AllocationSize = Irp->Overlay.AllocationSize;
  if ( (AllocationSize.LowPart & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    AllocationSize.QuadPart &= ~1uLL;
    Irp->Overlay.AllocationSize = AllocationSize;
  }
  v12 = *(_QWORD *)(a3 + 176);
  if ( a6 || AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_23;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v12 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3) )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v12
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_23:
    IopQueueThreadIrp((__int64)Irp);
    goto LABEL_24;
  }
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v7 = Object;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_23;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_24:
  v15 = (_DWORD *)v7[26];
  if ( v15 && (*v15 & 4) != 0 && PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v16 = -1073739504;
    Irp->IoStatus.Status = -1073739504;
    IofCompleteRequest(Irp, 0);
    v17 = Object;
    goto LABEL_69;
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( DeviceType - 7 <= 2 || DeviceType == 36 )
      IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
    CurrentThread = KeGetCurrentThread();
    if ( a7 )
    {
      ++CurrentThread->WriteOperationCount;
      v19 = 12000;
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      v19 = 11996;
    }
  }
  else
  {
    v18 = KeGetCurrentThread();
    ++v18->OtherOperationCount;
    v19 = 12004;
  }
  __incgsdword(v19);
  v17 = Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v22 = v7[26];
  if ( v22 && *(_DWORD *)(v22 + 80) )
  {
    v23 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v23;
    v24 = *(_DWORD *)(v22 + 80);
  }
  else
  {
    v25 = KeGetCurrentThread();
    v26 = (*((_DWORD *)&v25[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v25->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v26 = 0;
    if ( v26 < 2 && v25 == KeGetCurrentThread() && LODWORD(v25[1].Timer.TimerListEntry.Flink) )
      v26 = 2;
    v24 = v26 + 1;
    v17 = Object;
    v23 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v23;
  }
  Irp->Flags = v23 | (v24 << 17);
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  if ( Irp->RequestorMode )
    goto LABEL_54;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( !Thread || (Thread->MiscFlags & 0x400) == 0 && (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) == 0 )
    {
      Flags = Irp->Flags;
      ++IoKernelIssuedIoBoostedCount;
      Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
      goto LABEL_59;
    }
LABEL_54:
    if ( IoPriorityHint < IoPriorityNormal )
    {
      if ( a7 )
      {
        if ( a7 == 1 )
          ++IoLowPriorityWriteOperationCount;
      }
      else
      {
        ++IoLowPriorityReadOperationCount;
      }
    }
  }
LABEL_59:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v30 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v30 & 2) != 0 )
  {
    v43 = *(struct _LIST_ENTRY *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
    v32 = IoSetActivityIdThread(&v43);
    v16 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v32);
  }
  else
  {
    v16 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v17);
LABEL_69:
  if ( a4 && v16 != 259 )
  {
    v42 = 0LL;
    v41 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v42, &v41, (ULONG_PTR *)&Object, &v41);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v38 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v17 = Object;
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v16 == 259 )
    {
      IopWaitForSynchronousIoEvent(Irp, a5, (*((_DWORD *)v17 + 20) & 4) != 0, (_DWORD *)v17 + 38);
      v16 = *((_DWORD *)v17 + 14);
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)v17);
  }
  else if ( v12 && (v16 & 0xC0000000) == 0x80000000 )
  {
    return 259;
  }
  return v16;
}
