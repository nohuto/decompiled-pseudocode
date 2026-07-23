/*
 * XREFs of IopCloseFile @ 0x1405FDC00
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140253450 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x1402E3C10 (IopSetLockOperationProcess.c)
 *     IopCloseFileObjectExtension @ 0x1403073C8 (IopCloseFileObjectExtension.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopCleanupProcessResources @ 0x1406CD814 (IopCleanupProcessResources.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 FileObjectExtension; // r14
  __int64 v8; // rsi
  int v9; // ebp
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v12; // edi
  struct _DEVICE_OBJECT *v13; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KTHREAD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // r8
  __int64 v27; // rcx
  ULONG v28; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v30; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  struct _KTHREAD *v32; // rax
  __int64 v33; // rax
  __int64 (__fastcall *FastIoUnlockAll)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *); // r14
  void *v35; // rdi
  char v36; // r15
  __int64 v37; // rdx
  __int64 v38; // r8
  _DWORD *v39; // r9
  IRP *v40; // rdi
  struct _IO_STACK_LOCATION *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  __int128 v45; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v47; // [rsp+A0h] [rbp+18h] BYREF

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
      v8 = IopGetFileObjectExtension(v27, (int)v26 + 4, v26);
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
          v15 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v44) )
            goto LABEL_14;
        }
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        ObfReferenceObject(a2);
      }
LABEL_14:
      if ( v8 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2, v16, v17, v18);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v13, v13->StackSize);
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
      IopQueueThreadIrp((__int64)MustSucceed, v21, v22);
      v23 = KeGetCurrentThread();
      ++v23->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v13, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed, v24, v25);
      IoFreeIrp(MustSucceed);
      if ( v9 )
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
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1) >= 0 )
      {
        v28 = a2->Flags;
        v45 = 0LL;
        if ( (v28 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v28 = a2->Flags;
        }
        v30 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v28 & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v9 = 1;
          while ( 1 )
          {
            v32 = KeGetCurrentThread();
            --v32->KernelApcDisable;
            v33 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v47) )
              goto LABEL_46;
          }
          if ( v33 )
            *(_BYTE *)(v33 + 26) |= 1u;
          ObfReferenceObject(a2);
        }
LABEL_46:
        if ( !FastIoDispatch )
          goto LABEL_54;
        FastIoUnlockAll = (__int64 (__fastcall *)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_54;
        if ( (MmVerifierData & 0x10) != 0 )
          v35 = (void *)VfFastIoSnapState();
        else
          v35 = 0LL;
        v36 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, &v45, v30);
        if ( v35 )
          VfFastIoCheckState(v35);
        if ( !v36 )
        {
LABEL_54:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          IopResetEvent((__int64)a2, v37, v38, v39);
          v40 = (IRP *)IopAllocateIrpMustSucceed((__int64)v30, v30->StackSize);
          v40->Tail.Overlay.OriginalFileObject = a2;
          v40->Tail.Overlay.Thread = KeGetCurrentThread();
          v40->UserIosb = &v40->IoStatus;
          v41 = v40->Tail.Overlay.CurrentStackLocation;
          v40->RequestorMode = 0;
          v40->UserEvent = &Event;
          v40->Flags = 4;
          v40->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v41[-1].MajorFunction = 785;
          v41[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v40, v42, v43);
          if ( IofCallDriver(v30, v40) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v9 == 1 )
          IopReleaseFileObjectLock((PADAPTER_OBJECT)a2);
      }
    }
  }
}
