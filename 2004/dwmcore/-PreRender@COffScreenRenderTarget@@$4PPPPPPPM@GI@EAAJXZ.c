/*
 * XREFs of ?PreRender@COffScreenRenderTarget@@$4PPPPPPPM@GI@EAAJXZ @ 0x1800EF730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::PreRender(__int64 a1, struct dataprovider_AutoBamos::BamoPeer *a2)
{
  return dataprovider_AutoBamos::BamoConnection::OnPeerDisconnected(
           (dataprovider_AutoBamos::BamoConnection *)(a1 - *(int *)(a1 - 4) - 104),
           a2);
}
