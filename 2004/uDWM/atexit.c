/*
 * XREFs of atexit @ 0x18005378C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001170 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001180 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180001190 (_dynamic_initializer_for__ColorCache--_cachedColors__.c)
 *     _dynamic_initializer_for__ColorCache::_lock__ @ 0x1800011E0 (_dynamic_initializer_for__ColorCache--_lock__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x180001210 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180001240 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x180001260 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001290 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x180006C3C (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002E3D8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18002EFA4 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180030B38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180051838 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800813A8 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800C110C (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x1800C1420 (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800C1590 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     _onexit_0 @ 0x1800536F8 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
