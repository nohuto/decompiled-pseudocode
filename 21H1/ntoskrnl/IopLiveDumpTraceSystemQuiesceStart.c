/*
 * XREFs of IopLiveDumpTraceSystemQuiesceStart @ 0x140504530
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1409A7FD0 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140502E90 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceSystemQuiesceStart()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCE_START;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCE_START;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
