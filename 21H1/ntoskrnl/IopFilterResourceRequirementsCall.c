/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x140739430
 * Callers:
 *     IopQueryDeviceResources @ 0x140738E1C (IopQueryDeviceResources.c)
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x14027D520 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1402E0D8C (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1402E0EB0 (IoAllocateIrp.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, _QWORD *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    if ( a2 )
    {
      Irp->IoStatus.Status = 0;
      *((_QWORD *)&v12 + 1) = a2;
      Irp->IoStatus.Information = a2;
    }
    else
    {
      LODWORD(v12) = -1073741637;
      Irp->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v12;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp, v7, v8);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v10 = IofCallDriver(AttachedDeviceReference, Irp);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v12;
    }
    *a3 = *((_QWORD *)&v12 + 1);
  }
  else
  {
    v10 = -1073741670;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)AttachedDeviceReference);
  return v10;
}
