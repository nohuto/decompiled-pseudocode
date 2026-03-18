/*
 * XREFs of IopLiveDumpTrace @ 0x140503548
 * Callers:
 *     IoCaptureLiveDump @ 0x140893018 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1408937A0 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AA6E8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405034E0 (IopLiveDumpIsTracingEnabled.c)
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
