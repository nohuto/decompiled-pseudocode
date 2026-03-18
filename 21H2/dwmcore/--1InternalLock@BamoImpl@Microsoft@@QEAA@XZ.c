/*
 * XREFs of ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28
 * Callers:
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180026380 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180026484 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?OnItemMessage@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIPEBX0I@Z @ 0x180026890 (-OnItemMessage@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIPEBX0I@Z.c)
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800EFE00 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 *     ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800F8330 (-OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x180196BA0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1801974E0 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180197750 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x1801BA3A0 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x1801BA490 (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x1801BA750 (-FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1801BA8C0 (-OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1801BA9F0 (-OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ @ 0x1801BC9D0 (-GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x1801BCBC0 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 *     ?GetNumberOfReaders@BamoDataProviderProxy@@UEAAIXZ @ 0x1801BDD30 (-GetNumberOfReaders@BamoDataProviderProxy@@UEAAIXZ.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x1801BDD70 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x1801BDEE0 (-OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ.c)
 *     ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x1801BE060 (-OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x1801BE1D0 (-OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x1801BE680 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801BE960 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOM.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801BEBA0 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801BEE50 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801BF150 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ @ 0x1801BF370 (-ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801BF560 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180026AB4 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180027F40 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall Microsoft::BamoImpl::InternalLock::~InternalLock(Microsoft::BamoImpl::BamoImplObject **this)
{
  Microsoft::BamoImpl::BamoImplObject *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v2 + 4));
    if ( *this )
      Microsoft::BamoImpl::BamoImplObject::Release(*this);
  }
}
