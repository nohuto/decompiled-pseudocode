/*
 * XREFs of ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x18001F0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackManager::AddRef(__int64 a1)
{
  return CBackgroundSessionCallbacks::AddRef((CBackgroundSessionCallbacks *)(a1 - 16));
}
