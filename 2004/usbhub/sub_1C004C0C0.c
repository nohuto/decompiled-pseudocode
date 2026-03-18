/*
 * XREFs of sub_1C004C0C0 @ 0x1C004C0C0
 * Callers:
 *     sub_1C004B8A0 @ 0x1C004B8A0 (sub_1C004B8A0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C004C0C0(
        PDEVICE_OBJECT DeviceObject,
        char *a2,
        ULONG_PTR a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  unsigned __int64 v5; // r14
  _DWORD *v9; // rdi
  __m128 *PoolWithTag; // rax
  __m128 *v11; // rbx
  PIRP Irp; // rax
  IRP *v13; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v16; // rax
  NTSTATUS Status; // edi
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  memset(&Event, 0, sizeof(Event));
  v9 = sub_1C000F050((__int64)DeviceObject);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v5, 0x42554855u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  sub_1C001D340(PoolWithTag, 0, (unsigned int)v5);
  Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v9 + 151) + 76LL), 0);
  v13 = Irp;
  if ( !Irp )
  {
    ExFreePoolWithTag(v11, 0);
    return 3221225626LL;
  }
  Irp->IoStatus.Status = -1073741637;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( IoSetCompletionRoutineEx(DeviceObject, v13, (PIO_COMPLETION_ROUTINE)sub_1C0029DF0, &Event, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C0029DF0;
    CurrentStackLocation[-1].Context = &Event;
    CurrentStackLocation[-1].Control = -32;
  }
  v16 = v13->Tail.Overlay.CurrentStackLocation;
  v16[-1].Parameters.CreatePipe.Parameters = 0LL;
  v16[-1].Parameters.WMI.ProviderId = a3;
  v16[-1].Parameters.QueryInterface.Version = a5;
  *(_WORD *)&v16[-1].MajorFunction = 2075;
  v16[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v11;
  v16[-1].Parameters.QueryInterface.Size = v5;
  Status = IofCallDriver(*((PDEVICE_OBJECT *)v9 + 151), v13);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = v13->IoStatus.Status;
  }
  if ( Status >= 0 )
  {
    if ( (unsigned int)v11->m128_i16[1] < a5 || (unsigned int)v11->m128_i16[0] < (unsigned __int16)v5 )
    {
      Status = -1073741811;
      sub_1C004A608((__int64)DeviceObject, 0, 0x19u, (char *)v11, 0x20u, -1073741811, 0, aBusifC, 162, 0);
      ((void (__fastcall *)(unsigned __int64))v11[1].m128_u64[1])(v11->m128_u64[1]);
    }
    else
    {
      sub_1C001D080(a2, (char *)v11, v5);
    }
  }
  IoFreeIrp(v13);
  ExFreePoolWithTag(v11, 0);
  sub_1C000FD80((__int64)DeviceObject, 8, 1197634409, 0LL, Status);
  return (unsigned int)Status;
}
