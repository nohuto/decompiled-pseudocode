/*
 * XREFs of ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C00AAA84
 * Callers:
 *     NdisOpenAdapterEx @ 0x1C012E610 (NdisOpenAdapterEx.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01387F4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisCloseAdapter @ 0x1C013A8A0 (NdisCloseAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueueWorkitem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, (WORK_QUEUE_TYPE)40);
}
