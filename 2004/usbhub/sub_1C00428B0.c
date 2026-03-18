/*
 * XREFs of sub_1C00428B0 @ 0x1C00428B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

NTSTATUS __fastcall sub_1C00428B0(struct _DEVICE_OBJECT *Context, PIRP Irp)
{
  PDEVICE_OBJECT *v4; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  PDEVICE_OBJECT *v6; // rsi
  struct _IO_STACK_LOCATION *v7; // rax

  v4 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(Context, Irp, sub_1C0043960, Context, 1u, 0, 0) < 0 )
  {
    v7 = Irp->Tail.Overlay.CurrentStackLocation;
    v7[-1].CompletionRoutine = sub_1C0043960;
    v7[-1].Context = Context;
    v7[-1].Control = 64;
  }
  return IofCallDriver(v6[151], Irp);
}
