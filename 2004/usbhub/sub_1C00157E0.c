/*
 * XREFs of sub_1C00157E0 @ 0x1C00157E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 */

__int64 __fastcall sub_1C00157E0(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  _DWORD *v4; // rdi
  NTSTATUS v5; // eax
  unsigned int v6; // ebp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  struct _IO_STACK_LOCATION *v10; // rax

  sub_1C000FD80((__int64)DeviceObject, 16, 1716999979, 0LL, (__int64)Tag);
  v4 = sub_1C000F050((__int64)DeviceObject);
  sub_1C0012400((__int64)DeviceObject, (__int64)Tag, 0LL, &stru_1C0061E48);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Tag, File, 1u, 0x20u);
  v6 = v5;
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Tag->IoStatus.Status = v5;
    sub_1C000FD80((__int64)DeviceObject, 16, 1717000050, v5, (__int64)Tag);
    sub_1C0012400((__int64)DeviceObject, (__int64)Tag, 0LL, &stru_1C0061E30);
    IofCompleteRequest(Tag, 0);
    return v6;
  }
  else
  {
    *((_QWORD *)v4 + 611) = Tag;
    if ( _InterlockedCompareExchange(v4 + 1221, 4, 2) == 3 )
    {
      v4[1221] = 7;
      sub_1C000FD80((__int64)DeviceObject, 16, 1716999985, 0LL, (__int64)Tag);
      sub_1C0012400((__int64)DeviceObject, (__int64)Tag, 0LL, &stru_1C0061E30);
      Tag->IoStatus.Status = -1073741536;
      IofCompleteRequest(Tag, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Tag, 0x20u);
      return 3221225760LL;
    }
    else
    {
      Tag->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(DeviceObject, Tag, (PIO_COMPLETION_ROUTINE)sub_1C00153F0, 0LL, 1u, 1u, 1u) < 0 )
      {
        v10 = Tag->Tail.Overlay.CurrentStackLocation;
        v10[-1].Context = 0LL;
        v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C00153F0;
        v10[-1].Control = -32;
      }
      sub_1C000FD80((__int64)DeviceObject, 16, 1716999986, 0LL, (__int64)Tag);
      v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)v4 + 151);
      v4[640] &= ~0x20000u;
      PoCallDriver(v8, Tag);
      return 259LL;
    }
  }
}
