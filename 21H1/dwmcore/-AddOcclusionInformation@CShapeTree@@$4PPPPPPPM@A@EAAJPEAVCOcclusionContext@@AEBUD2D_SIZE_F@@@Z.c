/*
 * XREFs of ?AddOcclusionInformation@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EBF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShapeTree::AddOcclusionInformation(__int64 a1, struct dataprovider_AutoBamos::BamoPeer *a2)
{
  return dataprovider_AutoBamos::BamoConnection::OnPeerDisconnected(
           (dataprovider_AutoBamos::BamoConnection *)(a1 - *(int *)(a1 - 4)),
           a2);
}
