/*
 * XREFs of ?GetFromAppUserModelId@?$consume_Windows_ApplicationModel_IAppInfoStatics@UIAppInfoStatics@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUAppInfo@ApplicationModel@Windows@3@AEBUhstring@param@3@@Z @ 0x1801D71B0
 * Callers:
 *     ??$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?AUAppInfo@ApplicationModel@Windows@2@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@Z @ 0x1801D6C7C (--$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_IAppInfoStatics<winrt::Windows::ApplicationModel::IAppInfoStatics>::GetFromAppUserModelId(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
