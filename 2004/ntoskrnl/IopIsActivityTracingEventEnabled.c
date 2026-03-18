/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140396A68
 * Callers:
 *     IoReuseIrp @ 0x140324AD0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140396A30 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1404FB844 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
