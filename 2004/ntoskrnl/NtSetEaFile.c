/*
 * XREFs of NtSetEaFile @ 0x14071EAF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IopProbeAndLockPages_2 @ 0x140503340 (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x1405033AC (IopVerifierExAllocatePool_3.c)
 *     IoCheckEaBufferValidity @ 0x140616E30 (IoCheckEaBufferValidity.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetEaFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  struct _KEVENT *v7; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r13
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // rdx
  IRP *v23; // rax
  IRP *Irp; // rsi
  char v25; // di
  struct _KEVENT *v26; // rax
  struct _KTHREAD *v27; // rbx
  ULONG Flags; // eax
  ULONG v29; // r13d
  char v30; // bl
  struct _KEVENT *Pool_3; // rax
  struct _FILE_FULL_EA_INFORMATION *PoolWithQuota_0; // rdi
  NTSTATUS v33; // eax
  PMDL Mdl; // rcx
  char v35[8]; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v41; // [rsp+70h] [rbp-48h]
  unsigned int v42[6]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = (struct _IO_STATUS_BLOCK *)a2;
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
  *(_DWORD *)&v35[4] = result;
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
      v35[0] = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, v35);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      *(_DWORD *)&v35[4] = v21;
      if ( !v35[0] )
      {
        v35[0] = 1;
        v5 = (struct _IO_STATUS_BLOCK *)a2;
        goto LABEL_18;
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
LABEL_18:
        IopResetEvent((__int64)v12, v18, v19, v20);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v22) = DeviceObject->StackSize;
        v23 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v22, 0LL, retaddr);
        Irp = v23;
        v41 = v23;
        if ( v23 )
        {
          v23->Tail.Overlay.OriginalFileObject = v12;
          v23->Tail.Overlay.Thread = CurrentThread;
          v25 = v35[1];
          v23->RequestorMode = v35[1];
          if ( v35[0] )
          {
            v26 = 0LL;
          }
          else
          {
            v23->Flags = 4;
            v5 = (struct _IO_STATUS_BLOCK *)v42;
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
              v35[2] = 0;
              PoolWithQuota_0 = (struct _FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(0LL, a4);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
              memmove(PoolWithQuota_0, a3, a4);
              v33 = IoCheckEaBufferValidity(PoolWithQuota_0, a4, &ErrorOffset);
              *(_DWORD *)&v35[4] = v33;
              if ( v33 < 0 )
              {
                v35[2] = 1;
                *(_DWORD *)a2 = v33;
                *(_QWORD *)(a2 + 8) = ErrorOffset;
                RtlRaiseStatus(v33);
              }
              Irp->Flags |= 0x30u;
              v25 = v35[1];
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
                IopProbeAndLockPages_2(Mdl, v25, 0, (__int64)DeviceObject, v27->Header.Type);
              }
            }
            else
            {
              Irp->UserBuffer = a3;
            }
          }
          LODWORD(v27->Header.WaitListHead.Flink) = v29;
          v30 = v35[0];
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0LL, v25, v35[0], 2u);
          if ( !v30 )
            return IopSynchronousApiServiceTail(result, v7, Irp, v25, v42, (_OWORD *)a2);
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
      v21 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v21;
  }
  return result;
}
