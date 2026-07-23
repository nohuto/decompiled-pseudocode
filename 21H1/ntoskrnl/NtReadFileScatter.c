/*
 * XREFs of NtReadFileScatter @ 0x1406CACB0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402533E0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     MmProbeAndLockSelectedPages @ 0x140307A70 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140307EE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IopExceptionFilter @ 0x1404FAFB8 (IopExceptionFilter.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS result; // eax
  __int64 v13; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 i; // rdx
  struct _DMA_ADAPTER *v16; // r8
  _DWORD *v17; // r9
  PDEVICE_OBJECT v18; // r14
  int v19; // ecx
  unsigned __int64 DeviceType; // rcx
  ULONG v21; // edi
  ULONG v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rsi
  PLARGE_INTEGER v25; // r15
  int SectorSize; // ecx
  unsigned __int64 v27; // rcx
  bool v28; // cl
  __int64 v29; // rbx
  _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rdi
  __int16 v31; // ax
  int v32; // esi
  struct _DMA_ADAPTER *v33; // r14
  int v34; // esi
  char v35; // r12
  IRP *Irp; // rax
  _DWORD *v37; // r9
  IRP *v38; // rsi
  PIO_STATUS_BLOCK v39; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v41; // r14d
  struct _MDL *Mdl; // rax
  PFILE_SEGMENT_ELEMENT v43; // r14
  _DWORD *v44; // rax
  struct _KTHREAD *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  NTSTATUS v48; // edi
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v50[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-80h]
  ULONG v53; // [rsp+60h] [rbp-78h]
  int v54; // [rsp+64h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  int v57; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v60; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v61; // [rsp+98h] [rbp-40h]
  LARGE_INTEGER v63; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v64; // [rsp+F8h] [rbp+20h]

  v64 = ApcContext;
  v63.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Event;
  v10 = Key;
  *(_QWORD *)&v50[7] = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  v53 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&v50[7], 0LL);
  if ( result < 0 )
    return result;
  v13 = *(_QWORD *)&v50[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v50[7]);
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
  v21 = Length;
  v22 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v54 = 0;
    v23 = (__int64)IoStatusBlock;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v63, *(_BYTE *)(v13 + 80) & 2);
    v16 = *(struct _DMA_ADAPTER **)&v50[7];
    if ( *(_QWORD *)(*(_QWORD *)&v50[7] + 176LL) && (v63.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v50[7]);
      return -1073741811;
    }
    v25 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v16 = *(struct _DMA_ADAPTER **)&v50[7];
    }
    if ( (*(_DWORD *)(v13 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v18->SectorSize, (_WORD)SectorSize)
        && (v17 = (_DWORD *)v18->SectorSize, ((SectorSize - 1) & v21) != 0)
        && (i = v21 % (unsigned int)v17) != 0
        || ByteOffset && (_WORD)SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        HalPutDmaAdapter(v16);
        return -1073741811;
      }
    }
    v61 = KeGetCurrentThread();
    v27 = v61->ApcState.Process[1].AffinityPadding[10];
    v28 = 0;
    if ( v27 )
    {
      v31 = *(_WORD *)(v27 + 8);
      if ( v31 == 332 || v31 == 452 )
        v28 = 1;
    }
    v50[1] = v28;
    v29 = v22;
    if ( v29 * 8 )
    {
      if ( v28 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v29] > 0x7FFFFFFF0000LL || &SegmentArray[v29] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( v21 )
    {
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v22);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, SegmentArray, 8LL * v22);
      SegmentArray = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v57 = i;
        if ( (unsigned int)i >= v22 )
          break;
        if ( ((__int64)SegmentArray[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    if ( v10 )
    {
      if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
        v24 = (__int64)v10;
      v53 = *(_DWORD *)v24;
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = *(_QWORD *)&v50[7];
    v9 = Event;
  }
  else
  {
    v25 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    if ( v10 )
      v53 = *v10;
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
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v33 = DmaAdapter;
  }
  v60 = (_DWORD *)(v13 + 80);
  v34 = *(_DWORD *)(v13 + 80);
  if ( (v34 & 2) != 0 )
  {
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    v46 = *(_QWORD *)&v50[7];
    v47 = KeAbPreAcquire(*(_QWORD *)&v50[7] + 128LL, 0LL, 0);
    v50[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v46 + 116), 1) )
    {
      v13 = *(_QWORD *)&v50[7];
      v48 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&v50[7], (__int64)v50);
    }
    else
    {
      if ( v47 )
        *(_BYTE *)(v47 + 26) |= 1u;
      v13 = *(_QWORD *)&v50[7];
      ObfReferenceObject(*(PVOID *)&v50[7]);
      v48 = 0;
    }
    if ( v50[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v48;
    }
    if ( !v25 || QuadPart == -2 )
      QuadPart = *(_QWORD *)(v13 + 104);
    v35 = 1;
    PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    v33 = DmaAdapter;
  }
  else
  {
    if ( !v25 && (v34 & 0x280) == 0 )
    {
      if ( v33 )
        HalPutDmaAdapter(v33);
LABEL_106:
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v35 = 0;
  }
  if ( QuadPart < 0 )
  {
    if ( v33 )
      HalPutDmaAdapter(v33);
    if ( v35 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
    goto LABEL_106;
  }
  IopResetEvent(v13, i, (__int64)v16, v17);
  Irp = (IRP *)IopAllocateIrpExReturn();
  v38 = Irp;
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
    v39 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v63;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v64;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v41 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v43 = SegmentArray;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoWriteAccess);
      v38->UserBuffer = v43->Buffer;
      v41 = Length;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    v38->Flags |= (*v60 & 8 | 0x4800u) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = v41;
    CurrentStackLocation[-1].Parameters.Create.Options = v53;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    v44 = *(_DWORD **)(v13 + 208);
    if ( v44 && (*v44 & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v39->Information;
    LOBYTE(v37) = 1;
    return IopSynchronousServiceTail(DeviceObject, v38, v13, v37, AccessMode, v35, 0);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, v33);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}
