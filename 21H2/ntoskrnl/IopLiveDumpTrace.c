/*
 * XREFs of IopLiveDumpTrace @ 0x140508A88
 * Callers:
 *     IoCaptureLiveDump @ 0x140896298 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140896A20 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AD558 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140508A20 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  const EVENT_DESCRIPTOR *v1; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v1, 0LL, 0, 0LL, 0LL, 0, 0LL);
  return result;
}
