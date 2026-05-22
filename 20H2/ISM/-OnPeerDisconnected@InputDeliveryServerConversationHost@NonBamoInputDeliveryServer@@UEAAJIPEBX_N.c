/*
 * XREFs of ?OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x180103540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NonBamoInputDeliveryServer::InputDeliveryServerConversationHost::OnPeerDisconnected(
        NonBamoInputDeliveryServer **this,
        int a2,
        const void *a3)
{
  return NonBamoInputDeliveryServer::OnAppThreadDisconnected(this[2], a2);
}
