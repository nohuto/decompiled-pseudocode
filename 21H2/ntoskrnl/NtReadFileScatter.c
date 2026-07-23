/*
 * XREFs of NtReadFileScatter @ 0x1405F9040
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     MmProbeAndLockSelectedPages @ 0x140235640 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140235D1C (IopVerifierExAllocatePoolWithQuota.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     IopCheckFileObjectExtensionFlag @ 0x14026A250 (IopCheckFileObjectExtensionFlag.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14035CBF0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IopExceptionFilter @ 0x1405009E0 (IopExceptionFilter.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  HANDLE v9; // rsi
  PULONG v10; // r13
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  __int64 v13; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 i; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  PDEVICE_OBJECT v18; // r14
  int v19; // ecx
  unsigned __int64 DeviceType; // rcx
  ULONG v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // rsi
  struct _DMA_ADAPTER *v24; // rdi
  PLARGE_INTEGER v25; // r15
  int SectorSize; // ecx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  bool v29; // cl
  __int64 v30; // rbx
  _FILE_SEGMENT_ELEMENT *PoolWithQuota; // rdi
  int v32; // esi
  struct _DMA_ADAPTER *v33; // r14
  int v34; // esi
  struct _KTHREAD *v35; // rax
  __int64 v36; // rbx
  PRTL_BALANCED_NODE v37; // rax
  NTSTATUS v38; // edi
  char v39; // r12
  __int64 v40; // r8
  __int64 v41; // rdx
  IRP *Irp; // rax
  IRP *v43; // rsi
  PIO_STATUS_BLOCK v44; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v46; // r14d
  struct _MDL *Mdl; // rax
  PFILE_SEGMENT_ELEMENT v48; // r14
  int v49; // r8d
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v51[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-80h]
  ULONG v54; // [rsp+60h] [rbp-78h]
  int v55; // [rsp+64h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  int v58; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v61; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v62; // [rsp+98h] [rbp-40h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  LARGE_INTEGER v65; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v66; // [rsp+F8h] [rbp+20h]

  v66 = ApcContext;
  v65.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Event;
  v10 = Key;
  *(_QWORD *)&v51[7] = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  v54 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&v51[7], 0LL);
  if ( result < 0 )
    return result;
  v13 = *(_QWORD *)&v51[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v51[7]);
  v18 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  v19 = *(_DWORD *)(v13 + 80);
  if ( (v19 & 8) == 0
    || (v19 & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (i = 0x40000100100348LL, !_bittest64(&i, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    return -1073741811;
  }
  v21 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v55 = 0;
    v22 = (__int64)IoStatusBlock;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v65, *(_BYTE *)(v13 + 80) & 2);
    v24 = *(struct _DMA_ADAPTER **)&v51[7];
    if ( *(_QWORD *)(*(_QWORD *)&v51[7] + 176LL) && (v65.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v51[7]);
      return -1073741811;
    }
    v25 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = *(struct _DMA_ADAPTER **)&v51[7];
      QuadPart = ByteOffset->QuadPart;
    }
    v17 = (_DWORD *)Length;
    if ( (*(_DWORD *)(v13 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v18->SectorSize, (_WORD)SectorSize)
        && (v16 = v18->SectorSize, ((SectorSize - 1) & Length) != 0)
        && (i = Length % (unsigned int)v16) != 0
        || ByteOffset && (_WORD)SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        HalPutDmaAdapter(v24);
        return -1073741811;
      }
    }
    v62 = KeGetCurrentThread();
    v27 = v62->ApcState.Process[1].AffinityPadding[10];
    v29 = 0;
    if ( v27 )
    {
      v28 = *(_WORD *)(v27 + 8);
      if ( v28 == 332 || v28 == 452 )
        v29 = 1;
    }
    v51[1] = v29;
    v30 = v21;
    if ( v30 * 8 )
    {
      if ( v29 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v30] > 0x7FFFFFFF0000LL || &SegmentArray[v30] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      PoolWithQuota = (_FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota(PagedPool, 8LL * v21);
      P = PoolWithQuota;
      memmove(PoolWithQuota, SegmentArray, 8LL * v21);
      SegmentArray = PoolWithQuota;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v58 = i;
        if ( (unsigned int)i >= v21 )
          break;
        if ( ((__int64)SegmentArray[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      PoolWithQuota = (_FILE_SEGMENT_ELEMENT *)P;
    }
    if ( v10 )
    {
      if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
        v23 = (__int64)v10;
      v54 = *(_DWORD *)v23;
      PoolWithQuota = (_FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = *(_QWORD *)&v51[7];
    v9 = Event;
  }
  else
  {
    v25 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    PoolWithQuota = (_FILE_SEGMENT_ELEMENT *)P;
    if ( v10 )
      v54 = *v10;
  }
  if ( v9 )
  {
    Object = 0LL;
    v32 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v33 = (struct _DMA_ADAPTER *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v32 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v33 = DmaAdapter;
  }
  v61 = (_DWORD *)(v13 + 80);
  v34 = *(_DWORD *)(v13 + 80);
  if ( (v34 & 2) != 0 )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    v36 = *(_QWORD *)&v51[7];
    v37 = KeAbPreAcquire(*(_QWORD *)&v51[7] + 128LL, 0LL, 0);
    v51[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v36 + 116), 1) )
    {
      v13 = *(_QWORD *)&v51[7];
      v38 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&v51[7], (__int64)v51);
    }
    else
    {
      if ( v37 )
        BYTE2(v37[1].Left) |= 1u;
      v13 = *(_QWORD *)&v51[7];
      ObfReferenceObject(*(PVOID *)&v51[7]);
      v38 = 0;
    }
    if ( v51[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v38;
    }
    if ( !v25 || QuadPart == -2 )
      QuadPart = *(_QWORD *)(v13 + 104);
    v39 = 1;
    PoolWithQuota = (_FILE_SEGMENT_ELEMENT *)P;
    v33 = DmaAdapter;
  }
  else
  {
    if ( !v25 && (v34 & 0x280) == 0 )
    {
      if ( v33 )
        HalPutDmaAdapter(v33);
      goto LABEL_86;
    }
    v39 = 0;
  }
  if ( QuadPart < 0 )
  {
    if ( v33 )
      HalPutDmaAdapter(v33);
    if ( v39 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
LABEL_86:
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return -1073741811;
  }
  IopResetEvent(v13, i, v16, v17);
  LOBYTE(v40) = v39 ^ 1;
  LOBYTE(v41) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v41, v40, retaddr);
  v43 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v13;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)v33;
    v44 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v65;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v66;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v46 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v48 = SegmentArray;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoWriteAccess);
      v43->UserBuffer = v48->Buffer;
      v46 = Length;
    }
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    v43->Flags |= (*v61 & 8 | 0x4800u) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = v46;
    CurrentStackLocation[-1].Parameters.Create.Options = v54;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    if ( IopCheckFileObjectExtensionFlag(v13, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = v44->Information;
    return IopSynchronousServiceTail(DeviceObject, v43, AccessMode, v39, v49);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, v33);
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return -1073741670;
  }
}
