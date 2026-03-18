/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140398F28
 * Callers:
 *     IoReuseIrp @ 0x1402F4000 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140398EF0 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1404FF118 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
