/*
 * XREFs of IopCloseFile @ 0x140713E00
 * Callers:
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 * Callees:
 *     IopCloseFileObjectExtension @ 0x140237828 (IopCloseFileObjectExtension.c)
 *     PsIsThreadTerminating @ 0x140263440 (PsIsThreadTerminating.c)
 *     IopUpdateOtherOperationCount @ 0x1402D0560 (IopUpdateOtherOperationCount.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpMustSucceed @ 0x14035C630 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x14035E490 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x14035E4B0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x14036245C (IopSetLockOperationProcess.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopCleanupProcessResources @ 0x1405FCD04 (IopCleanupProcessResources.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     IopFreeBandwidthContract @ 0x14089B224 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1409CA9B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CAA8C (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // rsi
  __int64 v7; // r14
  int v8; // r15d
  _QWORD *v9; // r8
  ULONG v10; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v12; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  struct _KTHREAD *v14; // rax
  PRTL_BALANCED_NODE v15; // rax
  __int64 (__fastcall *FastIoUnlockAll)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v17; // rdi
  _KPROCESS *CurrentProcess; // rax
  char v19; // r14
  IRP *v20; // rdi
  struct _IO_STACK_LOCATION *v21; // rcx
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v24; // edi
  struct _DEVICE_OBJECT *v25; // r13
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v33; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+18h] BYREF

  FileObjectExtension = 0LL;
  v7 = 0LL;
  v8 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v7 = IopGetFileObjectExtension((__int64)a2, 4, v9);
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
      v24 = Flags | 0x40000;
      v25 = AttachedDevice;
      a2->Flags = v24;
      if ( a1 && (v24 & 2) != 0 )
      {
        v8 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v27 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&a2->Type, 0, 0, v27, &v33) )
            goto LABEL_45;
        }
        if ( v27 )
          BYTE2(v27[1].Left) |= 1u;
        ObfReferenceObject(a2);
      }
LABEL_45:
      if ( v7 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2, v28, v29, v30);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v25, (unsigned __int8)v25->StackSize);
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
      IopUpdateOtherOperationCount();
      if ( IofCallDriver(v25, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v8 )
        IopReleaseFileObjectLock((PADAPTER_OBJECT)a2);
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources((__int64)a2, a1, FileObjectExtension);
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources((__int64)a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1) >= 0 )
      {
        v10 = a2->Flags;
        v34 = 0LL;
        if ( (v10 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v10 = a2->Flags;
        }
        v12 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v10 & 2) != 0 && !PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          v8 = 1;
          while ( 1 )
          {
            v14 = KeGetCurrentThread();
            --v14->KernelApcDisable;
            v15 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&a2->Type, 0, 0, v15, &v36) )
              goto LABEL_21;
          }
          if ( v15 )
            BYTE2(v15[1].Left) |= 1u;
          ObfReferenceObject(a2);
        }
LABEL_21:
        if ( !FastIoDispatch )
          goto LABEL_29;
        FastIoUnlockAll = (__int64 (__fastcall *)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_29;
        if ( (MmVerifierData & 0x10) != 0 )
          v17 = (void *)VfFastIoSnapState();
        else
          v17 = 0LL;
        CurrentProcess = PsGetCurrentProcess();
        v19 = FastIoUnlockAll(a2, CurrentProcess, &v34, v12);
        if ( v17 )
          VfFastIoCheckState(v17);
        if ( !v19 )
        {
LABEL_29:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v20 = (IRP *)IopAllocateIrpMustSucceed((__int64)v12, (unsigned __int8)v12->StackSize);
          v20->Tail.Overlay.OriginalFileObject = a2;
          v20->Tail.Overlay.Thread = KeGetCurrentThread();
          v20->UserIosb = &v20->IoStatus;
          v21 = v20->Tail.Overlay.CurrentStackLocation;
          v20->RequestorMode = 0;
          v20->UserEvent = &Event;
          v20->Flags = 4100;
          v20->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v21[-1].MajorFunction = 785;
          v21[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v20);
          if ( IofCallDriver(v12, v20) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v8 == 1 )
          IopReleaseFileObjectLock((PADAPTER_OBJECT)a2);
      }
    }
  }
}
