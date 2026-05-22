/*
 * XREFs of ?GetTrustLevel@MPCManagerClientFactory@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18004B7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClientFactory::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetTrustLevel(
           (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 40),
           a2);
}
