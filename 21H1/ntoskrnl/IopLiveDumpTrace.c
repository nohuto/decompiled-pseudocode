/*
 * XREFs of IopLiveDumpTrace @ 0x140502EF8
 * Callers:
 *     IoCaptureLiveDump @ 0x140891CF8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140892480 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409A9888 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140502E90 (IopLiveDumpIsTracingEnabled.c)
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
