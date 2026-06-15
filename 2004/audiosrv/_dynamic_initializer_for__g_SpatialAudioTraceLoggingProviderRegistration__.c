/*
 * XREFs of _dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x180001B60
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800B5080 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18019D4B0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__);
}
