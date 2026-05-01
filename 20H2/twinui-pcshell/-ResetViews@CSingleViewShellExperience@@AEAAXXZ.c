/*
 * XREFs of ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180474BB4
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18008539C (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     wil::details::ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___::_ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___ @ 0x180473A00 (wil--details--ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___--_ScopeExitFn__lambda_4c55.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1804748CC (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180045B44 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSingleViewShellExperience::ResetViews(CSingleViewShellExperience *this)
{
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
}
