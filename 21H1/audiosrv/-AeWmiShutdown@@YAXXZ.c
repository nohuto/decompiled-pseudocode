/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x180105604
 * Callers:
 *     DllMain @ 0x18006D728 (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_180146020);
    qword_180146020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
