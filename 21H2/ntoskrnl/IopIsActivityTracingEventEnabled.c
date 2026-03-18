/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140386368
 * Callers:
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140386330 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140556BE4 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
