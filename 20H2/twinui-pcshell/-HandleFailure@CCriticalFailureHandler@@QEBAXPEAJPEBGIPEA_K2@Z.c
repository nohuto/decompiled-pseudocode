/*
 * XREFs of ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18003B91C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     _lambda_86e5fad454e1f42def22d3aa1faf1060_::operator() @ 0x180093A30 (_lambda_86e5fad454e1f42def22d3aa1faf1060_--operator().c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180150590 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801523E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x180154B98 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180157F50 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180174900 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1801770EC (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18022A428 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18022BF20 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1802A5974 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802A75F0 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802AD8C0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1802B80DC (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802B85B0 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802BA480 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$0 @ 0x1802D8681 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$0.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1802E4B08 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18042F6C8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804306C0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180435530 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180051D24 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x18046C110 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x18046C260 (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x18046C468 (-_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z.c)
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x18046C570 (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 *     ?get@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@P6AXXZ@Z @ 0x18046C7A4 (-get@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@.c)
 */

void __fastcall CCriticalFailureHandler::HandleFailure(
        CCriticalFailureHandler *this,
        int *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  bool v7; // di
  __int64 v8; // rcx
  wil::TraceLoggingProvider *v9; // rax
  CCriticalFailureHandler *v10; // rcx
  CCriticalFailureTelemetry *v11; // rcx
  CCriticalFailureHandler *v12; // rcx

  v7 = CCriticalFailureHandler::_MatchesPreviousFailure(this, *a2, a3, a4, 0LL, 0LL);
  v9 = (wil::TraceLoggingProvider *)wil::details::static_lazy<CCriticalFailureTelemetry>::get(
                                      v8,
                                      _lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v9, 0) )
  {
    wil::details::static_lazy<CCriticalFailureTelemetry>::get(
      v10,
      _lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
    CCriticalFailureTelemetry::ReportFailure_(v11, *a2, a3, a4, 0LL, 0LL, v7);
  }
  if ( !v7 || IsDebuggerPresent() )
  {
    CCriticalFailureHandler::_RecordFailure(v10, *a2, a3, a4, 0LL, 0LL);
    CCriticalFailureHandler::_RaiseFailFastException(v12, *a2, 0LL, 0LL);
  }
  *a2 = -2144862209;
}
