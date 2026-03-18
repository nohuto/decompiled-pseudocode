/*
 * XREFs of NtQueryInformationFile @ 0x1407AFEF0
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x140360A28 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1407D84EC (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1409BCB10 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     IopGetFileVolumeNameInformation @ 0x1402A0DA4 (IopGetFileVolumeNameInformation.c)
 *     IopWaitForSynchronousIo @ 0x1402A41A4 (IopWaitForSynchronousIo.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     IopUpdateOtherOperationCount @ 0x1402F672C (IopUpdateOtherOperationCount.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     IopCallDriverReference @ 0x1402F8AE0 (IopCallDriverReference.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IOP_INT_TO_EXT_PRIORITY @ 0x140417C50 (IOP_INT_TO_EXT_PRIORITY.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopValidateQueryInformationParameters @ 0x1407B0890 (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x1407B09BC (IopGetModeInformation.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     IopGetNumaNodeInformation @ 0x1409397B8 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x140939830 (IopQueryProcessIdsUsingFile.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 PreviousMode; // di
  FILE_INFORMATION_CLASS v10; // r14d
  NTSTATUS result; // eax
  NTSTATUS v12; // edi
  struct _KTHREAD *v13; // rax
  NTSTATUS v14; // edi
  PVOID v15; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v17; // rsi
  NTSTATUS FileVolumeNameInformation; // ebx
  bool v19; // di
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(PVOID, __int64, PVOID, __int128 *, __int64); // rbx
  struct _FAST_IO_DISPATCH *FastIoQueryStandardInfo; // rax
  void *v25; // r13
  __int64 (__fastcall *v26)(PVOID, __int64, PVOID, __int128 *, __int64); // rax
  char v27; // bl
  char v28; // r13
  __int64 Irp; // rax
  IRP *v30; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 Pool2; // rax
  char v34; // r11
  NTSTATUS NumaNodeInformation; // esi
  int ModeInformation; // eax
  _DWORD *v37; // r9
  _DWORD *p_Type; // r8
  int v39; // ecx
  _DWORD *v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  _DWORD *v43; // rdx
  struct _IRP *MasterIrp; // rdx
  struct _DEVICE_OBJECT *v45; // r10
  int v46; // eax
  __int64 v47; // r9
  NTSTATUS v48; // eax
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v50; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v53; // eax
  bool v54; // zf
  unsigned __int8 v55; // [rsp+30h] [rbp-E8h]
  char v56; // [rsp+31h] [rbp-E7h]
  PVOID Object; // [rsp+38h] [rbp-E0h] BYREF
  char v58; // [rsp+40h] [rbp-D8h]
  BOOLEAN v59; // [rsp+41h] [rbp-D7h]
  NTSTATUS v60; // [rsp+44h] [rbp-D4h]
  char v61; // [rsp+48h] [rbp-D0h]
  char v62; // [rsp+49h] [rbp-CFh]
  _WORD DeviceObject[7]; // [rsp+4Ah] [rbp-CEh] BYREF
  unsigned int v64; // [rsp+58h] [rbp-C0h] BYREF
  __int64 (__fastcall *v65)(PVOID, __int64, PVOID, __int128 *, __int64); // [rsp+60h] [rbp-B8h] BYREF
  PIO_STATUS_BLOCK v66; // [rsp+68h] [rbp-B0h]
  struct _OBJECT_HANDLE_INFORMATION v67; // [rsp+70h] [rbp-A8h] BYREF
  PFAST_IO_DISPATCH FastIoDispatch; // [rsp+78h] [rbp-A0h]
  __int64 (__fastcall *v69)(PVOID, __int64, PVOID, __int128 *, __int64); // [rsp+80h] [rbp-98h] BYREF
  PIO_STATUS_BLOCK v70; // [rsp+88h] [rbp-90h]
  __int128 v71; // [rsp+90h] [rbp-88h] BYREF
  void *v72; // [rsp+A0h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-70h]
  __int128 v74; // [rsp+B0h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+C0h] [rbp-58h] BYREF

  v66 = IoStatusBlock;
  v70 = IoStatusBlock;
  Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  v74 = 0LL;
  v67 = 0LL;
  v59 = 0;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v55 = PreviousMode;
  HIBYTE(DeviceObject[1]) = PreviousMode;
  v10 = FileInformationClass;
  result = IopValidateQueryInformationParameters(
             PreviousMode,
             CurrentThread,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass);
  if ( result >= 0 )
  {
    if ( !PreviousMode && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
    {
      v10 = FileCaseSensitiveInformation;
      v56 = 1;
    }
    result = IopReferenceFileObject(FileHandle, IopQueryOperationAccess[v10], PreviousMode, &Object, &v67);
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
          ObfDereferenceObject(Object);
          return -1073741820;
        }
        *(_DWORD *)FileInformation = v67.GrantedAccess;
        v61 = 0;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 4LL;
        v14 = v60;
        goto LABEL_31;
      }
      v15 = Object;
      if ( (*((_DWORD *)Object + 20) & 0x800) != 0 )
      {
        AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)Object + 1));
      }
      else
      {
        AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        v15 = Object;
      }
      v17 = (__int64)AttachedDevice;
      *(_QWORD *)&DeviceObject[3] = AttachedDevice;
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( v10 == FileIsRemoteDeviceInformation )
      {
        v62 = 1;
        if ( Length )
        {
          *(_BYTE *)FileInformation = (*(_BYTE *)(*((_QWORD *)v15 + 1) + 52LL) & 0x10) != 0;
          v62 = 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 1LL;
          ObfDereferenceObject(v15);
          return v12;
        }
        else
        {
          ObfDereferenceObject(v15);
          return -1073741820;
        }
      }
      if ( v10 == FileVolumeNameInformation )
      {
        FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                      *((void **)v15 + 1),
                                      (__int64)IoStatusBlock,
                                      FileInformation,
                                      Length);
        ObfDereferenceObject(Object);
        return FileVolumeNameInformation;
      }
      if ( (*((_DWORD *)v15 + 20) & 2) != 0 )
      {
        v19 = (*((_DWORD *)v15 + 20) & 4) != 0;
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        v21 = KeAbPreAcquire((__int64)v15 + 128, 0LL);
        LOBYTE(DeviceObject[0]) = 0;
        if ( _InterlockedExchange((volatile __int32 *)v15 + 29, 1) )
        {
          v14 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v15, v55, v19, v21, DeviceObject);
        }
        else
        {
          if ( v21 )
            *(_BYTE *)(v21 + 18) = 1;
          ObfReferenceObject(v15);
          v14 = 0;
        }
        v60 = v14;
        if ( LOBYTE(DeviceObject[0]) )
          goto LABEL_31;
        if ( v10 == FilePositionInformation )
        {
          HIBYTE(DeviceObject[0]) = 1;
          if ( Length >= 8 )
          {
            *(_QWORD *)FileInformation = *((_QWORD *)Object + 13);
            HIBYTE(DeviceObject[0]) = 0;
            IoStatusBlock->Status = 0;
            IoStatusBlock->Information = 8LL;
          }
          else
          {
            v14 = -1073741820;
          }
          goto LABEL_30;
        }
        if ( FastIoDispatch )
        {
          if ( (FastIoQueryBasicInfo = (__int64 (__fastcall *)(PVOID, __int64, PVOID, __int128 *, __int64))FastIoDispatch->FastIoQueryBasicInfo,
                v65 = FastIoQueryBasicInfo,
                v69 = FastIoQueryBasicInfo,
                FastIoQueryStandardInfo = (struct _FAST_IO_DISPATCH *)FastIoDispatch->FastIoQueryStandardInfo,
                FastIoDispatch = FastIoQueryStandardInfo,
                v10 == FileBasicInformation)
            && FastIoQueryBasicInfo
            || v10 == FileStandardInformation && FastIoQueryStandardInfo )
          {
            v71 = 0LL;
            v58 = 0;
            LOBYTE(DeviceObject[1]) = 0;
            if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(v17 + 8)) )
              v25 = (void *)VfFastIoSnapState();
            else
              v25 = 0LL;
            v72 = v25;
            LOBYTE(v22) = 1;
            v26 = FastIoQueryBasicInfo;
            if ( v10 != FileBasicInformation )
              v26 = (__int64 (__fastcall *)(PVOID, __int64, PVOID, __int128 *, __int64))FastIoDispatch;
            v58 = v26(Object, v22, FileInformation, &v71, v17);
            v27 = v58;
            if ( v25 )
              VfFastIoCheckState(v25);
            if ( v27 )
            {
              v14 = v71;
              v60 = v71;
              LOBYTE(DeviceObject[1]) = 1;
              *(_OWORD *)&IoStatusBlock->Status = v71;
LABEL_30:
              IopReleaseFileObjectLock((volatile __int32 *)Object);
LABEL_31:
              ObfDereferenceObject(Object);
              return v14;
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
      IopResetEvent((__int64)Object);
      Irp = IopAllocateIrpExReturn(v17, *(unsigned __int8 *)(v17 + 76), 0LL);
      v30 = (IRP *)Irp;
      v70 = (PIO_STATUS_BLOCK)Irp;
      if ( !Irp )
      {
        IopAllocateIrpCleanup(Object, 0LL);
        return -1073741670;
      }
      *(_QWORD *)(Irp + 192) = Object;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_BYTE *)(Irp + 64) = v55;
      if ( v28 )
      {
        *(_BYTE *)(Irp + 71) |= 2u;
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
      CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
      v30->UserBuffer = FileInformation;
      v30->AssociatedIrp.MasterIrp = 0LL;
      v30->MdlAddress = 0LL;
      Pool2 = ExAllocatePool2(65LL, Length, 1112764233LL);
      v30->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
      if ( !Pool2 )
      {
        IopExceptionCleanupEx((volatile __int32 *)Object, v30, 0LL, 0LL, (*((_DWORD *)Object + 20) & 2) != 0);
        if ( v59 )
          KeSetKernelStackSwapEnable(1u);
        return -1073741670;
      }
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
          ModeInformation = IopGetModeInformation(Object);
          *v37 = ModeInformation;
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
          goto LABEL_92;
        case FileAlignmentInformation:
          *(_DWORD *)v30->AssociatedIrp.MasterIrp = *(_DWORD *)(*(_QWORD *)&DeviceObject[3] + 152LL);
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
          goto LABEL_92;
        case FileIoCompletionNotificationInformation:
          p_Type = &v30->AssociatedIrp.MasterIrp->Type;
          *p_Type = 0;
          v39 = 0;
          v40 = Object;
          if ( (*((_DWORD *)Object + 20) & 0x4000000) != 0 )
          {
            v39 = 2;
            *p_Type = 2;
            v40 = Object;
          }
          if ( (v40[20] & 0x8000000) != 0 )
          {
            v39 |= 4u;
            *p_Type = v39;
            v40 = Object;
          }
          if ( (v40[20] & 0x2000000) != 0 )
            *p_Type = v39 | 1;
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
LABEL_92:
          if ( NumaNodeInformation == 259 )
          {
            if ( !v28 )
            {
              v48 = KeWaitForSingleObject(&Event, Executive, v55, 0, 0LL);
              if ( v48 == 257 || v48 == 192 )
                IopCancelAlertedRequest(&Event, v30);
              NumaNodeInformation = v74;
              *(_OWORD *)&IoStatusBlock->Status = v74;
              goto LABEL_111;
            }
            NumaNodeInformation = IopWaitForSynchronousIo(v30, (unsigned int *)Object, v55);
          }
          else
          {
            v69 = 0LL;
            v65 = 0LL;
            if ( !v28 )
              v30->UserEvent = 0LL;
            v30->UserIosb = IoStatusBlock;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            IopCompleteRequest((__int64)&v30->Tail, (__int64)&v69, &v65, (ULONG_PTR *)&Object, &v65);
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
              goto LABEL_111;
          }
          IopReleaseFileObjectLock((volatile __int32 *)Object);
LABEL_111:
          if ( v59 )
            KeSetKernelStackSwapEnable(1u);
          return NumaNodeInformation;
        case FileIoPriorityHintInformation:
          v41 = *((_QWORD *)Object + 26);
          if ( v41 )
          {
            v42 = IOP_INT_TO_EXT_PRIORITY(*(_DWORD *)(v41 + 80));
            *v43 = v42;
          }
          else
          {
            *(_DWORD *)v30->AssociatedIrp.MasterIrp = 2;
          }
          v30->IoStatus.Information = 4LL;
          v30->IoStatus.Status = 0;
          goto LABEL_92;
        case FileProcessIdsUsingFileInformation:
          MasterIrp = v30->AssociatedIrp.MasterIrp;
          v64 = 0;
          NumaNodeInformation = IopQueryProcessIdsUsingFile(Object, MasterIrp, Length, &v64);
          v60 = NumaNodeInformation;
          v34 = 1;
          if ( NumaNodeInformation == -1073741820 )
          {
            IoStatusBlock->Information = v64;
            v45 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
            goto LABEL_84;
          }
          v30->IoStatus.Information = v64;
          break;
        case FileNumaNodeInformation:
          NumaNodeInformation = IopGetNumaNodeInformation(Object, v30->AssociatedIrp.MasterIrp);
          v60 = NumaNodeInformation;
          v34 = 1;
          if ( NumaNodeInformation >= 0 )
            v30->IoStatus.Information = 2LL;
          break;
        case FileAllInformation:
          HIDWORD(v30->AssociatedIrp.MasterIrp->UserIosb) = v67.GrantedAccess;
          v46 = IopGetModeInformation(Object);
          *(_DWORD *)(v47 + 88) = v46;
          v45 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
          *(_DWORD *)(v47 + 92) = *(_DWORD *)(*(_QWORD *)&DeviceObject[3] + 152LL);
          v30->IoStatus.Information = 12LL;
LABEL_84:
          if ( v34 )
          {
            v30->IoStatus.Status = NumaNodeInformation;
          }
          else
          {
            NumaNodeInformation = IopCallDriverReference(v45, v30, v28, Object, 2);
            v60 = NumaNodeInformation;
          }
          goto LABEL_92;
      }
      v45 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
      goto LABEL_84;
    }
  }
  return result;
}
