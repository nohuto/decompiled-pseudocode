/*
 * XREFs of ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x1800BCBAC
 * Callers:
 *     ??$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@Z @ 0x1800BC6D4 (--$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD00C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 112LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
