/*
 * XREFs of sub_1C003BD30 @ 0x1C003BD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

NTSTATUS __fastcall sub_1C003BD30(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  v3 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return PoCallDriver(v3[151], a2);
}
