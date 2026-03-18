/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140395E98
 * Callers:
 *     IoReuseIrp @ 0x1402EB1A0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140395E60 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1404FB1F4 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
