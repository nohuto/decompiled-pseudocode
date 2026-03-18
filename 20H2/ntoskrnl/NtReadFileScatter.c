/*
 * XREFs of NtReadFileScatter @ 0x1406C05A0
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
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtReadFileScatter(
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
  void *v9; // rsi
  ULONG *v10; // r13
  KPROCESSOR_MODE PreviousMode; // di
  __int64 result; // rax
  __int64 v13; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v15; // r14
  int v16; // ecx
  unsigned __int64 DeviceType; // rcx
  __int64 v18; // rdx
  ULONG v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // rsi
  struct _DMA_ADAPTER *v22; // rdi
  __int64 v23; // r15
  unsigned int SectorSize; // ecx
  unsigned __int64 v25; // rcx
  __int16 v26; // ax
  bool v27; // cl
  __int64 v28; // rbx
  union _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rdi
  __int64 i; // rdx
  NTSTATUS v31; // esi
  struct _DMA_ADAPTER *v32; // r14
  int v33; // esi
  bool v34; // si
  struct _KTHREAD *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // edi
  char v41; // r12
  __int64 v42; // r8
  __int64 v43; // rdx
  IRP *Irp; // rax
  IRP *v45; // rsi
  __int64 v46; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v48; // r14d
  struct _MDL *Mdl; // rax
  union _FILE_SEGMENT_ELEMENT *v50; // r14
  unsigned int v51; // r8d
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v53[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LARGE_INTEGER v55; // [rsp+58h] [rbp-80h]
  ULONG v56; // [rsp+60h] [rbp-78h]
  int v57; // [rsp+64h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  int v60; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v63; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v64; // [rsp+98h] [rbp-40h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  __int64 v67; // [rsp+F0h] [rbp+18h] BYREF
  void *v68; // [rsp+F8h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v9 = a2;
  v10 = a9;
  *(_QWORD *)&v53[7] = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  v56 = 0;
  v55.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&v53[7], 0LL);
  if ( (int)result < 0 )
    return result;
  v13 = *(_QWORD *)&v53[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v53[7]);
  v15 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  v16 = *(_DWORD *)(v13 + 80);
  if ( (v16 & 8) == 0
    || (v16 & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v18 = 0x40000100100348LL, !_bittest64(&v18, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    return 3221225485LL;
  }
  v19 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v57 = 0;
    v20 = a5;
    v21 = 0x7FFFFFFF0000LL;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v67, *(_BYTE *)(v13 + 80) & 2);
    v22 = *(struct _DMA_ADAPTER **)&v53[7];
    if ( *(_QWORD *)(*(_QWORD *)&v53[7] + 176LL) && (v67 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v53[7]);
      return 3221225485LL;
    }
    v23 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = *(struct _DMA_ADAPTER **)&v53[7];
      v55 = *(LARGE_INTEGER *)a8;
    }
    if ( (*(_DWORD *)(v13 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v15->SectorSize, (_WORD)SectorSize) && ((SectorSize - 1) & Length) != 0 && Length % SectorSize
        || a8 && (_WORD)SectorSize && ((SectorSize - 1) & v55.LowPart) != 0 )
      {
        HalPutDmaAdapter(v22);
        return 3221225485LL;
      }
    }
    v64 = KeGetCurrentThread();
    v25 = v64->ApcState.Process[1].AffinityPadding[10];
    v27 = 0;
    if ( v25 )
    {
      v26 = *(_WORD *)(v25 + 8);
      if ( v26 == 332 || v26 == 452 )
        v27 = 1;
    }
    v53[1] = v27;
    v28 = v19;
    if ( v28 * 8 )
    {
      if ( v27 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)Src & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&Src[v28] > 0x7FFFFFFF0000LL || &Src[v28] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v19);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, Src, 8LL * v19);
      Src = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v60 = i;
        if ( (unsigned int)i >= v19 )
          break;
        if ( ((__int64)Src[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(0xC000000D);
      }
    }
    else
    {
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    if ( v10 )
    {
      if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
        v21 = (__int64)v10;
      v56 = *(_DWORD *)v21;
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = *(_QWORD *)&v53[7];
    v9 = a2;
  }
  else
  {
    v23 = a8;
    if ( a8 )
      v55 = *(LARGE_INTEGER *)a8;
    PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
    if ( v10 )
      v56 = *v10;
  }
  if ( v9 )
  {
    Object = 0LL;
    v31 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v32 = (struct _DMA_ADAPTER *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v31 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return (unsigned int)v31;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v32 = DmaAdapter;
  }
  v63 = (_DWORD *)(v13 + 80);
  v33 = *(_DWORD *)(v13 + 80);
  if ( (v33 & 2) != 0 )
  {
    v34 = (*(_DWORD *)(v13 + 80) & 4) != 0;
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    v36 = *(_QWORD *)&v53[7];
    v37 = KeAbPreAcquire(*(_QWORD *)&v53[7] + 128LL, 0LL, 0LL);
    v53[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v36 + 116), 1) )
    {
      LOBYTE(v39) = v34;
      LOBYTE(v38) = AccessMode;
      v13 = *(_QWORD *)&v53[7];
      v40 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v53[7], v38, v39, v37, v53);
    }
    else
    {
      if ( v37 )
        *(_BYTE *)(v37 + 26) |= 1u;
      v13 = *(_QWORD *)&v53[7];
      ObfReferenceObject(*(PVOID *)&v53[7]);
      v40 = 0;
    }
    if ( v53[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v40;
    }
    if ( !v23 || v55.QuadPart == -2 )
      v55 = *(LARGE_INTEGER *)(v13 + 104);
    v41 = 1;
    PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
    v32 = DmaAdapter;
  }
  else
  {
    if ( !v23 && (v33 & 0x280) == 0 )
    {
      if ( v32 )
        HalPutDmaAdapter(v32);
      goto LABEL_86;
    }
    v41 = 0;
  }
  if ( v55.HighPart < 0 )
  {
    if ( v32 )
      HalPutDmaAdapter(v32);
    if ( v41 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
LABEL_86:
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return 3221225485LL;
  }
  IopResetEvent(v13);
  LOBYTE(v42) = v41 ^ 1;
  LOBYTE(v43) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v43, v42, retaddr);
  v45 = Irp;
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
    Irp->UserEvent = (PKEVENT)v32;
    v46 = a5;
    Irp->UserIosb = (PIO_STATUS_BLOCK)a5;
    Irp->Overlay.AllocationSize.QuadPart = v67;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v68;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v48 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Src->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(0xC000009A);
      v50 = Src;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoWriteAccess);
      v45->UserBuffer = v50->Buffer;
      v48 = Length;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    v45->Flags |= (*v63 & 8 | 0x4800u) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = v48;
    CurrentStackLocation[-1].Parameters.Create.Options = v56;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset = v55;
    if ( IopCheckFileObjectExtensionFlag(v13, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v46 + 8);
    return IopSynchronousServiceTail(DeviceObject, v45, v13, 1, AccessMode, v41, v51);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, v32);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return 3221225626LL;
  }
}
