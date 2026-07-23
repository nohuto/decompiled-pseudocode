/*
 * XREFs of NtSetEaFile @ 0x140730E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140236060 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IopProbeAndLockPages_3 @ 0x140508ABC (IopProbeAndLockPages_3.c)
 *     IopVerifierExAllocatePool_3 @ 0x140508B28 (IopVerifierExAllocatePool_3.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x1405F7CBC (IopSynchronousApiServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x14069C560 (IoCheckEaBufferValidity.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  PIO_STATUS_BLOCK v5; // rbx
  struct _KEVENT *v7; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v9; // rcx
  char *v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r13
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  PRTL_BALANCED_NODE v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  NTSTATUS v21; // ebx
  struct _KEVENT *Pool_3; // rax
  __int64 v23; // rdx
  IRP *v24; // rax
  IRP *Irp; // rsi
  char v26; // di
  struct _KEVENT *v27; // rax
  struct _KTHREAD *v28; // rbx
  ULONG Flags; // eax
  ULONG v30; // r13d
  _FILE_FULL_EA_INFORMATION *PoolWithQuota_0; // rdi
  int v32; // eax
  PMDL Mdl; // rcx
  char v34; // bl
  char v35[8]; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v41; // [rsp+70h] [rbp-48h]
  unsigned int v42[6]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = IoStatusBlock;
  Object = 0LL;
  v7 = 0LL;
  P = 0LL;
  *(_OWORD *)v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v35[1] = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( Length )
    {
      if ( ((unsigned __int8)Buffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (char *)Buffer + Length;
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, &Object, 0LL);
  *(_DWORD *)&v35[4] = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      v35[0] = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, v35);
      }
      else
      {
        if ( v17 )
          BYTE2(v17[1].Left) |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      *(_DWORD *)&v35[4] = v21;
      if ( !v35[0] )
      {
        v35[0] = 1;
        v5 = IoStatusBlock;
        goto LABEL_22;
      }
    }
    else
    {
      Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
      v7 = Pool_3;
      P = Pool_3;
      if ( Pool_3 )
      {
        KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
        v35[0] = 0;
LABEL_22:
        IopResetEvent((__int64)v12, v18, v19, v20);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v23) = DeviceObject->StackSize;
        v24 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v23, 0LL, retaddr);
        Irp = v24;
        v41 = v24;
        if ( v24 )
        {
          v24->Tail.Overlay.OriginalFileObject = v12;
          v24->Tail.Overlay.Thread = CurrentThread;
          v26 = v35[1];
          v24->RequestorMode = v35[1];
          if ( v35[0] )
          {
            v27 = 0LL;
          }
          else
          {
            v24->Flags = 4;
            v5 = (PIO_STATUS_BLOCK)v42;
            v27 = v7;
          }
          Irp->UserEvent = v27;
          Irp->UserIosb = v5;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v28 = (struct _KTHREAD *)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          CurrentThread = v28;
          v28->Header.Type = 8;
          v28->StackLimit = v12;
          Flags = DeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            v30 = Length;
            if ( Length )
            {
              v35[2] = 0;
              PoolWithQuota_0 = (_FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(0LL, Length);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
              memmove(PoolWithQuota_0, Buffer, Length);
              v32 = IoCheckEaBufferValidity(PoolWithQuota_0, Length, &ErrorOffset);
              *(_DWORD *)&v35[4] = v32;
              if ( v32 < 0 )
              {
                v35[2] = 1;
                IoStatusBlock->Status = v32;
                IoStatusBlock->Information = ErrorOffset;
                RtlRaiseStatus(v32);
              }
              Irp->Flags |= 0x30u;
              v26 = v35[1];
              v28 = CurrentThread;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else
          {
            v30 = Length;
            if ( (Flags & 0x10) != 0 )
            {
              if ( Length )
              {
                Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                IopProbeAndLockPages_3((__int64)Mdl, v26, 0, (__int64)DeviceObject, v28->Header.Type);
              }
            }
            else
            {
              Irp->UserBuffer = Buffer;
            }
          }
          LODWORD(v28->Header.WaitListHead.Flink) = v30;
          v34 = v35[0];
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, v26, v35[0], 2u);
          if ( !v34 )
            return IopSynchronousApiServiceTail(result, v7, Irp, v26, v42, IoStatusBlock);
        }
        else
        {
          if ( (*v13 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, 0LL);
          return -1073741670;
        }
        return result;
      }
      v21 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v21;
  }
  return result;
}
