/*
 * XREFs of ?OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x18011A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x180109FD0 (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 */

__int64 __fastcall MPCManagerClientConnection::OnPeerDisconnected(
        RTL_SRWLOCK **this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2)
{
  MPCManagerClient::OnServerConnectionChanged(this[24]);
  return 0LL;
}
