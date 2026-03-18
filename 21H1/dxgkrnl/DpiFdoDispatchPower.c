/*
 * XREFs of DpiFdoDispatchPower @ 0x1C0162620
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoHandleSystemPower @ 0x1C016264C (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C0162F00 (DpiFdoHandleDevicePower.c)
 */

__int64 __fastcall DpiFdoDispatchPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return DpiFdoHandleDevicePower(a1, a2);
  else
    return DpiFdoHandleSystemPower(a1, a2);
}
