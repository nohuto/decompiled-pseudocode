/*
 * XREFs of IopQueryXxxInformation @ 0x14063AACC
 * Callers:
 *     IopQueryNameInternal @ 0x1405DABE4 (IopQueryNameInternal.c)
 *     PfSnGetSectionObject @ 0x140639F58 (PfSnGetSectionObject.c)
 *     PfpPrefetchEntireDirectory @ 0x1406C3C78 (PfpPrefetchEntireDirectory.c)
 *     IoQueryVolumeInformation @ 0x1406EBAF0 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x1406EC9F0 (IoQueryFileInformation.c)
 *     IopValidateJunctionTarget @ 0x14088EB14 (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x140896B90 (IopGetNetworkOpenInformation.c)
 *     MiAttemptPageFileExtension @ 0x1408CB9B4 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopWaitForSynchronousIo @ 0x14030050C (IopWaitForSynchronousIo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
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
  int v11; // r12d
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  IRP *v16; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v19; // cf
  NTSTATUS v20; // eax
  unsigned int DmaOperations; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rax
  unsigned int v25; // edi
  __int128 v26; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  ULONG v29; // [rsp+B0h] [rbp+50h]

  v29 = a3;
  memset(&Event, 0, sizeof(Event));
  v26 = 0LL;
  ObfReferenceObject(DmaAdapter);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v24 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    LOBYTE(v28) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&DmaAdapter[7].Size + 1), 1) )
    {
      v25 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&v28);
      if ( (_BYTE)v28 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return v25;
      }
    }
    else
    {
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
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
  v11 = 71;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)DmaAdapter);
  if ( a2 != 75 )
    v11 = a2;
  Irp = IopAllocateIrpExReturn();
  v16 = (IRP *)Irp;
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
    v16->UserEvent = p_Event;
    v16->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
    v19 = a7 != 0;
    a7 = -a7;
    v16->UserIosb = (PIO_STATUS_BLOCK)&v26;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)DmaAdapter;
    CurrentStackLocation[-1].MajorFunction = v19 ? 5 : 10;
    v16->Flags |= 0x10u;
    v16->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = v29;
    CurrentStackLocation[-1].Parameters.Create.Options = v11;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v16, v14, v15);
    v20 = IofCallDriver(RelatedDeviceObject, v16);
    DmaOperations = v20;
    if ( v10 )
    {
      if ( v20 == 259 )
      {
        IopWaitForSynchronousIo(v16, (unsigned int *)&DmaAdapter->Version, a4);
        DmaOperations = (unsigned int)DmaAdapter[3].DmaOperations;
      }
      IopReleaseFileObjectLock(DmaAdapter);
    }
    else if ( v20 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DmaOperations = v26;
    }
    *a6 = DWORD2(v26);
    return DmaOperations;
  }
  else
  {
    IopAllocateIrpCleanup(DmaAdapter, 0LL);
    return 3221225626LL;
  }
}
