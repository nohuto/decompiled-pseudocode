/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406D9E90
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406D9E30 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402533E0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x140502C90 (IopProbeAndLockPages_1.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
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
  int v21; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 Irp; // rax
  IRP *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rcx
  ULONG Flags; // eax
  char v28; // al
  struct _KTHREAD *v29; // rax
  PFILE_OBJECT v30; // rbx
  __int64 v31; // rax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v34; // r8
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-50h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  PIO_APC_ROUTINE v40; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v41; // [rsp+B8h] [rbp+20h]

  v41 = ApcContext;
  v40 = ApcRoutine;
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
    if ( FileObject->CompletionContext && ((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
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
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v30 = FileObject;
      v31 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
      LOBYTE(v35) = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v30->Busy, 1) )
      {
        v20 = FileObject;
        v21 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)&v35);
      }
      else
      {
        if ( v31 )
          *(_BYTE *)(v31 + 26) |= 1u;
        v20 = FileObject;
        ObfReferenceObject(FileObject);
        v21 = 0;
      }
      if ( (_BYTE)v35 )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_39;
      }
      LOBYTE(v35) = 1;
    }
    else
    {
      v15 = 0;
      LOBYTE(v35) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v40, 0);
    }
    IopResetEvent((__int64)v20, v17, v18, v19);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v20);
    Irp = IopAllocateIrpExReturn();
    v24 = (IRP *)Irp;
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
    *(_QWORD *)(Irp + 88) = v40;
    *(_QWORD *)(Irp + 96) = v41;
    v25 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v25 - 72) = 12;
    v26 = (unsigned int)DirectoryNotifyInformationClass;
    *(_BYTE *)(v25 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v25 - 24) = v20;
    if ( !v14 )
      goto LABEL_21;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v26, v14);
      v24->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v14);
      v24->Flags = 112;
      v15 = v35;
      LODWORD(v26) = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v24);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, PreviousMode, v34, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v25 - 72));
      LODWORD(v26) = DirectoryNotifyInformationClass;
      goto LABEL_21;
    }
    v24->UserBuffer = Buffer;
LABEL_21:
    *(_DWORD *)(v25 - 64) = v14;
    *(_DWORD *)(v25 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v25 - 71) == 3 )
      *(_DWORD *)(v25 - 48) = v26;
    *(_BYTE *)(v25 - 70) = 0;
    v28 = *(_BYTE *)(v25 - 70);
    if ( WatchTree )
      v28 = 1;
    *(_BYTE *)(v25 - 70) = v28;
    return IopSynchronousServiceTail(RelatedDeviceObject, v24, (__int64)v20, 0LL, PreviousMode, v15, 2u);
  }
  return result;
}
