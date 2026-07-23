/*
 * XREFs of IopLiveDumpTraceMirroringPhase0End @ 0x140509DB4
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409ACE10 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140508C5C (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceMirroringPhase0End()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_PHASE0_END;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_PHASE0_END;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
