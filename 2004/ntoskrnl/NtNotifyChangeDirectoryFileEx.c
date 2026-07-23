/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406FCF10
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406FCEB0 (NtNotifyChangeDirectoryFile.c)
 * Callees:
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
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1405032E0 (IopProbeAndLockPages_1.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  ULONG v14; // r12d
  char v15; // r14
  NTSTATUS result; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  PFILE_OBJECT v20; // rdi
  NTSTATUS v21; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 Irp; // rax
  IRP *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rcx
  ULONG Flags; // eax
  char v30; // al
  char v31; // si
  struct _KTHREAD *v32; // rax
  PFILE_OBJECT v33; // rbx
  __int64 v34; // rax
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  __int64 v37; // r8
  __int64 v38; // [rsp+40h] [rbp-58h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-50h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  PIO_APC_ROUTINE v44; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v45; // [rsp+B8h] [rbp+20h]

  v45 = ApcContext;
  v44 = ApcRoutine;
  FileObject = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v14 = Length;
  }
  v15 = 1;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result >= 0 )
  {
    v20 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v21 = -1073741811;
      goto LABEL_39;
    }
    if ( Event )
    {
      Object = 0LL;
      v21 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)Object;
      if ( v21 < 0 )
      {
LABEL_39:
        HalPutDmaAdapter((PADAPTER_OBJECT)v20);
        return v21;
      }
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v20->Flags & 2) != 0 )
    {
      v31 = (v20->Flags & 4) != 0;
      v32 = KeGetCurrentThread();
      --v32->KernelApcDisable;
      v33 = FileObject;
      v34 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
      LOBYTE(v38) = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v33->Busy, 1) )
      {
        v20 = FileObject;
        v21 = IopWaitAndAcquireFileObjectLock(
                (volatile signed __int32 *)&FileObject->Type,
                PreviousMode,
                v31,
                v34,
                &v38);
      }
      else
      {
        if ( v34 )
          *(_BYTE *)(v34 + 26) |= 1u;
        v20 = FileObject;
        ObfReferenceObject(FileObject);
        v21 = 0;
      }
      if ( (_BYTE)v38 )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_39;
      }
      LOBYTE(v38) = 1;
    }
    else
    {
      v15 = 0;
      LOBYTE(v38) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v44, 0);
    }
    IopResetEvent((__int64)v20, v17, v18, v19);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v20);
    LOBYTE(v23) = v15 ^ 1;
    LOBYTE(v24) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v24, v23, retaddr);
    v26 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup((PADAPTER_OBJECT)v20, DmaAdapter);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v20;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = DmaAdapter;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v44;
    *(_QWORD *)(Irp + 96) = v45;
    v27 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v27 - 72) = 12;
    v28 = (unsigned int)DirectoryNotifyInformationClass;
    *(_BYTE *)(v27 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v27 - 24) = v20;
    if ( !v14 )
      goto LABEL_21;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v28, v14);
      v26->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v14);
      v26->Flags = 112;
      v15 = v38;
      LODWORD(v28) = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v26);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, PreviousMode, v37, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v27 - 72));
      LODWORD(v28) = DirectoryNotifyInformationClass;
      goto LABEL_21;
    }
    v26->UserBuffer = Buffer;
LABEL_21:
    *(_DWORD *)(v27 - 64) = v14;
    *(_DWORD *)(v27 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v27 - 71) == 3 )
      *(_DWORD *)(v27 - 48) = v28;
    *(_BYTE *)(v27 - 70) = 0;
    v30 = *(_BYTE *)(v27 - 70);
    if ( WatchTree )
      v30 = 1;
    *(_BYTE *)(v27 - 70) = v30;
    return IopSynchronousServiceTail(RelatedDeviceObject, v26, (__int64)v20, 0LL, PreviousMode, v15, 2u);
  }
  return result;
}
