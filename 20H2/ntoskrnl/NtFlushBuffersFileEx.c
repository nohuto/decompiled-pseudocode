/*
 * XREFs of NtFlushBuffersFileEx @ 0x1406BCBF0
 * Callers:
 *     NtFlushBuffersFile @ 0x1406BCBC0 (NtFlushBuffersFile.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // r12
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  unsigned int v12; // edi
  char v13; // di
  struct _KTHREAD *v14; // rax
  volatile __int32 *v15; // rbx
  __int64 v16; // rax
  NTSTATUS v17; // edi
  char v18; // r15
  struct _KEVENT *v19; // rdi
  __int64 v20; // rdx
  __int64 Irp; // rax
  IRP *v22; // rsi
  PIO_STATUS_BLOCK v23; // rax
  struct _KEVENT *v24; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v26; // r9
  struct _KEVENT *Pool; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v29; // [rsp+48h] [rbp-40h] BYREF
  __int128 v30; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  v5 = Flags;
  Object = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  if ( Parameters || ParametersSize )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v29);
  if ( result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v29.GrantedAccess) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        v13 = (v12 & 4) != 0;
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = (volatile __int32 *)Object;
        v16 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(DeviceObject) = 0;
        if ( _InterlockedExchange(v15 + 29, 1) )
        {
          v11 = (struct _FILE_OBJECT *)Object;
          v17 = IopWaitAndAcquireFileObjectLock(
                  (volatile signed __int32 *)Object,
                  PreviousMode,
                  v13,
                  v16,
                  &DeviceObject);
        }
        else
        {
          if ( v16 )
            *(_BYTE *)(v16 + 26) |= 1u;
          v11 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v17 = 0;
        }
        if ( !(_BYTE)DeviceObject )
        {
          v18 = 1;
          v19 = 0LL;
          goto LABEL_16;
        }
      }
      else
      {
        Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
        v19 = Pool;
        if ( Pool )
        {
          KeInitializeEvent(Pool, SynchronizationEvent, 0);
          v18 = 0;
LABEL_16:
          IopResetEvent((__int64)v11);
          DeviceObject = IoGetRelatedDeviceObject(v11);
          LOBYTE(v20) = DeviceObject->StackSize;
          Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v20, 0LL, retaddr);
          v22 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v18 )
            {
              v23 = IoStatusBlock;
              v24 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v23 = (PIO_STATUS_BLOCK)&v30;
              v24 = v19;
            }
            v22->UserEvent = v24;
            v22->UserIosb = v23;
            v22->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v22->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v11;
            if ( (v5 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (v5 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (v5 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v22, (__int64)v11, 0, PreviousMode, v18, 2u);
            if ( !v18 )
            {
              LOBYTE(v26) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v19, v22, v26, &v30, IoStatusBlock);
            }
          }
          else
          {
            if ( v19 )
              ExFreePoolWithTag(v19, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v11, 0LL);
            return -1073741670;
          }
          return result;
        }
        v17 = -1073741670;
      }
    }
    else
    {
      v17 = -1073741790;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    return v17;
  }
  return result;
}
