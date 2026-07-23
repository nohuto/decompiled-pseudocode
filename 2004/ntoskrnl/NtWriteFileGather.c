/*
 * XREFs of NtWriteFileGather @ 0x1406EC5C0
 * Callers:
 *     <none>
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14028FC60 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     MmProbeAndLockSelectedPages @ 0x140345870 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140345CE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IopExceptionFilter @ 0x1404FB608 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x14052BDA0 (MmUpdateMdlTracker.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v35; // r8
  struct _DEVICE_OBJECT *v36; // r12
  __int64 v37; // rdx
  IRP *Irp; // rax
  _DWORD *v39; // r9
  IRP *v40; // rsi
  PIO_STATUS_BLOCK v41; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v44; // rbx
  __int64 MajorFunction; // r12
  __int64 v46; // rcx
  _DWORD *FileObjectExtension; // rax
  bool v48; // r14
  struct _KTHREAD *v49; // rax
  PFILE_OBJECT v50; // rbx
  __int64 v51; // rax
  NTSTATUS v52; // ebx
  char v53; // r8
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B8h]
  _BYTE v55[23]; // [rsp+41h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG v58; // [rsp+68h] [rbp-90h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-88h]
  int v60; // [rsp+78h] [rbp-80h]
  ULONG *v61; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  PVOID Object; // [rsp+90h] [rbp-68h] BYREF
  int v64; // [rsp+98h] [rbp-60h]
  struct _OBJECT_HANDLE_INFORMATION v65; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v67; // [rsp+B0h] [rbp-48h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]
  LARGE_INTEGER v70; // [rsp+110h] [rbp+18h] BYREF
  PVOID v71; // [rsp+118h] [rbp+20h]

  v71 = ApcContext;
  v70.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  v11 = 0;
  FileObject = 0LL;
  P = 0LL;
  v65 = 0LL;
  DmaAdapter = 0LL;
  v58 = 0;
  *(_QWORD *)&v55[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v65);
  if ( result < 0 )
    return result;
  GrantedAccess = v65.GrantedAccess;
  v15 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v15->Flags;
  v61 = &v15->Flags;
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
    v60 = 0;
    v23 = (__int64)IoStatusBlock;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v70, *(_BYTE *)p_Flags & 2);
    v67 = KeGetCurrentThread();
    v25 = v67->ApcState.Process[1].AffinityPadding[10];
    v26 = 0;
    if ( v25 )
    {
      v31 = *(_WORD *)(v25 + 8);
      if ( v31 == 332 || v31 == 452 )
        v26 = 1;
    }
    v55[15] = v26;
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
      v64 = 0;
      while ( (unsigned int)Flags < v22 )
      {
        if ( ((__int64)SegmentArray[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v64 = Flags;
      }
      v28 = Length;
    }
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v70.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v55[7] = *v10;
      v15 = FileObject;
    }
    p_Flags = &v15->Flags;
    v61 = &v15->Flags;
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
        && *(_QWORD *)&v55[7] != -1LL
        && (*(_DWORD *)&v55[7] != -2 || *(_DWORD *)&v55[11] != -1 || ((unsigned __int8)v18 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v55[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v24 = (__int64)v9;
      v58 = *(_DWORD *)v24;
      v15 = FileObject;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v10 )
      *(LARGE_INTEGER *)&v55[7] = *v10;
    if ( v9 )
      v58 = *v9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v55[7] = -1;
    *(_DWORD *)&v55[11] = -1;
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
    v48 = (*p_Flags & 4) != 0;
    v49 = KeGetCurrentThread();
    --v49->KernelApcDisable;
    v50 = FileObject;
    v51 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v55[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v50->Busy, 1) )
    {
      v53 = v48;
      v34 = AccessMode;
      v15 = FileObject;
      v52 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, AccessMode, v53, v51, v55);
    }
    else
    {
      if ( v51 )
        *(_BYTE *)(v51 + 26) |= 1u;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v52 = 0;
      v34 = AccessMode;
    }
    if ( v55[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v52;
    }
    v33 = 1;
    if ( !v10 && !*(_DWORD *)&v55[7] || *(_DWORD *)&v55[7] == -2 && *(_DWORD *)&v55[11] == -1 )
      *(_QWORD *)&v55[7] = v15->CurrentByteOffset.QuadPart;
    p_Flags = v61;
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
  if ( *(int *)&v55[11] < 0 && (*(_DWORD *)&v55[11] != -1 || *(_DWORD *)&v55[7] != -1) )
  {
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v33 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
    goto LABEL_125;
  }
  IopResetEvent((__int64)v15, Flags, v17, v18);
  LOBYTE(v35) = v33 ^ 1;
  v36 = DeviceObject;
  LOBYTE(v37) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v37, v35, retaddr);
  v40 = Irp;
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
    v41 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v70;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v71;
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
      v44 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v46 = MajorFunction;
        v36 = DeviceObject;
        MmUpdateMdlTracker(v44, (__int64)DeviceObject->DriverObject->MajorFunction[v46], (__int64)DeviceObject);
      }
      else
      {
        v36 = DeviceObject;
      }
      v40->UserBuffer = SegmentArray->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v40->Flags |= (*v61 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v58;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v55[7];
    FileObjectExtension = v15->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v41->Information;
    LOBYTE(v39) = 1;
    return IopSynchronousServiceTail(v36, v40, (__int64)v15, v39, AccessMode, v33, 1u);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, DmaAdapter);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
