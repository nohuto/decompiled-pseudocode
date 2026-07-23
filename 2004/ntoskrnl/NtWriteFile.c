/*
 * XREFs of NtWriteFile @ 0x14068B600
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140598388 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14028FC60 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopFileObjectRevoked @ 0x140297B98 (IopFileObjectRevoked.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140345CE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IopExceptionFilter @ 0x1404FB608 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x14052BDA0 (MmUpdateMdlTracker.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     ObReferenceFileObjectForWrite @ 0x14068BE80 (ObReferenceFileObjectForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
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
  bool v27; // di
  struct _KTHREAD *v28; // rax
  __int64 v29; // rax
  char v30; // r13
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v32; // rsi
  char v33; // bl
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rcx
  unsigned __int64 v36; // rax
  struct _DMA_ADAPTER *v37; // rbx
  __int64 Irp; // rax
  _DWORD *v39; // r9
  IRP *v40; // rsi
  char v41; // cl
  PIO_STATUS_BLOCK v42; // r15
  __int64 v43; // r14
  struct _DEVICE_OBJECT *v44; // r10
  ULONG v45; // eax
  _DWORD *FileObjectExtension; // rax
  int v47; // r14d
  struct _MDL *Mdl; // rax
  unsigned __int64 v49; // rbx
  __int64 v50; // r12
  struct _DMA_ADAPTER *v51; // rdi
  char v52; // r8
  ULONG v53; // ebx
  struct _IRP *PoolWithQuota_1; // rax
  int v55; // eax
  unsigned __int8 v56; // [rsp+50h] [rbp-A8h]
  _BYTE v57[15]; // [rsp+51h] [rbp-A7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-98h]
  PRKEVENT Eventa; // [rsp+68h] [rbp-90h]
  ULONG v60; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-80h]
  int v62; // [rsp+80h] [rbp-78h]
  PVOID Object; // [rsp+88h] [rbp-70h] BYREF
  __int128 v64; // [rsp+90h] [rbp-68h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  ULONG *v67; // [rsp+B0h] [rbp-48h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]
  PIO_APC_ROUTINE v69; // [rsp+110h] [rbp+18h] BYREF
  PVOID v70; // [rsp+118h] [rbp+20h]

  v70 = ApcContext;
  v69 = ApcRoutine;
  FileObject = 0LL;
  v65 = 0LL;
  Eventa = 0LL;
  v60 = 0;
  *(_QWORD *)&v57[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v56 = PreviousMode;
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
    v62 = 0;
    v17 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v12 = FileObject;
    p_Flags = &FileObject->Flags;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v69, FileObject->Flags & 2);
    v19 = Buffer;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( FileObject->CompletionContext && ((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_27;
    v20 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v57[7] = *ByteOffset;
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
        || *(_QWORD *)&v57[7] == -1LL
        || *(_DWORD *)&v57[7] == -2 && *(_DWORD *)&v57[11] == -1 && (*p_Flags & 2) != 0
        || !(_WORD)SectorSize
        || (((_DWORD)v14 - 1) & *(_DWORD *)&v57[7]) == 0 )
      {
LABEL_13:
        v21 = (__int64)Key;
        if ( Key )
        {
          if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          v60 = *(_DWORD *)v21;
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
    *(LARGE_INTEGER *)&v57[7] = *ByteOffset;
  v19 = Buffer;
  if ( Key )
    v60 = *Key;
LABEL_41:
  if ( (BYTE4(v65) & 6) == 4 )
    *(_QWORD *)&v57[7] = -1LL;
  if ( Event )
  {
    Object = 0LL;
    v47 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v24 = (struct _DMA_ADAPTER *)Object;
    Eventa = (PRKEVENT)Object;
    if ( v47 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
      return v47;
    }
    KeResetEvent((PRKEVENT)Object);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v24 = (struct _DMA_ADAPTER *)Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  v67 = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) != 0 )
  {
    v27 = (Flags & 4) != 0;
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    v29 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v57[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v52 = v27;
      v12 = FileObject;
      v11 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, PreviousMode, v52, v29, v57);
    }
    else
    {
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      v12 = FileObject;
      ObfReferenceObject(FileObject);
      v11 = 0;
    }
    if ( !v57[0] )
    {
      v30 = 1;
      if ( !v20 && !*(_DWORD *)&v57[7] || *(_DWORD *)&v57[7] == -2 && *(_DWORD *)&v57[11] == -1 )
        *(_QWORD *)&v57[7] = v12->CurrentByteOffset.QuadPart;
      if ( v12->PrivateCacheMap )
      {
        v64 = 0LL;
        FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
        if ( *(int *)&v57[11] < 0 && (*(_DWORD *)&v57[11] != -1 || *(_DWORD *)&v57[7] != -1) )
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
          v32 = (void *)VfFastIoSnapState();
        else
          v32 = 0LL;
        v33 = FastIoWrite(v12, &v57[7], Length, 1LL, v60, v19, &v64, DeviceObject);
        if ( v32 )
          VfFastIoCheckState(v32);
        if ( v33 && !(_DWORD)v64 )
        {
          v34 = KeGetCurrentThread();
          ++v34->WriteOperationCount;
          __incgsdword(0x2EE0u);
          v35 = KeGetCurrentThread();
          v36 = DWORD2(v64);
          v35->WriteTransferCount += DWORD2(v64);
          __addgsqword(0x2EF0u, v36);
          *(_OWORD *)&IoStatusBlock->Status = v64;
          v37 = (struct _DMA_ADAPTER *)FileObject;
          if ( Event )
          {
            v51 = (struct _DMA_ADAPTER *)Eventa;
            if ( (FileObject->Flags & 0x8000000) == 0 )
              KeSetEvent(Eventa, 0, 0);
            HalPutDmaAdapter(v51);
          }
          IopReleaseFileObjectLock(v37);
          HalPutDmaAdapter(v37);
          return v64;
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
  v30 = 0;
LABEL_66:
  if ( *(int *)&v57[11] < 0 && (*(_DWORD *)&v57[11] != -1 || *(_DWORD *)&v57[7] != -1) )
  {
    if ( v24 )
      HalPutDmaAdapter(v24);
    if ( !v30 )
      goto LABEL_113;
    goto LABEL_112;
  }
  IopResetEvent((__int64)v12, v13, v14, SectorSize);
  Irp = IopAllocateIrpExReturn(
          (__int64)DeviceObject,
          (unsigned __int8)DeviceObject->StackSize,
          (unsigned __int8)v30 ^ 1u,
          retaddr);
  v40 = (IRP *)Irp;
  Object = (PVOID)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v12;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_QWORD *)(Irp + 160) = 0LL;
    v41 = v56;
    *(_WORD *)(Irp + 64) = v56;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_QWORD *)(Irp + 80) = v24;
    v42 = IoStatusBlock;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v69;
    *(_QWORD *)(Irp + 96) = v70;
    v43 = *(_QWORD *)(Irp + 184);
    *(_DWORD *)(v43 - 72) = 4;
    *(_QWORD *)(v43 - 24) = v12;
    if ( (*v67 & 0x10) != 0 )
      *(_BYTE *)(v43 - 70) = 4;
    *(_QWORD *)(Irp + 24) = 0LL;
    *(_QWORD *)(Irp + 8) = 0LL;
    v44 = DeviceObject;
    v45 = DeviceObject->Flags;
    if ( (v45 & 4) != 0 )
    {
      if ( Length )
      {
        v53 = Length;
        PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNxCacheAligned, Length);
        v40->AssociatedIrp.MasterIrp = PoolWithQuota_1;
        memmove(PoolWithQuota_1, v19, v53);
        v55 = 48;
        v41 = v56;
        v44 = DeviceObject;
      }
      else
      {
        v55 = 16;
      }
      v40->Flags = v55;
    }
    else
    {
      v40->Flags = 0;
      if ( (v45 & 0x10) != 0 )
      {
        if ( Length )
        {
          Mdl = IoAllocateMdl(v19, Length, 0, 1u, v40);
          v49 = (unsigned __int64)Mdl;
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v50 = *(unsigned __int8 *)(v43 - 72);
          MmProbeAndLockPages(Mdl, v56, IoReadAccess);
          if ( (MmTrackLockedPages & 1) != 0 )
            MmUpdateMdlTracker(v49, (__int64)DeviceObject->DriverObject->MajorFunction[v50], (__int64)DeviceObject);
          v41 = v56;
          v44 = DeviceObject;
        }
      }
      else
      {
        v40->UserBuffer = v19;
      }
    }
    v40->Flags |= (v12->Flags & 8 | 0x5000) >> 3;
    *(_DWORD *)(v43 - 64) = Length;
    *(_DWORD *)(v43 - 56) = v60;
    *(_QWORD *)(v43 - 48) = *(_QWORD *)&v57[7];
    FileObjectExtension = v12->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      *(_DWORD *)(v43 - 52) = v42->Information;
    LOBYTE(v39) = 1;
    return IopSynchronousServiceTail(v44, v40, (__int64)v12, v39, v41, v30, 1u);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, v24);
    return -1073741670;
  }
}
