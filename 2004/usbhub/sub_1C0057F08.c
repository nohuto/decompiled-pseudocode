/*
 * XREFs of sub_1C0057F08 @ 0x1C0057F08
 * Callers:
 *     sub_1C0055820 @ 0x1C0055820 (sub_1C0055820.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

void __fastcall sub_1C0057F08(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2)
{
  struct _NAMED_PIPE_CREATE_PARAMETERS *v4; // rax
  struct _NAMED_PIPE_CREATE_PARAMETERS *v5; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v7; // rsi
  PIRP Irp; // rax
  IRP *v9; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v11; // rax
  NTSTATUS Status; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  __m128 v14; // [rsp+60h] [rbp-19h] BYREF
  void (__fastcall *v15)(unsigned __int64); // [rsp+78h] [rbp-1h]
  int (__fastcall *v16)(unsigned __int64, unsigned __int8 *); // [rsp+90h] [rbp+17h]
  unsigned __int8 v17; // [rsp+E8h] [rbp+6Fh] BYREF

  memset(&Event, 0, sizeof(Event));
  v4 = (struct _NAMED_PIPE_CREATE_PARAMETERS *)sub_1C0011220((__int64)a2);
  v17 = 0;
  v5 = v4;
  sub_1C001D340(&v14, 0, 0x48uLL);
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
      if ( IoSetCompletionRoutineEx(DeviceObject, v9, (PIO_COMPLETION_ROUTINE)sub_1C0029DF0, &Event, 1u, 1u, 1u) < 0 )
      {
        CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C0029DF0;
        CurrentStackLocation[-1].Context = &Event;
        CurrentStackLocation[-1].Control = -32;
      }
      v11 = v9->Tail.Overlay.CurrentStackLocation;
      v11[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&v14;
      v11[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&unk_1C0062730;
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
        if ( v16 && v16(v14.m128_u64[1], &v17) >= 0 && v17 )
          v5[35].OutboundQuota |= 0x800000u;
        if ( v15 )
          v15(v14.m128_u64[1]);
      }
      IoFreeIrp(v9);
    }
  }
  ObfDereferenceObject(v7);
  sub_1C000FD80((__int64)DeviceObject, 256, 1197634409, (__int64)a2, v17);
}
