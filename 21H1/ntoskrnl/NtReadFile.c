/*
 * XREFs of NtReadFile @ 0x1405E54D0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140597C98 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x140652B5C (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402533E0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140307EE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1404FAFB8 (IopExceptionFilter.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
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
  struct _KTHREAD *v26; // rax
  PFILE_OBJECT v27; // rbx
  __int64 v28; // rax
  NTSTATUS v29; // esi
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v31; // rsi
  char v32; // di
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // rcx
  unsigned __int64 v35; // rax
  struct _DMA_ADAPTER *v36; // rbx
  char v37; // r14
  __int64 Irp; // rax
  IRP *v39; // rdi
  PIO_STATUS_BLOCK v40; // r15
  __int64 v41; // rsi
  ULONG v42; // eax
  _DWORD *FileObjectExtension; // rax
  int v44; // r14d
  struct _DMA_ADAPTER *v45; // rdi
  struct _MDL *Mdl; // rax
  int v47; // eax
  __int64 v48; // [rsp+50h] [rbp-88h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-80h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-78h] BYREF
  ULONG v51; // [rsp+68h] [rbp-70h]
  PRKEVENT Eventa; // [rsp+70h] [rbp-68h]
  int v53; // [rsp+78h] [rbp-60h]
  PVOID Object; // [rsp+80h] [rbp-58h] BYREF
  __int128 v55; // [rsp+88h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  PIO_APC_ROUTINE v57; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v58; // [rsp+F8h] [rbp+20h]

  v58 = ApcContext;
  v57 = ApcRoutine;
  FileObject = 0LL;
  Eventa = 0LL;
  v51 = 0;
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
    v53 = 0;
    v17 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v12 = FileObject;
    p_Flags = &FileObject->Flags;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v57, FileObject->Flags & 2);
    v19 = (int)Buffer;
    ProbeForWrite(Buffer, Length, 1u);
    if ( v12->CompletionContext && ((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
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
        v51 = *(_DWORD *)v21;
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
    v51 = *Key;
LABEL_29:
  if ( Event )
  {
    Object = 0LL;
    v44 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v23 = (struct _DMA_ADAPTER *)Object;
    Eventa = (PRKEVENT)Object;
    if ( v44 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
      return v44;
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
      v37 = 0;
      goto LABEL_52;
    }
    if ( v23 )
      HalPutDmaAdapter(v23);
LABEL_96:
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return -1073741811;
  }
  v26 = KeGetCurrentThread();
  --v26->KernelApcDisable;
  v27 = FileObject;
  v28 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
  LOBYTE(v48) = 0;
  if ( _InterlockedExchange((volatile __int32 *)&v27->Busy, 1) )
  {
    v12 = FileObject;
    v29 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)&v48);
  }
  else
  {
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v12 = FileObject;
    ObfReferenceObject(FileObject);
    v29 = 0;
  }
  if ( (_BYTE)v48 )
  {
    if ( Eventa )
      HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v29;
  }
  else
  {
    if ( !v20 || QuadPart == -2 )
      QuadPart = v12->CurrentByteOffset.QuadPart;
    if ( !v12->PrivateCacheMap )
      goto LABEL_62;
    v55 = 0LL;
    FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
    if ( QuadPart < 0 )
    {
      if ( Eventa )
        HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
      goto LABEL_90;
    }
    if ( (MmVerifierData & 0x10) != 0 )
      v31 = (void *)VfFastIoSnapState();
    else
      v31 = 0LL;
    LOBYTE(v15) = 1;
    v32 = FastIoRead(v12, &QuadPart, Length, v15, v51, Buffer, &v55, RelatedDeviceObject);
    if ( v31 )
      VfFastIoCheckState(v31);
    if ( !v32 || (_DWORD)v55 && (_DWORD)v55 != -1073741807 && (_DWORD)v55 != -2147483643 )
    {
LABEL_62:
      v37 = 1;
      v23 = (struct _DMA_ADAPTER *)Eventa;
LABEL_52:
      if ( QuadPart >= 0 )
      {
        IopResetEvent((__int64)v12, v13, SectorSize, (_DWORD *)v15);
        Irp = IopAllocateIrpExReturn();
        v39 = (IRP *)Irp;
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
          v40 = IoStatusBlock;
          *(_QWORD *)(Irp + 72) = IoStatusBlock;
          *(_QWORD *)(Irp + 88) = v57;
          *(_QWORD *)(Irp + 96) = v58;
          v41 = *(_QWORD *)(Irp + 184);
          *(_DWORD *)(v41 - 72) = 3;
          *(_QWORD *)(v41 - 24) = v12;
          *(_QWORD *)(Irp + 24) = 0LL;
          *(_QWORD *)(Irp + 8) = 0LL;
          v42 = RelatedDeviceObject->Flags;
          if ( (v42 & 4) != 0 )
          {
            if ( Length )
            {
              v39->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                                              NonPagedPoolNxCacheAligned,
                                                              Length);
              v39->UserBuffer = Buffer;
              v47 = 112;
            }
            else
            {
              v47 = 80;
            }
            v39->Flags = v47;
          }
          else
          {
            v39->Flags = 0;
            if ( (v42 & 0x10) != 0 )
            {
              if ( Length )
              {
                Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, v39);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                MmProbeAndLockPages(Mdl, PreviousMode, IoWriteAccess);
              }
            }
            else
            {
              v39->UserBuffer = Buffer;
            }
          }
          v39->Flags |= (v12->Flags & 8 | 0x4800) >> 3;
          *(_DWORD *)(v41 - 64) = Length;
          *(_DWORD *)(v41 - 56) = v51;
          *(_QWORD *)(v41 - 48) = QuadPart;
          FileObjectExtension = v12->FileObjectExtension;
          if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
            *(_DWORD *)(v41 - 52) = v40->Information;
          return IopSynchronousServiceTail(RelatedDeviceObject, v39, PreviousMode, v37, 0);
        }
        else
        {
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, v23);
          return -1073741670;
        }
      }
      if ( v23 )
        HalPutDmaAdapter(v23);
      if ( !v37 )
      {
LABEL_91:
        HalPutDmaAdapter((PADAPTER_OBJECT)v12);
        return -1073741811;
      }
LABEL_90:
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v12);
      goto LABEL_91;
    }
    v33 = KeGetCurrentThread();
    ++v33->ReadOperationCount;
    __incgsdword(0x2EDCu);
    v34 = KeGetCurrentThread();
    v35 = DWORD2(v55);
    v34->ReadTransferCount += DWORD2(v55);
    __addgsqword(0x2EE8u, v35);
    *(_OWORD *)&IoStatusBlock->Status = v55;
    v36 = (struct _DMA_ADAPTER *)FileObject;
    if ( Event )
    {
      v45 = (struct _DMA_ADAPTER *)Eventa;
      if ( (FileObject->Flags & 0x8000000) == 0 )
        KeSetEvent(Eventa, 0, 0);
      HalPutDmaAdapter(v45);
    }
    IopReleaseFileObjectLock(v36);
    HalPutDmaAdapter(v36);
    return v55;
  }
}
