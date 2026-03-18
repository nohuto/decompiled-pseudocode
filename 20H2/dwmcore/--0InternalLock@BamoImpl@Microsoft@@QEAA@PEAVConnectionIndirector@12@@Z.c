/*
 * XREFs of ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800D2804
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800D1DA0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D2160 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800D2310 (-OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z.c)
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1800D2720 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180166160 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180166330 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x18017E260 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x18017E350 (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x18017E550 (-OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x18017E670 (-OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ @ 0x18017FF30 (-GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x180180050 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180180E40 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x180180F90 (-OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ.c)
 *     ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x1801810F0 (-OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180181240 (-OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x1801815D0 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180181930 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOM.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180181B30 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180181DA0 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180182030 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ @ 0x180182210 (-ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801823D0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800D28B4 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800D28E0 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 */

Microsoft::BamoImpl::InternalLock *__fastcall Microsoft::BamoImpl::InternalLock::InternalLock(
        Microsoft::BamoImpl::InternalLock *this,
        struct Microsoft::BamoImpl::ConnectionIndirector *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = 0LL;
  v3 = *((_QWORD *)a2 + 4);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3) )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(this, a2);
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 128));
    *(_DWORD *)(v3 + 168) = GetCurrentThreadId();
  }
  return this;
}
