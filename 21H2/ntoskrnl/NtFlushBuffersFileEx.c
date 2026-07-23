/*
 * XREFs of NtFlushBuffersFileEx @ 0x1405F79F0
 * Callers:
 *     NtFlushBuffersFile @ 0x1405F79C0 (NtFlushBuffersFile.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopSynchronousApiServiceTail @ 0x1405F7CBC (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  struct _KTHREAD *v13; // rax
  volatile __int32 *v14; // rbx
  PRTL_BALANCED_NODE v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  NTSTATUS v19; // edi
  char v20; // r15
  struct _KEVENT *v21; // rdi
  __int64 v22; // rdx
  __int64 Irp; // rax
  IRP *v24; // rsi
  PIO_STATUS_BLOCK v25; // rax
  struct _KEVENT *v26; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v28; // r9
  struct _KEVENT *Pool; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v31; // [rsp+48h] [rbp-40h] BYREF
  __int128 v32; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  v5 = Flags;
  Object = 0LL;
  v32 = 0LL;
  v31 = 0LL;
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
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v31);
  if ( result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v31.GrantedAccess) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        v14 = (volatile __int32 *)Object;
        v15 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(DeviceObject) = 0;
        if ( _InterlockedExchange(v14 + 29, 1) )
        {
          v11 = (struct _FILE_OBJECT *)Object;
          v19 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&DeviceObject);
        }
        else
        {
          if ( v15 )
            BYTE2(v15[1].Left) |= 1u;
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
          IopResetEvent((__int64)v11, v16, v17, v18);
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
              v25 = IoStatusBlock;
              v26 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v25 = (PIO_STATUS_BLOCK)&v32;
              v26 = v21;
            }
            v24->UserEvent = v26;
            v24->UserIosb = v25;
            v24->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
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
            result = IopSynchronousServiceTail(DeviceObject, v24, PreviousMode, v20, 2);
            if ( !v20 )
            {
              LOBYTE(v28) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v21, v24, v28, &v32, IoStatusBlock);
            }
          }
          else
          {
            if ( v21 )
              ExFreePoolWithTag(v21, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v11, 0LL);
            return -1073741670;
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
