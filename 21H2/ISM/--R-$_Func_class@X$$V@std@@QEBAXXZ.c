/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800757C0
 * Callers:
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180038994 (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x180074B70 (_lambda_3b64102ac84e73bf6a3808442553243e_--_lambda_invoker_cdecl_.c)
 *     ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180142A70 (-DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV-$function@$$A6AXAEAV-$ComPtr@VDataProvider.c)
 *     wil::details::ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___::_ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___ @ 0x1801577B4 (wil--details--ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___--_ScopeExitFn__lambda_4eff.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18015A248 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ @ 0x180161804 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180164D98 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?WorkCallback@ChainedThreadpoolWorker@ThreadHelpers@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180166DF0 (-WorkCallback@ChainedThreadpoolWorker@ThreadHelpers@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 *     ?_lambda_invoker_cdecl_@_lambda_730587c1c62906cad33c140b5ea68fdf_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180168330 (-_lambda_invoker_cdecl_@_lambda_730587c1c62906cad33c140b5ea68fdf_@@CAXPEAU_TP_CALLBACK_INSTANCE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
