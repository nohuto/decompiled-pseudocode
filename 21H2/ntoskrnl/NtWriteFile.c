/*
 * XREFs of NtWriteFile @ 0x14071D850
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1405FB258 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     DifNtWriteFileWrapper @ 0x140618180 (DifNtWriteFileWrapper.c)
 * Callees:
 *     IopExceptionFilter @ 0x14025E7A8 (IopExceptionFilter.c)
 *     IopProbeAndLockPages @ 0x14029C520 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     IopUpdateWriteTransferCount @ 0x1402A3680 (IopUpdateWriteTransferCount.c)
 *     IopUpdateWriteOperationCount @ 0x1402A36B0 (IopUpdateWriteOperationCount.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402AAB50 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopFileObjectRevoked @ 0x1402AC840 (IopFileObjectRevoked.c)
 *     IopCheckFileObjectExtensionFlag @ 0x1402AC870 (IopCheckFileObjectExtensionFlag.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopWriteFile @ 0x140658DCC (IopWriteFile.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
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
  HANDLE v10; // r12
  struct _KEVENT *v12; // r14
  unsigned __int8 v13; // si
  NTSTATUS v14; // ebx
  PFILE_OBJECT v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  ULONG *p_Flags; // r12
  PVOID v19; // r13
  PLARGE_INTEGER v20; // rsi
  int SectorSize; // r8d
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // r9d
  PDEVICE_OBJECT v26; // rbx
  ULONG Flags; // r12d
  bool v28; // r12
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  char v31; // r12
  struct _FAST_IO_DISPATCH *FastIoWrite; // rsi
  void *v33; // rbx
  char v34; // si
  __int64 Irp; // rax
  IRP *v36; // rsi
  __int64 v37; // r14
  ULONG v38; // eax
  ULONG v39; // ebx
  struct _IRP *Pool2; // rax
  PMDL Mdl; // rcx
  __int64 v42; // r8
  char v43; // r15
  unsigned __int8 v44; // [rsp+60h] [rbp-B8h]
  _BYTE v45[15]; // [rsp+61h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-A8h]
  ULONG v47; // [rsp+78h] [rbp-A0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-98h]
  int v49; // [rsp+88h] [rbp-90h]
  PVOID Object; // [rsp+90h] [rbp-88h] BYREF
  int v51[4]; // [rsp+98h] [rbp-80h] BYREF
  PVOID v52; // [rsp+A8h] [rbp-70h]
  PVOID v53; // [rsp+B0h] [rbp-68h]
  PFAST_IO_DISPATCH FastIoDispatch; // [rsp+B8h] [rbp-60h]
  PIO_STATUS_BLOCK CurrentThread; // [rsp+C0h] [rbp-58h]
  __int64 v56; // [rsp+C8h] [rbp-50h]
  ULONG *v57; // [rsp+D0h] [rbp-48h]
  __int64 v59; // [rsp+130h] [rbp+18h] BYREF
  PVOID v60; // [rsp+138h] [rbp+20h]

  v60 = ApcContext;
  v59 = (__int64)ApcRoutine;
  v10 = Event;
  if ( EnableFeatureServicing_40851744 == 1 || EnableFeatureServicing_40851744 && FeatureServicing_40851744_EnableKey() )
  {
    v53 = 0LL;
    *(_QWORD *)v51 = 0LL;
    v14 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
    if ( v14 < 0 || !IopFileObjectRevoked((__int64)v53) )
    {
      if ( v14 < 0 )
        return v14;
      return IopWriteFile(
               0LL,
               v10,
               v59,
               (__int64)ApcContext,
               IoStatusBlock,
               (__int64)Buffer,
               Length,
               ByteOffset,
               Key,
               v51[1]);
    }
LABEL_125:
    ObfDereferenceObject(0LL);
    return -1073739504;
  }
  FileObject = 0LL;
  v56 = 0LL;
  v12 = 0LL;
  v52 = 0LL;
  v47 = 0;
  *(_QWORD *)&v45[7] = 0LL;
  CurrentThread = (PIO_STATUS_BLOCK)KeGetCurrentThread();
  v13 = BYTE2(CurrentThread[35].Pointer);
  v44 = v13;
  v14 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  v15 = 0LL;
  if ( v14 >= 0 && IopFileObjectRevoked((__int64)FileObject) )
    goto LABEL_125;
  if ( v14 < 0 )
    return v14;
  DeviceObject = IoGetRelatedDeviceObject(0LL);
  if ( !v13 )
  {
    v20 = ByteOffset;
    if ( ByteOffset )
      *(LARGE_INTEGER *)&v45[7] = *ByteOffset;
    v19 = Buffer;
    if ( Key )
      v47 = *Key;
    goto LABEL_46;
  }
  v49 = 0;
  v16 = (__int64)IoStatusBlock;
  v17 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v16 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v16 = *(_DWORD *)v16;
  v15 = FileObject;
  p_Flags = &FileObject->Flags;
  IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, &v59, FileObject->Flags & 2);
  v19 = Buffer;
  if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( FileObject->CompletionContext && (v59 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_36;
  v20 = ByteOffset;
  if ( ByteOffset )
  {
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *(LARGE_INTEGER *)&v45[7] = *ByteOffset;
    v15 = FileObject;
  }
  if ( (*p_Flags & 8) != 0 )
  {
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
          && *(_QWORD *)&v45[7] != -1LL
          && (*(_DWORD *)&v45[7] != -2 || *(_DWORD *)&v45[11] != -1 || (*p_Flags & 2) == 0)
          && (_WORD)SectorSize
          && ((v22 - 1) & *(_DWORD *)&v45[7]) != 0 )
        {
LABEL_36:
          ObfDereferenceObject(v15);
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
LABEL_37:
  if ( Key )
  {
    if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
      v17 = (__int64)Key;
    v47 = *(_DWORD *)v17;
    v15 = FileObject;
  }
  v10 = Event;
LABEL_46:
  if ( (BYTE4(v56) & 6) == 4 )
    *(_QWORD *)&v45[7] = -1LL;
  if ( v10 )
  {
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(v10, 2u, (POBJECT_TYPE)ExEventObjectType, v44, &Object, 0LL);
    v12 = (struct _KEVENT *)Object;
    v52 = Object;
    if ( v14 < 0 )
    {
LABEL_60:
      ObfDereferenceObject(v15);
      return v14;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  v26 = DeviceObject;
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v57 = &v15->Flags;
  Flags = v15->Flags;
  if ( (Flags & 2) != 0 )
  {
    v28 = (v15->Flags & 4) != 0;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    v45[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v15 = FileObject;
      v14 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, v44, v28, v30, v45);
    }
    else
    {
      if ( v30 )
        *(_BYTE *)(v30 + 18) = 1;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v14 = 0;
    }
    if ( v45[0] )
    {
      if ( v12 )
        ObfDereferenceObject(v12);
      goto LABEL_60;
    }
    v31 = 1;
    v45[0] = 1;
    if ( !v20 && !*(_DWORD *)&v45[7] || *(_DWORD *)&v45[7] == -2 && *(_DWORD *)&v45[11] == -1 )
      *(_QWORD *)&v45[7] = v15->CurrentByteOffset.QuadPart;
    if ( v15->PrivateCacheMap )
    {
      *(_OWORD *)v51 = 0LL;
      FastIoWrite = (struct _FAST_IO_DISPATCH *)FastIoDispatch->FastIoWrite;
      FastIoDispatch = FastIoWrite;
      if ( *(int *)&v45[11] < 0 && (*(_DWORD *)&v45[11] != -1 || *(_DWORD *)&v45[7] != -1) )
      {
        if ( v12 )
          ObfDereferenceObject(v12);
LABEL_73:
        IopReleaseFileObjectLock((volatile __int32 *)&v15->Type);
LABEL_74:
        ObfDereferenceObject(v15);
        return -1073741811;
      }
      if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DeviceObject->DriverObject) )
        v33 = (void *)VfFastIoSnapState();
      else
        v33 = 0LL;
      v34 = ((__int64 (__fastcall *)(PFILE_OBJECT, _BYTE *, _QWORD, __int64, ULONG, PVOID, int *, PDEVICE_OBJECT))FastIoWrite)(
              v15,
              &v45[7],
              Length,
              1LL,
              v47,
              v19,
              v51,
              DeviceObject);
      if ( v33 )
        VfFastIoCheckState(v33);
      if ( v34 && !v51[0] )
      {
        IopUpdateWriteOperationCount();
        IopUpdateWriteTransferCount(v51[2], 0LL);
        *IoStatusBlock = *(PIO_STATUS_BLOCK)v51;
        if ( Event )
        {
          if ( (v15->Flags & 0x8000000) == 0 )
            KeSetEvent(v12, 0, 0);
          ObfDereferenceObject(v12);
        }
        IopReleaseFileObjectLock((volatile __int32 *)&v15->Type);
        ObfDereferenceObject(v15);
        return v51[0];
      }
    }
    v26 = DeviceObject;
LABEL_95:
    if ( *(int *)&v45[11] < 0 && (*(_DWORD *)&v45[11] != -1 || *(_DWORD *)&v45[7] != -1) )
    {
      if ( v12 )
        ObfDereferenceObject(v12);
      if ( !v31 )
        goto LABEL_74;
      goto LABEL_73;
    }
    IopResetEvent((__int64)v15);
    Irp = IopAllocateIrpExReturn((__int64)v26, (unsigned __int8)v26->StackSize, (unsigned __int8)v31 ^ 1u);
    v36 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      if ( v12 )
        ObfDereferenceObject(v12);
      if ( v31 )
        IopReleaseFileObjectLock((volatile __int32 *)&v15->Type);
      ObfDereferenceObject(v15);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v15;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_QWORD *)(Irp + 160) = 0LL;
    *(_BYTE *)(Irp + 64) = v44;
    *(_BYTE *)(Irp + 65) = 0;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_QWORD *)(Irp + 80) = v12;
    CurrentThread = IoStatusBlock;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v59;
    *(_QWORD *)(Irp + 96) = v60;
    v37 = *(_QWORD *)(Irp + 184);
    *(_DWORD *)(v37 - 72) = 4;
    *(_QWORD *)(v37 - 24) = v15;
    if ( (*v57 & 0x10) != 0 )
      *(_BYTE *)(v37 - 70) = 4;
    *(_QWORD *)(Irp + 24) = 0LL;
    *(_QWORD *)(Irp + 8) = 0LL;
    v38 = v26->Flags;
    if ( (v38 & 4) != 0 )
    {
      if ( Length )
      {
        v39 = Length;
        Pool2 = (struct _IRP *)ExAllocatePool2(105LL, Length, 1112764233LL);
        v36->AssociatedIrp.MasterIrp = Pool2;
        memmove(Pool2, v19, v39);
        v26 = DeviceObject;
        v36->Flags = 48;
      }
      else
      {
        v36->Flags = 16;
      }
    }
    else
    {
      v36->Flags = 0;
      if ( (v38 & 0x10) != 0 )
      {
        if ( Length )
        {
          Mdl = IoAllocateMdl(v19, Length, 0, 1u, v36);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v43 = v44;
          IopProbeAndLockPages((__int64)Mdl, v44, v42, (__int64)v26, *(unsigned __int8 *)(v37 - 72));
          goto LABEL_120;
        }
      }
      else
      {
        v36->UserBuffer = v19;
      }
    }
    v43 = v44;
LABEL_120:
    v36->Flags |= (v15->Flags & 8 | 0x5000) >> 3;
    *(_DWORD *)(v37 - 64) = Length;
    *(_DWORD *)(v37 - 56) = v47;
    *(_QWORD *)(v37 - 48) = *(_QWORD *)&v45[7];
    if ( IopCheckFileObjectExtensionFlag((__int64)v15, 16) )
      *(_DWORD *)(v37 - 52) = CurrentThread->Information;
    return IopSynchronousServiceTail(v26, v36, v43, v31, 1);
  }
  if ( v20 || (Flags & 0x280) != 0 )
  {
    v31 = 0;
    v45[0] = 0;
    goto LABEL_95;
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  ObfDereferenceObject(v15);
  return -1073741811;
}
