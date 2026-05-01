/*
 * XREFs of ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1803DA094
 * Callers:
 *     ??R_lambda_280d05e5955ef1ef6fea1bffa32e8a2c_@@QEBAXAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B6154 (--R_lambda_280d05e5955ef1ef6fea1bffa32e8a2c_@@QEBAXAEBV-$com_ptr_t@UIApplicationView@@Uerr_excep.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1803DB29C (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A6BA8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x1803D9E98 (--$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(__int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewOperation,ApplicationViewOperation,>(a1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return a1;
}
