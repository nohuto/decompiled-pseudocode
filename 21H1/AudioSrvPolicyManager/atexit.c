/*
 * XREFs of atexit @ 0x18003F638
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180002050 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180002070 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180002130 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800021C0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x180002270 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180002290 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800022B0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x1800022E0 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x180002330 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180002370 (_dynamic_initializer_for__TsSessionList__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x1800023D0 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180002420 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180002440 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180002470 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x180009AD4 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18003AE40 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18003F750 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x18003F5E0 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
