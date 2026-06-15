/*
 * XREFs of _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x180001B80
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800B4FE0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18019D4E8);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AudioEngineUtilTelemetryProviderRegistration__);
}
