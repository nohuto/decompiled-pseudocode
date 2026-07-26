/*
 * XREFs of ?ndisIovCancelIoctlNotification@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0076CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisIovCancelIoctlNotification(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  KIRQL CancelIrql; // cl

  CancelIrql = a2->CancelIrql;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IoReleaseCancelSpinLock(CancelIrql);
  IofCompleteRequest(a2, 0);
}
