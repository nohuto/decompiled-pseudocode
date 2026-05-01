/*
 * XREFs of ??$wait_for_completion@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@V?$ComPtr@UITitleBarFactory@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITitleBarFactory@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180285264
 * Callers:
 *     _lambda_1f4f68820907753b977dd0769491499a_::operator() @ 0x180285D34 (_lambda_1f4f68820907753b977dd0769491499a_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180284D3C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::wait_for_completion<Windows::Internal::Shell::Experience::TitleBarFactory *,Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::ITitleBarFactory>>(
        _QWORD *a1,
        void (__fastcall ***a2)(__int64, GUID *, __int64 *),
        int a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *>(
         a2,
         (DWORD)a2,
         a3);
  if ( v5 < 0
    || (v5 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), _QWORD *))(*a2)[8])(a2, a1),
        v5 < 0) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1594LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  return a1;
}
