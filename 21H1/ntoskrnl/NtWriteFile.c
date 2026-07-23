/*
 * XREFs of NtWriteFile @ 0x1405E3F90
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140597C98 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IopFileObjectRevoked @ 0x140205670 (IopFileObjectRevoked.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402533E0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140307EE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IopExceptionFilter @ 0x1404FAFB8 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x14052B750 (MmUpdateMdlTracker.c)
 *     ObReferenceFileObjectForWrite @ 0x1405E4810 (ObReferenceFileObjectForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v11; // ebx
  PFILE_OBJECT v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *SectorSize; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v17; // rcx
  ULONG *p_Flags; // rbx
  PVOID v19; // r12
  PLARGE_INTEGER v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // r10d
  struct _DMA_ADAPTER *v24; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  ULONG Flags; // eax
  struct _KTHREAD *v27; // rax
  __int64 v28; // rax
  char v29; // r13
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v31; // rsi
  char v32; // bl
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // rcx
  unsigned __int64 v35; // rax
  struct _DMA_ADAPTER *v36; // rbx
  __int64 Irp; // rax
  IRP *v38; // rsi
  char v39; // cl
  PIO_STATUS_BLOCK v40; // r15
  __int64 v41; // r14
  struct _DEVICE_OBJECT *v42; // r10
  ULONG v43; // eax
  _DWORD *FileObjectExtension; // rax
  int v45; // r14d
  struct _MDL *Mdl; // rax
  unsigned __int64 v47; // rbx
  __int64 v48; // r12
  struct _DMA_ADAPTER *v49; // rdi
  ULONG v50; // ebx
  struct _IRP *PoolWithQuota_1; // rax
  int v52; // eax
  unsigned __int8 v53; // [rsp+50h] [rbp-A8h]
  _BYTE v54[15]; // [rsp+51h] [rbp-A7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-98h]
  PRKEVENT Eventa; // [rsp+68h] [rbp-90h]
  ULONG v57; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-80h]
  int v59; // [rsp+80h] [rbp-78h]
  PVOID Object; // [rsp+88h] [rbp-70h] BYREF
  __int128 v61; // [rsp+90h] [rbp-68h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  ULONG *v64; // [rsp+B0h] [rbp-48h]
  PIO_APC_ROUTINE v65; // [rsp+110h] [rbp+18h] BYREF
  PVOID v66; // [rsp+118h] [rbp+20h]

  v66 = ApcContext;
  v65 = ApcRoutine;
  FileObject = 0LL;
  v62 = 0LL;
  Eventa = 0LL;
  v57 = 0;
  *(_QWORD *)&v54[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v53 = PreviousMode;
  v11 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  v12 = 0LL;
  if ( v11 >= 0 && IopFileObjectRevoked((__int64)FileObject) )
  {
    HalPutDmaAdapter(0LL);
    return -1073739504;
  }
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(0LL);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    v59 = 0;
    v17 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v12 = FileObject;
    p_Flags = &FileObject->Flags;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v65, FileObject->Flags & 2);
    v19 = Buffer;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( FileObject->CompletionContext && ((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_27;
    v20 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v54[7] = *ByteOffset;
      v12 = FileObject;
    }
    if ( (*p_Flags & 8) == 0 )
      goto LABEL_13;
    SectorSize = (_DWORD *)RelatedDeviceObject->SectorSize;
    if ( (_WORD)SectorSize )
    {
      v14 = RelatedDeviceObject->SectorSize;
      v13 = v14;
      v22 = RelatedDeviceObject->SectorSize;
      if ( (((_DWORD)SectorSize - 1) & Length) != 0 )
        goto LABEL_33;
    }
    else
    {
      v14 = 0LL;
      v13 = 0LL;
    }
    v22 = v13;
    if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
    {
LABEL_22:
      if ( !ByteOffset
        || *(_QWORD *)&v54[7] == -1LL
        || *(_DWORD *)&v54[7] == -2 && *(_DWORD *)&v54[11] == -1 && (*p_Flags & 2) != 0
        || !(_WORD)SectorSize
        || (((_DWORD)v14 - 1) & *(_DWORD *)&v54[7]) == 0 )
      {
LABEL_13:
        v21 = (__int64)Key;
        if ( Key )
        {
          if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          v57 = *(_DWORD *)v21;
          v12 = FileObject;
        }
        goto LABEL_41;
      }
LABEL_27:
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
      return -1073741811;
    }
LABEL_33:
    if ( (_WORD)SectorSize )
    {
      v13 = Length % v22;
      if ( Length % v22 )
        goto LABEL_27;
    }
    if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
      goto LABEL_27;
    goto LABEL_22;
  }
  v20 = ByteOffset;
  if ( ByteOffset )
    *(LARGE_INTEGER *)&v54[7] = *ByteOffset;
  v19 = Buffer;
  if ( Key )
    v57 = *Key;
LABEL_41:
  if ( (BYTE4(v62) & 6) == 4 )
    *(_QWORD *)&v54[7] = -1LL;
  if ( Event )
  {
    Object = 0LL;
    v45 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v24 = (struct _DMA_ADAPTER *)Object;
    Eventa = (PRKEVENT)Object;
    if ( v45 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
      return v45;
    }
    KeResetEvent((PRKEVENT)Object);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v24 = (struct _DMA_ADAPTER *)Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  v64 = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) != 0 )
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    v28 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v54[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v12 = FileObject;
      v11 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)v54);
    }
    else
    {
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      v12 = FileObject;
      ObfReferenceObject(FileObject);
      v11 = 0;
    }
    if ( !v54[0] )
    {
      v29 = 1;
      if ( !v20 && !*(_DWORD *)&v54[7] || *(_DWORD *)&v54[7] == -2 && *(_DWORD *)&v54[11] == -1 )
        *(_QWORD *)&v54[7] = v12->CurrentByteOffset.QuadPart;
      if ( v12->PrivateCacheMap )
      {
        v61 = 0LL;
        FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
        if ( *(int *)&v54[11] < 0 && (*(_DWORD *)&v54[11] != -1 || *(_DWORD *)&v54[7] != -1) )
        {
          if ( Eventa )
            HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
LABEL_112:
          IopReleaseFileObjectLock((PADAPTER_OBJECT)v12);
LABEL_113:
          HalPutDmaAdapter((PADAPTER_OBJECT)v12);
          return -1073741811;
        }
        if ( (MmVerifierData & 0x10) != 0 )
          v31 = (void *)VfFastIoSnapState();
        else
          v31 = 0LL;
        v32 = FastIoWrite(v12, &v54[7], Length, 1LL, v57, v19, &v61, DeviceObject);
        if ( v31 )
          VfFastIoCheckState(v31);
        if ( v32 && !(_DWORD)v61 )
        {
          v33 = KeGetCurrentThread();
          ++v33->WriteOperationCount;
          __incgsdword(0x2EE0u);
          v34 = KeGetCurrentThread();
          v35 = DWORD2(v61);
          v34->WriteTransferCount += DWORD2(v61);
          __addgsqword(0x2EF0u, v35);
          *(_OWORD *)&IoStatusBlock->Status = v61;
          v36 = (struct _DMA_ADAPTER *)FileObject;
          if ( Event )
          {
            v49 = (struct _DMA_ADAPTER *)Eventa;
            if ( (FileObject->Flags & 0x8000000) == 0 )
              KeSetEvent(Eventa, 0, 0);
            HalPutDmaAdapter(v49);
          }
          IopReleaseFileObjectLock(v36);
          HalPutDmaAdapter(v36);
          return v61;
        }
      }
      v24 = (struct _DMA_ADAPTER *)Eventa;
      goto LABEL_66;
    }
    if ( Eventa )
      HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v11;
  }
  if ( !v20 && (Flags & 0x280) == 0 )
  {
    if ( v24 )
      HalPutDmaAdapter(v24);
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return -1073741811;
  }
  v29 = 0;
LABEL_66:
  if ( *(int *)&v54[11] < 0 && (*(_DWORD *)&v54[11] != -1 || *(_DWORD *)&v54[7] != -1) )
  {
    if ( v24 )
      HalPutDmaAdapter(v24);
    if ( !v29 )
      goto LABEL_113;
    goto LABEL_112;
  }
  IopResetEvent((__int64)v12, v13, v14, SectorSize);
  Irp = IopAllocateIrpExReturn();
  v38 = (IRP *)Irp;
  Object = (PVOID)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v12;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_QWORD *)(Irp + 160) = 0LL;
    v39 = v53;
    *(_WORD *)(Irp + 64) = v53;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_QWORD *)(Irp + 80) = v24;
    v40 = IoStatusBlock;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v65;
    *(_QWORD *)(Irp + 96) = v66;
    v41 = *(_QWORD *)(Irp + 184);
    *(_DWORD *)(v41 - 72) = 4;
    *(_QWORD *)(v41 - 24) = v12;
    if ( (*v64 & 0x10) != 0 )
      *(_BYTE *)(v41 - 70) = 4;
    *(_QWORD *)(Irp + 24) = 0LL;
    *(_QWORD *)(Irp + 8) = 0LL;
    v42 = DeviceObject;
    v43 = DeviceObject->Flags;
    if ( (v43 & 4) != 0 )
    {
      if ( Length )
      {
        v50 = Length;
        PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNxCacheAligned, Length);
        v38->AssociatedIrp.MasterIrp = PoolWithQuota_1;
        memmove(PoolWithQuota_1, v19, v50);
        v52 = 48;
        v39 = v53;
        v42 = DeviceObject;
      }
      else
      {
        v52 = 16;
      }
      v38->Flags = v52;
    }
    else
    {
      v38->Flags = 0;
      if ( (v43 & 0x10) != 0 )
      {
        if ( Length )
        {
          Mdl = IoAllocateMdl(v19, Length, 0, 1u, v38);
          v47 = (unsigned __int64)Mdl;
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v48 = *(unsigned __int8 *)(v41 - 72);
          MmProbeAndLockPages(Mdl, v53, IoReadAccess);
          if ( (MmTrackLockedPages & 1) != 0 )
            MmUpdateMdlTracker(v47, (__int64)DeviceObject->DriverObject->MajorFunction[v48], (__int64)DeviceObject);
          v39 = v53;
          v42 = DeviceObject;
        }
      }
      else
      {
        v38->UserBuffer = v19;
      }
    }
    v38->Flags |= (v12->Flags & 8 | 0x5000) >> 3;
    *(_DWORD *)(v41 - 64) = Length;
    *(_DWORD *)(v41 - 56) = v57;
    *(_QWORD *)(v41 - 48) = *(_QWORD *)&v54[7];
    FileObjectExtension = v12->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      *(_DWORD *)(v41 - 52) = v40->Information;
    return IopSynchronousServiceTail(v42, v38, v39, v29, 1);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, v24);
    return -1073741670;
  }
}
