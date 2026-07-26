/*
 * XREFs of ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C01054D0
 * Callers:
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C010656C (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C01069C8 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C0105344 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C0105528 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(
        NDIS_BIND_DRIVER_BASE *this,
        bool a2,
        enum CallRunMode a3)
{
  void (*v5)(struct NDIS_BIND_LINK_BASE *); // rdx

  this->DriverReady = a2;
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  NDIS_BIND_DRIVER_BASE::ForEachLink(
    this,
    (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_9fb80ce725682629beaa04a7bfe2f579_::_lambda_invoker_cdecl_);
  v5 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_;
  if ( a3 )
    v5 = lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_;
  NDIS_BIND_DRIVER_BASE::ForEachLink(this, v5);
  Ndis::BindEngine::EndBindOperation();
}
