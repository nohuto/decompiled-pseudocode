/*
 * XREFs of _dynamic_atexit_destructor_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x18007CF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG dynamic_atexit_destructor_for__g_AudioEngineUtilTelemetryProviderRegistration__()
{
  _DWORD *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (_DWORD *)g_AudioEngineUtilTelemetryProviderRegistration;
  v1 = *(_QWORD *)(g_AudioEngineUtilTelemetryProviderRegistration + 32LL);
  *(_QWORD *)(g_AudioEngineUtilTelemetryProviderRegistration + 32LL) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
