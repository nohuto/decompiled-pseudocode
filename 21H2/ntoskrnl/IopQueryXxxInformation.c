/*
 * XREFs of IopQueryXxxInformation @ 0x14071E6BC
 * Callers:
 *     IopValidateJunctionTarget @ 0x14066119C (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x140661958 (IopGetNetworkOpenInformation.c)
 *     IoQueryVolumeInformation @ 0x1406E8DF0 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x1406E9D00 (IoQueryFileInformation.c)
 *     IopQueryNameInternal @ 0x14070F744 (IopQueryNameInternal.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     PfpPrefetchEntireDirectory @ 0x1407DE480 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x1407DF794 (PfSnGetSectionObject.c)
 *     MiAttemptPageFileExtension @ 0x14096EEE8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x1402A41A4 (IopWaitForSynchronousIo.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *Object,
        int a2,
        ULONG a3,
        char a4,
        struct _IRP *a5,
        _DWORD *a6,
        char a7)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v11; // di
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r12d
  struct _DEVICE_OBJECT *v20; // rsi
  __int64 Irp; // rax
  IRP *v22; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v25; // cf
  NTSTATUS v26; // eax
  unsigned int FinalStatus; // esi
  unsigned int v29; // edi
  __int128 v30; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  ULONG v33; // [rsp+B0h] [rbp+50h]

  v33 = a3;
  memset(&Event, 0, sizeof(Event));
  v30 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = (Object->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
    LOBYTE(v32) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
    {
      LOBYTE(v14) = v11;
      LOBYTE(v13) = a4;
      v29 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&Object->Type, v13, v14, v12, &v32);
      if ( (_BYTE)v32 )
      {
        ObfDereferenceObject(Object);
        return v29;
      }
    }
    else
    {
      if ( v12 )
        *(_BYTE *)(v12 + 18) = 1;
      ObfReferenceObject(Object);
    }
    KeResetEvent(&Object->Event);
    v15 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v15 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v19 = 71;
  if ( a2 != 75 )
    v19 = a2;
  v20 = RelatedDeviceObject;
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  LOBYTE(v18) = v15 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v17, v18);
  v22 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v15 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v22->UserEvent = p_Event;
    v22->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v22->Tail.Overlay.CurrentStackLocation;
    v25 = a7 != 0;
    a7 = -a7;
    v22->UserIosb = (PIO_STATUS_BLOCK)&v30;
    CurrentStackLocation[-1].FileObject = Object;
    CurrentStackLocation[-1].MajorFunction = v25 ? 5 : 10;
    v22->Flags |= 0x10u;
    v22->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = v33;
    CurrentStackLocation[-1].Parameters.Create.Options = v19;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v22);
    v26 = IofCallDriver(v20, v22);
    FinalStatus = v26;
    if ( v15 )
    {
      if ( v26 == 259 )
      {
        IopWaitForSynchronousIo(v22, (unsigned int *)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
    }
    else if ( v26 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v30;
    }
    *a6 = DWORD2(v30);
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
