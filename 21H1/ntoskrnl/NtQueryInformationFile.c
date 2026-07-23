/*
 * XREFs of NtQueryInformationFile @ 0x140600000
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1402AA0E8 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140652B5C (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140912E30 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopCallDriverReference @ 0x14027AD40 (IopCallDriverReference.c)
 *     KeSetKernelStackSwapEnable @ 0x1402FBF40 (KeSetKernelStackSwapEnable.c)
 *     IopWaitForSynchronousIo @ 0x14030050C (IopWaitForSynchronousIo.c)
 *     IopGetFileVolumeNameInformation @ 0x14031548C (IopGetFileVolumeNameInformation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopValidateQueryInformationParameters @ 0x140600760 (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x1406C4ED0 (IopGetModeInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x140891338 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x140891498 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
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
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  struct _DMA_ADAPTER *v23; // rcx
  PIRP FastIoQueryBasicInfo; // r11
  __int64 (__fastcall *FastIoQueryStandardInfo)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // r10
  void *v26; // r13
  char v27; // al
  char v28; // si
  IRP *v29; // rax
  IRP *v30; // r13
  struct _KEVENT *p_Event; // rax
  __int64 v32; // rax
  struct _IRP *PoolWithQuota; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  struct _KTHREAD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KTHREAD *v39; // rax
  char v40; // r10
  NTSTATUS NumaNodeInformation; // edi
  struct _IRP *v42; // r9
  int v43; // eax
  __int64 v44; // r9
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS v46; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  int ModeInformation; // eax
  _DWORD *v49; // r9
  struct _KTHREAD *v50; // rax
  _DWORD *p_Type; // rdx
  __int64 v52; // r8
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // eax
  struct _IRP *MasterIrp; // rdx
  unsigned __int8 v59; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v62; // eax
  bool v63; // zf
  char v64; // [rsp+30h] [rbp-E8h]
  char v65; // [rsp+31h] [rbp-E7h]
  BOOLEAN v66; // [rsp+33h] [rbp-E5h]
  NTSTATUS v67; // [rsp+34h] [rbp-E4h]
  NTSTATUS v68; // [rsp+34h] [rbp-E4h]
  _WORD DmaAdapter[7]; // [rsp+3Ah] [rbp-DEh] BYREF
  unsigned int v70; // [rsp+48h] [rbp-D0h] BYREF
  PIRP Irp; // [rsp+50h] [rbp-C8h]
  PIO_STATUS_BLOCK v72; // [rsp+58h] [rbp-C0h]
  PDEVICE_OBJECT v73; // [rsp+60h] [rbp-B8h]
  struct _OBJECT_HANDLE_INFORMATION v74; // [rsp+68h] [rbp-B0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-A8h]
  __int64 v76; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v77; // [rsp+80h] [rbp-98h] BYREF
  __int64 (__fastcall *v78)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // [rsp+90h] [rbp-88h]
  void *v79; // [rsp+98h] [rbp-80h]
  PIRP v80; // [rsp+A0h] [rbp-78h]
  PIO_STATUS_BLOCK v81; // [rsp+A8h] [rbp-70h]
  __int64 v82; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v83; // [rsp+B8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+C8h] [rbp-50h] BYREF

  v72 = IoStatusBlock;
  v81 = IoStatusBlock;
  *(_QWORD *)&DmaAdapter[3] = 0LL;
  memset(&Event, 0, sizeof(Event));
  v83 = 0LL;
  v74 = 0LL;
  v66 = 0;
  v64 = 0;
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
      v64 = 1;
    }
    result = IopReferenceFileObject(FileHandle, IopQueryOperationAccess[v10], v9, (PVOID *)&DmaAdapter[3], &v74);
    v12 = result;
    v67 = result;
    if ( result >= 0 )
    {
      if ( v10 == FileAccessInformation )
      {
        v50 = KeGetCurrentThread();
        ++v50->OtherOperationCount;
        __incgsdword(0x2EE4u);
        if ( Length >= 4 )
        {
          *(_DWORD *)FileInformation = v74.GrantedAccess;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 4LL;
          v12 = v67;
        }
        else
        {
          v12 = -1073741820;
        }
        v23 = *(struct _DMA_ADAPTER **)&DmaAdapter[3];
        goto LABEL_20;
      }
      v13 = *(_QWORD *)&DmaAdapter[3];
      if ( (*(_DWORD *)(*(_QWORD *)&DmaAdapter[3] + 80LL) & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(*(_QWORD *)&DmaAdapter[3] + 8LL));
      else
        AttachedDevice = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&DmaAdapter[3]);
      v15 = AttachedDevice;
      v73 = AttachedDevice;
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
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v18 = *(_QWORD *)&DmaAdapter[3];
        v19 = KeAbPreAcquire(*(_QWORD *)&DmaAdapter[3] + 128LL, 0LL, 0);
        LOBYTE(DmaAdapter[0]) = 0;
        if ( _InterlockedExchange((volatile __int32 *)(v18 + 116), 1) )
        {
          v13 = *(_QWORD *)&DmaAdapter[3];
          v12 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&DmaAdapter[3], (__int64)DmaAdapter);
        }
        else
        {
          if ( v19 )
            *(_BYTE *)(v19 + 26) |= 1u;
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
                v80 = FastIoQueryBasicInfo,
                FastIoQueryStandardInfo = (__int64 (__fastcall *)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoQueryStandardInfo,
                v78 = FastIoQueryStandardInfo,
                v10 == FileBasicInformation)
            && FastIoQueryBasicInfo
            || v10 == FileStandardInformation && FastIoQueryStandardInfo )
          {
            v77 = 0LL;
            LOBYTE(DmaAdapter[1]) = 0;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              v26 = (void *)VfFastIoSnapState();
              FastIoQueryStandardInfo = v78;
              FastIoQueryBasicInfo = Irp;
            }
            else
            {
              v26 = 0LL;
            }
            v79 = v26;
            LOBYTE(v20) = 1;
            if ( v10 == FileBasicInformation )
              v27 = ((__int64 (__fastcall *)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoQueryBasicInfo)(
                      v13,
                      v20,
                      FileInformation,
                      &v77,
                      v15);
            else
              v27 = FastIoQueryStandardInfo(v13, v20, FileInformation, &v77, v15);
            v65 = v27;
            if ( v26 )
            {
              VfFastIoCheckState(v26);
              v27 = v65;
            }
            if ( v27 )
            {
              v12 = v77;
              LOBYTE(DmaAdapter[1]) = 1;
              *(_OWORD *)&IoStatusBlock->Status = v77;
LABEL_18:
              IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
LABEL_19:
              v23 = (struct _DMA_ADAPTER *)v13;
LABEL_20:
              HalPutDmaAdapter(v23);
              return v12;
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
      IopResetEvent(v13, v20, v21, v22);
      v29 = (IRP *)IopAllocateIrpExReturn();
      v30 = v29;
      Irp = v29;
      if ( !v29 )
      {
        IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, 0LL);
        return -1073741670;
      }
      v29->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v13;
      v29->Tail.Overlay.Thread = CurrentThread;
      v29->RequestorMode = v9;
      if ( v28 )
      {
        v29->AllocationFlags |= 2u;
        p_Event = 0LL;
      }
      else
      {
        if ( v9 == 1 )
          v66 = KeSetKernelStackSwapEnable(0);
        v30->Flags = 4;
        v72 = (PIO_STATUS_BLOCK)&v83;
        p_Event = &Event;
      }
      v30->UserEvent = p_Event;
      v30->UserIosb = v72;
      v30->Overlay.AllocationSize.QuadPart = 0LL;
      v32 = (__int64)&v30->Tail.Overlay.CurrentStackLocation[-1];
      CurrentThread = (struct _KTHREAD *)v32;
      *(_BYTE *)v32 = 5;
      *(_QWORD *)(v32 + 48) = v13;
      v30->UserBuffer = FileInformation;
      v30->AssociatedIrp.MasterIrp = 0LL;
      v30->MdlAddress = 0LL;
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota((__int64)v30, Length);
      v30->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, Length);
      v30->Flags |= 0x870u;
      v36 = CurrentThread;
      LODWORD(CurrentThread->Header.WaitListHead.Flink) = Length;
      LODWORD(v36->Header.WaitListHead.Blink) = v10;
      if ( v64 )
        v36->Header.Size |= 1u;
      IopQueueThreadIrp((__int64)v30, v34, v35);
      v39 = KeGetCurrentThread();
      ++v39->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v40 = 0;
      NumaNodeInformation = 0;
      v68 = 0;
      if ( v10 == FileModeInformation )
      {
        ModeInformation = IopGetModeInformation(*(_QWORD *)&DmaAdapter[3], v37, v38, v30->AssociatedIrp.MasterIrp);
        *v49 = ModeInformation;
        v30->IoStatus.Information = 4LL;
        v30->IoStatus.Status = 0;
      }
      else
      {
        switch ( v10 )
        {
          case FileAlignmentInformation:
            *(_DWORD *)v30->AssociatedIrp.MasterIrp = v15->AlignmentRequirement;
            v30->IoStatus.Information = 4LL;
            break;
          case FileIoCompletionNotificationInformation:
            p_Type = &v30->AssociatedIrp.MasterIrp->Type;
            *p_Type = 0;
            v52 = *(_QWORD *)&DmaAdapter[3];
            v53 = *(_DWORD *)(*(_QWORD *)&DmaAdapter[3] + 80LL);
            v54 = 0;
            if ( (v53 & 0x4000000) != 0 )
            {
              v54 = 2;
              *p_Type = 2;
              v53 = *(_DWORD *)(v52 + 80);
            }
            if ( (v53 & 0x8000000) != 0 )
            {
              v54 |= 4u;
              *p_Type = v54;
              v53 = *(_DWORD *)(v52 + 80);
            }
            if ( (v53 & 0x2000000) != 0 )
              *p_Type = v54 | 1;
            v30->IoStatus.Information = 4LL;
            break;
          case FileIoPriorityHintInformation:
            v55 = *(_QWORD *)(*(_QWORD *)&DmaAdapter[3] + 208LL);
            if ( v55 && (v56 = *(_DWORD *)(v55 + 80)) != 0 )
              v57 = v56 - 1;
            else
              v57 = 2;
            *(_DWORD *)v30->AssociatedIrp.MasterIrp = v57;
            v30->IoStatus.Information = 4LL;
            break;
          default:
            switch ( v10 )
            {
              case FileProcessIdsUsingFileInformation:
                MasterIrp = v30->AssociatedIrp.MasterIrp;
                v70 = 0;
                NumaNodeInformation = IopQueryProcessIdsUsingFile(*(_QWORD *)&DmaAdapter[3], MasterIrp, Length, &v70);
                v68 = NumaNodeInformation;
                v40 = 1;
                if ( NumaNodeInformation == -1073741820 )
                  IoStatusBlock->Information = v70;
                else
                  v30->IoStatus.Information = v70;
                break;
              case FileNumaNodeInformation:
                NumaNodeInformation = IopGetNumaNodeInformation(*(_QWORD *)&DmaAdapter[3], v30->AssociatedIrp.MasterIrp);
                v68 = NumaNodeInformation;
                v40 = 1;
                if ( NumaNodeInformation >= 0 )
                  v30->IoStatus.Information = 2LL;
                break;
              case FileAllInformation:
                v42 = v30->AssociatedIrp.MasterIrp;
                HIDWORD(v42->UserIosb) = v74.GrantedAccess;
                v43 = IopGetModeInformation(*(_QWORD *)&DmaAdapter[3], v37, v38, v42);
                *(_DWORD *)(v44 + 88) = v43;
                *(_DWORD *)(v44 + 92) = v15->AlignmentRequirement;
                v30->IoStatus.Information = 12LL;
                break;
            }
            if ( !v40 )
            {
              NumaNodeInformation = IopCallDriverReference(v15, v30, v28, *(_QWORD **)&DmaAdapter[3], 2);
              v68 = NumaNodeInformation;
              goto LABEL_57;
            }
            break;
        }
        v30->IoStatus.Status = NumaNodeInformation;
      }
LABEL_57:
      if ( NumaNodeInformation == 259 )
      {
        if ( !v28 )
        {
          v46 = KeWaitForSingleObject(&Event, Executive, v9, 0, 0LL);
          if ( v46 == 257 || v46 == 192 )
            IopCancelAlertedRequest(&Event, v30);
          NumaNodeInformation = v83;
          *(_OWORD *)&IoStatusBlock->Status = v83;
          goto LABEL_61;
        }
        NumaNodeInformation = IopWaitForSynchronousIo(v30, *(unsigned int **)&DmaAdapter[3], v9);
      }
      else
      {
        v82 = 0LL;
        v76 = 0LL;
        if ( !v28 )
          v30->UserEvent = 0LL;
        v30->UserIosb = IoStatusBlock;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest((__int64)&v30->Tail, (__int64)&v82, (__int64)&v76, (__int64 *)&DmaAdapter[3], &v76);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v59 = KeGetCurrentIrql();
            if ( v59 <= 0xFu && CurrentIrql <= 0xFu && v59 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v62 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v63 = (v62 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v62;
              if ( v63 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              NumaNodeInformation = v68;
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( !v28 )
          goto LABEL_61;
      }
      IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)&DmaAdapter[3]);
LABEL_61:
      if ( v66 )
        KeSetKernelStackSwapEnable(1u);
      return NumaNodeInformation;
    }
  }
  return result;
}
