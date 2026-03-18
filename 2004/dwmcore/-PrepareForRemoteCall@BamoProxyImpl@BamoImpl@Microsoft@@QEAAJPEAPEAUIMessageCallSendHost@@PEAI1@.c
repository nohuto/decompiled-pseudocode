/*
 * XREFs of ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180181DF0
 * Callers:
 *     ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180181CEC (-OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180182ADC (-OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x180182C20 (-OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ.c)
 *     ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x180182D90 (-OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180182EDC (-OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180183624 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReaso.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180183814 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPR.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180183A78 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRE.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180183D14 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRE.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ @ 0x180183EA0 (-ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800D2B70 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180181C44 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v7; // r8
  _DWORD *v8; // r9
  __int64 result; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  *a4 = 0;
  *a3 = 0;
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) && *((_BYTE *)this + 31) == v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16E,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoProxy.inl",
      (const char *)0x87B20805LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoProxy.inl",
      (const char *)0x87B20805LL);
    return 2276591621LL;
  }
  else
  {
    v10 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)this + 2);
    *v8 = *((_DWORD *)this + 6);
    *a2 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v10);
    result = 0LL;
    *a3 = *(_DWORD *)(*((_QWORD *)this + 2) + 36LL);
  }
  return result;
}
