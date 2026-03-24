/*
 * XREFs of CmpSetIoPriorityThread @ 0x1402D25D4
 * Callers:
 *     CmpDoFileWrite @ 0x1406715BC (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x1402F72F0 (PsSetIoPriorityThread.c)
 */

__int64 CmpSetIoPriorityThread()
{
  return PsSetIoPriorityThread();
}
