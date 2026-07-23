/*
 * XREFs of NtWriteFileGather @ 0x1405F97E0
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
 *     MmUpdateMdlTracker @ 0x1405314B0 (MmUpdateMdlTracker.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int16 v26; // ax
  bool v27; // cl
  __int64 v28; // rdi
  _FILE_SEGMENT_ELEMENT *PoolWithQuota; // rbx
  int SectorSize; // ecx
  int v31; // r14d
  struct _KTHREAD *v32; // rax
  PFILE_OBJECT v33; // rbx
  PRTL_BALANCED_NODE v34; // rax
  NTSTATUS v35; // ebx
  KPROCESSOR_MODE v36; // r14
  char v37; // r15
  __int64 v38; // r8
  struct _DEVICE_OBJECT *v39; // r12
  __int64 v40; // rdx
  IRP *Irp; // rax
  IRP *v42; // rsi
  PIO_STATUS_BLOCK v43; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v46; // rbx
  unsigned int MajorFunction; // r12d
  __int64 v48; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B8h]
  _BYTE v50[23]; // [rsp+41h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG v53; // [rsp+68h] [rbp-90h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-88h]
  int v55; // [rsp+78h] [rbp-80h]
  ULONG *v56; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  PVOID Object; // [rsp+90h] [rbp-68h] BYREF
  int v59; // [rsp+98h] [rbp-60h]
  struct _OBJECT_HANDLE_INFORMATION v60; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v62; // [rsp+B0h] [rbp-48h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]
  LARGE_INTEGER v65; // [rsp+110h] [rbp+18h] BYREF
  PVOID v66; // [rsp+118h] [rbp+20h]

  v66 = ApcContext;
  v65.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  v11 = 0;
  FileObject = 0LL;
  P = 0LL;
  v60 = 0LL;
  DmaAdapter = 0LL;
  v53 = 0;
  *(_QWORD *)&v50[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v60);
  if ( result < 0 )
    return result;
  GrantedAccess = v60.GrantedAccess;
  v15 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v15->Flags;
  v56 = &v15->Flags;
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
    v55 = 0;
    v23 = (__int64)IoStatusBlock;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v65, *(_BYTE *)p_Flags & 2);
    v62 = KeGetCurrentThread();
    v25 = v62->ApcState.Process[1].AffinityPadding[10];
    v27 = 0;
    if ( v25 )
    {
      v26 = *(_WORD *)(v25 + 8);
      if ( v26 == 332 || v26 == 452 )
        v27 = 1;
    }
    v50[15] = v27;
    v28 = v22;
    if ( v28 * 8 )
    {
      if ( v27 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v28] > 0x7FFFFFFF0000LL || &SegmentArray[v28] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      PoolWithQuota = (_FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota(PagedPool, 8LL * v22);
      P = PoolWithQuota;
      memmove(PoolWithQuota, SegmentArray, 8LL * v22);
      SegmentArray = PoolWithQuota;
      Flags = 0LL;
      v59 = 0;
      while ( (unsigned int)Flags < v22 )
      {
        if ( ((__int64)SegmentArray[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v59 = Flags;
      }
    }
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v65.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = FileObject;
      *(LARGE_INTEGER *)&v50[7] = *v10;
    }
    p_Flags = &v15->Flags;
    v56 = &v15->Flags;
    v18 = (_DWORD *)v15->Flags;
    if ( ((unsigned __int8)v18 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( (_WORD)SectorSize )
      {
        v17 = DeviceObject->SectorSize;
        if ( ((SectorSize - 1) & Length) != 0 )
        {
          Flags = Length % (unsigned int)v17;
          if ( Length % (unsigned int)v17 )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( v10
        && *(_QWORD *)&v50[7] != -1LL
        && (*(_DWORD *)&v50[7] != -2 || *(_DWORD *)&v50[11] != -1 || ((unsigned __int8)v18 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v50[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v24 = (__int64)v9;
      v53 = *(_DWORD *)v24;
      v15 = FileObject;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v10 )
      *(LARGE_INTEGER *)&v50[7] = *v10;
    if ( v9 )
      v53 = *v9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v50[7] = -1;
    *(_DWORD *)&v50[11] = -1;
  }
  if ( Event )
  {
    Object = 0LL;
    v31 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v31 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v31;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = FileObject;
    v34 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v50[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v33->Busy, 1) )
    {
      v36 = AccessMode;
      v15 = FileObject;
      v35 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)v50);
    }
    else
    {
      if ( v34 )
        BYTE2(v34[1].Left) |= 1u;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v35 = 0;
      v36 = AccessMode;
    }
    if ( v50[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v35;
    }
    v37 = 1;
    if ( !v10 && !*(_DWORD *)&v50[7] || *(_DWORD *)&v50[7] == -2 && *(_DWORD *)&v50[11] == -1 )
      *(_QWORD *)&v50[7] = v15->CurrentByteOffset.QuadPart;
    p_Flags = v56;
  }
  else
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      goto LABEL_94;
    }
    v37 = 0;
    v36 = AccessMode;
  }
  if ( *(int *)&v50[11] < 0 && (*(_DWORD *)&v50[11] != -1 || *(_DWORD *)&v50[7] != -1) )
  {
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v37 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
LABEL_94:
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741811;
  }
  IopResetEvent((__int64)v15, Flags, v17, v18);
  LOBYTE(v38) = v37 ^ 1;
  v39 = DeviceObject;
  LOBYTE(v40) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v40, v38, retaddr);
  v42 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v15;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = v36;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)DmaAdapter;
    v43 = IoStatusBlock;
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
      v46 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v48 = MajorFunction;
        v39 = DeviceObject;
        MmUpdateMdlTracker(v46, (__int64)DeviceObject->DriverObject->MajorFunction[v48], (__int64)DeviceObject);
      }
      else
      {
        v39 = DeviceObject;
      }
      v42->UserBuffer = SegmentArray->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v42->Flags |= (*v56 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v53;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v50[7];
    if ( IopCheckFileObjectExtensionFlag((__int64)v15, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = v43->Information;
    return IopSynchronousServiceTail(v39, v42, AccessMode, v37, 1);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, DmaAdapter);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
