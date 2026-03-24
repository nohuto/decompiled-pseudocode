/*
 * XREFs of KeRundownQueue @ 0x1402A9B70
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1402A9CF8 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}
