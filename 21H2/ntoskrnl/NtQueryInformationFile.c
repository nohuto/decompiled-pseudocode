/*
 * XREFs of NtQueryInformationFile @ 0x1406EA600
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x140272E48 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406A5F08 (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140917610 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140236060 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopWaitForSynchronousIo @ 0x140272EA4 (IopWaitForSynchronousIo.c)
 *     IopGetFileVolumeNameInformation @ 0x1402A5348 (IopGetFileVolumeNameInformation.c)
 *     IopUpdateOtherOperationCount @ 0x1402D0560 (IopUpdateOtherOperationCount.c)
 *     IopCallDriverReference @ 0x1402D0580 (IopCallDriverReference.c)
 *     KeSetKernelStackSwapEnable @ 0x1402D0A10 (KeSetKernelStackSwapEnable.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x14035E490 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IOP_INT_TO_EXT_PRIORITY @ 0x1403F126C (IOP_INT_TO_EXT_PRIORITY.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopGetModeInformation @ 0x1405F42A8 (IopGetModeInformation.c)
 *     IopValidateQueryInformationParameters @ 0x1406EAF70 (IopValidateQueryInformationParameters.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x1408911EC (IopCancelAlertedRequest.c)
 *     IopGetNumaNodeInformation @ 0x140895A08 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895B68 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x1409CA9B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CAA8C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 v9; // r14
  FILE_INFORMATION_CLASS v10; // r15d
  NTSTATUS result; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  struct _KTHREAD *v13; // rax
  struct _DMA_ADAPTER *v14; // rcx
  PFILE_OBJECT v15; // rdi
  PDEVICE_OBJECT AttachedDevice; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  struct _KTHREAD *v18; // rax
  PFILE_OBJECT v19; // rbx
  PRTL_BALANCED_NODE v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  IRP *FastIoQueryBasicInfo; // r10
  IRP *FastIoQueryStandardInfo; // r14
  void *v26; // rsi
  IRP *v27; // rax
  char v28; // r14
  char v29; // bl
  IRP *v30; // rax
  IRP *v31; // rsi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IRP *PoolWithQuota_0; // rax
  char v35; // r10
  NTSTATUS NumaNodeInformation; // r14d
  int ModeInformation; // eax
  int *v38; // r9
  char v39; // r15
  KPROCESSOR_MODE v40; // bl
  _DWORD *p_Type; // rdx
  ULONG Flags; // ecx
  int v43; // eax
  int v44; // eax
  _DWORD *FileObjectExtension; // rax
  struct _IRP *MasterIrp; // rdx
  struct _DEVICE_OBJECT *v47; // rcx
  int v48; // eax
  __int64 v49; // r9
  NTSTATUS v50; // eax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v52; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v55; // eax
  bool v56; // zf
  KPROCESSOR_MODE v57; // [rsp+30h] [rbp-D8h]
  char v58; // [rsp+31h] [rbp-D7h]
  char v59; // [rsp+32h] [rbp-D6h]
  BOOLEAN v60; // [rsp+34h] [rbp-D4h]
  NTSTATUS v61; // [rsp+38h] [rbp-D0h]
  NTSTATUS v62; // [rsp+38h] [rbp-D0h]
  char v63; // [rsp+3Eh] [rbp-CAh] BYREF
  char v64; // [rsp+3Fh] [rbp-C9h]
  char v65; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v66; // [rsp+41h] [rbp-C7h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B8h]
  PIRP Irp; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v70; // [rsp+60h] [rbp-A8h] BYREF
  PIO_STATUS_BLOCK v71; // [rsp+68h] [rbp-A0h]
  struct _OBJECT_HANDLE_INFORMATION v72; // [rsp+70h] [rbp-98h] BYREF
  IRP *v73; // [rsp+78h] [rbp-90h] BYREF
  __int128 v74; // [rsp+80h] [rbp-88h] BYREF
  void *v75; // [rsp+90h] [rbp-78h]
  PIO_STATUS_BLOCK v76; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-68h]
  __int128 v78; // [rsp+A8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  v71 = IoStatusBlock;
  v76 = IoStatusBlock;
  FileObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  v78 = 0LL;
  v72 = 0LL;
  v60 = 0;
  v59 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v57 = v9;
  v66 = v9;
  v10 = FileInformationClass;
  result = IopValidateQueryInformationParameters(
             v9,
             CurrentThread,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass);
  if ( result >= 0 )
  {
    if ( !v9 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
    {
      v10 = FileCaseSensitiveInformation;
      v59 = 1;
    }
    result = IopReferenceFileObject(FileHandle, IopQueryOperationAccess[v10], v9, (PVOID *)&FileObject, &v72);
    FileVolumeNameInformation = result;
    v61 = result;
    if ( result >= 0 )
    {
      if ( v10 == FileAccessInformation )
      {
        v13 = KeGetCurrentThread();
        ++v13->OtherOperationCount;
        __incgsdword(0x2EE4u);
        if ( Length >= 4 )
        {
          *(_DWORD *)FileInformation = v72.GrantedAccess;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 4LL;
          FileVolumeNameInformation = v61;
        }
        else
        {
          FileVolumeNameInformation = -1073741820;
        }
        v14 = (struct _DMA_ADAPTER *)FileObject;
        goto LABEL_113;
      }
      v15 = FileObject;
      if ( (FileObject->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(FileObject->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(FileObject);
      DeviceObject = AttachedDevice;
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( v10 == FileIsRemoteDeviceInformation )
      {
        if ( Length )
        {
          *(_BYTE *)FileInformation = (v15->DeviceObject->Characteristics & 0x10) != 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 1LL;
        }
        else
        {
          FileVolumeNameInformation = -1073741820;
        }
        goto LABEL_112;
      }
      if ( v10 == FileVolumeNameInformation )
      {
        FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                      v15->DeviceObject,
                                      (__int64)IoStatusBlock,
                                      FileInformation,
                                      Length);
LABEL_112:
        v14 = (struct _DMA_ADAPTER *)v15;
LABEL_113:
        HalPutDmaAdapter(v14);
        return FileVolumeNameInformation;
      }
      if ( (v15->Flags & 2) != 0 )
      {
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        v19 = FileObject;
        v20 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
        v63 = 0;
        if ( _InterlockedExchange((volatile __int32 *)&v19->Busy, 1) )
        {
          v15 = FileObject;
          FileVolumeNameInformation = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)&v63);
        }
        else
        {
          if ( v20 )
            BYTE2(v20[1].Left) |= 1u;
          v15 = FileObject;
          ObfReferenceObject(FileObject);
          FileVolumeNameInformation = 0;
        }
        if ( v63 )
          goto LABEL_112;
        if ( v10 == FilePositionInformation )
        {
          v64 = 1;
          if ( Length < 8 )
          {
            FileVolumeNameInformation = -1073741820;
            IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
            goto LABEL_112;
          }
          *(_QWORD *)FileInformation = v15->CurrentByteOffset.QuadPart;
          v64 = 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 8LL;
LABEL_31:
          IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
          goto LABEL_112;
        }
        if ( FastIoDispatch )
        {
          if ( (FastIoQueryBasicInfo = (IRP *)FastIoDispatch->FastIoQueryBasicInfo,
                Irp = FastIoQueryBasicInfo,
                v73 = FastIoQueryBasicInfo,
                FastIoQueryStandardInfo = (IRP *)FastIoDispatch->FastIoQueryStandardInfo,
                v10 == FileBasicInformation)
            && FastIoQueryBasicInfo
            || v10 == FileStandardInformation && FastIoQueryStandardInfo )
          {
            v74 = 0LL;
            v65 = 0;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              v26 = (void *)VfFastIoSnapState();
              FastIoQueryBasicInfo = Irp;
            }
            else
            {
              v26 = 0LL;
            }
            v75 = v26;
            LOBYTE(v21) = 1;
            v27 = FastIoQueryBasicInfo;
            if ( v10 != FileBasicInformation )
              v27 = FastIoQueryStandardInfo;
            v28 = ((__int64 (__fastcall *)(PFILE_OBJECT, __int64, PVOID, __int128 *, PDEVICE_OBJECT))v27)(
                    v15,
                    v21,
                    FileInformation,
                    &v74,
                    DeviceObject);
            if ( v26 )
              VfFastIoCheckState(v26);
            if ( v28 )
            {
              FileVolumeNameInformation = v74;
              v65 = 1;
              *(_OWORD *)&IoStatusBlock->Status = v74;
              goto LABEL_31;
            }
          }
        }
        v29 = 1;
      }
      else
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v29 = 0;
      }
      v58 = v29;
      IopResetEvent((__int64)v15, v21, v22, v23);
      v30 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, (unsigned __int8)DeviceObject->StackSize, 0LL, retaddr);
      v31 = v30;
      Irp = v30;
      if ( !v30 )
      {
        IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, 0LL);
        return -1073741670;
      }
      v30->Tail.Overlay.OriginalFileObject = v15;
      v30->Tail.Overlay.Thread = CurrentThread;
      v30->RequestorMode = v57;
      if ( v29 )
      {
        v30->AllocationFlags |= 2u;
        p_Event = 0LL;
      }
      else
      {
        if ( v57 == 1 )
          v60 = KeSetKernelStackSwapEnable(0);
        v31->Flags = 4;
        v71 = (PIO_STATUS_BLOCK)&v78;
        p_Event = &Event;
      }
      v31->UserEvent = p_Event;
      v31->UserIosb = v71;
      v31->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation = v31->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 5;
      CurrentStackLocation[-1].FileObject = v15;
      v31->UserBuffer = FileInformation;
      v31->AssociatedIrp.MasterIrp = 0LL;
      v31->MdlAddress = 0LL;
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0((__int64)v31, Length);
      v31->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, Length);
      v31->Flags |= 0x870u;
      CurrentStackLocation[-1].Parameters.Read.Length = Length;
      CurrentStackLocation[-1].Parameters.Create.Options = v10;
      if ( v59 )
        CurrentStackLocation[-1].Flags |= 1u;
      IopQueueThreadIrp((__int64)v31);
      IopUpdateOtherOperationCount();
      v35 = 0;
      NumaNodeInformation = 0;
      v62 = 0;
      switch ( v10 )
      {
        case FileModeInformation:
          ModeInformation = IopGetModeInformation((__int64)v15);
          *v38 = ModeInformation;
          v31->IoStatus.Information = 4LL;
          v39 = v58;
          v40 = v57;
          v31->IoStatus.Status = 0;
          goto LABEL_90;
        case FileAlignmentInformation:
          *(_DWORD *)v31->AssociatedIrp.MasterIrp = DeviceObject->AlignmentRequirement;
          v31->IoStatus.Information = 4LL;
          v39 = v58;
          v40 = v57;
          v31->IoStatus.Status = 0;
          goto LABEL_90;
        case FileIoCompletionNotificationInformation:
          p_Type = &v31->AssociatedIrp.MasterIrp->Type;
          *p_Type = 0;
          Flags = v15->Flags;
          v43 = 0;
          if ( (Flags & 0x4000000) != 0 )
          {
            v43 = 2;
            *p_Type = 2;
            Flags = v15->Flags;
          }
          if ( (Flags & 0x8000000) != 0 )
          {
            v43 |= 4u;
            *p_Type = v43;
            Flags = v15->Flags;
          }
          if ( (Flags & 0x2000000) == 0 )
            goto LABEL_71;
          v44 = v43 | 1;
LABEL_70:
          *p_Type = v44;
LABEL_71:
          v31->IoStatus.Information = 4LL;
          v39 = v58;
          v40 = v57;
          v31->IoStatus.Status = 0;
          goto LABEL_90;
        case FileIoPriorityHintInformation:
          p_Type = &v31->AssociatedIrp.MasterIrp->Type;
          FileObjectExtension = v15->FileObjectExtension;
          if ( FileObjectExtension )
            v44 = IOP_INT_TO_EXT_PRIORITY(FileObjectExtension[20]);
          else
            v44 = 2;
          goto LABEL_70;
        case FileProcessIdsUsingFileInformation:
          MasterIrp = v31->AssociatedIrp.MasterIrp;
          v70 = 0;
          NumaNodeInformation = IopQueryProcessIdsUsingFile(v15, MasterIrp, Length, &v70);
          v62 = NumaNodeInformation;
          v35 = 1;
          if ( NumaNodeInformation == -1073741820 )
          {
            IoStatusBlock->Information = v70;
            v39 = v58;
            v47 = DeviceObject;
            v40 = v57;
            goto LABEL_82;
          }
          v31->IoStatus.Information = v70;
          break;
        case FileNumaNodeInformation:
          NumaNodeInformation = IopGetNumaNodeInformation(v15, v31->AssociatedIrp.MasterIrp);
          v62 = NumaNodeInformation;
          v35 = 1;
          if ( NumaNodeInformation >= 0 )
            v31->IoStatus.Information = 2LL;
          break;
        case FileAllInformation:
          HIDWORD(v31->AssociatedIrp.MasterIrp->UserIosb) = v72.GrantedAccess;
          v48 = IopGetModeInformation((__int64)v15);
          *(_DWORD *)(v49 + 88) = v48;
          v47 = DeviceObject;
          *(_DWORD *)(v49 + 92) = DeviceObject->AlignmentRequirement;
          v31->IoStatus.Information = 12LL;
          goto LABEL_81;
      }
      v47 = DeviceObject;
LABEL_81:
      v40 = v57;
      v39 = v58;
LABEL_82:
      if ( v35 )
      {
        v31->IoStatus.Status = NumaNodeInformation;
      }
      else
      {
        NumaNodeInformation = IopCallDriverReference(v47, v31, v39, v15, 2);
        v62 = NumaNodeInformation;
      }
LABEL_90:
      if ( NumaNodeInformation == 259 )
      {
        if ( !v39 )
        {
          v50 = KeWaitForSingleObject(&Event, Executive, v40, 0, 0LL);
          if ( v50 == 257 || v50 == 192 )
            IopCancelAlertedRequest(&Event, v31);
          NumaNodeInformation = v78;
          *(_OWORD *)&IoStatusBlock->Status = v78;
          goto LABEL_109;
        }
        NumaNodeInformation = IopWaitForSynchronousIo(v31, (__int64)v15);
      }
      else
      {
        v73 = 0LL;
        Irp = 0LL;
        if ( !v39 )
          v31->UserEvent = 0LL;
        v31->UserIosb = IoStatusBlock;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest((__int64)&v31->Tail, (__int64)&v73, &Irp, (ULONG_PTR *)&FileObject, &Irp);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && CurrentIrql <= 0xFu && v52 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v55 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v56 = (v55 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v55;
              if ( v56 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v15 = FileObject;
              NumaNodeInformation = v62;
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( !v39 )
          goto LABEL_109;
      }
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
LABEL_109:
      if ( v60 )
        KeSetKernelStackSwapEnable(1u);
      return NumaNodeInformation;
    }
  }
  return result;
}
