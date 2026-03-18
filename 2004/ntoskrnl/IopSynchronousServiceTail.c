/*
 * XREFs of IopSynchronousServiceTail @ 0x140675860
 * Callers:
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     NtQueryDirectoryFileEx @ 0x14068CE60 (NtQueryDirectoryFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 *     IoSetActivityIdThread @ 0x140273430 (IoSetActivityIdThread.c)
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IoGetIoPriorityHint @ 0x140327940 (IoGetIoPriorityHint.c)
 *     IopQueueIrpToFileObject @ 0x140327990 (IopQueueIrpToFileObject.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     IopCheckIrpCancelled @ 0x1404FB238 (IopCheckIrpCancelled.c)
 *     PsIsProcessAppContainer @ 0x1406FCB54 (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x14088DF6C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        _DWORD *a4,
        char a5,
        char a6,
        unsigned int a7)
{
  LARGE_INTEGER AllocationSize; // rax
  _QWORD *v8; // rdi
  char v9; // r12
  __int64 v12; // r13
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int64 FileObjectExtension; // r14
  _DWORD *v16; // rax
  struct _KTHREAD *v17; // rax
  unsigned int v18; // eax
  char *v19; // r14
  __int64 v20; // rcx
  struct _KTHREAD *v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // edx
  ULONG v24; // eax
  IO_PRIORITY_HINT IoPriorityHint; // edx
  _BYTE *v26; // rax
  unsigned int v28; // ebp
  _BYTE *v30; // rsi
  int v31; // edi
  KPROCESSOR_MODE v32; // al
  NTSTATUS v33; // eax
  unsigned __int8 CurrentIrql; // di
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  struct _LIST_ENTRY *v41; // rdi
  unsigned __int8 v42; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  bool v46; // zf
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v48; // [rsp+38h] [rbp-60h] BYREF
  __int64 v49; // [rsp+40h] [rbp-58h] BYREF
  struct _LIST_ENTRY v50; // [rsp+48h] [rbp-50h] BYREF

  AllocationSize = Irp->Overlay.AllocationSize;
  v8 = (_QWORD *)a3;
  v9 = (char)a4;
  Object = (PVOID)a3;
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
    goto LABEL_13;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v12 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3, a3, a4) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v12
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_13:
    IopQueueThreadIrp((__int64)Irp);
    goto LABEL_14;
  }
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v8 = Object;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object, v13, v14) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_13;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_14:
  v16 = (_DWORD *)v8[26];
  if ( v16 )
  {
    if ( (*v16 & 4) != 0 )
    {
      if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      {
        v28 = -1073739504;
        Irp->IoStatus.Status = -1073739504;
        IofCompleteRequest(Irp, 0);
        v19 = (char *)Object;
        goto LABEL_33;
      }
    }
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( DeviceType == 8 || DeviceType == 7 || DeviceType == 9 || DeviceType == 36 )
      IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
    CurrentThread = KeGetCurrentThread();
    if ( a7 )
    {
      ++CurrentThread->WriteOperationCount;
      v18 = 12000;
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      v18 = 11996;
    }
  }
  else
  {
    v17 = KeGetCurrentThread();
    ++v17->OtherOperationCount;
    v18 = 12004;
  }
  __incgsdword(v18);
  v19 = (char *)Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v20 = v8[26];
  if ( v20 && *(_DWORD *)(v20 + 80) )
  {
    v24 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v24;
    v23 = *(_DWORD *)(v20 + 80);
  }
  else
  {
    v21 = KeGetCurrentThread();
    v22 = (*((_DWORD *)&v21[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v21->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v22 = 0;
    if ( v22 < 2 && v21 == KeGetCurrentThread() && LODWORD(v21[1].Timer.TimerListEntry.Flink) )
      v22 = 2;
    v23 = v22 + 1;
    v19 = (char *)Object;
    v24 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v24;
  }
  Irp->Flags = v24 | (v23 << 17);
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  if ( Irp->RequestorMode )
    goto LABEL_25;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
    {
LABEL_25:
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
      goto LABEL_26;
    }
    Flags = Irp->Flags;
    ++IoKernelIssuedIoBoostedCount;
    Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
  }
LABEL_26:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v26 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v26 & 2) != 0 )
  {
    v50 = *(struct _LIST_ENTRY *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
    v41 = IoSetActivityIdThread(&v50);
    v28 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v41);
  }
  else
  {
    v28 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v19);
LABEL_33:
  if ( v9 && v28 != 259 )
  {
    v49 = 0LL;
    v48 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v49, &v48, (__int64 *)&Object, &v48);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v46 = (v45 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v45;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v19 = (char *)Object;
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v28 == 259 )
    {
      v30 = v19 + 152;
      v31 = *((_DWORD *)v19 + 20) & 4;
      while ( (*v30 & 0x7F) != 0 || !*((_DWORD *)v19 + 39) )
      {
        v32 = v31 ? a5 : 0;
        v33 = KeWaitForSingleObject(v30, Executive, v32, 1u, 0LL);
        if ( v33 != 257 && v33 != 192 )
          break;
        if ( v31 )
          goto LABEL_106;
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || IopCheckIrpCancelled((__int64)v30, (__int64)Irp) )
        {
          v19 = (char *)Object;
LABEL_106:
          IopCancelAlertedRequest(v30, Irp);
          break;
        }
        v19 = (char *)Object;
      }
      v28 = *((_DWORD *)v19 + 14);
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)v19);
  }
  else if ( v12 && (v28 & 0xC0000000) == 0x80000000 )
  {
    return 259LL;
  }
  return v28;
}
