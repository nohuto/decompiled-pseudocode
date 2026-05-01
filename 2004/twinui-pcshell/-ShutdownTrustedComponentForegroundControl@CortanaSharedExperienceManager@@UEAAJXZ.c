/*
 * XREFs of ?ShutdownTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801BB7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShutdownTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  return 0LL;
}
