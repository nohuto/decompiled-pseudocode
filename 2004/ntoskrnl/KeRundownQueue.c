/*
 * XREFs of KeRundownQueue @ 0x1403387F0
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x140338978 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}
