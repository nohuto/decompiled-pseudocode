/*
 * XREFs of atexit @ 0x14001D65C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1400010C0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1400010D0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010E0 (_dynamic_initializer_for___AtlModule__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x140001100 (_dynamic_initializer_for__g_CpuManager__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x140001110 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001120 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140001150 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     _dynamic_initializer_for__SubmixList__ @ 0x140001160 (_dynamic_initializer_for__SubmixList__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001170 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     _dynamic_initializer_for__g_AudioHistoryManager__ @ 0x1400011A0 (_dynamic_initializer_for__g_AudioHistoryManager__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x1400011B0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x1400011D0 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140001210 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001230 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001250 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140001270 (_dynamic_initializer_for__gEventList__.c)
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001280 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1400012A0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x1400012F0 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140001310 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053BC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005970 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140008200 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     pre_c_initialization @ 0x14001CD70 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x14001E6B0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x14001D604 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
