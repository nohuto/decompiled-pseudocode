/*
 * XREFs of IopLiveDumpTrace @ 0x14055A870
 * Callers:
 *     IoCaptureLiveDump @ 0x14093A0B8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14093A954 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A67994 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14055A67C (IopLiveDumpIsTracingEnabled.c)
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
