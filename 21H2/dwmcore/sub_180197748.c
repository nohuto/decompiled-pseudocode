/*
 * XREFs of sub_180197748 @ 0x180197748
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_180197748(Microsoft::BamoImpl::ConnectionIndirector *a1, unsigned int a2, const void *a3, bool a4)
{
  char v4; // of

  if ( !v4 )
    JUMPOUT(0x18019778CLL);
  return Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected(a1, a2, a3, a4);
}
