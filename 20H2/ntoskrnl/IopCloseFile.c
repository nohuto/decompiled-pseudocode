/*
 * XREFs of IopCloseFile @ 0x14060E6B0
 * Callers:
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140211230 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x14021B3A0 (IopDequeueIrpFromThread.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x1403056F8 (IopSetLockOperationProcess.c)
 *     IopCloseFileObjectExtension @ 0x14031600C (IopCloseFileObjectExtension.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1406C2A34 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x14089DAF4 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // r14
  __int64 v7; // rsi
  int v8; // ebp
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v11; // edi
  struct _DEVICE_OBJECT *v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v17; // rax
  _QWORD *v18; // r8
  ULONG v19; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v21; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 (__fastcall *FastIoUnlockAll)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *); // r14
  void *v26; // rdi
  char v27; // r15
  IRP *v28; // rdi
  struct _IO_STACK_LOCATION *v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+18h] BYREF

  FileObjectExtension = 0LL;
  v7 = 0LL;
  v8 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v7 = IopGetFileObjectExtension((__int64)a2, (int)v18 + 4, v18);
    }
    if ( a4 == 1 )
    {
      Flags = a2->Flags;
      if ( (Flags & 0x800) != 0 )
      {
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      }
      else
      {
        AttachedDevice = IoGetRelatedDeviceObject(a2);
        Flags = a2->Flags;
      }
      v11 = Flags | 0x40000;
      v12 = AttachedDevice;
      a2->Flags = v11;
      if ( a1 && (v11 & 2) != 0 )
      {
        v8 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v14 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v30) )
            goto LABEL_14;
        }
        if ( v14 )
          *(_BYTE *)(v14 + 26) |= 1u;
        ObfReferenceObject(a2);
      }
LABEL_14:
      if ( v7 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v12, (unsigned __int8)v12->StackSize);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed);
      v17 = KeGetCurrentThread();
      ++v17->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v12, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v8 )
        IopReleaseFileObjectLock((PADAPTER_OBJECT)a2);
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1, a4) >= 0 )
      {
        v19 = a2->Flags;
        v31 = 0LL;
        if ( (v19 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v19 = a2->Flags;
        }
        v21 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v19 & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v8 = 1;
          while ( 1 )
          {
            v23 = KeGetCurrentThread();
            --v23->KernelApcDisable;
            v24 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v33) )
              goto LABEL_46;
          }
          if ( v24 )
            *(_BYTE *)(v24 + 26) |= 1u;
          ObfReferenceObject(a2);
        }
LABEL_46:
        if ( !FastIoDispatch )
          goto LABEL_54;
        FastIoUnlockAll = (__int64 (__fastcall *)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_54;
        if ( (MmVerifierData & 0x10) != 0 )
          v26 = (void *)VfFastIoSnapState();
        else
          v26 = 0LL;
        v27 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, &v31, v21);
        if ( v26 )
          VfFastIoCheckState(v26);
        if ( !v27 )
        {
LABEL_54:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          IopResetEvent((__int64)a2);
          v28 = (IRP *)IopAllocateIrpMustSucceed((__int64)v21, (unsigned __int8)v21->StackSize);
          v28->Tail.Overlay.OriginalFileObject = a2;
          v28->Tail.Overlay.Thread = KeGetCurrentThread();
          v28->UserIosb = &v28->IoStatus;
          v29 = v28->Tail.Overlay.CurrentStackLocation;
          v28->RequestorMode = 0;
          v28->UserEvent = &Event;
          v28->Flags = 4;
          v28->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v29[-1].MajorFunction = 785;
          v29[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v28);
          if ( IofCallDriver(v21, v28) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v8 == 1 )
          IopReleaseFileObjectLock((PADAPTER_OBJECT)a2);
      }
    }
  }
}
