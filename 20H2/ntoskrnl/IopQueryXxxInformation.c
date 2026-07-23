/*
 * XREFs of IopQueryXxxInformation @ 0x140634898
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x140633338 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x140634038 (PfSnGetSectionObject.c)
 *     IopQueryNameInternal @ 0x1406361C4 (IopQueryNameInternal.c)
 *     IoQueryVolumeInformation @ 0x1406E1D40 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x1406E2780 (IoQueryFileInformation.c)
 *     IopValidateJunctionTarget @ 0x140895924 (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x1408972C4 (IopGetNetworkOpenInformation.c)
 *     MiAttemptPageFileExtension @ 0x1408D2B44 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x14020AD88 (IopWaitForSynchronousIo.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        PADAPTER_OBJECT DmaAdapter,
        int a2,
        ULONG a3,
        char a4,
        struct _IRP *a5,
        _DWORD *a6,
        char a7)
{
  char v10; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r12d
  struct _DEVICE_OBJECT *v15; // rsi
  __int64 Irp; // rax
  IRP *v17; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v20; // cf
  NTSTATUS v21; // eax
  unsigned int DmaOperations; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // rax
  unsigned int v26; // edi
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+38h]
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  ULONG v31; // [rsp+B0h] [rbp+50h]

  v31 = a3;
  memset(&Event, 0, sizeof(Event));
  v27 = 0LL;
  ObfReferenceObject(DmaAdapter);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v25 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    LOBYTE(v30) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&DmaAdapter[7].Size + 1), 1) )
    {
      v26 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&v30);
      if ( (_BYTE)v30 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return v26;
      }
    }
    else
    {
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      ObfReferenceObject(DmaAdapter);
    }
    KeResetEvent((PRKEVENT)&DmaAdapter[9].DmaOperations);
    v10 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)DmaAdapter);
  v14 = 71;
  v15 = RelatedDeviceObject;
  if ( a2 != 75 )
    v14 = a2;
  LOBYTE(v13) = v10 ^ 1;
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v12, v13, retaddr);
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = DmaAdapter;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v10 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v17->UserEvent = p_Event;
    v17->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
    v20 = a7 != 0;
    a7 = -a7;
    v17->UserIosb = (PIO_STATUS_BLOCK)&v27;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)DmaAdapter;
    CurrentStackLocation[-1].MajorFunction = v20 ? 5 : 10;
    v17->Flags |= 0x10u;
    v17->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = v31;
    CurrentStackLocation[-1].Parameters.Create.Options = v14;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v17);
    v21 = IofCallDriver(v15, v17);
    DmaOperations = v21;
    if ( v10 )
    {
      if ( v21 == 259 )
      {
        IopWaitForSynchronousIo(v17, (unsigned int *)&DmaAdapter->Version, a4);
        DmaOperations = (unsigned int)DmaAdapter[3].DmaOperations;
      }
      IopReleaseFileObjectLock(DmaAdapter);
    }
    else if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DmaOperations = v27;
    }
    *a6 = DWORD2(v27);
    return DmaOperations;
  }
  else
  {
    IopAllocateIrpCleanup(DmaAdapter, 0LL);
    return 3221225626LL;
  }
}
