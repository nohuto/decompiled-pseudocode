/*
 * XREFs of EngReadStateEvent @ 0x1C027E110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall EngReadStateEvent(PEVENT pEvent)
{
  return KeReadStateEvent((PRKEVENT)pEvent->pKEvent);
}
