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

__int64 __fastcall NtWriteFileGather(
        void *a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        union _FILE_SEGMENT_ELEMENT *Src,
        ULONG Length,
        __int64 a8,
        ULONG *a9)
{
  ULONG *v9; // r15
  __int64 v10; // r12
  int v11; // esi
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 result; // rax
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
  union _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rbx
  ULONG v29; // edx
  ULONG v30; // r9d
  unsigned int SectorSize; // ecx
  NTSTATUS v32; // r14d
  bool v33; // r14
  struct _KTHREAD *v34; // rax
  PFILE_OBJECT v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // ebx
  KPROCESSOR_MODE v40; // r14
  char v41; // r15
  __int64 v42; // r8
  struct _DEVICE_OBJECT *v43; // r12
  __int64 v44; // rdx
  IRP *Irp; // rax
  IRP *v46; // rsi
  __int64 v47; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v50; // rbx
  unsigned int MajorFunction; // r12d
  __int64 v52; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B8h]
  _BYTE v54[23]; // [rsp+41h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG v57; // [rsp+68h] [rbp-90h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-88h]
  int v59; // [rsp+78h] [rbp-80h]
  ULONG *v60; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  PVOID Object; // [rsp+90h] [rbp-68h] BYREF
  ULONG v63; // [rsp+98h] [rbp-60h]
  struct _OBJECT_HANDLE_INFORMATION v64; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v66; // [rsp+B0h] [rbp-48h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]
  __int64 v69; // [rsp+110h] [rbp+18h] BYREF
  void *v70; // [rsp+118h] [rbp+20h]

  v70 = a4;
  v69 = a3;
  v9 = a9;
  v10 = a8;
  v11 = 0;
  FileObject = 0LL;
  P = 0LL;
  v64 = 0LL;
  DmaAdapter = 0LL;
  v57 = 0;
  *(_QWORD *)&v54[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&FileObject, &v64);
  if ( (int)result < 0 )
    return result;
  GrantedAccess = v64.GrantedAccess;
  v15 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v15->Flags;
  v60 = &v15->Flags;
  Flags = v15->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v20 = 0x40000100100348LL, !_bittest64(&v20, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    return 3221225485LL;
  }
  LOBYTE(v11) = (Length & 0xFFF) != 0;
  v21 = (Length >> 12) + v11;
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      return 3221225506LL;
    }
    v59 = 0;
    v22 = a5;
    v23 = 0x7FFFFFFF0000LL;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v69, *(_BYTE *)p_Flags & 2);
    v66 = KeGetCurrentThread();
    v24 = v66->ApcState.Process[1].AffinityPadding[10];
    v26 = 0;
    if ( v24 )
    {
      v25 = *(_WORD *)(v24 + 8);
      if ( v25 == 332 || v25 == 452 )
        v26 = 1;
    }
    v54[15] = v26;
    v27 = v21;
    if ( v27 * 8 )
    {
      if ( v26 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)Src & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&Src[v27] > 0x7FFFFFFF0000LL || &Src[v27] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v21);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, Src, 8LL * v21);
      Src = PoolWithQuota_1;
      v29 = 0;
      v63 = 0;
      while ( v29 < v21 )
      {
        if ( ((__int64)Src[v29].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(0xC000000D);
        v63 = ++v29;
      }
    }
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v69 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(0xC000000D);
    if ( v10 )
    {
      if ( (v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = FileObject;
      *(_QWORD *)&v54[7] = *(_QWORD *)v10;
    }
    p_Flags = &v15->Flags;
    v60 = &v15->Flags;
    v30 = v15->Flags;
    if ( (v30 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( (_WORD)SectorSize && ((SectorSize - 1) & Length) != 0 && Length % SectorSize )
        RtlRaiseStatus(0xC000000D);
      if ( v10
        && *(_QWORD *)&v54[7] != -1LL
        && (*(_DWORD *)&v54[7] != -2 || *(_DWORD *)&v54[11] != -1 || (v30 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v54[7]) != 0 )
      {
        RtlRaiseStatus(0xC000000D);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v23 = (__int64)v9;
      v57 = *(_DWORD *)v23;
      v15 = FileObject;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v10 )
      *(_QWORD *)&v54[7] = *(_QWORD *)v10;
    if ( v9 )
      v57 = *v9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v54[7] = -1;
    *(_DWORD *)&v54[11] = -1;
  }
  if ( a2 )
  {
    Object = 0LL;
    v32 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v32 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v33 = (*p_Flags & 4) != 0;
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    v35 = FileObject;
    v36 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0LL);
    v54[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v35->Busy, 1) )
    {
      LOBYTE(v38) = v33;
      v40 = AccessMode;
      LOBYTE(v37) = AccessMode;
      v15 = FileObject;
      v39 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, v37, v38, v36, v54);
    }
    else
    {
      if ( v36 )
        *(_BYTE *)(v36 + 26) |= 1u;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v39 = 0;
      v40 = AccessMode;
    }
    if ( v54[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v39;
    }
    v41 = 1;
    if ( !v10 && !*(_DWORD *)&v54[7] || *(_DWORD *)&v54[7] == -2 && *(_DWORD *)&v54[11] == -1 )
      *(_QWORD *)&v54[7] = v15->CurrentByteOffset.QuadPart;
    p_Flags = v60;
  }
  else
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      goto LABEL_94;
    }
    v41 = 0;
    v40 = AccessMode;
  }
  if ( *(int *)&v54[11] < 0 && (*(_DWORD *)&v54[11] != -1 || *(_DWORD *)&v54[7] != -1) )
  {
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v41 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
LABEL_94:
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225485LL;
  }
  IopResetEvent((__int64)v15);
  LOBYTE(v42) = v41 ^ 1;
  v43 = DeviceObject;
  LOBYTE(v44) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v44, v42, retaddr);
  v46 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v15;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = v40;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)DmaAdapter;
    v47 = a5;
    Irp->UserIosb = (PIO_STATUS_BLOCK)a5;
    Irp->Overlay.AllocationSize.QuadPart = v69;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v70;
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
      Mdl = IoAllocateMdl(Src->Buffer, Length, 0, 1u, Irp);
      v50 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(0xC000009A);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v52 = MajorFunction;
        v43 = DeviceObject;
        MmUpdateMdlTracker(v50, (__int64)DeviceObject->DriverObject->MajorFunction[v52], (__int64)DeviceObject);
      }
      else
      {
        v43 = DeviceObject;
      }
      v46->UserBuffer = Src->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v46->Flags |= (*v60 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v57;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v54[7];
    if ( IopCheckFileObjectExtensionFlag((__int64)v15, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v47 + 8);
    return IopSynchronousServiceTail(v43, v46, (__int64)v15, 1, AccessMode, v41, 1u);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, DmaAdapter);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
}
