/*
 * XREFs of _EngClearEvent@4 @ 0x1D9E71
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngClearEvent(PEVENT pEvent)
{
  KeClearEvent((PRKEVENT)pEvent->pKEvent);
}
