/*
 * XREFs of NtFlushBuffersFileEx @ 0x1406E7FA0
 * Callers:
 *     NtFlushBuffersFile @ 0x1406E7F70 (NtFlushBuffersFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtFlushBuffersFileEx(void *a1, char a2, __int64 a3, int a4, unsigned __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v11; // rbx
  unsigned int v12; // edi
  char v13; // di
  struct _KTHREAD *v14; // rax
  volatile __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  unsigned int v20; // edi
  char v21; // r15
  struct _KEVENT *v22; // rdi
  __int64 v23; // rdx
  __int64 Irp; // rax
  IRP *v25; // rsi
  struct _IO_STATUS_BLOCK *v26; // rax
  struct _KEVENT *v27; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v29; // r9
  struct _KEVENT *Pool_0; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v32; // [rsp+48h] [rbp-40h] BYREF
  __int128 v33; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  Object = 0LL;
  v33 = 0LL;
  v32 = 0LL;
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
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, &v32);
  if ( (int)result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v32.GrantedAccess) != 0 )
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
          v11 = (struct _FILE_OBJECT *)Object;
          v20 = IopWaitAndAcquireFileObjectLock(
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
          v20 = 0;
        }
        if ( !(_BYTE)DeviceObject )
        {
          v21 = 1;
          v22 = 0LL;
          goto LABEL_16;
        }
      }
      else
      {
        Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x18uLL);
        v22 = Pool_0;
        if ( Pool_0 )
        {
          KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
          v21 = 0;
LABEL_16:
          IopResetEvent((__int64)v11, v17, v18, v19);
          DeviceObject = IoGetRelatedDeviceObject(v11);
          LOBYTE(v23) = DeviceObject->StackSize;
          Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v23, 0LL, retaddr);
          v25 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v21 )
            {
              v26 = (struct _IO_STATUS_BLOCK *)a5;
              v27 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v26 = (struct _IO_STATUS_BLOCK *)&v33;
              v27 = v22;
            }
            v25->UserEvent = v27;
            v25->UserIosb = v26;
            v25->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
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
            result = IopSynchronousServiceTail(DeviceObject, v25, (__int64)v11, 0LL, PreviousMode, v21, 2u);
            if ( !v21 )
            {
              LOBYTE(v29) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v22, v25, v29, &v33, a5);
            }
          }
          else
          {
            if ( v22 )
              ExFreePoolWithTag(v22, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v11, 0LL);
            return 3221225626LL;
          }
          return result;
        }
        v20 = -1073741670;
      }
    }
    else
    {
      v20 = -1073741790;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    return v20;
  }
  return result;
}
