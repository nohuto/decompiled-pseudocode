/*
 * XREFs of IopSynchronousServiceTail @ 0x1406107D0
 * Callers:
 *     IopQueueCopyWrite @ 0x1403F0EC0 (IopQueueCopyWrite.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     IopWriteFile @ 0x1405CCA7C (IopWriteFile.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     NtQueryDirectoryFileEx @ 0x1405F9FB0 (NtQueryDirectoryFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x1406077E0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406B6C50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BCBF0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140769230 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IoSetActivityIdThread @ 0x1402401D0 (IoSetActivityIdThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14024E710 (IoSetDiskIoAttributionFromThread.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 *     IoGetIoPriorityHint @ 0x1402D8E50 (IoGetIoPriorityHint.c)
 *     IopQueueIrpToFileObject @ 0x1403403C0 (IopQueueIrpToFileObject.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F057C (IopWaitForSynchronousIoEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     IopCheckIrpCancelled @ 0x1404FEAF0 (IopCheckIrpCancelled.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     PsIsProcessAppContainer @ 0x1406CF334 (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
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
  LARGE_INTEGER AllocationSize; // rax
  char v9; // bp
  __int64 v13; // r15
  __int64 FileObjectExtension; // rbx
  PIO_STATUS_BLOCK UserIosb; // rcx
  _DWORD *v16; // rcx
  unsigned int v17; // esi
  struct _KTHREAD *v18; // rax
  unsigned int v19; // eax
  ULONG DeviceType; // ecx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v22; // rbp
  __int64 v23; // rcx
  ULONG v24; // eax
  unsigned int v25; // ecx
  struct _KTHREAD *v26; // r8
  unsigned int v27; // edx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  PETHREAD Thread; // rdx
  ULONG Flags; // eax
  _BYTE *v31; // rax
  struct _LIST_ENTRY *v33; // rbx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  _DWORD *v40; // rsi
  int v41; // ebp
  KPROCESSOR_MODE v42; // r8
  NTSTATUS v43; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v46; // [rsp+38h] [rbp-60h] BYREF
  __int64 v47; // [rsp+40h] [rbp-58h] BYREF
  struct _LIST_ENTRY v48; // [rsp+48h] [rbp-50h] BYREF

  AllocationSize = Irp->Overlay.AllocationSize;
  v9 = a5;
  Object = (PVOID)a3;
  if ( (AllocationSize.LowPart & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    AllocationSize.QuadPart &= ~1uLL;
    Irp->Overlay.AllocationSize = AllocationSize;
  }
  v13 = *(_QWORD *)(a3 + 176);
  if ( a6 || AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_23;
  }
  if ( !Irp->Overlay.AsynchronousParameters.UserApcContext || Irp->UserEvent || !v13 )
  {
    if ( (Irp->Flags & 0x10) == 0 && !v13 )
    {
      if ( *(_QWORD *)(a3 + 208) )
      {
        FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL);
        if ( FileObjectExtension )
        {
          while ( 1 )
          {
            UserIosb = Irp->UserIosb;
            if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
              && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8)
              && *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process
              && IopQueueIrpToFileObject((__int64)Irp, a3) )
            {
              break;
            }
            FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
            if ( !FileObjectExtension )
              goto LABEL_23;
          }
          Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                           + *(_QWORD *)(FileObjectExtension + 24)
                                           - *(_QWORD *)FileObjectExtension);
          goto LABEL_24;
        }
      }
    }
    goto LABEL_23;
  }
  if ( !IopQueueIrpToFileObject((__int64)Irp, a3) )
LABEL_23:
    IopQueueThreadIrp((__int64)Irp);
LABEL_24:
  v16 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v16 && (*v16 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v17 = -1073739504;
    Irp->IoStatus.Status = -1073739504;
    IofCompleteRequest(Irp, 0);
    goto LABEL_70;
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
  v22 = Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v23 = *((_QWORD *)Object + 26);
  if ( v23 && *(_DWORD *)(v23 + 80) )
  {
    v24 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v24;
    v25 = *(_DWORD *)(v23 + 80);
  }
  else
  {
    v26 = KeGetCurrentThread();
    v27 = (*((_DWORD *)&v26[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v26->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v27 = 0;
    if ( v27 < 2 && v26 == KeGetCurrentThread() && LODWORD(v26[1].Timer.TimerListEntry.Flink) )
      v27 = 2;
    v25 = v27 + 1;
    v24 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v24;
  }
  Irp->Flags = v24 | (v25 << 17);
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  if ( Irp->RequestorMode )
    goto LABEL_54;
  if ( IoPriorityHint >= IoPriorityNormal )
    goto LABEL_59;
  Thread = Irp->Tail.Overlay.Thread;
  if ( Thread )
  {
    if ( (Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0 )
    {
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
      goto LABEL_59;
    }
  }
  Flags = Irp->Flags;
  ++IoKernelIssuedIoBoostedCount;
  Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
LABEL_59:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v31 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v31 & 2) != 0 )
  {
    v48 = *(struct _LIST_ENTRY *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
    v33 = IoSetActivityIdThread(&v48);
    v17 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v33);
  }
  else
  {
    v17 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v22);
  v9 = a5;
LABEL_70:
  if ( a4 && v17 != 259 )
  {
    v47 = 0LL;
    v46 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v47, &v46, (ULONG_PTR *)&Object, &v46);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v39 = (v38 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v38;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v17 == 259 )
    {
      v40 = Object;
      if ( EnableFeatureServicing_40524482 == 1
        || EnableFeatureServicing_40524482 && FeatureServicing_40524482_EnableKey() )
      {
        IopWaitForSynchronousIoEvent(Irp, v9, (v40[20] & 4) != 0, v40 + 38);
      }
      else
      {
        v41 = v40[20] & 4;
        while ( (v40[38] & 0x7F) != 0 || !v40[39] )
        {
          v42 = a5;
          if ( !v41 )
            v42 = 0;
          v43 = KeWaitForSingleObject(v40 + 38, Executive, v42, 1u, 0LL);
          if ( v43 != 257 && v43 != 192 )
            break;
          if ( v41
            || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
            || IopCheckIrpCancelled((__int64)(v40 + 38), (__int64)Irp) )
          {
            IopCancelAlertedRequest(v40 + 38, Irp);
            v17 = v40[14];
            IopReleaseFileObjectLock((PADAPTER_OBJECT)Object);
            return v17;
          }
        }
      }
      v17 = v40[14];
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)Object);
  }
  else if ( v13 && (v17 & 0xC0000000) == 0x80000000 )
  {
    return 259;
  }
  return v17;
}
