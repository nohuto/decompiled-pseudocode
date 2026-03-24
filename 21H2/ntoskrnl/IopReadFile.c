/*
 * XREFs of IopReadFile @ 0x1405CE318
 * Callers:
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     NtReadFile @ 0x140650E20 (NtReadFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140209710 (MmProbeAndLockPages.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402B7B3C (IopVerifierExAllocatePoolWithQuota_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x14034D750 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140351DE0 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140351EA0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopSetCopyInformationExtension @ 0x1403F15CC (IopSetCopyInformationExtension.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F1B00 (IopFreeCopyObjectsFromDataBuffer.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x140500A60 (IopExceptionFilter.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406E7BB8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1409C99B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A8C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopReadFile(
        struct _FILE_OBJECT *DmaAdapter,
        void *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        struct _IRP *Address,
        SIZE_T Length,
        __int64 a8,
        int *a9,
        int a10,
        _OWORD *a11)
{
  void *v11; // rdi
  IRP *v13; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  char v15; // r12
  __int64 v16; // rdx
  __int64 SectorSize; // r8
  unsigned __int64 v18; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // edi
  __int64 v23; // r15
  KPROCESSOR_MODE v24; // al
  unsigned int v25; // ecx
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  struct _KTHREAD *v27; // rax
  __int64 v28; // rax
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v30; // rdi
  char v31; // r13
  struct _KTHREAD *v32; // rax
  struct _KTHREAD *v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  PDEVICE_OBJECT v36; // rdi
  __int64 v37; // rdx
  __int64 Irp; // rax
  _OWORD *v39; // r13
  __int64 v40; // r15
  ULONG Flags; // eax
  struct _MDL *Mdl; // r9
  KPROCESSOR_MODE v43; // dl
  int v44; // ecx
  _OWORD *v45; // rdx
  _DWORD *FileObjectExtension; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-98h]
  _WORD v49[7]; // [rsp+52h] [rbp-96h] BYREF
  PADAPTER_OBJECT DmaAdaptera; // [rsp+60h] [rbp-88h]
  int v51; // [rsp+68h] [rbp-80h]
  __int64 v52; // [rsp+70h] [rbp-78h]
  int v53; // [rsp+78h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-68h]
  __int128 v55; // [rsp+88h] [rbp-60h] BYREF
  PVOID Object; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v60; // [rsp+100h] [rbp+18h] BYREF
  __int64 v61; // [rsp+108h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v11 = a2;
  v13 = 0LL;
  *(_DWORD *)&v49[1] = 0;
  DmaAdaptera = 0LL;
  v51 = 0;
  *(_QWORD *)&v49[3] = 0LL;
  HIBYTE(v49[0]) = 1;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( (DmaAdapter->Flags & 2) == 0 || (v15 = 1, a10 < 0) )
    v15 = 0;
  v53 = a10 & 0x40000000;
  LOBYTE(a10) = (a10 & 0x40000000) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(DmaAdapter);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    v20 = (__int64)a5;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v60, v15);
    if ( !a11 )
      ProbeForWrite(Address, (unsigned int)Length, 1u);
    if ( DmaAdapter->CompletionContext && (v60 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      *(_DWORD *)&v49[1] = -1073741811;
      v22 = -1073741811;
      goto LABEL_113;
    }
    v23 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&v49[3] = *(_QWORD *)a8;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v21 = (__int64)a9;
      v51 = *(_DWORD *)v21;
    }
    v11 = a2;
  }
  else
  {
    v23 = a8;
    if ( a8 )
      *(_QWORD *)&v49[3] = *(_QWORD *)a8;
    if ( a9 )
      v51 = *a9;
  }
  v24 = AccessMode;
  if ( AccessMode )
  {
    if ( (DmaAdapter->Flags & 8) == 0 )
    {
LABEL_38:
      v24 = AccessMode;
      goto LABEL_39;
    }
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( (_WORD)SectorSize )
    {
      v25 = RelatedDeviceObject->SectorSize;
      v18 = RelatedDeviceObject->SectorSize;
      if ( (((_DWORD)SectorSize - 1) & (unsigned int)Length) != 0 )
      {
LABEL_31:
        if ( (_WORD)SectorSize )
        {
          v16 = (unsigned int)Length % (unsigned int)v18;
          if ( (unsigned int)Length % (unsigned int)v18 )
            goto LABEL_34;
        }
        v25 = v18;
        if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Address) != 0 )
          goto LABEL_34;
LABEL_35:
        if ( v23 && (_WORD)SectorSize && ((v25 - 1) & *(_DWORD *)&v49[3]) != 0 )
          goto LABEL_34;
        goto LABEL_38;
      }
    }
    else
    {
      v25 = 0;
    }
    v18 = v25;
    if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Address) == 0 )
      goto LABEL_35;
    goto LABEL_31;
  }
LABEL_39:
  if ( v11 )
  {
    Object = 0LL;
    v22 = ObReferenceObjectByHandle(v11, 2u, (POBJECT_TYPE)ExEventObjectType, v24, &Object, 0LL);
    DmaAdaptera = (PADAPTER_OBJECT)Object;
    *(_DWORD *)&v49[1] = v22;
    if ( v22 < 0 )
      goto LABEL_113;
    KeResetEvent((PRKEVENT)Object);
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( v15 )
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    v28 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter->Lock, 0LL, 0);
    LOBYTE(v49[0]) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&DmaAdapter->Busy, 1) )
    {
      v22 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)v49);
    }
    else
    {
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      ObfReferenceObject(DmaAdapter);
      v22 = 0;
    }
    *(_DWORD *)&v49[1] = v22;
    if ( LOBYTE(v49[0]) )
    {
      if ( DmaAdaptera )
        HalPutDmaAdapter(DmaAdaptera);
      goto LABEL_113;
    }
    if ( !v23 || *(_QWORD *)&v49[3] == -2LL )
      *(_QWORD *)&v49[3] = DmaAdapter->CurrentByteOffset.QuadPart;
    if ( DmaAdapter->PrivateCacheMap && !a11 )
    {
      v55 = 0LL;
      FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
      if ( *(int *)&v49[5] < 0 )
      {
        if ( DmaAdaptera )
          HalPutDmaAdapter(DmaAdaptera);
LABEL_59:
        IopReleaseFileObjectLock((PADAPTER_OBJECT)DmaAdapter);
LABEL_34:
        v22 = -1073741811;
        goto LABEL_113;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v30 = (void *)VfFastIoSnapState();
      else
        v30 = 0LL;
      LOBYTE(v18) = 1;
      v31 = FastIoRead(DmaAdapter, &v49[3], (unsigned int)Length, v18, v51, Address, &v55, DeviceObject);
      if ( v30 )
        VfFastIoCheckState(v30);
      if ( v31 && (!(_DWORD)v55 || (_DWORD)v55 == -2147483643 || (_DWORD)v55 == -1073741807) )
      {
        v32 = KeGetCurrentThread();
        ++v32->ReadOperationCount;
        __incgsdword(0x2EDCu);
        v33 = KeGetCurrentThread();
        v34 = DWORD2(v55);
        v33->ReadTransferCount += DWORD2(v55);
        __addgsqword(0x2EE8u, v34);
        *a5 = v55;
        if ( a2 )
        {
          if ( (DmaAdapter->Flags & 0x8000000) == 0 )
            KeSetEvent((PRKEVENT)DmaAdaptera, 0, 0);
          HalPutDmaAdapter(DmaAdaptera);
        }
        IopReleaseFileObjectLock((PADAPTER_OBJECT)DmaAdapter);
        v22 = v55;
        goto LABEL_113;
      }
    }
  }
  else if ( !v23 && (DmaAdapter->Flags & 0x280) == 0 )
  {
    if ( DmaAdaptera )
      HalPutDmaAdapter(DmaAdaptera);
    goto LABEL_34;
  }
  if ( *(int *)&v49[5] < 0 )
  {
    if ( DmaAdaptera )
      HalPutDmaAdapter(DmaAdaptera);
    if ( !v15 )
      goto LABEL_34;
    goto LABEL_59;
  }
  IopResetEvent((__int64)DmaAdapter, v16, SectorSize, (_DWORD *)v18);
  LOBYTE(v35) = v15 ^ 1;
  v36 = DeviceObject;
  LOBYTE(v37) = DeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v37, v35, retaddr);
  v13 = (IRP *)Irp;
  v52 = Irp;
  if ( !Irp )
  {
    if ( DmaAdaptera )
      HalPutDmaAdapter(DmaAdaptera);
    if ( v15 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)DmaAdapter);
    v22 = -1073741670;
    goto LABEL_113;
  }
  *(_QWORD *)(Irp + 192) = DmaAdapter;
  *(_QWORD *)(Irp + 152) = CurrentThread;
  *(_QWORD *)(Irp + 160) = 0LL;
  *(_BYTE *)(Irp + 64) = AccessMode;
  *(_BYTE *)(Irp + 65) = 0;
  *(_BYTE *)(Irp + 68) = 0;
  *(_QWORD *)(Irp + 104) = 0LL;
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 80) = DmaAdaptera;
  v39 = a5;
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 88) = v60;
  *(_QWORD *)(Irp + 96) = v61;
  v40 = *(_QWORD *)(Irp + 184);
  *(_DWORD *)(v40 - 72) = 3;
  *(_QWORD *)(v40 - 24) = DmaAdapter;
  *(_QWORD *)(Irp + 24) = 0LL;
  *(_QWORD *)(Irp + 8) = 0LL;
  Flags = v36->Flags;
  if ( (Flags & 4) == 0 )
  {
    if ( (Flags & 0x10) != 0 )
    {
      if ( (_DWORD)Length )
      {
        Mdl = IoAllocateMdl(Address, Length, 0, 1u, v13);
        if ( !Mdl )
          RtlRaiseStatus(0xC000009A);
        v43 = 0;
        if ( !a11 )
          v43 = AccessMode;
        MmProbeAndLockPages(Mdl, v43, IoWriteAccess);
      }
      goto LABEL_102;
    }
    goto LABEL_101;
  }
  if ( (_DWORD)Length )
  {
    if ( a11 )
    {
      v13->AssociatedIrp.MasterIrp = Address;
      v13->Flags |= 0x50u;
    }
    else
    {
      v13->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(
                                                      NonPagedPoolNxCacheAligned,
                                                      (unsigned int)Length);
      v13->Flags |= 0x70u;
    }
LABEL_101:
    v13->UserBuffer = Address;
    goto LABEL_102;
  }
  v13->Flags |= 0x50u;
LABEL_102:
  v44 = v13->Flags | 0x100;
  v13->Flags = v44;
  if ( (DmaAdapter->Flags & 8) != 0 )
  {
    v44 |= 1u;
    v13->Flags = v44;
  }
  if ( !v53 )
    v13->Flags = v44 | 0x800;
  v45 = a11;
  if ( a11 )
  {
    v13->RequestorMode = 0;
    v13->UserBuffer = Address;
    v22 = IopSetCopyInformationExtension((__int64)v13, v45);
    if ( v22 < 0 )
      goto LABEL_113;
    v36 = DeviceObject;
  }
  *(_DWORD *)(v40 - 64) = Length;
  *(_DWORD *)(v40 - 56) = v51;
  *(_QWORD *)(v40 - 48) = *(_QWORD *)&v49[3];
  FileObjectExtension = DmaAdapter->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
    *(_DWORD *)(v40 - 52) = *((_DWORD *)v39 + 2);
  v22 = IopSynchronousServiceTail(v36, v13, AccessMode, v15, 0);
  HIBYTE(v49[0]) = 0;
LABEL_113:
  if ( HIBYTE(v49[0]) )
  {
    if ( a11 )
      IopFreeCopyObjectsFromDataBuffer((__int64)Address, 1);
    if ( v13 )
      IopExceptionCleanupEx((PADAPTER_OBJECT)DmaAdapter, v13, DmaAdaptera, 0LL, v15);
    else
      HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
  }
  return (unsigned int)v22;
}
