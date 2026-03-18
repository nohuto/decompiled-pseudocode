/*
 * XREFs of ?OnSceneLost@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801ED2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::OnSceneLost(
        CSceneSurfaceMaterialInput *this,
        struct ISpectreRenderer *a2)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
  return 0LL;
}
