/*
 * XREFs of sub_1C0016028 @ 0x1C0016028
 * Callers:
 *     sub_1C00136E0 @ 0x1C00136E0 (sub_1C00136E0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 */

__int64 __fastcall sub_1C0016028(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rbp
  NTSTATUS v5; // eax
  unsigned int v6; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v9; // rax

  v4 = sub_1C000F050((__int64)DeviceObject);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Irp, File, 1u, 0x20u);
  v6 = v5;
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v5;
    sub_1C003C33C(DeviceObject, Irp, 1326LL);
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  else
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(DeviceObject, Irp, sub_1C001C210, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v9 = Irp->Tail.Overlay.CurrentStackLocation;
      v9[-1].CompletionRoutine = sub_1C001C210;
      v9[-1].Context = DeviceObject;
      v9[-1].Control = -32;
    }
    PoCallDriver(*((PDEVICE_OBJECT *)v4 + 151), Irp);
    return 259LL;
  }
}
