/*
 * XREFs of IopCloseFile @ 0x14072E9E0
 * Callers:
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 * Callees:
 *     IopCloseFileObjectExtension @ 0x14020B0A0 (IopCloseFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x1402A36D0 (IopSetLockOperationProcess.c)
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x1402AA860 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopCleanupProcessResources @ 0x1406C9A28 (IopCleanupProcessResources.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupFileObjectIosbRange @ 0x140933FE8 (IopCleanupFileObjectIosbRange.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 FileObjectExtension; // r13
  __int64 v8; // rbp
  int v9; // r15d
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v12; // edi
  struct _DEVICE_OBJECT *v13; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rcx
  ULONG v21; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v23; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  struct _KTHREAD *v25; // rax
  __int64 v26; // rax
  __int64 (__fastcall *FastIoUnlockAll)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *); // rbp
  void *v28; // rdi
  char v29; // r14
  IRP *v30; // rdi
  struct _IO_STACK_LOCATION *v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  FileObjectExtension = 0LL;
  v8 = 0LL;
  v9 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v8 = IopGetFileObjectExtension(v20, (int)v19 + 4, v19);
    }
    if ( v4 == 1 )
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
      v12 = Flags | 0x40000;
      v13 = AttachedDevice;
      a2->Flags = v12;
      if ( a1 && (v12 & 2) != 0 )
      {
        v9 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v15 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&a2->Type, 0LL, 0LL, v15, &v32) )
            goto LABEL_14;
        }
        if ( v15 )
          *(_BYTE *)(v15 + 18) = 1;
        ObfReferenceObject(a2);
      }
LABEL_14:
      if ( v8 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v13, (unsigned __int8)v13->StackSize);
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
      v18 = KeGetCurrentThread();
      ++v18->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v13, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v9 )
        IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      IopCancelIrpsInFileObjectList((__int64)a2, a1, 0LL, 0LL, 1, 1);
      for ( ; FileObjectExtension; FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40) )
      {
        if ( *(_QWORD *)(FileObjectExtension + 32) == a1 )
          IopCleanupFileObjectIosbRange(FileObjectExtension);
      }
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      IopCleanupProcessResources((__int64)a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1) >= 0 )
      {
        v21 = a2->Flags;
        v33 = 0LL;
        if ( (v21 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v21 = a2->Flags;
        }
        v23 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v21 & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v9 = 1;
          while ( 1 )
          {
            v25 = KeGetCurrentThread();
            --v25->KernelApcDisable;
            v26 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(
                                  (volatile signed __int32 *)&a2->Type,
                                  0LL,
                                  0LL,
                                  v26,
                                  &v35) )
              goto LABEL_40;
          }
          if ( v26 )
            *(_BYTE *)(v26 + 18) = 1;
          ObfReferenceObject(a2);
        }
LABEL_40:
        if ( !FastIoDispatch )
          goto LABEL_49;
        FastIoUnlockAll = (__int64 (__fastcall *)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_49;
        if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v23->DriverObject) )
          v28 = (void *)VfFastIoSnapState();
        else
          v28 = 0LL;
        v29 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, &v33, v23);
        if ( v28 )
          VfFastIoCheckState(v28);
        if ( !v29 )
        {
LABEL_49:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          if ( (a2->Flags & 0x4000000) == 0 )
            KeResetEvent(&a2->Event);
          v30 = (IRP *)IopAllocateIrpMustSucceed((__int64)v23, (unsigned __int8)v23->StackSize);
          v30->Tail.Overlay.OriginalFileObject = a2;
          v30->Tail.Overlay.Thread = KeGetCurrentThread();
          v30->UserIosb = &v30->IoStatus;
          v31 = v30->Tail.Overlay.CurrentStackLocation;
          v30->RequestorMode = 0;
          v30->UserEvent = &Event;
          v30->Flags = 4;
          v30->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v31[-1].MajorFunction = 785;
          v31[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v30);
          if ( IofCallDriver(v23, v30) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v9 == 1 )
          IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      }
    }
  }
}
