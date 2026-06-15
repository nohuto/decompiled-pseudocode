/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x1801056C4
 * Callers:
 *     DllMain @ 0x18006E06C (DllMain.c)
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
