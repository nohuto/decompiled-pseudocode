/*
 * XREFs of sub_1C0043AE0 @ 0x1C0043AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C0043C9C @ 0x1C0043C9C (sub_1C0043C9C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0043AE0(PDEVICE_OBJECT DeviceObject, PIRP Irp, struct _DEVICE_OBJECT *Context)
{
  __int64 v5; // rdx
  _DWORD *v6; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rax
  IRP *v9; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  v6 = sub_1C000F050((__int64)Context);
  v7 = *(_QWORD *)(*((_QWORD *)v6 + 659) + 184LL);
  if ( LODWORD(Irp->IoStatus.Information) == 1 )
  {
    sub_1C0043C9C(Context);
  }
  else
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E62C((__int64)::DeviceObject->DeviceExtension, v5, 3u, 0x17u, (__int64)&unk_1C0062F40, Context);
    if ( v6[702] == 2 )
    {
      if ( KeGetCurrentIrql() )
      {
        sub_1C004A608((_DWORD)Context, 0, 62, 0, 0, -1073741823, -1073704960, (__int64)aPnpC, 3719, 1);
      }
      else
      {
        v8 = sub_1C000F050((__int64)Context);
        sub_1C001A550((__int64)Context, (__int64)(v8 + 566), 3);
      }
    }
  }
  IoReuseIrp(*((PIRP *)v6 + 659), 0);
  *(_BYTE *)(v7 - 72) = 15;
  *(_DWORD *)(v7 - 48) = 2232235;
  *(_DWORD *)(v7 - 56) = 0;
  *(_DWORD *)(v7 - 64) = 0;
  *(_QWORD *)(*((_QWORD *)v6 + 659) + 56LL) = 0LL;
  v9 = (IRP *)*((_QWORD *)v6 + 659);
  if ( IoSetCompletionRoutineEx(Context, v9, sub_1C0043AE0, Context, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = sub_1C0043AE0;
    CurrentStackLocation[-1].Context = Context;
    CurrentStackLocation[-1].Control = -32;
  }
  IofCallDriver(*((PDEVICE_OBJECT *)v6 + 151), *((PIRP *)v6 + 659));
  return 3221225494LL;
}
