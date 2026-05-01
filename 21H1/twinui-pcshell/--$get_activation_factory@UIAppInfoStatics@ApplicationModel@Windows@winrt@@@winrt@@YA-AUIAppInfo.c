/*
 * XREFs of ??$get_activation_factory@UIAppInfoStatics@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIAppInfoStatics@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x1801D6E38
 * Callers:
 *     ??$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?AUAppInfo@ApplicationModel@Windows@2@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@Z @ 0x1801D6C7C (--$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18008DFA6 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18008E2E6 (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::ApplicationModel::IAppInfoStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  signed int ActivationFactory_0; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::ApplicationModel::IAppInfoStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::ApplicationModel::IAppInfoStatics>::value,
                            (__int64)&v6);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
