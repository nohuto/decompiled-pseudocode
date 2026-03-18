/*
 * XREFs of sub_1C002AA94 @ 0x1C002AA94
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

NTSTATUS __fastcall sub_1C002AA94(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp)
{
  PDEVICE_OBJECT *v6; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  struct _IO_STACK_LOCATION *v8; // rax

  v6 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)DeviceObject);
  sub_1C0011220((__int64)Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, sub_1C002D410, Context, 1u, 1u, 1u) < 0 )
  {
    v8 = Irp->Tail.Overlay.CurrentStackLocation;
    v8[-1].CompletionRoutine = sub_1C002D410;
    v8[-1].Context = Context;
    v8[-1].Control = -32;
  }
  return IofCallDriver(v6[152], Irp);
}
