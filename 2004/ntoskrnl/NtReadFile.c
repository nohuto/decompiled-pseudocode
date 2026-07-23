/*
 * XREFs of NtReadFile @ 0x14068C230
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140598388 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x1406CD1D8 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14028FC60 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140345CE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1404FB608 (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtReadFile(
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
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  PFILE_OBJECT v12; // rbx
  __int64 v13; // rdx
  __int64 SectorSize; // r8
  unsigned __int64 v15; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v17; // rcx
  ULONG *p_Flags; // rsi
  int v19; // r14d
  PLARGE_INTEGER v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // ecx
  struct _DMA_ADAPTER *v23; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  ULONG Flags; // eax
  char v26; // si
  struct _KTHREAD *v27; // rax
  PFILE_OBJECT v28; // rbx
  __int64 v29; // rax
  NTSTATUS v30; // esi
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v32; // rsi
  char v33; // di
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rcx
  unsigned __int64 v36; // rax
  struct _DMA_ADAPTER *v37; // rbx
  char v38; // r14
  __int64 Irp; // rax
  _DWORD *v40; // r9
  IRP *v41; // rdi
  PIO_STATUS_BLOCK v42; // r15
  __int64 v43; // rsi
  ULONG v44; // eax
  _DWORD *FileObjectExtension; // rax
  int v46; // r14d
  struct _DMA_ADAPTER *v47; // rdi
  struct _MDL *Mdl; // rax
  int v49; // eax
  __int64 v50; // [rsp+50h] [rbp-88h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-80h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-78h] BYREF
  ULONG v53; // [rsp+68h] [rbp-70h]
  PRKEVENT Eventa; // [rsp+70h] [rbp-68h]
  int v55; // [rsp+78h] [rbp-60h]
  PVOID Object; // [rsp+80h] [rbp-58h] BYREF
  __int128 v57; // [rsp+88h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  PIO_APC_ROUTINE v60; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v61; // [rsp+F8h] [rbp+20h]

  v61 = ApcContext;
  v60 = ApcRoutine;
  FileObject = 0LL;
  Eventa = 0LL;
  v53 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result < 0 )
    return result;
  v12 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  if ( PreviousMode )
  {
    v55 = 0;
    v17 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v12 = FileObject;
    p_Flags = &FileObject->Flags;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v60, FileObject->Flags & 2);
    v19 = (int)Buffer;
    ProbeForWrite(Buffer, Length, 1u);
    if ( v12->CompletionContext && ((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_96;
    v20 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v12 = FileObject;
    }
    if ( (*p_Flags & 8) == 0 )
    {
LABEL_8:
      v21 = (__int64)Key;
      if ( Key )
      {
        if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
          v21 = 0x7FFFFFFF0000LL;
        v53 = *(_DWORD *)v21;
        v12 = FileObject;
      }
      goto LABEL_29;
    }
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( (_WORD)SectorSize )
    {
      v22 = RelatedDeviceObject->SectorSize;
      v15 = RelatedDeviceObject->SectorSize;
      if ( (((_DWORD)SectorSize - 1) & Length) != 0 )
      {
LABEL_25:
        if ( (_WORD)SectorSize )
        {
          v13 = Length % (unsigned int)v15;
          if ( Length % (unsigned int)v15 )
            goto LABEL_96;
        }
        v22 = v15;
        if ( (RelatedDeviceObject->AlignmentRequirement & v19) != 0 )
          goto LABEL_96;
LABEL_20:
        if ( ByteOffset && (_WORD)SectorSize && ((v22 - 1) & (unsigned int)QuadPart) != 0 )
          goto LABEL_96;
        goto LABEL_8;
      }
    }
    else
    {
      v22 = 0;
    }
    v15 = v22;
    if ( (RelatedDeviceObject->AlignmentRequirement & v19) == 0 )
      goto LABEL_20;
    goto LABEL_25;
  }
  v20 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  if ( Key )
    v53 = *Key;
LABEL_29:
  if ( Event )
  {
    Object = 0LL;
    v46 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v23 = (struct _DMA_ADAPTER *)Object;
    Eventa = (PRKEVENT)Object;
    if ( v46 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
      return v46;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v23 = (struct _DMA_ADAPTER *)Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( v20 || (Flags & 0x280) != 0 )
    {
      v38 = 0;
      goto LABEL_52;
    }
    if ( v23 )
      HalPutDmaAdapter(v23);
LABEL_96:
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return -1073741811;
  }
  v26 = (Flags & 4) != 0;
  v27 = KeGetCurrentThread();
  --v27->KernelApcDisable;
  v28 = FileObject;
  v29 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
  LOBYTE(v50) = 0;
  if ( _InterlockedExchange((volatile __int32 *)&v28->Busy, 1) )
  {
    v12 = FileObject;
    v30 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, PreviousMode, v26, v29, &v50);
  }
  else
  {
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    v12 = FileObject;
    ObfReferenceObject(FileObject);
    v30 = 0;
  }
  if ( (_BYTE)v50 )
  {
    if ( Eventa )
      HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v30;
  }
  else
  {
    if ( !v20 || QuadPart == -2 )
      QuadPart = v12->CurrentByteOffset.QuadPart;
    if ( !v12->PrivateCacheMap )
      goto LABEL_62;
    v57 = 0LL;
    FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
    if ( QuadPart < 0 )
    {
      if ( Eventa )
        HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
      goto LABEL_90;
    }
    if ( (MmVerifierData & 0x10) != 0 )
      v32 = (void *)VfFastIoSnapState();
    else
      v32 = 0LL;
    LOBYTE(v15) = 1;
    v33 = FastIoRead(v12, &QuadPart, Length, v15, v53, Buffer, &v57, RelatedDeviceObject);
    if ( v32 )
      VfFastIoCheckState(v32);
    if ( !v33 || (_DWORD)v57 && (_DWORD)v57 != -1073741807 && (_DWORD)v57 != -2147483643 )
    {
LABEL_62:
      v38 = 1;
      v23 = (struct _DMA_ADAPTER *)Eventa;
LABEL_52:
      if ( QuadPart >= 0 )
      {
        IopResetEvent((__int64)v12, v13, SectorSize, (_DWORD *)v15);
        Irp = IopAllocateIrpExReturn(
                (__int64)RelatedDeviceObject,
                (unsigned __int8)RelatedDeviceObject->StackSize,
                (unsigned __int8)v38 ^ 1u,
                retaddr);
        v41 = (IRP *)Irp;
        Object = (PVOID)Irp;
        if ( Irp )
        {
          *(_QWORD *)(Irp + 192) = v12;
          *(_QWORD *)(Irp + 152) = CurrentThread;
          *(_QWORD *)(Irp + 160) = 0LL;
          *(_BYTE *)(Irp + 64) = PreviousMode;
          *(_BYTE *)(Irp + 65) = 0;
          *(_BYTE *)(Irp + 68) = 0;
          *(_QWORD *)(Irp + 104) = 0LL;
          *(_QWORD *)(Irp + 80) = v23;
          v42 = IoStatusBlock;
          *(_QWORD *)(Irp + 72) = IoStatusBlock;
          *(_QWORD *)(Irp + 88) = v60;
          *(_QWORD *)(Irp + 96) = v61;
          v43 = *(_QWORD *)(Irp + 184);
          *(_DWORD *)(v43 - 72) = 3;
          *(_QWORD *)(v43 - 24) = v12;
          *(_QWORD *)(Irp + 24) = 0LL;
          *(_QWORD *)(Irp + 8) = 0LL;
          v44 = RelatedDeviceObject->Flags;
          if ( (v44 & 4) != 0 )
          {
            if ( Length )
            {
              v41->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                                              NonPagedPoolNxCacheAligned,
                                                              Length);
              v41->UserBuffer = Buffer;
              v49 = 112;
            }
            else
            {
              v49 = 80;
            }
            v41->Flags = v49;
          }
          else
          {
            v41->Flags = 0;
            if ( (v44 & 0x10) != 0 )
            {
              if ( Length )
              {
                Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, v41);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                MmProbeAndLockPages(Mdl, PreviousMode, IoWriteAccess);
              }
            }
            else
            {
              v41->UserBuffer = Buffer;
            }
          }
          v41->Flags |= (v12->Flags & 8 | 0x4800) >> 3;
          *(_DWORD *)(v43 - 64) = Length;
          *(_DWORD *)(v43 - 56) = v53;
          *(_QWORD *)(v43 - 48) = QuadPart;
          FileObjectExtension = v12->FileObjectExtension;
          if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
            *(_DWORD *)(v43 - 52) = v42->Information;
          LOBYTE(v40) = 1;
          return IopSynchronousServiceTail(RelatedDeviceObject, v41, (__int64)v12, v40, PreviousMode, v38, 0);
        }
        else
        {
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, v23);
          return -1073741670;
        }
      }
      if ( v23 )
        HalPutDmaAdapter(v23);
      if ( !v38 )
      {
LABEL_91:
        HalPutDmaAdapter((PADAPTER_OBJECT)v12);
        return -1073741811;
      }
LABEL_90:
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v12);
      goto LABEL_91;
    }
    v34 = KeGetCurrentThread();
    ++v34->ReadOperationCount;
    __incgsdword(0x2EDCu);
    v35 = KeGetCurrentThread();
    v36 = DWORD2(v57);
    v35->ReadTransferCount += DWORD2(v57);
    __addgsqword(0x2EE8u, v36);
    *(_OWORD *)&IoStatusBlock->Status = v57;
    v37 = (struct _DMA_ADAPTER *)FileObject;
    if ( Event )
    {
      v47 = (struct _DMA_ADAPTER *)Eventa;
      if ( (FileObject->Flags & 0x8000000) == 0 )
        KeSetEvent(Eventa, 0, 0);
      HalPutDmaAdapter(v47);
    }
    IopReleaseFileObjectLock(v37);
    HalPutDmaAdapter(v37);
    return v57;
  }
}
