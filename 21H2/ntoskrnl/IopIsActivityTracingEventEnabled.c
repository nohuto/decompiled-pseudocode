/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140399398
 * Callers:
 *     IoReuseIrp @ 0x1402EDC30 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140399360 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140500C9C (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
