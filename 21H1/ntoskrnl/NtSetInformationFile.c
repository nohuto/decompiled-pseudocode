/*
 * XREFs of NtSetInformationFile @ 0x140253490
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopCallDriverReference @ 0x14027AD40 (IopCallDriverReference.c)
 *     IopAllocateFileObjectExtension @ 0x140281DD0 (IopAllocateFileObjectExtension.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402E7EE0 (KeReleaseSpinLock.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KeSetKernelStackSwapEnable @ 0x1402FBF40 (KeSetKernelStackSwapEnable.c)
 *     IopWaitForSynchronousIo @ 0x14030050C (IopWaitForSynchronousIo.c)
 *     IopReplaceCompletionPort @ 0x1403896FC (IopReplaceCompletionPort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     IopOpenLinkOrRenameTarget @ 0x14066EFC0 (IopOpenLinkOrRenameTarget.c)
 *     IopTrackLink @ 0x1406B5190 (IopTrackLink.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14088FF0C (IopSetFileMemoryPartitionInformation.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r14
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 v9; // r15
  FILE_INFORMATION_CLASS v10; // esi
  ULONG v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rax
  int v16; // edi
  NTSTATUS result; // eax
  int v18; // r15d
  struct _DMA_ADAPTER *v19; // rdi
  ULONG *p_Flags; // r12
  ULONG Flags; // ebx
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  struct _KTHREAD *v26; // rax
  PFILE_OBJECT v27; // rbx
  __int64 v28; // r9
  _DMA_OPERATIONS *v29; // rax
  struct _KTHREAD *v30; // rcx
  struct _DMA_ADAPTER *v31; // rcx
  char v32; // bl
  IRP *v33; // rax
  IRP *v34; // rbx
  PIO_STATUS_BLOCK v35; // rax
  struct _KEVENT *v36; // rcx
  __int64 v37; // rax
  struct _IRP *PoolWithQuota; // rax
  PIRP v39; // rdi
  __int64 v40; // rbx
  struct _KTHREAD *v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // bl
  KPROCESSOR_MODE v45; // al
  unsigned __int8 CurrentIrql; // si
  BOOLEAN v47; // al
  int SectorSize; // ecx
  struct _IRP *v49; // rax
  bool v50; // zf
  void **v51; // rcx
  PFILE_OBJECT v52; // rsi
  void *v53; // rcx
  struct _IO_COMPLETION_CONTEXT *PoolWithTag; // rbx
  KIRQL v55; // al
  KSPIN_LOCK *p_IrpListLock; // rcx
  struct _IRP *v57; // rdx
  ULONG v58; // eax
  int v59; // ecx
  struct _IRP *v60; // r8
  unsigned int v61; // ecx
  char Type; // al
  int v63; // eax
  char IsSandboxedToken; // bl
  NTSTATUS v65; // eax
  struct _IRP *v66; // rcx
  _DMA_OPERATIONS **p_DmaOperations; // rax
  NTSTATUS v68; // eax
  NTSTATUS v69; // esi
  struct _IRP *v70; // rbx
  struct _IRP *v71; // rsi
  struct _DMA_ADAPTER *v72; // rbx
  void *v73; // rcx
  struct _IRP *MasterIrp; // r8
  int v75; // edx
  ULONG v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // ecx
  unsigned __int8 v79; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v82; // eax
  KPROCESSOR_MODE v83; // [rsp+30h] [rbp-F8h]
  char v84; // [rsp+31h] [rbp-F7h]
  BOOLEAN v85; // [rsp+32h] [rbp-F6h]
  char v86; // [rsp+33h] [rbp-F5h]
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-F0h] BYREF
  char v88; // [rsp+40h] [rbp-E8h] BYREF
  char v89; // [rsp+41h] [rbp-E7h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-E0h]
  PIRP Irp; // [rsp+50h] [rbp-D8h]
  PVOID Object; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v93; // [rsp+60h] [rbp-C8h] BYREF
  char *v94; // [rsp+70h] [rbp-B8h]
  struct _KTHREAD *v95; // [rsp+78h] [rbp-B0h]
  __int64 v96; // [rsp+80h] [rbp-A8h]
  PVOID v97; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v98; // [rsp+90h] [rbp-98h] BYREF
  __int64 v99; // [rsp+98h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v101; // [rsp+A8h] [rbp-80h] BYREF
  PVOID v102; // [rsp+B8h] [rbp-70h]
  __int64 v103; // [rsp+C0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-60h] BYREF
  _DMA_OPERATIONS *v105; // [rsp+E8h] [rbp-40h]

  v5 = Length;
  v7 = (int)FileHandle;
  FileObject = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v101 = 0LL;
  Handle = 0LL;
  v85 = 0;
  v86 = 0;
  v89 = 0;
  CurrentThread = KeGetCurrentThread();
  v95 = CurrentThread;
  v9 = CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v83 = v9;
  if ( v9 )
  {
    v10 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= FileMaximumInformation )
      return -1073741821;
    v11 = *((unsigned __int8 *)IopSetOperationLength + (int)FileInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
    {
      if ( !Length )
        goto LABEL_26;
      if ( Length == 1 )
        v15 = 0LL;
      else
        v15 = 3LL;
      if ( (v15 & (unsigned __int64)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
        && (char *)FileInformation + Length >= FileInformation )
      {
        goto LABEL_26;
      }
    }
    else
    {
      if ( !Length )
        goto LABEL_26;
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
        && (char *)FileInformation + Length >= FileInformation )
      {
        goto LABEL_26;
      }
    }
    MEMORY[0x7FFFFFFF0000] = 0;
LABEL_26:
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
    goto LABEL_28;
  }
  v10 = FileInformationClass;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      v10 = FileRenameInformation;
      v86 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      v10 = FileRenameInformationEx;
      v86 = 1;
      break;
    case FileLinkInformationBypassAccessCheck:
      v10 = FileLinkInformation;
      v86 = 1;
      break;
    case FileLinkInformationExBypassAccessCheck:
      v10 = FileLinkInformationEx;
      v86 = 1;
      break;
    case FileCaseSensitiveInformationForceAccessCheck:
      v10 = FileCaseSensitiveInformation;
      v89 = 1;
      break;
  }
  v16 = IopSetOperationAccess[v10];
LABEL_28:
  result = IopReferenceFileObject(v7, v16, v9, (int)&FileObject, 0LL);
  v18 = result;
  if ( result < 0 )
    return result;
  v19 = (struct _DMA_ADAPTER *)FileObject;
  p_Flags = &FileObject->Flags;
  Flags = FileObject->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    AttachedDevice = IoGetAttachedDevice(FileObject->DeviceObject);
  }
  else
  {
    AttachedDevice = IoGetRelatedDeviceObject(FileObject);
    Flags = *p_Flags;
  }
  DeviceObject = AttachedDevice;
  if ( (Flags & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = FileObject;
    v28 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock);
    v88 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v27->Busy, 1) )
    {
      v19 = (struct _DMA_ADAPTER *)FileObject;
      v18 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)&v88);
      v24 = 0LL;
    }
    else
    {
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      v19 = (struct _DMA_ADAPTER *)FileObject;
      ObfReferenceObject(FileObject);
      v24 = 0LL;
      v18 = 0;
    }
    LODWORD(Irp) = v18;
    if ( v88 )
    {
      v31 = v19;
LABEL_43:
      HalPutDmaAdapter(v31);
      return v18;
    }
    if ( v10 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v29 = *(_DMA_OPERATIONS **)FileInformation;
        v105 = *(_DMA_OPERATIONS **)FileInformation;
        if ( (*p_Flags & 8) != 0
          && (SectorSize = DeviceObject->SectorSize, (_WORD)SectorSize)
          && ((SectorSize - 1) & (unsigned int)v29) != 0
          || SHIDWORD(v29) < 0 )
        {
          v18 = -1073741811;
        }
        else
        {
          v19[6].DmaOperations = v29;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
        }
        v30 = KeGetCurrentThread();
        v30->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
        IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
        v31 = (struct _DMA_ADAPTER *)FileObject;
        goto LABEL_43;
      }
      IopReleaseFileObjectLock(v19);
      HalPutDmaAdapter(v19);
      return -1073741820;
    }
    v32 = 1;
  }
  else
  {
    LOWORD(v93) = 1;
    BYTE2(v93) = 6;
    DWORD1(v93) = 0;
    v94 = (char *)&v93 + 8;
    *((_QWORD *)&v93 + 1) = (char *)&v93 + 8;
    v32 = 0;
  }
  v84 = v32;
  IopResetEvent((__int64)v19, v23, v24, v25);
  if ( v10 != FileTrackingInformation )
  {
    v33 = (IRP *)IopAllocateIrpExReturn();
    v34 = v33;
    Irp = v33;
    if ( !v33 )
    {
      IopAllocateIrpCleanup(v19, 0LL);
      return -1073741670;
    }
    v33->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v19;
    v33->Tail.Overlay.Thread = v95;
    v33->RequestorMode = v83;
    if ( v84 )
    {
      v33->AllocationFlags |= 2u;
      v35 = IoStatusBlock;
      v36 = 0LL;
    }
    else
    {
      if ( v83 == 1 )
        v85 = KeSetKernelStackSwapEnable(0);
      v34->Flags = 4;
      v35 = (PIO_STATUS_BLOCK)&v101;
      v36 = (struct _KEVENT *)&v93;
    }
    v34->UserEvent = v36;
    v34->UserIosb = v35;
    v34->Overlay.AllocationSize.QuadPart = 0LL;
    v37 = (__int64)&v34->Tail.Overlay.CurrentStackLocation[-1];
    v96 = v37;
    *(_BYTE *)v37 = 6;
    *(_QWORD *)(v37 + 48) = v19;
    v34->AssociatedIrp.MasterIrp = 0LL;
    v34->MdlAddress = 0LL;
    PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(0LL, v5);
    v95 = (struct _KTHREAD *)PoolWithQuota;
    v39 = Irp;
    Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
    memmove(PoolWithQuota, FileInformation, v5);
    if ( ((unsigned int)(v10 - 19) <= 1 || v10 == FilePositionInformation) && v95->Header.SignalState < 0 )
      RtlRaiseStatus(-1073741811);
    v39->Flags |= 0x830u;
    v40 = v96;
    *(_DWORD *)(v96 + 8) = v5;
    *(_DWORD *)(v40 + 16) = v10;
    if ( v86 || v89 )
      *(_BYTE *)(v40 + 2) |= 1u;
    IopQueueThreadIrp(v39);
    v41 = KeGetCurrentThread();
    ++v41->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( v10 == FileModeInformation )
    {
      MasterIrp = v39->AssociatedIrp.MasterIrp;
      v75 = *(_DWORD *)&MasterIrp->Type;
      if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) != 0
        || (v75 & 0x30) != 0 && (*p_Flags & 2) == 0
        || (v75 & 0x30) == 0 && (*p_Flags & 2) != 0
        || (*(_DWORD *)&MasterIrp->Type & 0x30) == 0x30 )
      {
        v18 = -1073741811;
      }
      else
      {
        v76 = *p_Flags;
        if ( (*p_Flags & 8) == 0 )
        {
          if ( (v75 & 2) != 0 )
            v76 |= 0x10u;
          else
            v76 &= ~0x10u;
          *p_Flags = v76;
        }
        if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
          v77 = v76 | 0x20;
        else
          v77 = v76 & 0xFFFFFFDF;
        *p_Flags = v77;
        if ( (v77 & 2) != 0 )
        {
          if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
            v78 = v77 | 4;
          else
            v78 = v77 & 0xFFFFFFFB;
          *p_Flags = v78;
        }
        v18 = 0;
      }
      v39->IoStatus.Status = v18;
      v39->IoStatus.Information = 0LL;
      v44 = v84;
      goto LABEL_71;
    }
    v42 = (unsigned int)(v10 - 10);
    if ( (unsigned int)v42 <= 0x3E && (v43 = 0x4080000000200003LL, _bittest64(&v43, v42)) )
    {
      v60 = v39->AssociatedIrp.MasterIrp;
      v61 = v60->Flags;
      if ( !v61 || (v61 & 1) != 0 || (int)v5 - 20 < v61 )
      {
        v18 = -1073741811;
        v39->IoStatus.Status = -1073741811;
        v44 = v84;
        goto LABEL_71;
      }
      if ( v10 == FileMoveClusterInformation )
      {
        *(_DWORD *)(v40 + 32) = *(_DWORD *)&v60->Type;
      }
      else
      {
        if ( v10 == FileRenameInformationEx || v10 == FileLinkInformationEx )
          Type = v60->Type & 1;
        else
          Type = v60->Type;
        *(_BYTE *)(v40 + 32) = Type;
      }
      if ( *((_WORD *)&v60->Flags + 2) == 92 || v60->MdlAddress )
      {
        v63 = IopOpenLinkOrRenameTarget(&Handle, v39, v60, FileObject);
        v18 = v63;
        v44 = v84;
        if ( v63 < 0 )
        {
          v39->IoStatus.Status = v63;
          goto LABEL_71;
        }
LABEL_70:
        v18 = IopCallDriverReference(DeviceObject, v39, 2);
LABEL_71:
        v45 = v83;
        goto LABEL_72;
      }
    }
    else
    {
      if ( v10 == FileShortNameInformation )
      {
        v66 = v39->AssociatedIrp.MasterIrp;
        v44 = v84;
        if ( (unsigned int)(v5 - 4) < *(_DWORD *)&v66->Type )
        {
          v18 = -1073741811;
          v39->IoStatus.Status = -1073741811;
          goto LABEL_71;
        }
        if ( *(&v66->Size + 1) == 92 )
        {
          v18 = -1073741811;
          v39->IoStatus.Status = -1073741811;
          goto LABEL_71;
        }
        goto LABEL_70;
      }
      if ( v10 != FileDispositionInformationEx && v10 != FileDispositionInformation )
      {
        switch ( v10 )
        {
          case FileCompletionInformation:
            v51 = (void **)v39->AssociatedIrp.MasterIrp;
            v96 = (__int64)v51;
            v52 = FileObject;
            if ( FileObject->CompletionContext || (*p_Flags & 2) != 0 )
            {
              v18 = -1073741811;
            }
            else
            {
              v53 = *v51;
              Object = 0LL;
              v18 = ObReferenceObjectByHandle(v53, 2u, IoCompletionObjectType, v83, &Object, 0LL);
              if ( v18 >= 0 )
              {
                PoolWithTag = (struct _IO_COMPLETION_CONTEXT *)ExAllocatePoolWithTag(
                                                                 NonPagedPoolNx,
                                                                 0x10uLL,
                                                                 0x63436F49u);
                if ( PoolWithTag )
                {
                  v55 = KeAcquireSpinLockRaiseToDpc(&v52->IrpListLock);
                  p_IrpListLock = &v52->IrpListLock;
                  if ( v52->CompletionContext )
                  {
                    KeReleaseSpinLock(p_IrpListLock, v55);
                    ExFreePoolWithTag(PoolWithTag, 0);
                    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
                    v18 = -1073741752;
                  }
                  else
                  {
                    *p_Flags &= ~0x400u;
                    PoolWithTag->Port = Object;
                    PoolWithTag->Key = *(PVOID *)(v96 + 8);
                    v52->CompletionContext = PoolWithTag;
                    v18 = 0;
                    KeReleaseSpinLock(p_IrpListLock, v55);
                  }
                }
                else
                {
                  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
                  v18 = -1073741670;
                }
              }
            }
            v39->IoStatus.Status = v18;
            v39->IoStatus.Information = 0LL;
            v44 = v84;
            goto LABEL_71;
          case FileReplaceCompletionInformation:
            v71 = v39->AssociatedIrp.MasterIrp;
            v72 = 0LL;
            v102 = 0LL;
            if ( FileObject->CompletionContext )
            {
              v73 = *(void **)&v71->Type;
              if ( *(_QWORD *)&v71->Type )
              {
                v97 = 0LL;
                v18 = ObReferenceObjectByHandle(v73, 2u, IoCompletionObjectType, v83, &v97, 0LL);
                v72 = (struct _DMA_ADAPTER *)v97;
                v102 = v97;
              }
              if ( v18 >= 0 )
              {
                v18 = IopReplaceCompletionPort(FileObject, v72, v71->MdlAddress);
                if ( v72 )
                  HalPutDmaAdapter(v72);
              }
              goto LABEL_153;
            }
            break;
          case FileIoCompletionNotificationInformation:
            v57 = v39->AssociatedIrp.MasterIrp;
            v58 = *p_Flags;
            if ( (*p_Flags & 2) != 0 )
            {
              v18 = -1073741811;
            }
            else
            {
              v18 = 0;
              v59 = *(_DWORD *)&v57->Type;
              if ( (*(_DWORD *)&v57->Type & 1) != 0 )
              {
                v58 |= 0x2000000u;
                *p_Flags = v58;
                v59 = *(_DWORD *)&v57->Type;
              }
              if ( (v59 & 2) != 0 )
              {
                v58 |= 0x4000000u;
                *p_Flags = v58;
                v59 = *(_DWORD *)&v57->Type;
              }
              if ( (v59 & 4) != 0 )
                *p_Flags = v58 | 0x8000000;
            }
            v39->IoStatus.Status = v18;
            v39->IoStatus.Information = 0LL;
            v44 = v84;
            goto LABEL_71;
          case FileIoStatusBlockRangeInformation:
            if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v83) )
            {
              if ( (*p_Flags & 2) != 0 )
                v18 = -1073741811;
              else
                v18 = IopSetFileObjectIosbRange(FileObject, v39);
            }
            else
            {
              v18 = -1073741727;
            }
            v39->IoStatus.Status = v18;
            v39->IoStatus.Information = 0LL;
            v44 = v84;
            goto LABEL_71;
          case FileIoPriorityHintInformation:
            v98 = 0LL;
            v70 = v39->AssociatedIrp.MasterIrp;
            if ( *(_DWORD *)&v70->Type <= 2u )
            {
              v18 = IopAllocateFileObjectExtension(FileObject, &v98);
              if ( v18 >= 0 )
                *(_DWORD *)(v98 + 80) = *(_DWORD *)&v70->Type + 1;
              goto LABEL_153;
            }
            break;
          case FileMemoryPartitionInformation:
            v45 = v83;
            if ( v83 )
            {
              v18 = -1073741790;
            }
            else
            {
              v18 = IopSetFileMemoryPartitionInformation(FileObject, v39->AssociatedIrp.MasterIrp, (unsigned int)v5);
              v45 = 0;
            }
            v39->IoStatus.Status = v18;
            v39->IoStatus.Information = 0LL;
            v44 = v84;
LABEL_72:
            if ( v18 == 259 )
            {
              if ( !v44 )
              {
                v65 = KeWaitForSingleObject(&v93, Executive, v45, 0, 0LL);
                if ( v65 == 257 || v65 == 192 )
                  IopCancelAlertedRequest(&v93, v39);
                v18 = v101;
                *(_OWORD *)&IoStatusBlock->Status = v101;
                v47 = v85;
                goto LABEL_79;
              }
              v18 = IopWaitForSynchronousIo(v39);
            }
            else
            {
              v103 = 0LL;
              v99 = 0LL;
              if ( !v44 )
                v39->UserEvent = 0LL;
              v39->UserIosb = IoStatusBlock;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              IopCompleteRequest((__int64)&v39->Tail, (__int64)&v103, (__int64)&v99, (__int64 *)&FileObject, &v99);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v79 = KeGetCurrentIrql();
                  if ( v79 <= 0xFu && CurrentIrql <= 0xFu && v79 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v82 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v50 = (v82 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v82;
                    if ( v50 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
              }
              __writecr8(CurrentIrql);
              if ( !v44 )
                goto LABEL_78;
            }
            IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
LABEL_78:
            v47 = v85;
LABEL_79:
            if ( v47 )
              KeSetKernelStackSwapEnable(1u);
            if ( Handle )
              ObCloseHandle(Handle, 0);
            return v18;
          default:
            goto LABEL_69;
        }
        v18 = -1073741811;
LABEL_153:
        v39->IoStatus.Status = v18;
        v39->IoStatus.Information = 0LL;
        v44 = v84;
        goto LABEL_71;
      }
      v49 = v39->AssociatedIrp.MasterIrp;
      if ( v10 == FileDispositionInformationEx )
        v50 = (*(_DWORD *)&v49->Type & 1) == 0;
      else
        v50 = LOBYTE(v49->Type) == 0;
      if ( !v50 )
        *(_QWORD *)(v40 + 32) = FileHandle;
    }
LABEL_69:
    v44 = v84;
    goto LABEL_70;
  }
  if ( (unsigned int)v5 < 0x10 )
  {
    v69 = -1073741820;
  }
  else
  {
    if ( v32 )
      p_DmaOperations = &v19[9].DmaOperations;
    else
      p_DmaOperations = (_DMA_OPERATIONS **)&v93;
    v68 = IopTrackLink(v19, (__int64)p_DmaOperations, v83);
    v69 = v68;
    LODWORD(Irp) = v68;
    if ( v68 >= 0 )
    {
      IoStatusBlock->Information = 0LL;
      IoStatusBlock->Status = v68;
    }
  }
  if ( v32 )
    IopReleaseFileObjectLock(v19);
  HalPutDmaAdapter(v19);
  return v69;
}
