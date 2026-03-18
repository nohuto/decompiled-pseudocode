/*
 * XREFs of ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800B1FFC
 * Callers:
 *     ?Thunk_MarkProxyReady_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B16D0 (-Thunk_MarkProxyReady_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diagnos.c)
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800B177C (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800B1C10 (-OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z.c)
 *     ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800B1CC0 (-Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800B1DB0 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z @ 0x1800D4120 (-UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z.c)
 *     ?CreateCompObjectDiagnosticsRootProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18016A494 (-CreateCompObjectDiagnosticsRootProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBa.c)
 *     ?OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ @ 0x18016AA2C (-OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ.c)
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18016AB7C (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 *     ?SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z @ 0x18016B770 (-SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z.c)
 *     ?Thunk_Materialize_BamoCompObjectDiagnosticsProxy_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016BAC0 (-Thunk_Materialize_BamoCompObjectDiagnosticsProxy_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_R.c)
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180182520 (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprov.c)
 *     ?Thunk_Materialize_BamoDataProviderRegistrarProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801828B0 (-Thunk_Materialize_BamoDataProviderRegistrarProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@V.c)
 *     ?OnDisconnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x180182D10 (-OnDisconnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180183420 (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180197B4C (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180197C9C (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180197D5C (-SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180197E18 (-SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z @ 0x180197ED4 (-SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z.c)
 *     ?SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z @ 0x180197F64 (-SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z.c)
 *     ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x180198004 (-SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z.c)
 *     ?SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801980B0 (-SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?Thunk_SetBooleanValue_13@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198190 (-Thunk_SetBooleanValue_13@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 *     ?Thunk_SetMatrix3x2Value_39@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198280 (-Thunk_SetMatrix3x2Value_39@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?Thunk_SetMatrix4x4Value_45@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198320 (-Thunk_SetMatrix4x4Value_45@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?UpdateRestrictToProcessId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180198510 (-UpdateRestrictToProcessId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z @ 0x1801985F4 (-UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800B20D8 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

Microsoft::BamoImpl::DropAndReacquireLock *__fastcall Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
        Microsoft::BamoImpl::DropAndReacquireLock *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2)
{
  *(_QWORD *)this = 0LL;
  if ( !*((_DWORD *)a2 + 43) )
  {
    *(_QWORD *)this = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  return this;
}
