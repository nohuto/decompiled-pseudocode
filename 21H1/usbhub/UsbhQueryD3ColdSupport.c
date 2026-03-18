/*
 * XREFs of UsbhQueryD3ColdSupport @ 0x1C0057F08
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0055820 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

void __fastcall UsbhQueryD3ColdSupport(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2)
{
  _NAMED_PIPE_CREATE_PARAMETERS *v4; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *v5; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v7; // rsi
  PIRP Irp; // rax
  IRP *v9; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax
  NTSTATUS Status; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v14[9]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int8 v15; // [rsp+E8h] [rbp+6Fh] BYREF

  memset(&Event, 0, sizeof(Event));
  v4 = (_NAMED_PIPE_CREATE_PARAMETERS *)PdoExt((__int64)a2);
  v15 = 0;
  v5 = v4;
  memset(v14, 0, sizeof(v14));
  AttachedDeviceReference = IoGetAttachedDeviceReference(a2);
  v7 = AttachedDeviceReference;
  if ( AttachedDeviceReference != a2 )
  {
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v9 = Irp;
    if ( Irp )
    {
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      if ( IoSetCompletionRoutineEx(
             DeviceObject,
             v9,
             (PIO_COMPLETION_ROUTINE)UsbhDeferIrpCompletion,
             &Event,
             1u,
             1u,
             1u) < 0 )
      {
        CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
        CurrentStackLocation[-1].Context = &Event;
        CurrentStackLocation[-1].Control = -32;
      }
      v11 = v9->Tail.Overlay.CurrentStackLocation;
      v11[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)v14;
      v11[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_D3COLD_SUPPORT_INTERFACE;
      *(_WORD *)&v11[-1].MajorFunction = 2075;
      v11[-1].Parameters.CreatePipe.Parameters = v5;
      v11[-1].Parameters.Create.Options = 65608;
      Status = IofCallDriver(v7, v9);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = v9->IoStatus.Status;
      }
      if ( Status >= 0 )
      {
        if ( v14[6] && ((int (__fastcall *)(_QWORD, unsigned __int8 *))v14[6])(v14[1], &v15) >= 0 && v15 )
          v5[35].OutboundQuota |= 0x800000u;
        if ( v14[3] )
          ((void (__fastcall *)(_QWORD))v14[3])(v14[1]);
      }
      IoFreeIrp(v9);
    }
  }
  ObfDereferenceObject(v7);
  Log((__int64)DeviceObject, 256, 1197634409, (__int64)a2, v15);
}
