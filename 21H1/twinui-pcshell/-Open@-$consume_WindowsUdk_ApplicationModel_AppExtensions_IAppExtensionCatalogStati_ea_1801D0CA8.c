/*
 * XREFs of ?Open@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@AEBW4AppExtensionCatalogOptions@5673@@Z @ 0x1801D0CA8
 * Callers:
 *     ??$call@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@Z @ 0x1800663E0 (--$call@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::Open(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // rcx
  signed int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, *a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  *a2 = v8;
  return a2;
}
