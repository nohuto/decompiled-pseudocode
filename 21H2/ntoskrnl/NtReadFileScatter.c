/*
 * XREFs of NtReadFileScatter @ 0x1406C6AF0
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     IopExceptionFilter @ 0x14025E7A8 (IopExceptionFilter.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402AAB50 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     IopCheckFileObjectExtensionFlag @ 0x1402AC870 (IopCheckFileObjectExtensionFlag.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtReadFileScatter(
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
  struct _KEVENT *v9; // r15
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v14; // r14
  int v15; // ecx
  unsigned __int64 DeviceType; // rcx
  __int64 v17; // rdx
  ULONG v18; // edi
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rsi
  void *v22; // r8
  __int64 v23; // r12
  unsigned int SectorSize; // ecx
  _KPROCESS *Process; // rcx
  __int16 v26; // ax
  bool v27; // zf
  char v28; // al
  char v29; // cl
  __int64 v30; // rbx
  union _FILE_SEGMENT_ELEMENT *Pool2; // rdi
  __int64 i; // rdx
  NTSTATUS v33; // esi
  _DWORD *v34; // r14
  int v35; // esi
  struct _KTHREAD *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // edi
  char v40; // r12
  __int64 v41; // r8
  __int64 v42; // rdx
  IRP *Irp; // rax
  IRP *v44; // rsi
  __int64 v45; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  union _FILE_SEGMENT_ELEMENT *v48; // r14
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v50[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LARGE_INTEGER v52; // [rsp+58h] [rbp-80h]
  ULONG v53; // [rsp+60h] [rbp-78h]
  int v54; // [rsp+64h] [rbp-74h]
  PVOID Object; // [rsp+68h] [rbp-70h] BYREF
  int v56; // [rsp+70h] [rbp-68h]
  PVOID v57; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v60; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v61; // [rsp+98h] [rbp-40h]
  __int64 v63; // [rsp+F0h] [rbp+18h] BYREF
  void *v64; // [rsp+F8h] [rbp+20h]

  v64 = a4;
  v63 = a3;
  *(_QWORD *)&v50[7] = 0LL;
  P = 0LL;
  v9 = 0LL;
  v57 = 0LL;
  v53 = 0;
  v52.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&v50[7], 0LL);
  if ( result < 0 )
    return result;
  v12 = *(_QWORD *)&v50[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v50[7]);
  v14 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  v15 = *(_DWORD *)(v12 + 80);
  if ( (v15 & 8) == 0
    || (v15 & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v17 = 0x40000100100348LL, !_bittest64(&v17, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject((PVOID)v12);
    return -1073741811;
  }
  v18 = Length;
  v19 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v54 = 0;
    v20 = a5;
    v21 = 0x7FFFFFFF0000LL;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v63, *(_BYTE *)(v12 + 80) & 2);
    v22 = *(void **)&v50[7];
    if ( *(_QWORD *)(*(_QWORD *)&v50[7] + 176LL) && (v63 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)&v50[7]);
      return -1073741811;
    }
    v23 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v52 = *(LARGE_INTEGER *)a8;
      v22 = *(void **)&v50[7];
    }
    if ( (*(_DWORD *)(v12 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v14->SectorSize, (_WORD)SectorSize) && ((SectorSize - 1) & v18) != 0 && v18 % SectorSize
        || a8 && (_WORD)SectorSize && ((SectorSize - 1) & v52.LowPart) != 0 )
      {
        ObfDereferenceObject(v22);
        return -1073741811;
      }
    }
    v61 = KeGetCurrentThread();
    Process = v61->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_30;
    v26 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v26 == 332 || (v27 = v26 == 452, v28 = 0, v27) )
      v28 = 1;
    v50[1] = v28;
    v29 = 1;
    if ( !v28 )
LABEL_30:
      v29 = 0;
    v50[2] = v29;
    v30 = v19;
    if ( 8 * v19 )
    {
      if ( v29 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)Src & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&Src[v30] > 0x7FFFFFFF0000LL || &Src[v30] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( v18 )
    {
      Pool2 = (union _FILE_SEGMENT_ELEMENT *)ExAllocatePool2(289LL, 8 * v19, 538996553LL);
      P = Pool2;
      memmove(Pool2, Src, 8 * v19);
      Src = Pool2;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v56 = i;
        if ( (unsigned int)i >= (unsigned int)v19 )
          break;
        if ( ((__int64)Src[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v21 = (__int64)a9;
      v53 = *(_DWORD *)v21;
      Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = *(_QWORD *)&v50[7];
    PreviousMode = AccessMode;
  }
  else
  {
    v23 = a8;
    if ( a8 )
      v52 = *(LARGE_INTEGER *)a8;
    Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
    if ( a9 )
      v53 = *a9;
  }
  if ( a2 )
  {
    Object = 0LL;
    v33 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v9 = (struct _KEVENT *)Object;
    v57 = Object;
    if ( v33 < 0 )
    {
      ObfDereferenceObject((PVOID)v12);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return v33;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  v34 = (_DWORD *)(v12 + 80);
  v60 = (_DWORD *)(v12 + 80);
  v35 = *(_DWORD *)(v12 + 80);
  if ( (v35 & 2) != 0 )
  {
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    v37 = *(_QWORD *)&v50[7];
    v38 = KeAbPreAcquire(*(_QWORD *)&v50[7] + 128LL, 0LL);
    v50[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v37 + 116), 1) )
    {
      v12 = *(_QWORD *)&v50[7];
      v39 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&v50[7], (__int64)v50);
    }
    else
    {
      if ( v38 )
        *(_BYTE *)(v38 + 18) = 1;
      v12 = *(_QWORD *)&v50[7];
      ObfReferenceObject(*(PVOID *)&v50[7]);
      v39 = 0;
    }
    if ( v50[0] )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      ObfDereferenceObject((PVOID)v12);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v39;
    }
    if ( !v23 || v52.QuadPart == -2 )
      v52 = *(LARGE_INTEGER *)(v12 + 104);
    v40 = 1;
    Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
  }
  else
  {
    if ( !v23 && (v35 & 0x280) == 0 )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      goto LABEL_86;
    }
    v40 = 0;
  }
  if ( v52.HighPart < 0 )
  {
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( v40 )
      IopReleaseFileObjectLock((volatile __int32 *)v12);
LABEL_86:
    ObfDereferenceObject((PVOID)v12);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741811;
  }
  IopResetEvent(v12);
  LOBYTE(v41) = v40 ^ 1;
  LOBYTE(v42) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v42, v41);
  v44 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v12;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v9;
    v45 = a5;
    Irp->UserIosb = (PIO_STATUS_BLOCK)a5;
    Irp->Overlay.AllocationSize.QuadPart = v63;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v64;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v12;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Src->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v48 = Src;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoWriteAccess);
      v44->UserBuffer = v48->Buffer;
      v34 = v60;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v44->Flags |= (*v34 & 8 | 0x4800u) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v53;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset = v52;
    if ( IopCheckFileObjectExtensionFlag(v12, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v45 + 8);
    return IopSynchronousServiceTail(DeviceObject, v44, AccessMode, v40, 0);
  }
  else
  {
    IopAllocateIrpCleanup((PVOID)v12, v9);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741670;
  }
}
