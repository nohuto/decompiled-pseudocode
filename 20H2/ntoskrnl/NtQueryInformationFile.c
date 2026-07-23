/*
 * XREFs of NtQueryInformationFile @ 0x1405FB1C0
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x14023DE78 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140659F38 (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140919CF0 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopUpdateOtherOperationCount @ 0x14020A4D0 (IopUpdateOtherOperationCount.c)
 *     IopCallDriverReference @ 0x14020A830 (IopCallDriverReference.c)
 *     KeSetKernelStackSwapEnable @ 0x14020AC60 (KeSetKernelStackSwapEnable.c)
 *     IopWaitForSynchronousIo @ 0x14020AD88 (IopWaitForSynchronousIo.c)
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IopGetFileVolumeNameInformation @ 0x140323CEC (IopGetFileVolumeNameInformation.c)
 *     IOP_INT_TO_EXT_PRIORITY @ 0x1403F0638 (IOP_INT_TO_EXT_PRIORITY.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopValidateQueryInformationParameters @ 0x1405FBB50 (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x1405FD520 (IopGetModeInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 *     IopGetNumaNodeInformation @ 0x1408982D8 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x140898438 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 v9; // si
  FILE_INFORMATION_CLASS v10; // r14d
  NTSTATUS result; // eax
  NTSTATUS v12; // edi
  struct _KTHREAD *v13; // rax
  struct _DMA_ADAPTER *v14; // rcx
  PFILE_OBJECT v15; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v17; // rsi
  NTSTATUS FileVolumeNameInformation; // ebx
  struct _KTHREAD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  IRP **v22; // rax
  IRP *v23; // r10
  IRP *v24; // rbx
  void *v25; // r13
  IRP *v26; // rax
  char v27; // bl
  char v28; // r13
  IRP *v29; // rax
  IRP *v30; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _IRP *PoolWithQuota; // rax
  char v34; // r10
  NTSTATUS NumaNodeInformation; // esi
  int ModeInformation; // eax
  _DWORD *v37; // r9
  _DWORD *p_Type; // r8
  int v39; // ecx
  PFILE_OBJECT v40; // rdx
  _DWORD *FileObjectExtension; // rcx
  int v42; // eax
  _DWORD *v43; // rdx
  struct _IRP *MasterIrp; // rdx
  struct _DEVICE_OBJECT *v45; // r11
  int v46; // eax
  __int64 v47; // r9
  NTSTATUS v48; // eax
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v50; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v53; // eax
  bool v54; // zf
  KPROCESSOR_MODE v55; // [rsp+30h] [rbp-E8h]
  char v56; // [rsp+31h] [rbp-E7h]
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-E0h] BYREF
  char v58; // [rsp+40h] [rbp-D8h]
  BOOLEAN v59; // [rsp+41h] [rbp-D7h]
  NTSTATUS v60; // [rsp+44h] [rbp-D4h]
  char v61; // [rsp+48h] [rbp-D0h]
  char v62; // [rsp+49h] [rbp-CFh]
  _WORD DeviceObject[7]; // [rsp+4Ah] [rbp-CEh] BYREF
  PIRP Irp; // [rsp+58h] [rbp-C0h] BYREF
  unsigned int v65; // [rsp+60h] [rbp-B8h] BYREF
  PIO_STATUS_BLOCK v66; // [rsp+68h] [rbp-B0h]
  struct _OBJECT_HANDLE_INFORMATION v67; // [rsp+70h] [rbp-A8h] BYREF
  IRP **FastIoDispatch; // [rsp+78h] [rbp-A0h]
  __int128 v69; // [rsp+80h] [rbp-98h] BYREF
  void *v70; // [rsp+90h] [rbp-88h]
  PIO_STATUS_BLOCK v71; // [rsp+98h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-78h]
  __int64 v73; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v74; // [rsp+B0h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+C0h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+118h] [rbp+0h]

  v66 = IoStatusBlock;
  v71 = IoStatusBlock;
  FileObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  v74 = 0LL;
  v67 = 0LL;
  v59 = 0;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v55 = v9;
  HIBYTE(DeviceObject[1]) = v9;
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
      v56 = 1;
    }
    result = IopReferenceFileObject(FileHandle, IopQueryOperationAccess[v10], v9, (PVOID *)&FileObject, &v67);
    v12 = result;
    v60 = result;
    if ( result >= 0 )
    {
      if ( v10 == FileAccessInformation )
      {
        v13 = KeGetCurrentThread();
        ++v13->OtherOperationCount;
        __incgsdword(0x2EE4u);
        if ( Length < 4 )
        {
          v12 = -1073741820;
          v14 = (struct _DMA_ADAPTER *)FileObject;
LABEL_112:
          HalPutDmaAdapter(v14);
          return v12;
        }
        *(_DWORD *)FileInformation = v67.GrantedAccess;
        v61 = 0;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 4LL;
        v12 = v60;
LABEL_32:
        v14 = (struct _DMA_ADAPTER *)FileObject;
        goto LABEL_112;
      }
      v15 = FileObject;
      if ( (FileObject->Flags & 0x800) != 0 )
      {
        AttachedDevice = IoGetAttachedDevice(FileObject->DeviceObject);
      }
      else
      {
        AttachedDevice = IoGetRelatedDeviceObject(FileObject);
        v15 = FileObject;
      }
      v17 = (__int64)AttachedDevice;
      *(_QWORD *)&DeviceObject[3] = AttachedDevice;
      FastIoDispatch = (IRP **)AttachedDevice->DriverObject->FastIoDispatch;
      if ( v10 == FileIsRemoteDeviceInformation )
      {
        v62 = 1;
        if ( Length )
        {
          *(_BYTE *)FileInformation = (v15->DeviceObject->Characteristics & 0x10) != 0;
          v62 = 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 1LL;
        }
        else
        {
          v12 = -1073741820;
        }
        v14 = (struct _DMA_ADAPTER *)v15;
        goto LABEL_112;
      }
      if ( v10 == FileVolumeNameInformation )
      {
        FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                      v15->DeviceObject,
                                      (__int64)IoStatusBlock,
                                      FileInformation,
                                      Length);
        HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
        return FileVolumeNameInformation;
      }
      if ( (v15->Flags & 2) != 0 )
      {
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        v20 = KeAbPreAcquire((ULONG_PTR)&v15->Lock, 0LL, 0);
        LOBYTE(DeviceObject[0]) = 0;
        if ( _InterlockedExchange((volatile __int32 *)&v15->Busy, 1) )
        {
          v12 = IopWaitAndAcquireFileObjectLock(v15, (__int64)DeviceObject);
        }
        else
        {
          if ( v20 )
            *(_BYTE *)(v20 + 26) |= 1u;
          ObfReferenceObject(v15);
          v12 = 0;
        }
        v60 = v12;
        if ( LOBYTE(DeviceObject[0]) )
          goto LABEL_32;
        if ( v10 == FilePositionInformation )
        {
          HIBYTE(DeviceObject[0]) = 1;
          if ( Length < 8 )
          {
            v12 = -1073741820;
            IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
            v14 = (struct _DMA_ADAPTER *)FileObject;
            goto LABEL_112;
          }
          *(_QWORD *)FileInformation = FileObject->CurrentByteOffset.QuadPart;
          HIBYTE(DeviceObject[0]) = 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 8LL;
          goto LABEL_31;
        }
        v22 = FastIoDispatch;
        if ( FastIoDispatch )
        {
          if ( (v23 = FastIoDispatch[4],
                Irp = v23,
                FastIoDispatch = (IRP **)v23,
                v24 = v22[5],
                v10 == FileBasicInformation)
            && v23
            || v10 == FileStandardInformation && v24 )
          {
            v69 = 0LL;
            v58 = 0;
            LOBYTE(DeviceObject[1]) = 0;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              v25 = (void *)VfFastIoSnapState();
              v23 = Irp;
            }
            else
            {
              v25 = 0LL;
            }
            v70 = v25;
            LOBYTE(v21) = 1;
            v26 = v23;
            if ( v10 != FileBasicInformation )
              v26 = v24;
            v58 = ((__int64 (__fastcall *)(PFILE_OBJECT, __int64, PVOID, __int128 *, __int64))v26)(
                    FileObject,
                    v21,
                    FileInformation,
                    &v69,
                    v17);
            v27 = v58;
            if ( v25 )
              VfFastIoCheckState(v25);
            if ( v27 )
            {
              v12 = v69;
              v60 = v69;
              LOBYTE(DeviceObject[1]) = 1;
              *(_OWORD *)&IoStatusBlock->Status = v69;
LABEL_31:
              IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
              goto LABEL_32;
            }
          }
        }
        v28 = 1;
      }
      else
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v28 = 0;
      }
      LOBYTE(DeviceObject[2]) = v28;
      IopResetEvent((__int64)FileObject);
      v29 = (IRP *)IopAllocateIrpExReturn(v17, *(unsigned __int8 *)(v17 + 76), 0LL, retaddr);
      v30 = v29;
      Irp = v29;
      if ( !v29 )
      {
        IopAllocateIrpCleanup((PADAPTER_OBJECT)FileObject, 0LL);
        return -1073741670;
      }
      v29->Tail.Overlay.OriginalFileObject = FileObject;
      v29->Tail.Overlay.Thread = CurrentThread;
      v29->RequestorMode = v55;
      if ( v28 )
      {
        v29->AllocationFlags |= 2u;
        p_Event = 0LL;
      }
      else
      {
        if ( v55 == 1 )
          v59 = KeSetKernelStackSwapEnable(0);
        v30->Flags = 4;
        v66 = (PIO_STATUS_BLOCK)&v74;
        p_Event = &Event;
      }
      v30->UserEvent = p_Event;
      v30->UserIosb = v66;
      v30->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 5;
      CurrentStackLocation[-1].FileObject = FileObject;
      v30->UserBuffer = FileInformation;
      v30->AssociatedIrp.MasterIrp = 0LL;
      v30->MdlAddress = 0LL;
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota((__int64)v30, Length);
      v30->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, Length);
      v30->Flags |= 0x870u;
      CurrentStackLocation[-1].Parameters.Read.Length = Length;
      CurrentStackLocation[-1].Parameters.Create.Options = v10;
      if ( v56 )
        CurrentStackLocation[-1].Flags |= 1u;
      IopQueueThreadIrp((__int64)v30);
      IopUpdateOtherOperationCount();
      v34 = 0;
      NumaNodeInformation = 0;
      v60 = 0;
      switch ( v10 )
      {
        case FileModeInformation:
          ModeInformation = IopGetModeInformation(FileObject);
          *v37 = ModeInformation;
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
          goto LABEL_90;
        case FileAlignmentInformation:
          *(_DWORD *)v30->AssociatedIrp.MasterIrp = *(_DWORD *)(*(_QWORD *)&DeviceObject[3] + 152LL);
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
          goto LABEL_90;
        case FileIoCompletionNotificationInformation:
          p_Type = &v30->AssociatedIrp.MasterIrp->Type;
          *p_Type = 0;
          v39 = 0;
          v40 = FileObject;
          if ( (FileObject->Flags & 0x4000000) != 0 )
          {
            v39 = 2;
            *p_Type = 2;
            v40 = FileObject;
          }
          if ( (v40->Flags & 0x8000000) != 0 )
          {
            v39 |= 4u;
            *p_Type = v39;
            v40 = FileObject;
          }
          if ( (v40->Flags & 0x2000000) != 0 )
            *p_Type = v39 | 1;
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
LABEL_90:
          if ( NumaNodeInformation == 259 )
          {
            if ( !v28 )
            {
              v48 = KeWaitForSingleObject(&Event, Executive, v55, 0, 0LL);
              if ( v48 == 257 || v48 == 192 )
                IopCancelAlertedRequest(&Event, v30);
              NumaNodeInformation = v74;
              *(_OWORD *)&IoStatusBlock->Status = v74;
              goto LABEL_109;
            }
            NumaNodeInformation = IopWaitForSynchronousIo(v30, (unsigned int *)FileObject, v55);
          }
          else
          {
            v73 = 0LL;
            Irp = 0LL;
            if ( !v28 )
              v30->UserEvent = 0LL;
            v30->UserIosb = IoStatusBlock;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            IopCompleteRequest((__int64)&v30->Tail, (__int64)&v73, &Irp, (ULONG_PTR *)&FileObject, &Irp);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v50 = KeGetCurrentIrql();
                if ( v50 <= 0xFu && CurrentIrql <= 0xFu && v50 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v54 = (v53 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v53;
                  if ( v54 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  NumaNodeInformation = v60;
                }
              }
            }
            __writecr8(CurrentIrql);
            if ( !v28 )
              goto LABEL_109;
          }
          IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
LABEL_109:
          if ( v59 )
            KeSetKernelStackSwapEnable(1u);
          return NumaNodeInformation;
        case FileIoPriorityHintInformation:
          FileObjectExtension = FileObject->FileObjectExtension;
          if ( FileObjectExtension )
          {
            v42 = IOP_INT_TO_EXT_PRIORITY(FileObjectExtension[20]);
            *v43 = v42;
          }
          else
          {
            *(_DWORD *)v30->AssociatedIrp.MasterIrp = 2;
          }
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
          goto LABEL_90;
        case FileProcessIdsUsingFileInformation:
          MasterIrp = v30->AssociatedIrp.MasterIrp;
          v65 = 0;
          NumaNodeInformation = IopQueryProcessIdsUsingFile(FileObject, MasterIrp, Length, &v65);
          v60 = NumaNodeInformation;
          v34 = 1;
          if ( NumaNodeInformation == -1073741820 )
          {
            IoStatusBlock->Information = v65;
            v45 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
            goto LABEL_82;
          }
          v30->IoStatus.Information = v65;
          break;
        case FileNumaNodeInformation:
          NumaNodeInformation = IopGetNumaNodeInformation(FileObject, v30->AssociatedIrp.MasterIrp);
          v60 = NumaNodeInformation;
          v34 = 1;
          if ( NumaNodeInformation >= 0 )
            v30->IoStatus.Information = 2LL;
          break;
        case FileAllInformation:
          HIDWORD(v30->AssociatedIrp.MasterIrp->UserIosb) = v67.GrantedAccess;
          v46 = IopGetModeInformation(FileObject);
          *(_DWORD *)(v47 + 88) = v46;
          v45 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
          *(_DWORD *)(v47 + 92) = *(_DWORD *)(*(_QWORD *)&DeviceObject[3] + 152LL);
          v30->IoStatus.Information = 12LL;
LABEL_82:
          if ( v34 )
          {
            v30->IoStatus.Status = NumaNodeInformation;
          }
          else
          {
            NumaNodeInformation = IopCallDriverReference(v45, v30, v28, FileObject, 2);
            v60 = NumaNodeInformation;
          }
          goto LABEL_90;
      }
      v45 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
      goto LABEL_82;
    }
  }
  return result;
}
