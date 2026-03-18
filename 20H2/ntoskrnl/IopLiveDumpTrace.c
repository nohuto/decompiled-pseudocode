/*
 * XREFs of IopLiveDumpTrace @ 0x140506F58
 * Callers:
 *     IoCaptureLiveDump @ 0x140898CC8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140899450 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409B0658 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140506EF0 (IopLiveDumpIsTracingEnabled.c)
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
