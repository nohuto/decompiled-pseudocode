/*
 * XREFs of _EngSetEvent@4 @ 0x1D9F81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall EngSetEvent(PEVENT pEvent)
{
  return KeSetEvent((PRKEVENT)pEvent->pKEvent, 0, 0);
}
