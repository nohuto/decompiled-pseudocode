/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x140701C00
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall RtlSetConsoleSessionForegroundProcessId(_QWORD *a1)
{
  _QWORD *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    *(_QWORD *)(result[140] + 8LL) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF78000000338] = a1;
  }
  return result;
}
