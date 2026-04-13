/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x10001FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__()
{
  wil::details::g_pfnGetModuleName = (const char *(__stdcall *)())wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = wil::details::DebugBreak;
  wil::details::g_pfnRaiseFailFastException = (void (__stdcall *)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
}
