/*
 * XREFs of NdisWdfMiniportStarted @ 0x1C00620B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FB824 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

void __fastcall NdisWdfMiniportStarted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisMSetMiniportReadyForBinding(a1, 1, Reason_MiniportDeviceNotStarted, RunSynchronous);
}
