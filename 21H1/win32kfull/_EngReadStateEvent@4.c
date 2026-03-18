/*
 * XREFs of _EngReadStateEvent@4 @ 0x1D9F68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall EngReadStateEvent(PEVENT pEvent)
{
  return KeReadStateEvent((PRKEVENT)pEvent->pKEvent);
}
