/*
 * XREFs of ?StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D2A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::StaticExecuteWorkItems(
        PTP_CALLBACK_INSTANCE Instance,
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *Context,
        PTP_WORK Work)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::ExecuteWorkItems(Context);
}
