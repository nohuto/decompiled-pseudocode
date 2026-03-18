/*
 * XREFs of USBD_SyncCompletionRoutine @ 0x1C008F640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_SyncCompletionRoutine(_DEVICE_OBJECT *DeviceObject, _IRP *Irp, _KEVENT *Context)
{
  KeSetEvent(Context, 0, 0);
  return 3221225494LL;
}
