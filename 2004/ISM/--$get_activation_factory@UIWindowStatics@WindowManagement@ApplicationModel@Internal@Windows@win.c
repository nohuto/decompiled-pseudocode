/*
 * XREFs of ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180033A78
 * Callers:
 *     ??$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@Z @ 0x1800338C0 (--$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18003CF1B (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18003D5EC (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD0AC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  int ActivationFactory_0; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::value,
                          &v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0(&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::value,
                            &v6);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult((unsigned int)ActivationFactory_0);
  *a1 = v6;
  return a1;
}
