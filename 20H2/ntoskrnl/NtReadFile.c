/*
 * XREFs of NtReadFile @ 0x1405F9240
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14059BE28 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x140659F38 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IopUpdateReadTransferCount @ 0x140209EE0 (IopUpdateReadTransferCount.c)
 *     IopUpdateReadOperationCount @ 0x140209F0C (IopUpdateReadOperationCount.c)
 *     IopCheckFileObjectExtensionFlag @ 0x140209F2C (IopCheckFileObjectExtensionFlag.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14026AA30 (MmProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140317034 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1404FEEDC (IopExceptionFilter.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
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
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r14
  _DWORD *v17; // r15
  ULONG v18; // r13d
  PLARGE_INTEGER v19; // rdi
  int SectorSize; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  int v23; // r10d
  int v24; // r15d
  struct _DMA_ADAPTER *v25; // r14
  int v26; // r15d
  struct _KTHREAD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  NTSTATUS v31; // r14d
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v33; // rdi
  char v34; // r15
  struct _DMA_ADAPTER *v35; // rdi
  char v36; // r15
  __int64 Irp; // rax
  IRP *v38; // rdi
  PIO_STATUS_BLOCK v39; // r12
  __int64 v40; // r14
  ULONG Flags; // eax
  struct _MDL *Mdl; // rax
  SIZE_T v43; // [rsp+30h] [rbp-D8h]
  KPROCESSOR_MODE v44; // [rsp+60h] [rbp-A8h]
  _BYTE v45[15]; // [rsp+61h] [rbp-A7h] BYREF
  LONGLONG QuadPart; // [rsp+70h] [rbp-98h] BYREF
  ULONG v47; // [rsp+78h] [rbp-90h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h]
  int v50; // [rsp+90h] [rbp-78h]
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-68h] BYREF
  PADAPTER_OBJECT v53; // [rsp+B0h] [rbp-58h] BYREF
  PFAST_IO_DISPATCH FastIoDispatch; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-48h]
  __int64 retaddr; // [rsp+108h] [rbp+0h]
  __int64 v57; // [rsp+120h] [rbp+18h] BYREF
  PVOID v58; // [rsp+128h] [rbp+20h]

  v58 = ApcContext;
  v57 = (__int64)ApcRoutine;
  if ( EnableFeatureServicing_40524482 == 1 || EnableFeatureServicing_40524482 && FeatureServicing_40524482_EnableKey() )
  {
    v53 = 0LL;
    result = IopReferenceFileObject(FileHandle, 1u, KeGetCurrentThread()->PreviousMode, (PVOID *)&v53, 0LL);
    if ( result >= 0 )
    {
      LODWORD(v43) = Length;
      return IopReadFile(
               (struct _FILE_OBJECT *)v53,
               Event,
               v57,
               (__int64)ApcContext,
               IoStatusBlock,
               (struct _IRP *)Buffer,
               v43,
               (__int64)ByteOffset,
               (int *)Key,
               0,
               0LL);
    }
    return result;
  }
  *(_QWORD *)&v45[7] = 0LL;
  DmaAdapter = 0LL;
  v47 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v44 = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&v45[7], 0LL);
  if ( result < 0 )
    return result;
  v14 = *(_QWORD *)&v45[7];
  DeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v45[7]);
  if ( !PreviousMode )
  {
    v19 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    v18 = Length;
    if ( Key )
      v47 = *Key;
    goto LABEL_38;
  }
  v50 = 0;
  v15 = (__int64)IoStatusBlock;
  v16 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v15 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v15 = *(_DWORD *)v15;
  v14 = *(_QWORD *)&v45[7];
  v17 = (_DWORD *)(*(_QWORD *)&v45[7] + 80LL);
  IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, &v57, *(_BYTE *)(*(_QWORD *)&v45[7] + 80LL) & 2);
  v18 = Length;
  ProbeForWrite(Buffer, Length, 1u);
  if ( *(_QWORD *)(v14 + 176) && (v57 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_81;
  v19 = ByteOffset;
  if ( ByteOffset )
  {
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    v14 = *(_QWORD *)&v45[7];
  }
  if ( (*v17 & 8) != 0 )
  {
    SectorSize = DeviceObject->SectorSize;
    if ( (_WORD)SectorSize )
    {
      v21 = DeviceObject->SectorSize;
      v22 = v21;
      if ( ((SectorSize - 1) & v18) != 0 )
      {
        v23 = (int)Buffer;
LABEL_21:
        if ( (_WORD)SectorSize && v18 % v22 )
          goto LABEL_81;
        v21 = v22;
        if ( (DeviceObject->AlignmentRequirement & v23) != 0 )
          goto LABEL_81;
LABEL_25:
        if ( ByteOffset && (_WORD)SectorSize && ((v21 - 1) & (unsigned int)QuadPart) != 0 )
        {
LABEL_81:
          HalPutDmaAdapter((PADAPTER_OBJECT)v14);
          return -1073741811;
        }
        goto LABEL_29;
      }
    }
    else
    {
      v21 = 0;
    }
    v22 = v21;
    v23 = (int)Buffer;
    if ( (DeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
      goto LABEL_25;
    goto LABEL_21;
  }
LABEL_29:
  if ( Key )
  {
    if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
      v16 = (__int64)Key;
    v47 = *(_DWORD *)v16;
    v14 = *(_QWORD *)&v45[7];
  }
  PreviousMode = v44;
LABEL_38:
  if ( Event )
  {
    Object = 0LL;
    v24 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v25 = (struct _DMA_ADAPTER *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v24 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      return v24;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v25 = DmaAdapter;
  }
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v26 = *(_DWORD *)(v14 + 80);
  if ( (v26 & 2) != 0 )
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    v28 = *(_QWORD *)&v45[7];
    v29 = KeAbPreAcquire(*(_QWORD *)&v45[7] + 128LL, 0LL, 0);
    v45[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v28 + 116), 1) )
    {
      v14 = *(_QWORD *)&v45[7];
      v31 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&v45[7], (__int64)v45);
    }
    else
    {
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      v14 = *(_QWORD *)&v45[7];
      ObfReferenceObject(*(PVOID *)&v45[7]);
      v31 = 0;
    }
    if ( v45[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      return v31;
    }
    if ( !v19 || QuadPart == -2 )
      QuadPart = *(_QWORD *)(v14 + 104);
    if ( *(_QWORD *)(v14 + 48) )
    {
      v52 = 0LL;
      FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
      if ( QuadPart < 0 )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
LABEL_60:
        IopReleaseFileObjectLock((PADAPTER_OBJECT)v14);
LABEL_61:
        HalPutDmaAdapter((PADAPTER_OBJECT)v14);
        return -1073741811;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v33 = (void *)VfFastIoSnapState();
      else
        v33 = 0LL;
      LOBYTE(v30) = 1;
      v34 = FastIoRead(v14, &QuadPart, v18, v30, v47, Buffer, &v52, DeviceObject);
      if ( v33 )
        VfFastIoCheckState(v33);
      if ( v34 && (!(_DWORD)v52 || (_DWORD)v52 == -2147483643 || (_DWORD)v52 == -1073741807) )
      {
        IopUpdateReadOperationCount();
        IopUpdateReadTransferCount(DWORD2(v52), 0LL);
        *(_OWORD *)&IoStatusBlock->Status = v52;
        if ( Event )
        {
          v35 = DmaAdapter;
          if ( (*(_DWORD *)(v14 + 80) & 0x8000000) == 0 )
            KeSetEvent((PRKEVENT)DmaAdapter, 0, 0);
          HalPutDmaAdapter(v35);
        }
        IopReleaseFileObjectLock((PADAPTER_OBJECT)v14);
        HalPutDmaAdapter((PADAPTER_OBJECT)v14);
        return v52;
      }
    }
    v36 = 1;
    v25 = DmaAdapter;
  }
  else
  {
    if ( !v19 && (v26 & 0x280) == 0 )
    {
      if ( v25 )
        HalPutDmaAdapter(v25);
      goto LABEL_81;
    }
    v36 = 0;
  }
  if ( QuadPart < 0 )
  {
    if ( v25 )
      HalPutDmaAdapter(v25);
    if ( !v36 )
      goto LABEL_61;
    goto LABEL_60;
  }
  IopResetEvent(v14);
  Irp = IopAllocateIrpExReturn(
          (__int64)DeviceObject,
          (unsigned __int8)DeviceObject->StackSize,
          (unsigned __int8)v36 ^ 1u,
          retaddr);
  v38 = (IRP *)Irp;
  Object = (PVOID)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v14;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_QWORD *)(Irp + 160) = 0LL;
    *(_BYTE *)(Irp + 64) = v44;
    *(_BYTE *)(Irp + 65) = 0;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_QWORD *)(Irp + 80) = v25;
    v39 = IoStatusBlock;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v57;
    *(_QWORD *)(Irp + 96) = v58;
    v40 = *(_QWORD *)(Irp + 184);
    *(_DWORD *)(v40 - 72) = 3;
    *(_QWORD *)(v40 - 24) = v14;
    *(_QWORD *)(Irp + 24) = 0LL;
    *(_QWORD *)(Irp + 8) = 0LL;
    Flags = DeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( v18 )
      {
        v38->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                                        NonPagedPoolNxCacheAligned,
                                                        v18);
        v38->UserBuffer = Buffer;
        v38->Flags = 112;
      }
      else
      {
        v38->Flags = 80;
      }
    }
    else
    {
      v38->Flags = 0;
      if ( (Flags & 0x10) != 0 )
      {
        if ( v18 )
        {
          Mdl = IoAllocateMdl(Buffer, v18, 0, 1u, v38);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          MmProbeAndLockPages(Mdl, v44, IoWriteAccess);
        }
      }
      else
      {
        v38->UserBuffer = Buffer;
      }
    }
    v38->Flags |= (*(_DWORD *)(v14 + 80) & 8 | 0x4800u) >> 3;
    *(_DWORD *)(v40 - 64) = v18;
    *(_DWORD *)(v40 - 56) = v47;
    *(_QWORD *)(v40 - 48) = QuadPart;
    if ( IopCheckFileObjectExtensionFlag(v14, 16) )
      *(_DWORD *)(v40 - 52) = v39->Information;
    return IopSynchronousServiceTail(DeviceObject, v38, v44, v36, 0);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v14, v25);
    return -1073741670;
  }
}
