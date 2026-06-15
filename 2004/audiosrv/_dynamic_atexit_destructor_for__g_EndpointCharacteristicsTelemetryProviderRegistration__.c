/*
 * XREFs of _dynamic_atexit_destructor_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x18007D930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG dynamic_atexit_destructor_for__g_EndpointCharacteristicsTelemetryProviderRegistration__()
{
  _DWORD *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (_DWORD *)g_EndpointCharacteristicsTelemetryProviderRegistration;
  v1 = *(_QWORD *)(g_EndpointCharacteristicsTelemetryProviderRegistration + 32LL);
  *(_QWORD *)(g_EndpointCharacteristicsTelemetryProviderRegistration + 32LL) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
