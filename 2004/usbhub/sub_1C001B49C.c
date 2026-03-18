/*
 * XREFs of sub_1C001B49C @ 0x1C001B49C
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C001B49C(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT *v7; // r15
  __int64 v8; // r9
  int v9; // r10d
  _DWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  _DWORD *v13; // rbx
  KIRQL v14; // dl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v17; // rax

  v3 = Context[9];
  v7 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((__int64)DeviceObject, 16, 1350005355, 0LL, (__int64)Irp);
  sub_1C000FD80((__int64)DeviceObject, v9, 1348824676, v8, (__int64)Irp);
  v10 = sub_1C000F050((__int64)DeviceObject);
  v11 = ((unsigned __int8)v10[207] + 1) & 7;
  v10[207] = v11;
  v11 *= 32LL;
  *(_DWORD *)((char *)v10 + v11 + 284) = 104;
  v12 = v10[1043];
  *(_DWORD *)((char *)v10 + v11 + 296) = 0;
  *(_DWORD *)((char *)v10 + v11 + 288) = v12;
  *(_DWORD *)((char *)v10 + v11 + 292) = 208;
  v10[1043] = 208;
  v13 = sub_1C000F050((__int64)DeviceObject);
  sub_1C000F050(*(_QWORD *)(v3 + 8));
  *(_DWORD *)(v3 + 32) = 1734964085;
  v14 = *((_BYTE *)v13 + 5064);
  *((_QWORD *)v13 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v13 + 632, v14);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, (PIO_COMPLETION_ROUTINE)sub_1C000E210, Context, 1u, 1u, 1u) < 0 )
  {
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C000E210;
    v17[-1].Context = Context;
    v17[-1].Control = -32;
  }
  PoCallDriver(v7[151], Irp);
  return 259LL;
}
