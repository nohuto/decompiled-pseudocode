/*
 * XREFs of IopCloseFile @ 0x140675CE0
 * Callers:
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x14028FCD0 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x140290C50 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopSetLockOperationProcess @ 0x1402D6EC0 (IopSetLockOperationProcess.c)
 *     IopCloseFileObjectExtension @ 0x1403451C8 (IopCloseFileObjectExtension.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1406EEB14 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x140897FD0 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
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
  struct _KTHREAD *v21; // rax
  _QWORD *v22; // r8
  __int64 v23; // rcx
  ULONG v24; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v26; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  struct _KTHREAD *v28; // rax
  __int64 v29; // rax
  __int64 (__fastcall *FastIoUnlockAll)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *); // r14
  void *v31; // rdi
  char v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  IRP *v36; // rdi
  struct _IO_STACK_LOCATION *v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  __int128 v39; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+18h] BYREF

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
      v8 = IopGetFileObjectExtension(v23, (int)v22 + 4, v22);
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
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&a2->Type, 0, 0, v15, &v38) )
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
      v21 = KeGetCurrentThread();
      ++v21->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v13, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
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
        v24 = a2->Flags;
        v39 = 0LL;
        if ( (v24 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v24 = a2->Flags;
        }
        v26 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v24 & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v9 = 1;
          while ( 1 )
          {
            v28 = KeGetCurrentThread();
            --v28->KernelApcDisable;
            v29 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&a2->Type, 0, 0, v29, &v41) )
              goto LABEL_46;
          }
          if ( v29 )
            *(_BYTE *)(v29 + 26) |= 1u;
          ObfReferenceObject(a2);
        }
LABEL_46:
        if ( !FastIoDispatch )
          goto LABEL_54;
        FastIoUnlockAll = (__int64 (__fastcall *)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_54;
        if ( (MmVerifierData & 0x10) != 0 )
          v31 = (void *)VfFastIoSnapState();
        else
          v31 = 0LL;
        v32 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, &v39, v26);
        if ( v31 )
          VfFastIoCheckState(v31);
        if ( !v32 )
        {
LABEL_54:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          IopResetEvent((__int64)a2, v33, v34, v35);
          v36 = (IRP *)IopAllocateIrpMustSucceed((__int64)v26, (unsigned __int8)v26->StackSize);
          v36->Tail.Overlay.OriginalFileObject = a2;
          v36->Tail.Overlay.Thread = KeGetCurrentThread();
          v36->UserIosb = &v36->IoStatus;
          v37 = v36->Tail.Overlay.CurrentStackLocation;
          v36->RequestorMode = 0;
          v36->UserEvent = &Event;
          v36->Flags = 4;
          v36->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v37[-1].MajorFunction = 785;
          v37[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v36);
          if ( IofCallDriver(v26, v36) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v9 == 1 )
          IopReleaseFileObjectLock((PADAPTER_OBJECT)a2);
      }
    }
  }
}
