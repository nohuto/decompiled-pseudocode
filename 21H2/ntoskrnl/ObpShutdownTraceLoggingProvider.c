/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140B52C84
 * Callers:
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140C03028;
  qword_140C03028 = 0LL;
  dword_140C03008 = 0;
  return EtwUnregister(v0);
}
