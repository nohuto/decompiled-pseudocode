/*
 * XREFs of _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x1800015F0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800B43C8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_SarmTelemetryProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18019C350);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__);
}
