/*
 * XREFs of sub_1C0042DB0 @ 0x1C0042DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0043ED8 @ 0x1C0043ED8 (sub_1C0043ED8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0042DB0(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_OBJECT *v4; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v6; // rax
  NTSTATUS Status; // edi
  _DWORD *v8; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v4 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)DeviceObject);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x15u, (__int64)&unk_1C0062F40);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, (PIO_COMPLETION_ROUTINE)sub_1C0029DF0, &Event, 1u, 1u, 1u) < 0 )
  {
    v6 = Irp->Tail.Overlay.CurrentStackLocation;
    v6[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C0029DF0;
    v6[-1].Context = &Event;
    v6[-1].Control = -32;
  }
  sub_1C000FD80((__int64)DeviceObject, 2, 1937011287, 0LL, (__int64)Irp);
  if ( IofCallDriver(v4[151], Irp) == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = Irp->IoStatus.Status;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    sub_1C004A608((_DWORD)DeviceObject, 0, 57, 0, 0, Status, 0, (__int64)aPnpC, 3077, 0);
  }
  else
  {
    v8 = sub_1C000F050((__int64)DeviceObject);
    Status = sub_1C0043ED8(v8 + 346, 4LL);
  }
  v4[638] = (PDEVICE_OBJECT)MEMORY[0xFFFFF78000000014];
  sub_1C000FD80((__int64)DeviceObject, 2, 1398035028, 0LL, Status);
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
