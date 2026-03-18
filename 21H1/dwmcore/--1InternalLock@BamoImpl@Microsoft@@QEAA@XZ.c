/*
 * XREFs of ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800B2030
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800B1650 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800B1A60 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800B1C10 (-OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z.c)
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1800B1F80 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x18016AAC0 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x18016AC90 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x180182AB0 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x180182BA0 (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x180182DA0 (-OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x180182EC0 (-OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ @ 0x1801848F0 (-GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x180184A10 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180185800 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x180185950 (-OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ.c)
 *     ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x180185AB0 (-OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180185C00 (-OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180185F90 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801862F0 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOM.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801864F0 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180186760 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801869F0 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ @ 0x180186BD0 (-ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180186D90 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800B1A20 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800B20D8 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

void __fastcall Microsoft::BamoImpl::InternalLock::~InternalLock(Microsoft::BamoImpl::BamoImplObject **this)
{
  Microsoft::BamoImpl::BamoImplObject *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9

  v2 = *this;
  if ( v2 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v2 + 4));
    if ( *this )
      Microsoft::BamoImpl::BamoImplObject::Release(*this, v3, v4, v5);
  }
}
