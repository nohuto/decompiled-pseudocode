/*
 * XREFs of ?ShutdownTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180197CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShutdownTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  return 0LL;
}
