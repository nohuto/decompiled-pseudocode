/*
 * XREFs of NtFlushBuffersFileEx @ 0x1406BF5F0
 * Callers:
 *     NtFlushBuffersFile @ 0x1406BF5C0 (NtFlushBuffersFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopSynchronousApiServiceTail @ 0x1406BF8BC (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtFlushBuffersFileEx(void *a1, char a2, __int64 a3, int a4, unsigned __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  unsigned int v12; // edi
  struct _KTHREAD *v13; // rax
  volatile __int32 *v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  char v17; // r15
  struct _KEVENT *v18; // rdi
  __int64 v19; // rdx
  __int64 Irp; // rax
  IRP *v21; // rsi
  struct _IO_STATUS_BLOCK *v22; // rax
  struct _KEVENT *v23; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v25; // r9
  struct _KEVENT *Pool2; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  __int128 v28; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION RelatedDeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  Object = 0LL;
  v28 = 0LL;
  RelatedDeviceObject = 0LL;
  if ( a3 || a4 )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a5 < 0x7FFFFFFF0000LL )
      v9 = a5;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, &RelatedDeviceObject);
  if ( result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & RelatedDeviceObject.GrantedAccess) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        v14 = (volatile __int32 *)Object;
        v15 = KeAbPreAcquire((__int64)Object + 128, 0LL);
        LOBYTE(RelatedDeviceObject.HandleAttributes) = 0;
        if ( _InterlockedExchange(v14 + 29, 1) )
        {
          v11 = (struct _FILE_OBJECT *)Object;
          v16 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&RelatedDeviceObject);
        }
        else
        {
          if ( v15 )
            *(_BYTE *)(v15 + 18) = 1;
          v11 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v16 = 0;
        }
        if ( !LOBYTE(RelatedDeviceObject.HandleAttributes) )
        {
          v17 = 1;
          v18 = 0LL;
          goto LABEL_16;
        }
      }
      else
      {
        Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
        v18 = Pool2;
        if ( Pool2 )
        {
          KeInitializeEvent(Pool2, SynchronizationEvent, 0);
          v17 = 0;
LABEL_16:
          IopResetEvent((__int64)v11);
          RelatedDeviceObject = (struct _OBJECT_HANDLE_INFORMATION)IoGetRelatedDeviceObject(v11);
          LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)&RelatedDeviceObject + 76LL);
          Irp = IopAllocateIrpExReturn(*(_QWORD *)&RelatedDeviceObject, v19, 0LL);
          v21 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v17 )
            {
              v22 = (struct _IO_STATUS_BLOCK *)a5;
              v23 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v22 = (struct _IO_STATUS_BLOCK *)&v28;
              v23 = v18;
            }
            v21->UserEvent = v23;
            v21->UserIosb = v22;
            v21->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
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
            result = IopSynchronousServiceTail(*(PDEVICE_OBJECT *)&RelatedDeviceObject, v21, PreviousMode, v17, 2);
            if ( !v17 )
            {
              LOBYTE(v25) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v18, v21, v25, &v28, a5);
            }
          }
          else
          {
            if ( v18 )
              ExFreePoolWithTag(v18, 0);
            IopAllocateIrpCleanup(v11, 0LL);
            return -1073741670;
          }
          return result;
        }
        v16 = -1073741670;
      }
    }
    else
    {
      v16 = -1073741790;
    }
    ObfDereferenceObject(v11);
    return v16;
  }
  return result;
}
