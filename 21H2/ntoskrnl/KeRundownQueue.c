/*
 * XREFs of KeRundownQueue @ 0x140234660
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x140234764 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx(Queue);
}
