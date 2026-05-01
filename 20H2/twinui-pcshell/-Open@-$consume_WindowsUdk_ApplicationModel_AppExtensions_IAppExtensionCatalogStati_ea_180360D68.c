/*
 * XREFs of ?Open@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x180360D68
 * Callers:
 *     ??$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@Z @ 0x180358D68 (--$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::Open(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 72LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
