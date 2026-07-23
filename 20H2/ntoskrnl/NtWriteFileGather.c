/*
 * XREFs of NtWriteFileGather @ 0x1406C0D40
 * Callers:
 *     <none>
 * Callees:
 *     IopCheckFileObjectExtensionFlag @ 0x140209F2C (IopCheckFileObjectExtensionFlag.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     MmProbeAndLockSelectedPages @ 0x140316BC0 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140317034 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopExceptionFilter @ 0x1404FEEDC (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x14052F770 (MmUpdateMdlTracker.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  ULONG *p_Flags; // rbx
  ULONG Flags; // edx
  unsigned __int64 DeviceType; // rcx
  __int64 v20; // r8
  ULONG v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int16 v25; // ax
  bool v26; // cl
  __int64 v27; // rdi
  _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rbx
  ULONG v29; // edx
  ULONG v30; // r9d
  unsigned int SectorSize; // ecx
  int v32; // r14d
  bool v33; // r14
  struct _KTHREAD *v34; // rax
  PFILE_OBJECT v35; // rbx
  __int64 v36; // rax
  NTSTATUS v37; // ebx
  KPROCESSOR_MODE v38; // r14
  char v39; // r8
  char v40; // r15
  __int64 v41; // r8
  struct _DEVICE_OBJECT *v42; // r12
  __int64 v43; // rdx
  IRP *Irp; // rax
  IRP *v45; // rsi
  PIO_STATUS_BLOCK v46; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v49; // rbx
  unsigned int MajorFunction; // r12d
  __int64 v51; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B8h]
  _BYTE v53[23]; // [rsp+41h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG v56; // [rsp+68h] [rbp-90h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-88h]
  int v58; // [rsp+78h] [rbp-80h]
  ULONG *v59; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  PVOID Object; // [rsp+90h] [rbp-68h] BYREF
  ULONG v62; // [rsp+98h] [rbp-60h]
  struct _OBJECT_HANDLE_INFORMATION v63; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v65; // [rsp+B0h] [rbp-48h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]
  LARGE_INTEGER v68; // [rsp+110h] [rbp+18h] BYREF
  PVOID v69; // [rsp+118h] [rbp+20h]

  v69 = ApcContext;
  v68.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  v11 = 0;
  FileObject = 0LL;
  P = 0LL;
  v63 = 0LL;
  DmaAdapter = 0LL;
  v56 = 0;
  *(_QWORD *)&v53[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v63);
  if ( result < 0 )
    return result;
  GrantedAccess = v63.GrantedAccess;
  v15 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v15->Flags;
  v59 = &v15->Flags;
  Flags = v15->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v20 = 0x40000100100348LL, !_bittest64(&v20, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    return -1073741811;
  }
  LOBYTE(v11) = (Length & 0xFFF) != 0;
  v21 = (Length >> 12) + v11;
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      return -1073741790;
    }
    v58 = 0;
    v22 = (__int64)IoStatusBlock;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v68, *(_BYTE *)p_Flags & 2);
    v65 = KeGetCurrentThread();
    v24 = v65->ApcState.Process[1].AffinityPadding[10];
    v26 = 0;
    if ( v24 )
    {
      v25 = *(_WORD *)(v24 + 8);
      if ( v25 == 332 || v25 == 452 )
        v26 = 1;
    }
    v53[15] = v26;
    v27 = v21;
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
    if ( Length )
    {
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v21);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, SegmentArray, 8LL * v21);
      SegmentArray = PoolWithQuota_1;
      v29 = 0;
      v62 = 0;
      while ( v29 < v21 )
      {
        if ( ((__int64)SegmentArray[v29].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v62 = ++v29;
      }
    }
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v68.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = FileObject;
      *(LARGE_INTEGER *)&v53[7] = *v10;
    }
    p_Flags = &v15->Flags;
    v59 = &v15->Flags;
    v30 = v15->Flags;
    if ( (v30 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( (_WORD)SectorSize && ((SectorSize - 1) & Length) != 0 && Length % SectorSize )
        RtlRaiseStatus(-1073741811);
      if ( v10
        && *(_QWORD *)&v53[7] != -1LL
        && (*(_DWORD *)&v53[7] != -2 || *(_DWORD *)&v53[11] != -1 || (v30 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v53[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v23 = (__int64)v9;
      v56 = *(_DWORD *)v23;
      v15 = FileObject;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v10 )
      *(LARGE_INTEGER *)&v53[7] = *v10;
    if ( v9 )
      v56 = *v9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v53[7] = -1;
    *(_DWORD *)&v53[11] = -1;
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
    v33 = (*p_Flags & 4) != 0;
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    v35 = FileObject;
    v36 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v53[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v35->Busy, 1) )
    {
      v39 = v33;
      v38 = AccessMode;
      v15 = FileObject;
      v37 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, AccessMode, v39, v36, v53);
    }
    else
    {
      if ( v36 )
        *(_BYTE *)(v36 + 26) |= 1u;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v37 = 0;
      v38 = AccessMode;
    }
    if ( v53[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v37;
    }
    v40 = 1;
    if ( !v10 && !*(_DWORD *)&v53[7] || *(_DWORD *)&v53[7] == -2 && *(_DWORD *)&v53[11] == -1 )
      *(_QWORD *)&v53[7] = v15->CurrentByteOffset.QuadPart;
    p_Flags = v59;
  }
  else
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      goto LABEL_94;
    }
    v40 = 0;
    v38 = AccessMode;
  }
  if ( *(int *)&v53[11] < 0 && (*(_DWORD *)&v53[11] != -1 || *(_DWORD *)&v53[7] != -1) )
  {
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v40 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
LABEL_94:
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741811;
  }
  IopResetEvent((__int64)v15);
  LOBYTE(v41) = v40 ^ 1;
  v42 = DeviceObject;
  LOBYTE(v43) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v43, v41, retaddr);
  v45 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v15;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = v38;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)DmaAdapter;
    v46 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v68;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v69;
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
      v49 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v51 = MajorFunction;
        v42 = DeviceObject;
        MmUpdateMdlTracker(v49, (__int64)DeviceObject->DriverObject->MajorFunction[v51], (__int64)DeviceObject);
      }
      else
      {
        v42 = DeviceObject;
      }
      v45->UserBuffer = SegmentArray->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v45->Flags |= (*v59 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v56;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v53[7];
    if ( IopCheckFileObjectExtensionFlag((__int64)v15, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = v46->Information;
    return IopSynchronousServiceTail(v42, v45, (__int64)v15, 1, AccessMode, v40, 1u);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, DmaAdapter);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
