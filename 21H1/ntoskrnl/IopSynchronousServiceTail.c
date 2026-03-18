/*
 * XREFs of IopSynchronousServiceTail @ 0x1405FD780
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1405E3990 (NtQueryDirectoryFileEx.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140758BF0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 *     IoSetActivityIdThread @ 0x1402E53E0 (IoSetActivityIdThread.c)
 *     IoGetIoPriorityHint @ 0x1402EE010 (IoGetIoPriorityHint.c)
 *     IopQueueIrpToFileObject @ 0x1402EE060 (IopQueueIrpToFileObject.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     IopCheckIrpCancelled @ 0x1404FABE8 (IopCheckIrpCancelled.c)
 *     PsIsProcessAppContainer @ 0x1406D8FA4 (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
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
  _DWORD *v13; // r9
  __int64 FileObjectExtension; // r14
  _DWORD *v15; // rax
  struct _KTHREAD *v16; // rax
  unsigned int v17; // eax
  char *v18; // r14
  __int64 v19; // rcx
  struct _KTHREAD *v20; // r8
  unsigned int v21; // edx
  unsigned int v22; // edx
  ULONG v23; // eax
  IO_PRIORITY_HINT IoPriorityHint; // edx
  _BYTE *v25; // rax
  unsigned int v27; // ebp
  _BYTE *v29; // rsi
  int v30; // edi
  KPROCESSOR_MODE v31; // al
  NTSTATUS v32; // eax
  unsigned __int8 CurrentIrql; // di
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  struct _LIST_ENTRY *v40; // rdi
  unsigned __int8 v41; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  bool v45; // zf
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v47; // [rsp+38h] [rbp-60h] BYREF
  __int64 v48; // [rsp+40h] [rbp-58h] BYREF
  struct _LIST_ENTRY v49; // [rsp+48h] [rbp-50h] BYREF

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
    IopQueueThreadIrp((__int64)Irp, (__int64)Irp, a3);
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
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object, a3, v13) )
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
  v15 = (_DWORD *)v8[26];
  if ( v15 )
  {
    if ( (*v15 & 4) != 0 )
    {
      if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      {
        v27 = -1073739504;
        Irp->IoStatus.Status = -1073739504;
        IofCompleteRequest(Irp, 0);
        v18 = (char *)Object;
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
      v17 = 12000;
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      v17 = 11996;
    }
  }
  else
  {
    v16 = KeGetCurrentThread();
    ++v16->OtherOperationCount;
    v17 = 12004;
  }
  __incgsdword(v17);
  v18 = (char *)Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v19 = v8[26];
  if ( v19 && *(_DWORD *)(v19 + 80) )
  {
    v23 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v23;
    v22 = *(_DWORD *)(v19 + 80);
  }
  else
  {
    v20 = KeGetCurrentThread();
    v21 = (*((_DWORD *)&v20[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v20->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v21 = 0;
    if ( v21 < 2 && v20 == KeGetCurrentThread() && LODWORD(v20[1].Timer.TimerListEntry.Flink) )
      v21 = 2;
    v22 = v21 + 1;
    v18 = (char *)Object;
    v23 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v23;
  }
  Irp->Flags = v23 | (v22 << 17);
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
    && (v25 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v25 & 2) != 0 )
  {
    v49 = *(struct _LIST_ENTRY *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
    v40 = IoSetActivityIdThread(&v49);
    v27 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v40);
  }
  else
  {
    v27 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v18);
LABEL_33:
  if ( v9 && v27 != 259 )
  {
    v48 = 0LL;
    v47 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v48, (__int64)&v47, (__int64 *)&Object, &v47);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v45 = (v44 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v18 = (char *)Object;
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v27 == 259 )
    {
      v29 = v18 + 152;
      v30 = *((_DWORD *)v18 + 20) & 4;
      while ( (*v29 & 0x7F) != 0 || !*((_DWORD *)v18 + 39) )
      {
        v31 = v30 ? a5 : 0;
        v32 = KeWaitForSingleObject(v29, Executive, v31, 1u, 0LL);
        if ( v32 != 257 && v32 != 192 )
          break;
        if ( v30 )
          goto LABEL_106;
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || IopCheckIrpCancelled((__int64)v29, (__int64)Irp) )
        {
          v18 = (char *)Object;
LABEL_106:
          IopCancelAlertedRequest(v29, Irp);
          break;
        }
        v18 = (char *)Object;
      }
      v27 = *((_DWORD *)v18 + 14);
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)v18);
  }
  else if ( v12 && (v27 & 0xC0000000) == 0x80000000 )
  {
    return 259LL;
  }
  return v27;
}
