/*
 * XREFs of NtSetInformationFile @ 0x1402F72B0
 * Callers:
 *     DifNtSetInformationFileWrapper @ 0x140618030 (DifNtSetInformationFileWrapper.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1402A3A60 (IopAllocateFileObjectExtension.c)
 *     IopWaitForSynchronousIo @ 0x1402A41A4 (IopWaitForSynchronousIo.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     IopUpdateOtherOperationCount @ 0x1402F672C (IopUpdateOtherOperationCount.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     IopCallDriverReference @ 0x1402F8AE0 (IopCallDriverReference.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IopReplaceCompletionPort @ 0x1403989FC (IopReplaceCompletionPort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C78D4 (IopOpenLinkOrRenameTarget.c)
 *     IopTrackLink @ 0x1406D3128 (IopTrackLink.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140936BF8 (IopSetFileMemoryPartitionInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  size_t v5; // r13
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // si
  FILE_INFORMATION_CLASS v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  _KPROCESS *Process; // rax
  __int16 v14; // ax
  __int64 v15; // rax
  ACCESS_MASK v16; // edi
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
  struct _IRP *Pool2; // rax
  struct _IRP *MasterIrp; // r9
  int v38; // r8d
  PFILE_OBJECT v39; // rcx
  ULONG Flags; // eax
  ULONG v41; // eax
  ULONG v42; // ecx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  struct _IRP *v45; // r8
  unsigned int v46; // ecx
  BOOLEAN Type; // al
  int v48; // eax
  struct _IRP *v49; // rcx
  void **v50; // r14
  void *v51; // rcx
  struct _IO_COMPLETION_CONTEXT *v52; // rbx
  KIRQL v53; // dl
  struct _IRP *v54; // r14
  PVOID v55; // rbx
  PFILE_OBJECT v56; // rcx
  void *v57; // rax
  struct _IRP *v58; // r8
  PFILE_OBJECT v59; // rax
  ULONG v60; // edx
  int v61; // ecx
  KPROCESSOR_MODE v62; // bl
  struct _IRP *v63; // rbx
  struct _IRP *v64; // rax
  bool v65; // zf
  NTSTATUS v66; // eax
  BOOLEAN v67; // al
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v69; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v72; // eax
  KPROCESSOR_MODE v73; // [rsp+30h] [rbp-E8h]
  BOOLEAN v74; // [rsp+31h] [rbp-E7h]
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-E0h] BYREF
  char v76; // [rsp+40h] [rbp-D8h]
  _BYTE DeviceObject[15]; // [rsp+41h] [rbp-D7h] BYREF
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v79; // [rsp+58h] [rbp-C0h] BYREF
  char *v80; // [rsp+68h] [rbp-B0h]
  struct _KTHREAD *v81; // [rsp+70h] [rbp-A8h]
  PIRP Irp; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v83; // [rsp+80h] [rbp-98h] BYREF
  __int64 v84; // [rsp+88h] [rbp-90h] BYREF
  __int64 v85; // [rsp+90h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-80h] BYREF
  __int128 v87; // [rsp+A0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-68h] BYREF
  LARGE_INTEGER v89; // [rsp+D0h] [rbp-48h]

  v5 = Length;
  FileObject = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v87 = 0LL;
  Handle = 0LL;
  v74 = 0;
  v76 = 0;
  DeviceObject[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v81 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v73 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= (FileMaximumInformation|FileDirectoryInformation) )
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
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30]
      && ((v14 = WORD2(Process[2].Affinity.StaticBitmap[20]), v14 == 332) || v14 == 452) )
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
      v76 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      v10 = FileRenameInformationEx;
      v76 = 1;
      break;
    case FileLinkInformationBypassAccessCheck:
      v10 = FileLinkInformation;
      v76 = 1;
      break;
    case FileLinkInformationExBypassAccessCheck:
      v10 = FileLinkInformationEx;
      v76 = 1;
      break;
    case FileCaseSensitiveInformationForceAccessCheck:
      v10 = FileCaseSensitiveInformation;
      DeviceObject[2] = 1;
      break;
  }
  v16 = IopSetOperationAccess[v10];
LABEL_36:
  result = IopReferenceFileObject(FileHandle, v16, PreviousMode, (PVOID *)&FileObject, 0LL);
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
    v24 = KeAbPreAcquire(&v20->Lock, 0LL, 0LL);
    DeviceObject[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v20->Busy, 1) )
    {
      v19 = IopWaitAndAcquireFileObjectLock(v20, (__int64)DeviceObject);
    }
    else
    {
      if ( v24 )
        *(_BYTE *)(v24 + 18) = 1;
      ObfReferenceObject(v20);
      v19 = 0;
    }
    *(_DWORD *)&DeviceObject[3] = v19;
    if ( DeviceObject[0] )
    {
LABEL_58:
      ObfDereferenceObject(FileObject);
      return v19;
    }
    if ( v10 == FilePositionInformation )
    {
      if ( (unsigned int)v5 < 8 )
      {
        IopReleaseFileObjectLock((volatile __int32 *)&FileObject->Type);
        ObfDereferenceObject(FileObject);
        return -1073741820;
      }
      v25 = *(LARGE_INTEGER *)FileInformation;
      v89 = *(LARGE_INTEGER *)FileInformation;
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
      IopReleaseFileObjectLock((volatile __int32 *)&FileObject->Type);
      goto LABEL_58;
    }
    v28 = 1;
    v20 = FileObject;
  }
  else
  {
    LOWORD(v79) = 1;
    BYTE2(v79) = 6;
    DWORD1(v79) = 0;
    v80 = (char *)&v79 + 8;
    *((_QWORD *)&v79 + 1) = (char *)&v79 + 8;
    v28 = 0;
  }
  DeviceObject[1] = v28;
  IopResetEvent((__int64)v20);
  if ( v10 != FileTrackingInformation )
  {
    v31 = (IRP *)IopAllocateIrpExReturn(
                   *(__int64 *)&DeviceObject[7],
                   *(unsigned __int8 *)(*(_QWORD *)&DeviceObject[7] + 76LL),
                   (unsigned __int8)v28 ^ 1u);
    v32 = v31;
    Irp = v31;
    if ( !v31 )
    {
      IopAllocateIrpCleanup(FileObject, 0LL);
      return -1073741670;
    }
    v31->Tail.Overlay.OriginalFileObject = FileObject;
    v31->Tail.Overlay.Thread = v81;
    v31->RequestorMode = v73;
    if ( v28 )
    {
      v31->AllocationFlags |= 2u;
      v33 = IoStatusBlock;
      v34 = 0LL;
    }
    else
    {
      if ( v73 == 1 )
        v74 = KeSetKernelStackSwapEnable(0);
      v32->Flags = 4;
      v33 = (PIO_STATUS_BLOCK)&v87;
      v34 = (struct _KEVENT *)&v79;
    }
    v32->UserEvent = v34;
    v32->UserIosb = v33;
    v32->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v32->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 6;
    CurrentStackLocation[-1].FileObject = FileObject;
    v32->AssociatedIrp.MasterIrp = 0LL;
    v32->MdlAddress = 0LL;
    Pool2 = (struct _IRP *)ExAllocatePool2(97LL, v5, 1112764233LL);
    v81 = (struct _KTHREAD *)Pool2;
    v32->AssociatedIrp.MasterIrp = Pool2;
    memmove(Pool2, FileInformation, v5);
    if ( ((unsigned int)(v10 - 19) <= 1 || v10 == FilePositionInformation) && v81->Header.SignalState < 0 )
      RtlRaiseStatus(-1073741811);
    v32->Flags |= 0x830u;
    CurrentStackLocation[-1].Parameters.Read.Length = v5;
    CurrentStackLocation[-1].Parameters.Create.Options = v10;
    if ( v76 || DeviceObject[2] )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v32);
    IopUpdateOtherOperationCount();
    if ( v10 == FileModeInformation )
    {
      MasterIrp = v32->AssociatedIrp.MasterIrp;
      v38 = *(_DWORD *)&MasterIrp->Type;
      if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0 )
      {
        v39 = FileObject;
        if ( ((v38 & 0x30) == 0 || (FileObject->Flags & 2) != 0)
          && ((v38 & 0x30) != 0 || (FileObject->Flags & 2) == 0)
          && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
        {
          Flags = FileObject->Flags;
          if ( (Flags & 8) == 0 )
          {
            if ( (v38 & 2) != 0 )
              v41 = Flags | 0x10;
            else
              v41 = Flags & 0xFFFFFFEF;
            FileObject->Flags = v41;
            v39 = FileObject;
          }
          if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
            v39->Flags |= 0x20u;
          else
            v39->Flags &= ~0x20u;
          v42 = FileObject->Flags;
          if ( (v42 & 2) != 0 )
          {
            if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
            {
              FileObject->Flags = v42 | 4;
              v19 = 0;
              v32->IoStatus.Status = 0;
              v32->IoStatus.Information = 0LL;
LABEL_179:
              v62 = v73;
              goto LABEL_180;
            }
            FileObject->Flags = v42 & 0xFFFFFFFB;
          }
          v19 = 0;
          v32->IoStatus.Status = 0;
          v32->IoStatus.Information = 0LL;
          goto LABEL_179;
        }
      }
      goto LABEL_104;
    }
    v43 = (unsigned int)(v10 - 10);
    if ( (unsigned int)v43 <= 0x3E )
    {
      v44 = 0x4080000000200003LL;
      if ( _bittest64(&v44, v43) )
      {
        v45 = v32->AssociatedIrp.MasterIrp;
        v46 = v45->Flags;
        if ( !v46 || (v46 & 1) != 0 || (int)v5 - 20 < v46 )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        if ( v10 == FileMoveClusterInformation )
        {
          CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)&v45->Type;
        }
        else
        {
          if ( v10 == FileRenameInformationEx || v10 == FileLinkInformationEx )
            Type = v45->Type & 1;
          else
            Type = v45->Type;
          CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = Type;
        }
        if ( *((_WORD *)&v45->Flags + 2) == 92 || v45->MdlAddress )
        {
          v48 = IopOpenLinkOrRenameTarget(&Handle, v32, v45, FileObject);
          v19 = v48;
          if ( v48 < 0 )
          {
            v32->IoStatus.Status = v48;
            goto LABEL_179;
          }
        }
        goto LABEL_178;
      }
    }
    switch ( v10 )
    {
      case FileShortNameInformation:
        v49 = v32->AssociatedIrp.MasterIrp;
        if ( (unsigned int)(v5 - 4) < *(_DWORD *)&v49->Type )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        if ( *(&v49->Size + 1) == 92 )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        goto LABEL_178;
      case FileDispositionInformation:
      case FileDispositionInformationEx:
        v64 = v32->AssociatedIrp.MasterIrp;
        if ( v10 == FileDispositionInformationEx )
          v65 = (*(_DWORD *)&v64->Type & 1) == 0;
        else
          v65 = LOBYTE(v64->Type) == 0;
        if ( !v65 )
          CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)FileHandle;
        goto LABEL_178;
      case FileCompletionInformation:
        v50 = (void **)v32->AssociatedIrp.MasterIrp;
        if ( !FileObject->CompletionContext && (FileObject->Flags & 2) == 0 )
        {
          v51 = *v50;
          Object = 0LL;
          v19 = ObReferenceObjectByHandle(v51, 2u, IoCompletionObjectType, v73, &Object, 0LL);
          if ( v19 >= 0 )
          {
            v52 = (struct _IO_COMPLETION_CONTEXT *)ExAllocatePool2(64LL, 24LL, 1665363785LL);
            if ( v52 )
            {
              v53 = KeAcquireSpinLockRaiseToDpc(&FileObject->IrpListLock);
              if ( FileObject->CompletionContext )
              {
                KeReleaseSpinLock(&FileObject->IrpListLock, v53);
                ExFreePoolWithTag(v52, 0);
                ObfDereferenceObject(Object);
                v19 = -1073741752;
                v32->IoStatus.Status = -1073741752;
              }
              else
              {
                FileObject->Flags &= ~0x400u;
                v52->Port = Object;
                v52->Key = v50[1];
                FileObject->CompletionContext = v52;
                v19 = 0;
                KeReleaseSpinLock(&FileObject->IrpListLock, v53);
                v32->IoStatus.Status = 0;
              }
              v32->IoStatus.Information = 0LL;
            }
            else
            {
              ObfDereferenceObject(Object);
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
        v54 = v32->AssociatedIrp.MasterIrp;
        v55 = 0LL;
        v56 = FileObject;
        if ( FileObject->CompletionContext )
        {
          v57 = *(void **)&v54->Type;
          if ( *(_QWORD *)&v54->Type )
          {
            v83 = 0LL;
            v19 = ObReferenceObjectByHandle(v57, 2u, IoCompletionObjectType, v73, &v83, 0LL);
            v55 = v83;
            v56 = FileObject;
          }
          if ( v19 >= 0 )
          {
            v19 = IopReplaceCompletionPort(v56, v55, v54->MdlAddress);
            if ( v55 )
            {
              ObfDereferenceObject(v55);
              v32->IoStatus.Status = v19;
              v32->IoStatus.Information = 0LL;
              goto LABEL_179;
            }
          }
          goto LABEL_105;
        }
        goto LABEL_104;
      case FileIoCompletionNotificationInformation:
        v58 = v32->AssociatedIrp.MasterIrp;
        v59 = FileObject;
        v60 = FileObject->Flags;
        if ( (v60 & 2) != 0 )
        {
          v19 = -1073741811;
          v32->IoStatus.Status = -1073741811;
          v32->IoStatus.Information = 0LL;
        }
        else
        {
          v19 = 0;
          v61 = *(_DWORD *)&v58->Type;
          if ( (*(_DWORD *)&v58->Type & 1) != 0 )
          {
            FileObject->Flags = v60 | 0x2000000;
            v61 = *(_DWORD *)&v58->Type;
            v59 = FileObject;
          }
          if ( (v61 & 2) != 0 )
          {
            v59->Flags |= 0x4000000u;
            v61 = *(_DWORD *)&v58->Type;
            v59 = FileObject;
          }
          if ( (v61 & 4) != 0 )
            v59->Flags |= 0x8000000u;
          v32->IoStatus.Status = 0;
          v32->IoStatus.Information = 0LL;
        }
        goto LABEL_179;
      case FileIoStatusBlockRangeInformation:
        v62 = v73;
        if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v73) )
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
        v84 = 0LL;
        v63 = v32->AssociatedIrp.MasterIrp;
        if ( *(_DWORD *)&v63->Type <= 2u )
        {
          v19 = IopAllocateFileObjectExtension((__int64)FileObject, &v84);
          if ( v19 >= 0 )
          {
            *(_DWORD *)(v84 + 80) = *(_DWORD *)&v63->Type + 1;
            v32->IoStatus.Status = v19;
            v32->IoStatus.Information = 0LL;
            goto LABEL_179;
          }
          goto LABEL_105;
        }
        goto LABEL_104;
      case FileMemoryPartitionInformation:
        v62 = v73;
        if ( v73 )
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
        v19 = IopCallDriverReference(*(PDEVICE_OBJECT *)&DeviceObject[7], v32, 2);
        goto LABEL_179;
    }
LABEL_180:
    if ( v19 == 259 )
    {
      if ( !v28 )
      {
        v66 = KeWaitForSingleObject(&v79, Executive, v62, 0, 0LL);
        if ( v66 == 257 || v66 == 192 )
          IopCancelAlertedRequest(&v79, v32);
        v19 = v87;
        *(_OWORD *)&IoStatusBlock->Status = v87;
        v67 = v74;
        goto LABEL_199;
      }
      v19 = IopWaitForSynchronousIo(v32, (unsigned int *)FileObject, v62);
    }
    else
    {
      Irp = 0LL;
      v85 = 0LL;
      if ( !v28 )
        v32->UserEvent = 0LL;
      v32->UserIosb = IoStatusBlock;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest(
        (_DWORD)v32 + 120,
        (unsigned int)&Irp,
        (unsigned int)&v85,
        (unsigned int)&FileObject,
        (__int64)&v85);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v69 = KeGetCurrentIrql();
          if ( v69 <= 0xFu && CurrentIrql <= 0xFu && v69 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v72 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v65 = (v72 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v72;
            if ( v65 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( !v28 )
        goto LABEL_198;
    }
    IopReleaseFileObjectLock((volatile __int32 *)&FileObject->Type);
LABEL_198:
    v67 = v74;
LABEL_199:
    if ( v67 )
      KeSetKernelStackSwapEnable(1u);
    if ( Handle )
      ObCloseHandle(Handle, 0);
    return v19;
  }
  if ( (unsigned int)v5 >= 0x10 )
  {
    p_Event = &FileObject->Event;
    if ( !v28 )
      p_Event = (KEVENT *)&v79;
    v29 = IopTrackLink(FileObject, (__int64)p_Event, PreviousMode);
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
    IopReleaseFileObjectLock((volatile __int32 *)&FileObject->Type);
  ObfDereferenceObject(FileObject);
  return v29;
}
