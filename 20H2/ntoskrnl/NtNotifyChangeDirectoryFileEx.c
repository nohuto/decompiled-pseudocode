/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406CFA80 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x140506CF0 (IopProbeAndLockPages_2.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
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
  NTSTATUS result; // eax
  char v16; // r14
  struct _DMA_ADAPTER *v17; // rdi
  NTSTATUS v18; // ebx
  char v19; // si
  struct _KTHREAD *v20; // rax
  volatile __int32 *v21; // rbx
  __int64 v22; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 Irp; // rax
  IRP *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rcx
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v33; // r8
  char v34; // al
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  PVOID v36; // [rsp+48h] [rbp-50h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  PIO_APC_ROUTINE v41; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v42; // [rsp+B8h] [rbp+20h]

  v42 = ApcContext;
  v41 = ApcRoutine;
  v36 = 0LL;
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
  v16 = 1;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, &v36, 0LL);
  if ( result >= 0 )
  {
    v17 = (struct _DMA_ADAPTER *)v36;
    if ( *((_QWORD *)v36 + 22) && ((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v18 = -1073741811;
LABEL_26:
      HalPutDmaAdapter(v17);
      return v18;
    }
    if ( Event )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)Object;
      if ( v18 < 0 )
        goto LABEL_26;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (*(_DWORD *)&v17[5].Version & 2) != 0 )
    {
      v19 = (*(_DWORD *)&v17[5].Version & 4) != 0;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = (volatile __int32 *)v36;
      v22 = KeAbPreAcquire((ULONG_PTR)v36 + 128, 0LL, 0);
      LOBYTE(v35) = 0;
      if ( _InterlockedExchange(v21 + 29, 1) )
      {
        v17 = (struct _DMA_ADAPTER *)v36;
        v18 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v36, PreviousMode, v19, v22, &v35);
      }
      else
      {
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        v17 = (struct _DMA_ADAPTER *)v36;
        ObfReferenceObject(v36);
        v18 = 0;
      }
      if ( (_BYTE)v35 )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_26;
      }
      LOBYTE(v35) = 1;
    }
    else
    {
      v16 = 0;
      LOBYTE(v35) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v41, 0);
    }
    IopResetEvent((__int64)v17);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v17);
    LOBYTE(v24) = v16 ^ 1;
    LOBYTE(v25) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v25, v24, retaddr);
    v27 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v17, DmaAdapter);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v17;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = DmaAdapter;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v41;
    *(_QWORD *)(Irp + 96) = v42;
    v28 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v28 - 72) = 12;
    v29 = (unsigned int)DirectoryNotifyInformationClass;
    *(_BYTE *)(v28 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v28 - 24) = v17;
    if ( !v14 )
      goto LABEL_41;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v29, v14);
      v27->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v14);
      v27->Flags = 112;
      v16 = v35;
      LODWORD(v29) = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v27);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2(
        (__int64)Mdl,
        PreviousMode,
        v33,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v28 - 72));
      LODWORD(v29) = DirectoryNotifyInformationClass;
      goto LABEL_41;
    }
    v27->UserBuffer = Buffer;
LABEL_41:
    *(_DWORD *)(v28 - 64) = v14;
    *(_DWORD *)(v28 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v28 - 71) == 3 )
      *(_DWORD *)(v28 - 48) = v29;
    *(_BYTE *)(v28 - 70) = 0;
    v34 = *(_BYTE *)(v28 - 70);
    if ( WatchTree )
      v34 = 1;
    *(_BYTE *)(v28 - 70) = v34;
    return IopSynchronousServiceTail(RelatedDeviceObject, v27, (__int64)v17, 0, PreviousMode, v16, 2u);
  }
  return result;
}
