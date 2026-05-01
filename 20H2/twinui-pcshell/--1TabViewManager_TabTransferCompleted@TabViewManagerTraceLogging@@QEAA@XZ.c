/*
 * XREFs of ??1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028D250
 * Callers:
 *     _TabTransferManager::PerformComplete_::_1_::dtor$0 @ 0x18028F86F (_TabTransferManager--PerformComplete_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026DB18 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::~TabViewManager_TabTransferCompleted(
        TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
