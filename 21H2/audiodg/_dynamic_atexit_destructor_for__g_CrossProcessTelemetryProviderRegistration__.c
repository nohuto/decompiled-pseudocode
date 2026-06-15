/*
 * XREFs of _dynamic_atexit_destructor_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x14002DC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG dynamic_atexit_destructor_for__g_CrossProcessTelemetryProviderRegistration__()
{
  _DWORD *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (_DWORD *)g_CrossProcessTelemetryProviderRegistration;
  v1 = *(_QWORD *)(g_CrossProcessTelemetryProviderRegistration + 32LL);
  *(_QWORD *)(g_CrossProcessTelemetryProviderRegistration + 32LL) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
