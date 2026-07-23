/*
 * XREFs of NtWriteFile @ 0x1405F84C0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14059BE28 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 * Callees:
 *     IopFileObjectRevoked @ 0x140209E48 (IopFileObjectRevoked.c)
 *     IopUpdateWriteTransferCount @ 0x140209E80 (IopUpdateWriteTransferCount.c)
 *     IopUpdateWriteOperationCount @ 0x140209EB8 (IopUpdateWriteOperationCount.c)
 *     IopCheckFileObjectExtensionFlag @ 0x140209F2C (IopCheckFileObjectExtensionFlag.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140317034 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopProbeAndLockPages_1 @ 0x140320664 (IopProbeAndLockPages_1.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopExceptionFilter @ 0x1404FEEDC (IopExceptionFilter.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopWriteFile @ 0x1405CCA7C (IopWriteFile.c)
 *     ObReferenceFileObjectForWrite @ 0x1405F8E90 (ObReferenceFileObjectForWrite.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
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
  HANDLE v10; // r15
  KPROCESSOR_MODE v12; // si
  NTSTATUS v13; // ebx
  PFILE_OBJECT v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx
  ULONG *p_Flags; // r15
  ULONG v18; // r13d
  PVOID v19; // r12
  PLARGE_INTEGER v20; // rsi
  int SectorSize; // r8d
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // r9d
  int v26; // r15d
  struct _DMA_ADAPTER *v27; // rbx
  ULONG Flags; // r15d
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  char v31; // r15
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // rsi
  void *v33; // rbx
  char v34; // r15
  struct _DMA_ADAPTER *v35; // rbx
  __int64 Irp; // rax
  IRP *v37; // rsi
  PIO_STATUS_BLOCK v38; // rbx
  __int64 v39; // r15
  ULONG v40; // eax
  struct _IRP *PoolWithQuota_1; // rax
  PMDL Mdl; // rcx
  __int64 v43; // r8
  struct _DEVICE_OBJECT *v44; // r14
  char v45; // r12
  KPROCESSOR_MODE v46; // [rsp+60h] [rbp-B8h]
  char v47[15]; // [rsp+61h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-A8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-A0h]
  ULONG v50; // [rsp+80h] [rbp-98h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-90h]
  int v52; // [rsp+90h] [rbp-88h]
  PVOID Object; // [rsp+98h] [rbp-80h] BYREF
  PADAPTER_OBJECT v54; // [rsp+A0h] [rbp-78h]
  PIO_STATUS_BLOCK CurrentThread; // [rsp+A8h] [rbp-70h]
  __int128 v56; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-58h]
  int v58[2]; // [rsp+C8h] [rbp-50h]
  PFAST_IO_DISPATCH FastIoDispatch; // [rsp+D0h] [rbp-48h]
  ULONG *v60; // [rsp+D8h] [rbp-40h]
  __int64 retaddr; // [rsp+118h] [rbp+0h]
  __int64 v63; // [rsp+130h] [rbp+18h] BYREF
  PVOID v64; // [rsp+138h] [rbp+20h]

  v64 = ApcContext;
  v63 = (__int64)ApcRoutine;
  v10 = Event;
  if ( EnableFeatureServicing_40524482 == 1 || EnableFeatureServicing_40524482 && FeatureServicing_40524482_EnableKey() )
  {
    v54 = 0LL;
    *(_QWORD *)v58 = 0LL;
    v13 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
    if ( v13 < 0 || !IopFileObjectRevoked((__int64)v54) )
    {
      if ( v13 >= 0 )
        return IopWriteFile(
                 0LL,
                 v10,
                 v63,
                 (__int64)ApcContext,
                 IoStatusBlock,
                 (__int64)Buffer,
                 Length,
                 ByteOffset,
                 Key,
                 v58[1]);
      return v13;
    }
LABEL_123:
    HalPutDmaAdapter(0LL);
    return -1073739504;
  }
  FileObject = 0LL;
  v57 = 0LL;
  DmaAdapter = 0LL;
  v50 = 0;
  *(_QWORD *)&v47[7] = 0LL;
  CurrentThread = (PIO_STATUS_BLOCK)KeGetCurrentThread();
  v12 = BYTE2(CurrentThread[35].Pointer);
  v46 = v12;
  v13 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  v14 = 0LL;
  if ( v13 >= 0 && IopFileObjectRevoked((__int64)FileObject) )
    goto LABEL_123;
  if ( v13 < 0 )
    return v13;
  DeviceObject = IoGetRelatedDeviceObject(0LL);
  if ( v12 )
  {
    v52 = 0;
    v15 = (__int64)IoStatusBlock;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v14 = FileObject;
    p_Flags = &FileObject->Flags;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, &v63, FileObject->Flags & 2);
    v18 = Length;
    v19 = Buffer;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( FileObject->CompletionContext && (v63 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_36;
    v20 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v47[7] = *ByteOffset;
      v14 = FileObject;
    }
    if ( (*p_Flags & 8) == 0 )
    {
LABEL_37:
      if ( Key )
      {
        if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
          v16 = (__int64)Key;
        v50 = *(_DWORD *)v16;
        v14 = FileObject;
      }
      v10 = Event;
      goto LABEL_46;
    }
    SectorSize = DeviceObject->SectorSize;
    if ( (_WORD)SectorSize )
    {
      v22 = DeviceObject->SectorSize;
      v23 = v22;
      v24 = v22;
      if ( ((SectorSize - 1) & Length) != 0 )
      {
LABEL_25:
        if ( (_WORD)SectorSize && Length % v24 || (DeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
          goto LABEL_36;
LABEL_29:
        if ( ByteOffset
          && *(_QWORD *)&v47[7] != -1LL
          && (*(_DWORD *)&v47[7] != -2 || *(_DWORD *)&v47[11] != -1 || (*p_Flags & 2) == 0)
          && (_WORD)SectorSize
          && ((v22 - 1) & *(_DWORD *)&v47[7]) != 0 )
        {
LABEL_36:
          HalPutDmaAdapter((PADAPTER_OBJECT)v14);
          return -1073741811;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    v24 = v23;
    if ( (DeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
      goto LABEL_29;
    goto LABEL_25;
  }
  v20 = ByteOffset;
  if ( ByteOffset )
    *(LARGE_INTEGER *)&v47[7] = *ByteOffset;
  v18 = Length;
  v19 = Buffer;
  if ( Key )
    v50 = *Key;
LABEL_46:
  if ( (BYTE4(v57) & 6) == 4 )
    *(_QWORD *)&v47[7] = -1LL;
  if ( v10 )
  {
    Object = 0LL;
    v26 = ObReferenceObjectByHandle(v10, 2u, (POBJECT_TYPE)ExEventObjectType, v46, &Object, 0LL);
    v27 = (struct _DMA_ADAPTER *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v26 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      return v26;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v27 = DmaAdapter;
  }
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v60 = &v14->Flags;
  Flags = v14->Flags;
  if ( (Flags & 2) != 0 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v47[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v14 = FileObject;
      v13 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)v47);
    }
    else
    {
      if ( v30 )
        *(_BYTE *)(v30 + 26) |= 1u;
      v14 = FileObject;
      ObfReferenceObject(FileObject);
      v13 = 0;
    }
    if ( v47[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      return v13;
    }
    v31 = 1;
    v47[0] = 1;
    if ( !v20 && !*(_DWORD *)&v47[7] || *(_DWORD *)&v47[7] == -2 && *(_DWORD *)&v47[11] == -1 )
      *(_QWORD *)&v47[7] = v14->CurrentByteOffset.QuadPart;
    if ( v14->PrivateCacheMap )
    {
      v56 = 0LL;
      FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
      if ( *(int *)&v47[11] < 0 && (*(_DWORD *)&v47[11] != -1 || *(_DWORD *)&v47[7] != -1) )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
LABEL_75:
        IopReleaseFileObjectLock((PADAPTER_OBJECT)v14);
LABEL_76:
        HalPutDmaAdapter((PADAPTER_OBJECT)v14);
        return -1073741811;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v33 = (void *)VfFastIoSnapState();
      else
        v33 = 0LL;
      v34 = FastIoWrite(v14, &v47[7], v18, 1LL, v50, v19, &v56, DeviceObject);
      if ( v33 )
        VfFastIoCheckState(v33);
      if ( v34 && !(_DWORD)v56 )
      {
        IopUpdateWriteOperationCount();
        IopUpdateWriteTransferCount(DWORD2(v56), 0LL);
        *(_OWORD *)&IoStatusBlock->Status = v56;
        if ( Event )
        {
          v35 = DmaAdapter;
          if ( (v14->Flags & 0x8000000) == 0 )
            KeSetEvent((PRKEVENT)DmaAdapter, 0, 0);
          HalPutDmaAdapter(v35);
        }
        IopReleaseFileObjectLock((PADAPTER_OBJECT)v14);
        HalPutDmaAdapter((PADAPTER_OBJECT)v14);
        return v56;
      }
      v27 = DmaAdapter;
      v31 = 1;
    }
    else
    {
      v27 = DmaAdapter;
    }
LABEL_97:
    if ( *(int *)&v47[11] < 0 && (*(_DWORD *)&v47[11] != -1 || *(_DWORD *)&v47[7] != -1) )
    {
      if ( v27 )
        HalPutDmaAdapter(v27);
      if ( !v31 )
        goto LABEL_76;
      goto LABEL_75;
    }
    IopResetEvent((__int64)v14);
    Irp = IopAllocateIrpExReturn(
            (__int64)DeviceObject,
            (unsigned __int8)DeviceObject->StackSize,
            (unsigned __int8)v31 ^ 1u,
            retaddr);
    v37 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup((PADAPTER_OBJECT)v14, v27);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v14;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_QWORD *)(Irp + 160) = 0LL;
    *(_BYTE *)(Irp + 64) = v46;
    *(_BYTE *)(Irp + 65) = 0;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_QWORD *)(Irp + 80) = v27;
    v38 = IoStatusBlock;
    CurrentThread = IoStatusBlock;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v63;
    *(_QWORD *)(Irp + 96) = v64;
    v39 = *(_QWORD *)(Irp + 184);
    *(_DWORD *)(v39 - 72) = 4;
    *(_QWORD *)(v39 - 24) = v14;
    if ( (*v60 & 0x10) != 0 )
      *(_BYTE *)(v39 - 70) = 4;
    *(_QWORD *)(Irp + 24) = 0LL;
    *(_QWORD *)(Irp + 8) = 0LL;
    v40 = DeviceObject->Flags;
    if ( (v40 & 4) != 0 )
    {
      if ( v18 )
      {
        PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNxCacheAligned, v18);
        v37->AssociatedIrp.MasterIrp = PoolWithQuota_1;
        memmove(PoolWithQuota_1, v19, v18);
        v38 = CurrentThread;
        v37->Flags = 48;
      }
      else
      {
        v37->Flags = 16;
      }
    }
    else
    {
      v37->Flags = 0;
      if ( (v40 & 0x10) != 0 )
      {
        if ( v18 )
        {
          Mdl = IoAllocateMdl(v19, v18, 0, 1u, v37);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v44 = DeviceObject;
          v45 = v46;
          IopProbeAndLockPages_1((__int64)Mdl, v46, v43, (__int64)DeviceObject, *(unsigned __int8 *)(v39 - 72));
          goto LABEL_118;
        }
      }
      else
      {
        v37->UserBuffer = v19;
      }
    }
    v44 = DeviceObject;
    v45 = v46;
LABEL_118:
    v37->Flags |= (v14->Flags & 8 | 0x5000) >> 3;
    *(_DWORD *)(v39 - 64) = v18;
    *(_DWORD *)(v39 - 56) = v50;
    *(_QWORD *)(v39 - 48) = *(_QWORD *)&v47[7];
    if ( IopCheckFileObjectExtensionFlag((__int64)v14, 16) )
      *(_DWORD *)(v39 - 52) = v38->Information;
    return IopSynchronousServiceTail(v44, v37, v45, v47[0], 1);
  }
  if ( v20 || (Flags & 0x280) != 0 )
  {
    v31 = 0;
    v47[0] = 0;
    goto LABEL_97;
  }
  if ( v27 )
    HalPutDmaAdapter(v27);
  HalPutDmaAdapter((PADAPTER_OBJECT)v14);
  return -1073741811;
}
