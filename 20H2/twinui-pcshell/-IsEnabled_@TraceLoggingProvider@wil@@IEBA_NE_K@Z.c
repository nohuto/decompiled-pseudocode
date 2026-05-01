/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180051D24
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800407AC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180051728 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 *     ?IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z @ 0x1800517B4 (-IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18005196C (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180051C70 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180052B30 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x180147F30 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 *     ?IsEnabled@AppCloseTelemetry@@SA_NE_K@Z @ 0x18014DB70 (-IsEnabled@AppCloseTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x18014DC04 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1801A7E44 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x1801D05D8 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z @ 0x1801F3840 (-IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z.c)
 *     ?IsEnabled@PenWorkspaceBrokerTelemetry@@SA_NE_K@Z @ 0x18021FC94 (-IsEnabled@PenWorkspaceBrokerTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@CommonPeopleTelemetry@@SA_NE_K@Z @ 0x18025F720 (-IsEnabled@CommonPeopleTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@TabViewManagerMeasures@@SA_NE_K@Z @ 0x180271200 (-IsEnabled@TabViewManagerMeasures@@SA_NE_K@Z.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180271294 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x18029C580 (-TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicat.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802CF23C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x180304378 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18035DB0C (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180386A54 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1803A5944 (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1803E112C (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1803F8CC8 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x18046B75C (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this, unsigned __int8 a2)
{
  _DWORD *v2; // rcx
  char v3; // r9

  v2 = (_DWORD *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && (unsigned int)a2 < *v2 )
    return tlgKeywordOn((__int64)v2, 0LL) != 0;
  return v3;
}
