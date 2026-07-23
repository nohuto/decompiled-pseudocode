/*
 * XREFs of NtSetInformationFile @ 0x14020FE90
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopUpdateOtherOperationCount @ 0x14020A4D0 (IopUpdateOtherOperationCount.c)
 *     IopCallDriverReference @ 0x14020A830 (IopCallDriverReference.c)
 *     KeSetKernelStackSwapEnable @ 0x14020AC60 (KeSetKernelStackSwapEnable.c)
 *     IopWaitForSynchronousIo @ 0x14020AD88 (IopWaitForSynchronousIo.c)
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x14021E6F0 (KeReleaseSpinLock.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IopAllocateFileObjectExtension @ 0x14029FD20 (IopAllocateFileObjectExtension.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     IopReplaceCompletionPort @ 0x14038CA0C (IopReplaceCompletionPort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopTrackLink @ 0x14069FC10 (IopTrackLink.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C7690 (IopOpenLinkOrRenameTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140896D1C (IopSetFileMemoryPartitionInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r13
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int8 v9; // si
  FILE_INFORMATION_CLASS v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rax
  int v16; // edi
  char IsSandboxedToken; // bl
  NTSTATUS result; // eax
  NTSTATUS v19; // edi
  PFILE_OBJECT v20; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  PDEVICE_OBJECT v22; // r12
  struct _KTHREAD *v23; // rax
  __int64 v24; // r9
  LARGE_INTEGER v25; // rax
  int SectorSize; // ecx
  struct _KTHREAD *v27; // rcx
  char v28; // r12
  NTSTATUS v29; // ebx
  KEVENT *p_Event; // rax
  IRP *v31; // rax
  IRP *v32; // rsi
  PIO_STATUS_BLOCK v33; // rax
  struct _KEVENT *v34; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _IRP *PoolWithQuota; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  struct _IRP *MasterIrp; // r9
  int v40; // r8d
  PFILE_OBJECT v41; // rcx
  ULONG Flags; // eax
  ULONG v43; // eax
  ULONG v44; // ecx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  struct _IRP *v47; // r8
  unsigned int v48; // ecx
  BOOLEAN Type; // al
  int v50; // eax
  struct _IRP *v51; // rcx
  void **v52; // r14
  void *v53; // rcx
  struct _IO_COMPLETION_CONTEXT *PoolWithTag; // rbx
  KIRQL v55; // dl
  struct _IRP *v56; // r14
  struct _DMA_ADAPTER *v57; // rbx
  PFILE_OBJECT v58; // rcx
  void *v59; // rax
  struct _IRP *v60; // r8
  PFILE_OBJECT v61; // rax
  ULONG v62; // edx
  int v63; // ecx
  KPROCESSOR_MODE v64; // bl
  struct _IRP *v65; // rbx
  struct _IRP *v66; // rax
  bool v67; // zf
  NTSTATUS v68; // eax
  BOOLEAN v69; // al
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v71; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v74; // eax
  KPROCESSOR_MODE v75; // [rsp+30h] [rbp-E8h]
  BOOLEAN v76; // [rsp+31h] [rbp-E7h]
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-E0h] BYREF
  char v78; // [rsp+40h] [rbp-D8h]
  _BYTE DeviceObject[15]; // [rsp+41h] [rbp-D7h] BYREF
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v81; // [rsp+58h] [rbp-C0h] BYREF
  char *v82; // [rsp+68h] [rbp-B0h]
  struct _KTHREAD *v83; // [rsp+70h] [rbp-A8h]
  PIRP Irp; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v85; // [rsp+80h] [rbp-98h] BYREF
  __int64 v86; // [rsp+88h] [rbp-90h] BYREF
  __int64 v87; // [rsp+90h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-80h] BYREF
  __int128 v89; // [rsp+A0h] [rbp-78h] BYREF
  PVOID v90; // [rsp+B0h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-60h] BYREF
  LARGE_INTEGER v92; // [rsp+D8h] [rbp-40h]
  void *retaddr; // [rsp+118h] [rbp+0h]

  v5 = Length;
  v7 = (int)FileHandle;
  FileObject = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v89 = 0LL;
  Handle = 0LL;
  v76 = 0;
  v78 = 0;
  DeviceObject[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v83 = CurrentThread;
  v9 = CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v75 = v9;
  if ( v9 )
  {
    v10 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= FileMaximumInformation )
      return -1073741821;
    v11 = *((unsigned __int8 *)IopSetOperationLength + (int)FileInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( (unsigned int)v5 < v11 )
      return -1073741820;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
    {
      if ( (_DWORD)v5 )
      {
        v15 = 0LL;
        if ( (_DWORD)v5 != 1 )
          v15 = 3LL;
        if ( (v15 & (unsigned __int64)FileInformation) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_17:
        if ( (unsigned __int64)FileInformation + v5 > 0x7FFFFFFF0000LL || (char *)FileInformation + v5 < FileInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (_DWORD)v5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      goto LABEL_17;
    }
    v16 = IopSetOperationAccess[FileInformationClass];
    if ( FileInformationClass == FileLinkInformation || FileInformationClass == FileLinkInformationEx )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
        v16 |= 0x100u;
    }
    goto LABEL_36;
  }
  v10 = FileInformationClass;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      v10 = FileRenameInformation;
      v78 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      v10 = FileRenameInformationEx;
      v78 = 1;
      break;
    case FileLinkInformationBypassAccessCheck:
      v10 = FileLinkInformation;
      v78 = 1;
      break;
    case FileLinkInformationExBypassAccessCheck:
      v10 = FileLinkInformationEx;
      v78 = 1;
      break;
    case FileCaseSensitiveInformationForceAccessCheck:
      v10 = FileCaseSensitiveInformation;
      DeviceObject[2] = 1;
      break;
  }
  v16 = IopSetOperationAccess[v10];
LABEL_36:
  result = IopReferenceFileObject(v7, v16, v9, (int)&FileObject, 0LL);
  v19 = result;
  if ( result < 0 )
    return result;
  v20 = FileObject;
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    AttachedDevice = IoGetAttachedDevice(FileObject->DeviceObject);
  }
  else
  {
    AttachedDevice = IoGetRelatedDeviceObject(FileObject);
    v20 = FileObject;
  }
  v22 = AttachedDevice;
  *(_QWORD *)&DeviceObject[7] = AttachedDevice;
  if ( (v20->Flags & 2) != 0 )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v24 = KeAbPreAcquire((ULONG_PTR)&v20->Lock);
    DeviceObject[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v20->Busy, 1) )
    {
      v19 = IopWaitAndAcquireFileObjectLock(v20, (__int64)DeviceObject);
    }
    else
    {
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      ObfReferenceObject(v20);
      v19 = 0;
    }
    *(_DWORD *)&DeviceObject[3] = v19;
    if ( DeviceObject[0] )
    {
LABEL_58:
      HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
      return v19;
    }
    if ( v10 == FilePositionInformation )
    {
      if ( (unsigned int)v5 < 8 )
      {
        IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
        HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
        return -1073741820;
      }
      v25 = *(LARGE_INTEGER *)FileInformation;
      v92 = *(LARGE_INTEGER *)FileInformation;
      if ( (FileObject->Flags & 8) != 0
        && (SectorSize = v22->SectorSize, (_WORD)SectorSize)
        && ((SectorSize - 1) & v25.LowPart) != 0
        || v25.HighPart < 0 )
      {
        v19 = -1073741811;
      }
      else
      {
        FileObject->CurrentByteOffset = v25;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 0LL;
      }
      v27 = KeGetCurrentThread();
      v27->OtherTransferCount += (unsigned int)v5;
      __addgsqword(0x2EF8u, (unsigned int)v5);
      IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
      goto LABEL_58;
    }
    v28 = 1;
    v20 = FileObject;
  }
  else
  {
    LOWORD(v81) = 1;
    BYTE2(v81) = 6;
    DWORD1(v81) = 0;
    v82 = (char *)&v81 + 8;
    *((_QWORD *)&v81 + 1) = (char *)&v81 + 8;
    v28 = 0;
  }
  DeviceObject[1] = v28;
  IopResetEvent(v20);
  if ( v10 != FileTrackingInformation )
  {
    v31 = (IRP *)IopAllocateIrpExReturn(
                   *(_QWORD *)&DeviceObject[7],
                   *(unsigned __int8 *)(*(_QWORD *)&DeviceObject[7] + 76LL),
                   (unsigned __int8)v28 ^ 1u,
                   retaddr);
    v32 = v31;
    Irp = v31;
    if ( !v31 )
    {
      IopAllocateIrpCleanup((PADAPTER_OBJECT)FileObject, 0LL);
      return -1073741670;
    }
    v31->Tail.Overlay.OriginalFileObject = FileObject;
    v31->Tail.Overlay.Thread = v83;
    v31->RequestorMode = v75;
    if ( v28 )
    {
      v31->AllocationFlags |= 2u;
      v33 = IoStatusBlock;
      v34 = 0LL;
    }
    else
    {
      if ( v75 == 1 )
        v76 = KeSetKernelStackSwapEnable(0);
      v32->Flags = 4;
      v33 = (PIO_STATUS_BLOCK)&v89;
      v34 = (struct _KEVENT *)&v81;
    }
    v32->UserEvent = v34;
    v32->UserIosb = v33;
    v32->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v32->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 6;
    CurrentStackLocation[-1].FileObject = FileObject;
    v32->AssociatedIrp.MasterIrp = 0LL;
    v32->MdlAddress = 0LL;
    PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota((__int64)v34, v5);
    v83 = (struct _KTHREAD *)PoolWithQuota;
    v32->AssociatedIrp.MasterIrp = PoolWithQuota;
    memmove(PoolWithQuota, FileInformation, v5);
    if ( ((unsigned int)(v10 - 19) <= 1 || v10 == FilePositionInformation) && v83->Header.SignalState < 0 )
      RtlRaiseStatus(-1073741811);
    v32->Flags |= 0x830u;
    CurrentStackLocation[-1].Parameters.Read.Length = v5;
    CurrentStackLocation[-1].Parameters.Create.Options = v10;
    if ( v78 || DeviceObject[2] )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp(v32);
    IopUpdateOtherOperationCount();
    if ( v10 == FileModeInformation )
    {
      MasterIrp = v32->AssociatedIrp.MasterIrp;
      v40 = *(_DWORD *)&MasterIrp->Type;
      if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0 )
      {
        v41 = FileObject;
        if ( ((v40 & 0x30) == 0 || (FileObject->Flags & 2) != 0)
          && ((v40 & 0x30) != 0 || (FileObject->Flags & 2) == 0)
          && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
        {
          Flags = FileObject->Flags;
          if ( (Flags & 8) == 0 )
          {
            if ( (v40 & 2) != 0 )
              v43 = Flags | 0x10;
            else
              v43 = Flags & 0xFFFFFFEF;
            FileObject->Flags = v43;
            v41 = FileObject;
          }
          if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
            v41->Flags |= 0x20u;
          else
            v41->Flags &= ~0x20u;
          v44 = FileObject->Flags;
          if ( (v44 & 2) != 0 )
          {
            if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
            {
              FileObject->Flags = v44 | 4;
              v19 = 0;
              v32->IoStatus.Status = 0;
              v32->IoStatus.Information = 0LL;
LABEL_179:
              v64 = v75;
              goto LABEL_180;
            }
            FileObject->Flags = v44 & 0xFFFFFFFB;
          }
          v19 = 0;
          v32->IoStatus.Status = 0;
          v32->IoStatus.Information = 0LL;
          goto LABEL_179;
        }
      }
      goto LABEL_104;
    }
    v45 = (unsigned int)(v10 - 10);
    if ( (unsigned int)v45 <= 0x3E )
    {
      v46 = 0x4080000000200003LL;
      if ( _bittest64(&v46, v45) )
      {
        v47 = v32->AssociatedIrp.MasterIrp;
        v48 = v47->Flags;
        if ( !v48 || (v48 & 1) != 0 || (int)v5 - 20 < v48 )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        if ( v10 == FileMoveClusterInformation )
        {
          CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)&v47->Type;
        }
        else
        {
          if ( v10 == FileRenameInformationEx || v10 == FileLinkInformationEx )
            Type = v47->Type & 1;
          else
            Type = v47->Type;
          CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = Type;
        }
        if ( *((_WORD *)&v47->Flags + 2) == 92 || v47->MdlAddress )
        {
          v50 = IopOpenLinkOrRenameTarget(&Handle, v32, v47, FileObject);
          v19 = v50;
          if ( v50 < 0 )
          {
            v32->IoStatus.Status = v50;
            goto LABEL_179;
          }
        }
        goto LABEL_178;
      }
    }
    switch ( v10 )
    {
      case FileShortNameInformation:
        v51 = v32->AssociatedIrp.MasterIrp;
        if ( (unsigned int)(v5 - 4) < *(_DWORD *)&v51->Type )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        if ( *(&v51->Size + 1) == 92 )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        goto LABEL_178;
      case FileDispositionInformation:
      case FileDispositionInformationEx:
        v66 = v32->AssociatedIrp.MasterIrp;
        if ( v10 == FileDispositionInformationEx )
          v67 = (*(_DWORD *)&v66->Type & 1) == 0;
        else
          v67 = LOBYTE(v66->Type) == 0;
        if ( !v67 )
          CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)FileHandle;
        goto LABEL_178;
      case FileCompletionInformation:
        v52 = (void **)v32->AssociatedIrp.MasterIrp;
        if ( !FileObject->CompletionContext && (FileObject->Flags & 2) == 0 )
        {
          v53 = *v52;
          Object = 0LL;
          v19 = ObReferenceObjectByHandle(v53, 2u, IoCompletionObjectType, v75, &Object, 0LL);
          if ( v19 >= 0 )
          {
            PoolWithTag = (struct _IO_COMPLETION_CONTEXT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x63436F49u);
            if ( PoolWithTag )
            {
              v55 = KeAcquireSpinLockRaiseToDpc(&FileObject->IrpListLock);
              if ( FileObject->CompletionContext )
              {
                KeReleaseSpinLock(&FileObject->IrpListLock, v55);
                ExFreePoolWithTag(PoolWithTag, 0);
                HalPutDmaAdapter((PADAPTER_OBJECT)Object);
                v19 = -1073741752;
                v32->IoStatus.Status = -1073741752;
              }
              else
              {
                FileObject->Flags &= ~0x400u;
                PoolWithTag->Port = Object;
                PoolWithTag->Key = v52[1];
                PoolWithTag[1].Port = 0LL;
                FileObject->CompletionContext = PoolWithTag;
                v19 = 0;
                KeReleaseSpinLock(&FileObject->IrpListLock, v55);
                v32->IoStatus.Status = 0;
              }
              v32->IoStatus.Information = 0LL;
            }
            else
            {
              HalPutDmaAdapter((PADAPTER_OBJECT)Object);
              v19 = -1073741670;
              v32->IoStatus.Status = -1073741670;
              v32->IoStatus.Information = 0LL;
            }
            goto LABEL_179;
          }
          goto LABEL_105;
        }
LABEL_104:
        v19 = -1073741811;
LABEL_105:
        v32->IoStatus.Status = v19;
        v32->IoStatus.Information = 0LL;
        goto LABEL_179;
      case FileReplaceCompletionInformation:
        v56 = v32->AssociatedIrp.MasterIrp;
        v57 = 0LL;
        v90 = 0LL;
        v58 = FileObject;
        if ( FileObject->CompletionContext )
        {
          v59 = *(void **)&v56->Type;
          if ( *(_QWORD *)&v56->Type )
          {
            v85 = 0LL;
            v19 = ObReferenceObjectByHandle(v59, 2u, IoCompletionObjectType, v75, &v85, 0LL);
            v57 = (struct _DMA_ADAPTER *)v85;
            v90 = v85;
            v58 = FileObject;
          }
          if ( v19 >= 0 )
          {
            v19 = IopReplaceCompletionPort(v58, v57, v56->MdlAddress);
            if ( v57 )
            {
              HalPutDmaAdapter(v57);
              v32->IoStatus.Status = v19;
              v32->IoStatus.Information = 0LL;
              goto LABEL_179;
            }
          }
          goto LABEL_105;
        }
        goto LABEL_104;
      case FileIoCompletionNotificationInformation:
        v60 = v32->AssociatedIrp.MasterIrp;
        v61 = FileObject;
        v62 = FileObject->Flags;
        if ( (v62 & 2) != 0 )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          v32->IoStatus.Information = 0LL;
        }
        else
        {
          v19 = 0;
          v63 = *(_DWORD *)&v60->Type;
          if ( (*(_DWORD *)&v60->Type & 1) != 0 )
          {
            FileObject->Flags = v62 | 0x2000000;
            v63 = *(_DWORD *)&v60->Type;
            v61 = FileObject;
          }
          if ( (v63 & 2) != 0 )
          {
            v61->Flags |= 0x4000000u;
            v63 = *(_DWORD *)&v60->Type;
            v61 = FileObject;
          }
          if ( (v63 & 4) != 0 )
            v61->Flags |= 0x8000000u;
          v32->IoStatus.Status = 0;
          v32->IoStatus.Information = 0LL;
        }
        goto LABEL_179;
      case FileIoStatusBlockRangeInformation:
        v64 = v75;
        if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v75) )
        {
          if ( (FileObject->Flags & 2) != 0 )
          {
            v19 = -1073741811;
            v32->IoStatus.Status = -1073741811;
          }
          else
          {
            v19 = IopSetFileObjectIosbRange(FileObject, v32);
            v32->IoStatus.Status = v19;
          }
          v32->IoStatus.Information = 0LL;
        }
        else
        {
          v19 = -1073741727;
          v32->IoStatus.Status = -1073741727;
          v32->IoStatus.Information = 0LL;
        }
        break;
      case FileIoPriorityHintInformation:
        v86 = 0LL;
        v65 = v32->AssociatedIrp.MasterIrp;
        if ( *(_DWORD *)&v65->Type <= 2u )
        {
          v19 = IopAllocateFileObjectExtension(FileObject, &v86, v37, v38);
          if ( v19 >= 0 )
          {
            *(_DWORD *)(v86 + 80) = *(_DWORD *)&v65->Type + 1;
            v32->IoStatus.Status = v19;
            v32->IoStatus.Information = 0LL;
            goto LABEL_179;
          }
          goto LABEL_105;
        }
        goto LABEL_104;
      case FileMemoryPartitionInformation:
        v64 = v75;
        if ( v75 )
        {
          v19 = -1073741790;
          v32->IoStatus.Status = -1073741790;
        }
        else
        {
          v19 = IopSetFileMemoryPartitionInformation(FileObject, v32->AssociatedIrp.MasterIrp, (unsigned int)v5);
          v32->IoStatus.Status = v19;
        }
        v32->IoStatus.Information = 0LL;
        break;
      default:
LABEL_178:
        v19 = IopCallDriverReference(*(PDEVICE_OBJECT *)&DeviceObject[7], v32, v28, FileObject, 2);
        goto LABEL_179;
    }
LABEL_180:
    if ( v19 == 259 )
    {
      if ( !v28 )
      {
        v68 = KeWaitForSingleObject(&v81, Executive, v64, 0, 0LL);
        if ( v68 == 257 || v68 == 192 )
          IopCancelAlertedRequest(&v81, v32);
        v19 = v89;
        *(_OWORD *)&IoStatusBlock->Status = v89;
        v69 = v76;
        goto LABEL_199;
      }
      v19 = IopWaitForSynchronousIo(v32, (unsigned int *)FileObject, v64);
    }
    else
    {
      Irp = 0LL;
      v87 = 0LL;
      if ( !v28 )
        v32->UserEvent = 0LL;
      v32->UserIosb = IoStatusBlock;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest(
        (_DWORD)v32 + 120,
        (unsigned int)&Irp,
        (unsigned int)&v87,
        (unsigned int)&FileObject,
        (__int64)&v87);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && CurrentIrql <= 0xFu && v71 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v67 = (v74 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v74;
            if ( v67 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( !v28 )
        goto LABEL_198;
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
LABEL_198:
    v69 = v76;
LABEL_199:
    if ( v69 )
      KeSetKernelStackSwapEnable(1u);
    if ( Handle )
      ObCloseHandle(Handle, 0);
    return v19;
  }
  if ( (unsigned int)v5 >= 0x10 )
  {
    p_Event = &FileObject->Event;
    if ( !v28 )
      p_Event = (KEVENT *)&v81;
    v29 = IopTrackLink(FileObject, (__int64)p_Event, v9);
    *(_DWORD *)&DeviceObject[3] = v29;
    if ( v29 >= 0 )
    {
      IoStatusBlock->Information = 0LL;
      IoStatusBlock->Status = v29;
    }
  }
  else
  {
    v29 = -1073741820;
  }
  if ( v28 )
    IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
  return v29;
}
