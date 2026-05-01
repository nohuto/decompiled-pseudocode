/*
 * XREFs of ??$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA?AUITileStoreFactory@Tiles@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C7D24
 * Callers:
 *     ??$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@Z @ 0x1800C7410 (--$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18008E406 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18008E746 (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180096214 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::Internal::Tiles::ITileStoreFactory>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::Internal::Tiles::ITileStoreFactory>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
