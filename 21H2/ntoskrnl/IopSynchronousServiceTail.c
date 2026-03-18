/*
 * XREFs of IopSynchronousServiceTail @ 0x140731680
 * Callers:
 *     IopQueueCopyWrite @ 0x1404183A0 (IopQueueCopyWrite.c)
 *     IopWriteFile @ 0x140658DCC (IopWriteFile.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     NtQueryDirectoryFileEx @ 0x1407562E0 (NtQueryDirectoryFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopQueueIrpToFileObject @ 0x140211BD0 (IopQueueIrpToFileObject.c)
 *     IoGetIoPriorityHint @ 0x140221E10 (IoGetIoPriorityHint.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     IoSetActivityIdThread @ 0x1402DE9B0 (IoSetActivityIdThread.c)
 *     IopCallDriverReference @ 0x1402F8AE0 (IopCallDriverReference.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1403437A0 (IoSetDiskIoAttributionFromThread.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IopWaitForSynchronousIoEvent @ 0x140417B94 (IopWaitForSynchronousIoEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopCheckIrpCancelled @ 0x140556608 (IopCheckIrpCancelled.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x140557078 (IopSetIrpPriorityHintFromFileObject.c)
 *     IopIoRingCompleteIrp @ 0x140559FA8 (IopIoRingCompleteIrp.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 *     PsIsProcessAppContainer @ 0x1406C9928 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        struct _FILE_OBJECT *a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        unsigned int a7)
{
  LARGE_INTEGER AllocationSize; // rax
  PIO_COMPLETION_CONTEXT CompletionContext; // r14
  ULONG Flags; // eax
  ULONG *p_Flags; // r15
  __int64 FileObjectExtension; // rbx
  PIO_STATUS_BLOCK UserIosb; // rcx
  _DWORD *v16; // rcx
  unsigned int v17; // esi
  struct _KTHREAD *v18; // rax
  unsigned int v19; // eax
  ULONG DeviceType; // ecx
  struct _KTHREAD *CurrentThread; // rax
  PFILE_OBJECT v22; // r14
  _BYTE *FsContext; // rax
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r10
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  unsigned __int8 (__fastcall *v26)(PDEVICE_OBJECT, PIRP, _QWORD, PFILE_OBJECT, unsigned int *); // rax
  PFILE_OBJECT v27; // r9
  _DWORD *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edx
  struct _KTHREAD *v31; // r8
  unsigned int v32; // edx
  KPROCESSOR_MODE RequestorMode; // si
  PETHREAD Thread; // rcx
  ULONG v35; // eax
  _BYTE *v36; // rax
  struct _LIST_ENTRY *v37; // rbx
  ULONG v38; // eax
  KPRIORITY v39; // eax
  PFILE_OBJECT v40; // rsi
  int v41; // r14d
  KPROCESSOR_MODE v42; // r8
  NTSTATUS v43; // eax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v45; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  bool v49; // zf
  unsigned int FinalStatus; // [rsp+30h] [rbp-50h] BYREF
  char v52; // [rsp+34h] [rbp-4Ch]
  struct _IO_COMPLETION_CONTEXT *v53; // [rsp+38h] [rbp-48h] BYREF
  PFILE_OBJECT FileObject; // [rsp+40h] [rbp-40h] BYREF
  __int64 v55; // [rsp+48h] [rbp-38h] BYREF
  struct _LIST_ENTRY v56; // [rsp+50h] [rbp-30h] BYREF

  AllocationSize = Irp->Overlay.AllocationSize;
  v52 = a4;
  FileObject = a3;
  FinalStatus = 0;
  if ( (AllocationSize.LowPart & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    AllocationSize.QuadPart &= ~1uLL;
    Irp->Overlay.AllocationSize = AllocationSize;
  }
  CompletionContext = a3->CompletionContext;
  v53 = CompletionContext;
  if ( a6 || AllocationSize.QuadPart )
  {
    p_Flags = &Irp->Flags;
    if ( (Irp->Flags & 0x200000) == 0 )
    {
      if ( (a3->Flags & 2) != 0 )
        Irp->AllocationFlags |= 2u;
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  Flags = Irp->Flags;
  p_Flags = &Irp->Flags;
  if ( (Flags & 0x200000) != 0 )
  {
LABEL_23:
    if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)a3, 0) )
      goto LABEL_28;
LABEL_27:
    IopQueueThreadIrp((__int64)Irp);
    goto LABEL_28;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && CompletionContext )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)a3, 1) )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( (Flags & 0x10) != 0 )
    goto LABEL_27;
  if ( CompletionContext )
    goto LABEL_27;
  if ( !a3->FileObjectExtension )
    goto LABEL_27;
  FileObjectExtension = IopGetFileObjectExtension((__int64)a3, 2, 0LL);
  if ( !FileObjectExtension )
    goto LABEL_27;
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8)
      && *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process
      && IopQueueIrpToFileObject((__int64)Irp, (__int64)a3, 0) )
    {
      break;
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_27;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_28:
  v16 = FileObject->FileObjectExtension;
  if ( !v16 || (*v16 & 4) == 0 || !PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
  {
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
    v22 = FileObject;
    if ( (FileObject->Flags & 0x800000) != 0 && !a7 && (*p_Flags & 2) == 0 && (FileObject->Vpb->Flags & 0x40) == 0 )
    {
      FsContext = FileObject->FsContext;
      if ( FsContext )
      {
        if ( (FsContext[6] & 0x20) == 0 )
        {
          IopSetIrpPriorityHintFromFileObject((__int64)FileObject, (__int64)Irp);
          if ( IoGetIoPriorityHint(Irp) >= IoPriorityNormal && (BYTE12(xmmword_140D06910) & 4) == 0 )
          {
            BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
            FastIoDispatch = BaseFileSystemDeviceObject->DriverObject->FastIoDispatch;
            if ( FastIoDispatch->SizeOfFastIoDispatch >= 0xF0
              && (v26 = *(unsigned __int8 (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD, PFILE_OBJECT, unsigned int *))&FastIoDispatch[1].SizeOfFastIoDispatch) != 0LL )
            {
              if ( v26(BaseFileSystemDeviceObject, Irp, a6, FileObject, &FinalStatus) )
              {
                v17 = FinalStatus;
                goto LABEL_85;
              }
              v27 = FileObject;
            }
            else
            {
              v27 = FileObject;
            }
            v17 = IopCallDriverReference(DeviceObject, Irp, a6, v27, 0);
            FinalStatus = v17;
LABEL_85:
            CompletionContext = v53;
            goto LABEL_86;
          }
        }
      }
    }
    if ( !a6 )
      ObfReferenceObject(FileObject);
    v28 = FileObject->FileObjectExtension;
    if ( v28 && v28[20] )
    {
      v29 = *p_Flags & 0xFFF1FFFF;
      *p_Flags = v29;
      v30 = v28[20];
LABEL_67:
      *p_Flags = v29 | (v30 << 17);
      RequestorMode = Irp->RequestorMode;
      if ( IoGetIoPriorityHint(Irp) < IoPriorityNormal )
      {
        if ( RequestorMode
          || (Thread = Irp->Tail.Overlay.Thread) != 0LL
          && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
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
        else
        {
          v35 = *p_Flags;
          ++IoKernelIssuedIoBoostedCount;
          *p_Flags = v35 & 0xFFF1FFFF | 0x60000;
        }
      }
      if ( (Irp->AllocationFlags & 0x80u) == 0
        && (v36 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
        && (*v36 & 2) != 0 )
      {
        v56 = *(struct _LIST_ENTRY *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
        v37 = IoSetActivityIdThread(&v56);
        v17 = IofCallDriver(DeviceObject, Irp);
        IoSetActivityIdThread(v37);
      }
      else
      {
        v17 = IofCallDriver(DeviceObject, Irp);
      }
      if ( !a6 )
        ObDereferenceObjectDeferDelete(v22);
      FinalStatus = v17;
      goto LABEL_85;
    }
    v31 = KeGetCurrentThread();
    v32 = (*((_DWORD *)&v31[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v31->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v32 = 0;
    }
    else if ( v32 >= 2 )
    {
LABEL_66:
      v30 = v32 + 1;
      v29 = *p_Flags & 0xFFF1FFFF;
      *p_Flags = v29;
      goto LABEL_67;
    }
    if ( v31 == KeGetCurrentThread() && LODWORD(v31[1].Timer.TimerListEntry.Flink) )
      v32 = 2;
    goto LABEL_66;
  }
  FinalStatus = -1073739504;
  Irp->IoStatus.Status = -1073739504;
  IofCompleteRequest(Irp, 0);
  v17 = FinalStatus;
LABEL_86:
  if ( v52 && v17 != 259 )
  {
    if ( (*p_Flags & 0x200000) != 0 )
    {
      v38 = DeviceObject->DeviceType;
      v39 = v38 == 8 || v38 == 20;
      IopIoRingCompleteIrp(Irp, v39);
      v17 = FinalStatus;
    }
    else
    {
      v55 = 0LL;
      v53 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v55, &v53, (ULONG_PTR *)&FileObject, &v53);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v45 = KeGetCurrentIrql();
          if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v49 = (v48 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v48;
            if ( v49 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      v17 = FinalStatus;
    }
  }
  if ( a6 )
  {
    if ( v17 == 259 )
    {
      v40 = FileObject;
      if ( EnableFeatureServicing_40851744 == 1
        || EnableFeatureServicing_40851744 && FeatureServicing_40851744_EnableKey() )
      {
        IopWaitForSynchronousIoEvent(Irp, a5, (v40->Flags & 4) != 0, &v40->Event.Header.LockNV);
      }
      else
      {
        v41 = v40->Flags & 4;
        while ( (v40->Event.Header.Type & 0x7F) != 0 || !v40->Event.Header.SignalState )
        {
          v42 = a5;
          if ( !v41 )
            v42 = 0;
          v43 = KeWaitForSingleObject(&v40->Event, Executive, v42, 1u, 0LL);
          if ( v43 != 257 && v43 != 192 )
            break;
          if ( v41
            || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
            || IopCheckIrpCancelled((__int64)&v40->Event, (__int64)Irp) )
          {
            IopCancelAlertedRequest(&v40->Event.Header.LockNV, Irp);
            break;
          }
        }
      }
      FinalStatus = v40->FinalStatus;
    }
    IopReleaseFileObjectLock((volatile __int32 *)&FileObject->Type);
    return FinalStatus;
  }
  else
  {
    if ( CompletionContext && (v17 & 0xC0000000) == 0x80000000 )
      return 259;
    return v17;
  }
}
