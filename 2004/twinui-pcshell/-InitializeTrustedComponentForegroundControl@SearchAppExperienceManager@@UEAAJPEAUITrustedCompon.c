/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@SearchAppExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x1801B8FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::InitializeTrustedComponentForegroundControl(
        SearchAppExperienceManager *this,
        struct ITrustedComponentForegroundControl *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 49, (__int64)a2);
  return 0LL;
}
