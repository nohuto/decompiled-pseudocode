/*
 * XREFs of NtQueryInformationFile @ 0x1406780E0
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1402510B8 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406CD1D8 (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1409141B0 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopCallDriverReference @ 0x140221CF0 (IopCallDriverReference.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeSetKernelStackSwapEnable @ 0x140338F70 (KeSetKernelStackSwapEnable.c)
 *     IopWaitForSynchronousIo @ 0x14033CE0C (IopWaitForSynchronousIo.c)
 *     IopGetFileVolumeNameInformation @ 0x140353308 (IopGetFileVolumeNameInformation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopValidateQueryInformationParameters @ 0x140678840 (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x1406E4840 (IopGetModeInformation.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14088DF6C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x140892658 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408927B8 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 v9; // r14
  FILE_INFORMATION_CLASS v10; // ebx
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  __int64 v13; // rdi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v15; // r15
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  char v17; // si
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  struct _DMA_ADAPTER *v24; // rcx
  PIRP FastIoQueryBasicInfo; // r11
  __int64 (__fastcall *FastIoQueryStandardInfo)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // r10
  void *v27; // r13
  char v28; // al
  char v29; // si
  IRP *v30; // rax
  IRP *v31; // r13
  struct _KEVENT *p_Event; // rax
  __int64 v33; // rax
  struct _IRP *PoolWithQuota_0; // rax
  struct _KTHREAD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  struct _KTHREAD *v38; // rax
  char v39; // r10
  NTSTATUS NumaNodeInformation; // edi
  struct _IRP *v41; // r9
  int v42; // eax
  __int64 v43; // r9
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS v45; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  int ModeInformation; // eax
  _DWORD *v48; // r9
  struct _KTHREAD *v49; // rax
  _DWORD *p_Type; // rdx
  __int64 v51; // r8
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  struct _IRP *MasterIrp; // rdx
  unsigned __int8 v58; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v61; // eax
  bool v62; // zf
  char v63; // [rsp+30h] [rbp-E8h]
  char v64; // [rsp+31h] [rbp-E7h]
  BOOLEAN v65; // [rsp+33h] [rbp-E5h]
  NTSTATUS v66; // [rsp+34h] [rbp-E4h]
  NTSTATUS v67; // [rsp+34h] [rbp-E4h]
  _WORD DmaAdapter[7]; // [rsp+3Ah] [rbp-DEh] BYREF
  unsigned int v69; // [rsp+48h] [rbp-D0h] BYREF
  PIRP Irp; // [rsp+50h] [rbp-C8h]
  PIO_STATUS_BLOCK v71; // [rsp+58h] [rbp-C0h]
  PDEVICE_OBJECT v72; // [rsp+60h] [rbp-B8h]
  struct _OBJECT_HANDLE_INFORMATION v73; // [rsp+68h] [rbp-B0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-A8h]
  __int64 v75; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v76; // [rsp+80h] [rbp-98h] BYREF
  __int64 (__fastcall *v77)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // [rsp+90h] [rbp-88h]
  void *v78; // [rsp+98h] [rbp-80h]
  PIRP v79; // [rsp+A0h] [rbp-78h]
  PIO_STATUS_BLOCK v80; // [rsp+A8h] [rbp-70h]
  __int64 v81; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v82; // [rsp+B8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+C8h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+118h] [rbp+0h]

  v71 = IoStatusBlock;
  v80 = IoStatusBlock;
  *(_QWORD *)&DmaAdapter[3] = 0LL;
  memset(&Event, 0, sizeof(Event));
  v82 = 0LL;
  v73 = 0LL;
  v65 = 0;
  v63 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  HIBYTE(DmaAdapter[1]) = v9;
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
      v63 = 1;
    }
    result = IopReferenceFileObject(FileHandle, IopQueryOperationAccess[v10], v9, (PVOID *)&DmaAdapter[3], &v73);
    v12 = result;
    v66 = result;
    if ( result >= 0 )
    {
      if ( v10 == FileAccessInformation )
      {
        v49 = KeGetCurrentThread();
        ++v49->OtherOperationCount;
        __incgsdword(0x2EE4u);
        if ( Length >= 4 )
        {
          *(_DWORD *)FileInformation = v73.GrantedAccess;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 4LL;
          v12 = v66;
        }
        else
        {
          v12 = -1073741820;
        }
        v24 = *(struct _DMA_ADAPTER **)&DmaAdapter[3];
        goto LABEL_20;
      }
      v13 = *(_QWORD *)&DmaAdapter[3];
      if ( (*(_DWORD *)(*(_QWORD *)&DmaAdapter[3] + 80LL) & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(*(_QWORD *)&DmaAdapter[3] + 8LL));
      else
        AttachedDevice = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&DmaAdapter[3]);
      v15 = AttachedDevice;
      v72 = AttachedDevice;
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( v10 == FileIsRemoteDeviceInformation )
      {
        if ( Length )
        {
          *(_BYTE *)FileInformation = (*(_BYTE *)(*(_QWORD *)(v13 + 8) + 52LL) & 0x10) != 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 1LL;
        }
        else
        {
          v12 = -1073741820;
        }
        goto LABEL_19;
      }
      if ( v10 == FileVolumeNameInformation )
      {
        FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                      *(void **)(v13 + 8),
                                      (__int64)IoStatusBlock,
                                      FileInformation,
                                      Length);
        HalPutDmaAdapter((PADAPTER_OBJECT)v13);
        return FileVolumeNameInformation;
      }
      if ( (*(_DWORD *)(v13 + 80) & 2) != 0 )
      {
        v17 = (*(_DWORD *)(v13 + 80) & 4) != 0;
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        v19 = *(_QWORD *)&DmaAdapter[3];
        v20 = KeAbPreAcquire(*(_QWORD *)&DmaAdapter[3] + 128LL, 0LL, 0);
        LOBYTE(DmaAdapter[0]) = 0;
        if ( _InterlockedExchange((volatile __int32 *)(v19 + 116), 1) )
        {
          v13 = *(_QWORD *)&DmaAdapter[3];
          v12 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&DmaAdapter[3], v9, v17, v20, DmaAdapter);
        }
        else
        {
          if ( v20 )
            *(_BYTE *)(v20 + 26) |= 1u;
          v13 = *(_QWORD *)&DmaAdapter[3];
          ObfReferenceObject(*(PVOID *)&DmaAdapter[3]);
          v12 = 0;
        }
        if ( LOBYTE(DmaAdapter[0]) )
          goto LABEL_19;
        if ( v10 == FilePositionInformation )
        {
          HIBYTE(DmaAdapter[0]) = 1;
          if ( Length < 8 )
          {
            v12 = -1073741820;
          }
          else
          {
            *(_QWORD *)FileInformation = *(_QWORD *)(v13 + 104);
            HIBYTE(DmaAdapter[0]) = 0;
            IoStatusBlock->Status = 0;
            IoStatusBlock->Information = 8LL;
          }
          goto LABEL_18;
        }
        if ( FastIoDispatch )
        {
          if ( (FastIoQueryBasicInfo = (PIRP)FastIoDispatch->FastIoQueryBasicInfo,
                Irp = FastIoQueryBasicInfo,
                v79 = FastIoQueryBasicInfo,
                FastIoQueryStandardInfo = (__int64 (__fastcall *)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoQueryStandardInfo,
                v77 = FastIoQueryStandardInfo,
                v10 == FileBasicInformation)
            && FastIoQueryBasicInfo
            || v10 == FileStandardInformation && FastIoQueryStandardInfo )
          {
            v76 = 0LL;
            LOBYTE(DmaAdapter[1]) = 0;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              v27 = (void *)VfFastIoSnapState();
              FastIoQueryStandardInfo = v77;
              FastIoQueryBasicInfo = Irp;
            }
            else
            {
              v27 = 0LL;
            }
            v78 = v27;
            LOBYTE(v21) = 1;
            if ( v10 == FileBasicInformation )
              v28 = ((__int64 (__fastcall *)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoQueryBasicInfo)(
                      v13,
                      v21,
                      FileInformation,
                      &v76,
                      v15);
            else
              v28 = FastIoQueryStandardInfo(v13, v21, FileInformation, &v76, v15);
            v64 = v28;
            if ( v27 )
            {
              VfFastIoCheckState(v27);
              v28 = v64;
            }
            if ( v28 )
            {
              v12 = v76;
              LOBYTE(DmaAdapter[1]) = 1;
              *(_OWORD *)&IoStatusBlock->Status = v76;
LABEL_18:
              IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
LABEL_19:
              v24 = (struct _DMA_ADAPTER *)v13;
LABEL_20:
              HalPutDmaAdapter(v24);
              return v12;
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
      IopResetEvent(v13, v21, v22, v23);
      v30 = (IRP *)IopAllocateIrpExReturn((__int64)v15, (unsigned __int8)v15->StackSize, 0LL, retaddr);
      v31 = v30;
      Irp = v30;
      if ( !v30 )
      {
        IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, 0LL);
        return -1073741670;
      }
      v30->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v13;
      v30->Tail.Overlay.Thread = CurrentThread;
      v30->RequestorMode = v9;
      if ( v29 )
      {
        v30->AllocationFlags |= 2u;
        p_Event = 0LL;
      }
      else
      {
        if ( v9 == 1 )
          v65 = KeSetKernelStackSwapEnable(0);
        v31->Flags = 4;
        v71 = (PIO_STATUS_BLOCK)&v82;
        p_Event = &Event;
      }
      v31->UserEvent = p_Event;
      v31->UserIosb = v71;
      v31->Overlay.AllocationSize.QuadPart = 0LL;
      v33 = (__int64)&v31->Tail.Overlay.CurrentStackLocation[-1];
      CurrentThread = (struct _KTHREAD *)v33;
      *(_BYTE *)v33 = 5;
      *(_QWORD *)(v33 + 48) = v13;
      v31->UserBuffer = FileInformation;
      v31->AssociatedIrp.MasterIrp = 0LL;
      v31->MdlAddress = 0LL;
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0((__int64)v31, Length);
      v31->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, Length);
      v31->Flags |= 0x870u;
      v35 = CurrentThread;
      LODWORD(CurrentThread->Header.WaitListHead.Flink) = Length;
      LODWORD(v35->Header.WaitListHead.Blink) = v10;
      if ( v63 )
        v35->Header.Size |= 1u;
      IopQueueThreadIrp((__int64)v31);
      v38 = KeGetCurrentThread();
      ++v38->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v39 = 0;
      NumaNodeInformation = 0;
      v67 = 0;
      if ( v10 == FileModeInformation )
      {
        ModeInformation = IopGetModeInformation(*(_QWORD *)&DmaAdapter[3], v36, v37, v31->AssociatedIrp.MasterIrp);
        *v48 = ModeInformation;
        v31->IoStatus.Information = 4LL;
        v31->IoStatus.Status = 0;
      }
      else
      {
        switch ( v10 )
        {
          case FileAlignmentInformation:
            *(_DWORD *)v31->AssociatedIrp.MasterIrp = v15->AlignmentRequirement;
            v31->IoStatus.Information = 4LL;
            break;
          case FileIoCompletionNotificationInformation:
            p_Type = &v31->AssociatedIrp.MasterIrp->Type;
            *p_Type = 0;
            v51 = *(_QWORD *)&DmaAdapter[3];
            v52 = *(_DWORD *)(*(_QWORD *)&DmaAdapter[3] + 80LL);
            v53 = 0;
            if ( (v52 & 0x4000000) != 0 )
            {
              v53 = 2;
              *p_Type = 2;
              v52 = *(_DWORD *)(v51 + 80);
            }
            if ( (v52 & 0x8000000) != 0 )
            {
              v53 |= 4u;
              *p_Type = v53;
              v52 = *(_DWORD *)(v51 + 80);
            }
            if ( (v52 & 0x2000000) != 0 )
              *p_Type = v53 | 1;
            v31->IoStatus.Information = 4LL;
            break;
          case FileIoPriorityHintInformation:
            v54 = *(_QWORD *)(*(_QWORD *)&DmaAdapter[3] + 208LL);
            if ( v54 && (v55 = *(_DWORD *)(v54 + 80)) != 0 )
              v56 = v55 - 1;
            else
              v56 = 2;
            *(_DWORD *)v31->AssociatedIrp.MasterIrp = v56;
            v31->IoStatus.Information = 4LL;
            break;
          default:
            switch ( v10 )
            {
              case FileProcessIdsUsingFileInformation:
                MasterIrp = v31->AssociatedIrp.MasterIrp;
                v69 = 0;
                NumaNodeInformation = IopQueryProcessIdsUsingFile(*(_QWORD *)&DmaAdapter[3], MasterIrp, Length, &v69);
                v67 = NumaNodeInformation;
                v39 = 1;
                if ( NumaNodeInformation == -1073741820 )
                  IoStatusBlock->Information = v69;
                else
                  v31->IoStatus.Information = v69;
                break;
              case FileNumaNodeInformation:
                NumaNodeInformation = IopGetNumaNodeInformation(*(_QWORD *)&DmaAdapter[3], v31->AssociatedIrp.MasterIrp);
                v67 = NumaNodeInformation;
                v39 = 1;
                if ( NumaNodeInformation >= 0 )
                  v31->IoStatus.Information = 2LL;
                break;
              case FileAllInformation:
                v41 = v31->AssociatedIrp.MasterIrp;
                HIDWORD(v41->UserIosb) = v73.GrantedAccess;
                v42 = IopGetModeInformation(*(_QWORD *)&DmaAdapter[3], v36, v37, v41);
                *(_DWORD *)(v43 + 88) = v42;
                *(_DWORD *)(v43 + 92) = v15->AlignmentRequirement;
                v31->IoStatus.Information = 12LL;
                break;
            }
            if ( !v39 )
            {
              NumaNodeInformation = IopCallDriverReference(v15, v31, v29, *(_QWORD **)&DmaAdapter[3], 2);
              v67 = NumaNodeInformation;
              goto LABEL_57;
            }
            break;
        }
        v31->IoStatus.Status = NumaNodeInformation;
      }
LABEL_57:
      if ( NumaNodeInformation == 259 )
      {
        if ( !v29 )
        {
          v45 = KeWaitForSingleObject(&Event, Executive, v9, 0, 0LL);
          if ( v45 == 257 || v45 == 192 )
            IopCancelAlertedRequest(&Event, v31);
          NumaNodeInformation = v82;
          *(_OWORD *)&IoStatusBlock->Status = v82;
          goto LABEL_61;
        }
        NumaNodeInformation = IopWaitForSynchronousIo(v31, *(unsigned int **)&DmaAdapter[3], v9);
      }
      else
      {
        v81 = 0LL;
        v75 = 0LL;
        if ( !v29 )
          v31->UserEvent = 0LL;
        v31->UserIosb = IoStatusBlock;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest((__int64)&v31->Tail, (__int64)&v81, &v75, (__int64 *)&DmaAdapter[3], &v75);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v58 = KeGetCurrentIrql();
            if ( v58 <= 0xFu && CurrentIrql <= 0xFu && v58 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v62 = (v61 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v61;
              if ( v62 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              NumaNodeInformation = v67;
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( !v29 )
          goto LABEL_61;
      }
      IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)&DmaAdapter[3]);
LABEL_61:
      if ( v65 )
        KeSetKernelStackSwapEnable(1u);
      return NumaNodeInformation;
    }
  }
  return result;
}
