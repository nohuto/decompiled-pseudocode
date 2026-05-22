/*
 * XREFs of ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180033B54
 * Callers:
 *     ??$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@Z @ 0x1800337A0 (--$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ??$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@Z @ 0x1800BC774 (--$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18003CF1B (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18003D5EC (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD0AC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  int ActivationFactory_0; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::value,
                          &v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0(&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::value,
                            &v6);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult((unsigned int)ActivationFactory_0);
  *a1 = v6;
  return a1;
}
