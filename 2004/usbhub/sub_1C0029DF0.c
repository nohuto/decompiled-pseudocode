/*
 * XREFs of sub_1C0029DF0 @ 0x1C0029DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0029DF0(PDEVICE_OBJECT DeviceObject, PIRP Irp, struct _KEVENT *Context)
{
  KeSetEvent(Context, 1, 0);
  return 3221225494LL;
}
