/*
 * XREFs of ?ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0012A30
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x1C0010B00 (ndisWMIDispatch.c)
 */

NTSTATUS __fastcall ndisWMIIrpDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisWMIDispatch(a1, (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension, a2);
}
