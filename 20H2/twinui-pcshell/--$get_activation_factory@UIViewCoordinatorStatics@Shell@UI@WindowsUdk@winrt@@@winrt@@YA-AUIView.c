/*
 * XREFs of ??$get_activation_factory@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIViewCoordinatorStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180060B20
 * Callers:
 *     ??$call@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@Z @ 0x18006044C (--$call@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@-$factory_cache_entry@UViewCoordinator@S.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18008E406 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18008E746 (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  int ActivationFactory_0; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          &winrt::impl::guid_storage<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::value,
                          &v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0(&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            &winrt::impl::guid_storage<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::value,
                            &v6);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult((unsigned int)ActivationFactory_0);
  *a1 = v6;
  return a1;
}
