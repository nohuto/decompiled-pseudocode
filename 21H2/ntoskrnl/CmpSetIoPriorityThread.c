/*
 * XREFs of CmpSetIoPriorityThread @ 0x1402509A4
 * Callers:
 *     CmpDoFileWrite @ 0x1406A362C (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140302040 (PsSetIoPriorityThread.c)
 */

__int64 CmpSetIoPriorityThread()
{
  return PsSetIoPriorityThread();
}
