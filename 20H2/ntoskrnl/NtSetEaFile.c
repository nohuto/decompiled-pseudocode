/*
 * XREFs of NtSetEaFile @ 0x14072C980
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopProbeAndLockPages_3 @ 0x140506D50 (IopProbeAndLockPages_3.c)
 *     IopVerifierExAllocatePool_3 @ 0x140506DBC (IopVerifierExAllocatePool_3.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x1406C6810 (IoCheckEaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetEaFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  struct _KEVENT *v7; // r15
  char PreviousMode; // si
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r13
  bool v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ebx
  struct _KEVENT *Pool_3; // rax
  __int64 v22; // rdx
  IRP *v23; // rax
  IRP *Irp; // rsi
  char v25; // di
  struct _KEVENT *v26; // rax
  struct _KTHREAD *v27; // rbx
  ULONG Flags; // eax
  ULONG v29; // r13d
  struct _FILE_FULL_EA_INFORMATION *PoolWithQuota; // rdi
  NTSTATUS v31; // eax
  PMDL Mdl; // rcx
  char v33; // bl
  char v34; // [rsp+40h] [rbp-78h] BYREF
  char v35; // [rsp+41h] [rbp-77h]
  char v36; // [rsp+42h] [rbp-76h]
  unsigned int v37; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v43; // [rsp+70h] [rbp-48h]
  unsigned int v44[6]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = (struct _IO_STATUS_BLOCK *)a2;
  Object = 0LL;
  v7 = 0LL;
  P = 0LL;
  *(_OWORD *)v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v35 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v9 = a2;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (unsigned __int64)a3 + a4;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 0x10u, PreviousMode, &Object, 0LL);
  v37 = result;
  if ( (int)result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
      v34 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        LOBYTE(v19) = v14;
        LOBYTE(v18) = PreviousMode;
        v12 = (struct _FILE_OBJECT *)Object;
        v20 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v18, v19, v17, &v34);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v20 = 0;
      }
      v37 = v20;
      if ( !v34 )
      {
        v34 = 1;
        v5 = (struct _IO_STATUS_BLOCK *)a2;
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
        v34 = 0;
LABEL_22:
        IopResetEvent((__int64)v12);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v22) = DeviceObject->StackSize;
        v23 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v22, 0LL, retaddr);
        Irp = v23;
        v43 = v23;
        if ( v23 )
        {
          v23->Tail.Overlay.OriginalFileObject = v12;
          v23->Tail.Overlay.Thread = CurrentThread;
          v25 = v35;
          v23->RequestorMode = v35;
          if ( v34 )
          {
            v26 = 0LL;
          }
          else
          {
            v23->Flags = 4;
            v5 = (struct _IO_STATUS_BLOCK *)v44;
            v26 = v7;
          }
          Irp->UserEvent = v26;
          Irp->UserIosb = v5;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v27 = (struct _KTHREAD *)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          CurrentThread = v27;
          v27->Header.Type = 8;
          v27->StackLimit = v12;
          Flags = DeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            v29 = a4;
            if ( a4 )
            {
              v36 = 0;
              PoolWithQuota = (struct _FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(0LL, a4);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
              memmove(PoolWithQuota, a3, a4);
              v31 = IoCheckEaBufferValidity(PoolWithQuota, a4, &ErrorOffset);
              v37 = v31;
              if ( v31 < 0 )
              {
                v36 = 1;
                *(_DWORD *)a2 = v31;
                *(_QWORD *)(a2 + 8) = ErrorOffset;
                RtlRaiseStatus(v31);
              }
              Irp->Flags |= 0x30u;
              v25 = v35;
              v27 = CurrentThread;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else
          {
            v29 = a4;
            if ( (Flags & 0x10) != 0 )
            {
              if ( a4 )
              {
                Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(0xC000009A);
                IopProbeAndLockPages_3((__int64)Mdl, v25, 0, (__int64)DeviceObject, v27->Header.Type);
              }
            }
            else
            {
              Irp->UserBuffer = a3;
            }
          }
          LODWORD(v27->Header.WaitListHead.Flink) = v29;
          v33 = v34;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, v25, v34, 2u);
          if ( !v33 )
            return IopSynchronousApiServiceTail(result, v7, Irp, v25, v44, (_OWORD *)a2);
        }
        else
        {
          if ( (*v13 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, 0LL);
          return 3221225626LL;
        }
        return result;
      }
      v20 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v20;
  }
  return result;
}
