/*
 * XREFs of _dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x1800016C0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800B43C8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18019C480);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__);
}
