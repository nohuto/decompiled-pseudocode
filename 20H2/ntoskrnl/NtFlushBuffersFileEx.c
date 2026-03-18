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

__int64 __fastcall NtFlushBuffersFileEx(void *a1, char a2, __int64 a3, int a4, unsigned __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v11; // rbx
  unsigned int v12; // edi
  bool v13; // di
  struct _KTHREAD *v14; // rax
  volatile __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // edi
  char v20; // r15
  struct _KEVENT *v21; // rdi
  __int64 v22; // rdx
  __int64 Irp; // rax
  IRP *v24; // rsi
  struct _IO_STATUS_BLOCK *v25; // rax
  struct _KEVENT *v26; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v28; // r9
  struct _KEVENT *Pool; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v31; // [rsp+48h] [rbp-40h] BYREF
  __int128 v32; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  Object = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  if ( a3 || a4 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a5 < 0x7FFFFFFF0000LL )
      v9 = a5;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, &v31);
  if ( (int)result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v31.GrantedAccess) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        v13 = (v12 & 4) != 0;
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = (volatile __int32 *)Object;
        v16 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
        LOBYTE(DeviceObject) = 0;
        if ( _InterlockedExchange(v15 + 29, 1) )
        {
          LOBYTE(v18) = v13;
          LOBYTE(v17) = PreviousMode;
          v11 = (struct _FILE_OBJECT *)Object;
          v19 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v17, v18, v16, &DeviceObject);
        }
        else
        {
          if ( v16 )
            *(_BYTE *)(v16 + 26) |= 1u;
          v11 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v19 = 0;
        }
        if ( !(_BYTE)DeviceObject )
        {
          v20 = 1;
          v21 = 0LL;
          goto LABEL_16;
        }
      }
      else
      {
        Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
        v21 = Pool;
        if ( Pool )
        {
          KeInitializeEvent(Pool, SynchronizationEvent, 0);
          v20 = 0;
LABEL_16:
          IopResetEvent((__int64)v11);
          DeviceObject = IoGetRelatedDeviceObject(v11);
          LOBYTE(v22) = DeviceObject->StackSize;
          Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v22, 0LL, retaddr);
          v24 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v20 )
            {
              v25 = (struct _IO_STATUS_BLOCK *)a5;
              v26 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v25 = (struct _IO_STATUS_BLOCK *)&v32;
              v26 = v21;
            }
            v24->UserEvent = v26;
            v24->UserIosb = v25;
            v24->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v11;
            if ( (a2 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (a2 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (a2 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v24, (__int64)v11, 0, PreviousMode, v20, 2u);
            if ( !v20 )
            {
              LOBYTE(v28) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v21, v24, v28, &v32, a5);
            }
          }
          else
          {
            if ( v21 )
              ExFreePoolWithTag(v21, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v11, 0LL);
            return 3221225626LL;
          }
          return result;
        }
        v19 = -1073741670;
      }
    }
    else
    {
      v19 = -1073741790;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    return v19;
  }
  return result;
}
