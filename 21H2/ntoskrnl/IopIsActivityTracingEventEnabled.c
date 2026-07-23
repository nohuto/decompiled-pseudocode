/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1403994E8
 * Callers:
 *     IoReuseIrp @ 0x14020D600 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x1403994B0 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140500C1C (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
