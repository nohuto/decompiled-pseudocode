/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x180001100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__())(wil::details *__hidden this, void *, void *)
{
  __int64 (__fastcall *result)(wil::details *__hidden, void *, void *); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnGetModuleInformation = (bool (*)(void *, unsigned int *, char *, unsigned __int64))wil::details::GetModuleInformation;
  wil::details::g_pfnDebugBreak = wil::details::DebugBreak;
  wil::details::g_pfnRaiseFailFastException = (void (*)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (unsigned int (*)(int))wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnDllShutdownInProgress = (unsigned __int8 (*)(void))wil::details::RtlDllShutdownInProgress;
  result = wil::details::RtlDisownModuleHeapAllocation;
  wil::details::g_pfnRtlDisownModuleHeapAllocation = (int (*)(void *, void *))wil::details::RtlDisownModuleHeapAllocation;
  return result;
}
