/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x1C0061D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006110 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall NdisWdfCreateIrpHandler(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  return ndisCreateHandler(a1->DeviceObject, a1, a2);
}
