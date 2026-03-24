/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x140750A80
 * Callers:
 *     IopQueryDeviceResources @ 0x14075046C (IopQueryDeviceResources.c)
 * Callees:
 *     IoGetAttachedDeviceReference @ 0x14022CA10 (IoGetAttachedDeviceReference.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x14034B290 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     IovUtilWatermarkIrp @ 0x140361ED4 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x140361FF0 (IoAllocateIrp.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, _QWORD *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v10 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    if ( a2 )
    {
      Irp->IoStatus.Status = 0;
      *((_QWORD *)&v10 + 1) = a2;
      Irp->IoStatus.Information = a2;
    }
    else
    {
      LODWORD(v10) = -1073741637;
      Irp->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v10;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v8 = IofCallDriver(AttachedDeviceReference, Irp);
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v8 = v10;
    }
    *a3 = *((_QWORD *)&v10 + 1);
  }
  else
  {
    v8 = -1073741670;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)AttachedDeviceReference);
  return v8;
}
