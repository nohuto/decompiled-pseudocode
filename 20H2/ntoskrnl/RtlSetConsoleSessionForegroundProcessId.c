/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x1406D5380
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall RtlSetConsoleSessionForegroundProcessId(_QWORD *a1)
{
  _QWORD *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    *(_QWORD *)(result[141] + 8LL) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF78000000338] = a1;
  }
  return result;
}
