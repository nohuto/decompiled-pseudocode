/*
 * XREFs of DpiFdoDispatchPower @ 0x1C0172070
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoHandleSystemPower @ 0x1C017209C (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C0172950 (DpiFdoHandleDevicePower.c)
 */

__int64 __fastcall DpiFdoDispatchPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return DpiFdoHandleDevicePower(a1, a2);
  else
    return DpiFdoHandleSystemPower(a1, a2);
}
