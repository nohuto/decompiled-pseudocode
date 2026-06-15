/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x180104A34
 * Callers:
 *     DllMain @ 0x18006D5AC (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_180145020);
    qword_180145020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
