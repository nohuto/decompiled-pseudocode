/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x140750C40
 * Callers:
 *     IopQueryDeviceResources @ 0x14075062C (IopQueryDeviceResources.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoGetAttachedDeviceReference @ 0x1402D1260 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1402F759C (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
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
