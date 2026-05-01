/*
 * XREFs of ??$MakeAndInitializeOrThrow@VTitleBarController@@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@wil@@YA?AV?$ComPtr@VTitleBarController@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@0@@Z @ 0x180284898
 * Callers:
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x180276AB4 (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTitleBarController@@V1@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Details@WRL@Microsoft@@YAJPEAPEAVTitleBarController@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180284780 (--$MakeAndInitialize@VTitleBarController@@V1@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_polic.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1802871F8 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
TitleBarController **__fastcall wil::MakeAndInitializeOrThrow<TitleBarController,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
        TitleBarController **a1,
        __int64 *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(a1);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TitleBarController,TitleBarController,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
         a1,
         a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return a1;
}
