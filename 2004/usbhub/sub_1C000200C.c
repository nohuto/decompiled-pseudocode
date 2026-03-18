/*
 * XREFs of sub_1C000200C @ 0x1C000200C
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 * Callees:
 *     sub_1C00021C0 @ 0x1C00021C0 (sub_1C00021C0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C000200C(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  DWORD LowPart; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  KIRQL v13; // dl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v16; // rax

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = sub_1C000F050(DeviceObject);
  v8 = Context[9];
  v9 = v7;
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1349283703, 0, (__int64)Irp);
  v10 = sub_1C000F050(DeviceObject);
  v11 = ((unsigned __int8)*(_DWORD *)(v10 + 828) + 1) & 7;
  *(_DWORD *)(v10 + 828) = v11;
  v11 *= 32LL;
  *(_DWORD *)(v11 + v10 + 284) = 103;
  *(_DWORD *)(v11 + v10 + 288) = *(_DWORD *)(v10 + 4172);
  *(_DWORD *)(v11 + v10 + 292) = 202;
  *(_DWORD *)(v11 + v10 + 296) = LowPart;
  *(_DWORD *)(v10 + 4172) = 202;
  v12 = sub_1C000F050(DeviceObject);
  sub_1C000F050(*(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 32) = 1734964085;
  v13 = *(_BYTE *)(v12 + 5064);
  *(_QWORD *)(v12 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 5056), v13);
  sub_1C00021C0(DeviceObject, v8);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, CompletionRoutine, Context, 1u, 1u, 1u) < 0 )
  {
    v16 = Irp->Tail.Overlay.CurrentStackLocation;
    v16[-1].CompletionRoutine = CompletionRoutine;
    v16[-1].Context = Context;
    v16[-1].Control = -32;
  }
  PoCallDriver(*(PDEVICE_OBJECT *)(v9 + 1208), Irp);
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1886156606, 0, 0LL);
  return 259LL;
}
