/*
 * XREFs of NtWriteFileGather @ 0x1406CB2C0
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
 *     MmUpdateMdlTracker @ 0x14052B750 (MmUpdateMdlTracker.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtWriteFileGather(
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
  PULONG v9; // r15
  PLARGE_INTEGER v10; // r12
  int v11; // esi
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  unsigned __int8 GrantedAccess; // r13
  PFILE_OBJECT v15; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v17; // r8
  _DWORD *v18; // r9
  ULONG *p_Flags; // rbx
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // rcx
  bool v26; // cl
  __int64 v27; // rdi
  ULONG v28; // r10d
  _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rbx
  int SectorSize; // ecx
  __int16 v31; // ax
  int v32; // r14d
  char v33; // r15
  KPROCESSOR_MODE v34; // r14
  struct _DEVICE_OBJECT *v35; // r12
  IRP *Irp; // rax
  _DWORD *v37; // r9
  IRP *v38; // rsi
  PIO_STATUS_BLOCK v39; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v42; // rbx
  __int64 MajorFunction; // r12
  __int64 v44; // rcx
  _DWORD *FileObjectExtension; // rax
  struct _KTHREAD *v46; // rax
  PFILE_OBJECT v47; // rbx
  __int64 v48; // rax
  NTSTATUS v49; // ebx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B8h]
  _BYTE v51[23]; // [rsp+41h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG v54; // [rsp+68h] [rbp-90h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-88h]
  int v56; // [rsp+78h] [rbp-80h]
  ULONG *v57; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  PVOID Object; // [rsp+90h] [rbp-68h] BYREF
  int v60; // [rsp+98h] [rbp-60h]
  struct _OBJECT_HANDLE_INFORMATION v61; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v63; // [rsp+B0h] [rbp-48h]
  LARGE_INTEGER v65; // [rsp+110h] [rbp+18h] BYREF
  PVOID v66; // [rsp+118h] [rbp+20h]

  v66 = ApcContext;
  v65.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  v11 = 0;
  FileObject = 0LL;
  P = 0LL;
  v61 = 0LL;
  DmaAdapter = 0LL;
  v54 = 0;
  *(_QWORD *)&v51[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v61);
  if ( result < 0 )
    return result;
  GrantedAccess = v61.GrantedAccess;
  v15 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v15->Flags;
  v57 = &v15->Flags;
  Flags = v15->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v17 = 0x40000100100348LL, !_bittest64(&v17, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    return -1073741811;
  }
  LOBYTE(v11) = (Length & 0xFFF) != 0;
  v22 = (Length >> 12) + v11;
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)((unsigned int)Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      return -1073741790;
    }
    v56 = 0;
    v23 = (__int64)IoStatusBlock;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v65, *(_BYTE *)p_Flags & 2);
    v63 = KeGetCurrentThread();
    v25 = v63->ApcState.Process[1].AffinityPadding[10];
    v26 = 0;
    if ( v25 )
    {
      v31 = *(_WORD *)(v25 + 8);
      if ( v31 == 332 || v31 == 452 )
        v26 = 1;
    }
    v51[15] = v26;
    v27 = v22;
    if ( v27 * 8 )
    {
      if ( v26 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v27] > 0x7FFFFFFF0000LL || &SegmentArray[v27] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v28 = Length;
    if ( Length )
    {
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v22);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, SegmentArray, 8LL * v22);
      SegmentArray = PoolWithQuota_1;
      Flags = 0LL;
      v60 = 0;
      while ( (unsigned int)Flags < v22 )
      {
        if ( ((__int64)SegmentArray[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v60 = Flags;
      }
      v28 = Length;
    }
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v65.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v51[7] = *v10;
      v15 = FileObject;
    }
    p_Flags = &v15->Flags;
    v57 = &v15->Flags;
    v18 = (_DWORD *)v15->Flags;
    if ( ((unsigned __int8)v18 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( (_WORD)SectorSize )
      {
        v17 = DeviceObject->SectorSize;
        if ( ((SectorSize - 1) & v28) != 0 )
        {
          Flags = v28 % (unsigned int)v17;
          if ( v28 % (unsigned int)v17 )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( v10
        && *(_QWORD *)&v51[7] != -1LL
        && (*(_DWORD *)&v51[7] != -2 || *(_DWORD *)&v51[11] != -1 || ((unsigned __int8)v18 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v51[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v24 = (__int64)v9;
      v54 = *(_DWORD *)v24;
      v15 = FileObject;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v10 )
      *(LARGE_INTEGER *)&v51[7] = *v10;
    if ( v9 )
      v54 = *v9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v51[7] = -1;
    *(_DWORD *)&v51[11] = -1;
  }
  if ( Event )
  {
    Object = 0LL;
    v32 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v32 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    v47 = FileObject;
    v48 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v51[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v47->Busy, 1) )
    {
      v34 = AccessMode;
      v15 = FileObject;
      v49 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)v51);
    }
    else
    {
      if ( v48 )
        *(_BYTE *)(v48 + 26) |= 1u;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v49 = 0;
      v34 = AccessMode;
    }
    if ( v51[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v49;
    }
    v33 = 1;
    if ( !v10 && !*(_DWORD *)&v51[7] || *(_DWORD *)&v51[7] == -2 && *(_DWORD *)&v51[11] == -1 )
      *(_QWORD *)&v51[7] = v15->CurrentByteOffset.QuadPart;
    p_Flags = v57;
  }
  else
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
LABEL_125:
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return -1073741811;
    }
    v33 = 0;
    v34 = AccessMode;
  }
  if ( *(int *)&v51[11] < 0 && (*(_DWORD *)&v51[11] != -1 || *(_DWORD *)&v51[7] != -1) )
  {
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v33 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
    goto LABEL_125;
  }
  IopResetEvent((__int64)v15, Flags, v17, v18);
  v35 = DeviceObject;
  Irp = (IRP *)IopAllocateIrpExReturn();
  v38 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v15;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = v34;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)DmaAdapter;
    v39 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v65;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v66;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v15;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, Irp);
      v42 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v44 = MajorFunction;
        v35 = DeviceObject;
        MmUpdateMdlTracker(v42, (__int64)DeviceObject->DriverObject->MajorFunction[v44], (__int64)DeviceObject);
      }
      else
      {
        v35 = DeviceObject;
      }
      v38->UserBuffer = SegmentArray->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v38->Flags |= (*v57 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v54;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v51[7];
    FileObjectExtension = v15->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v39->Information;
    LOBYTE(v37) = 1;
    return IopSynchronousServiceTail(v35, v38, (__int64)v15, v37, AccessMode, v33, 1u);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, DmaAdapter);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
