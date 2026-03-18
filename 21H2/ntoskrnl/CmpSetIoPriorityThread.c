/*
 * XREFs of CmpSetIoPriorityThread @ 0x14025C430
 * Callers:
 *     CmpDoFileWrite @ 0x140714594 (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14028F698 (PsSetIoPriorityThread.c)
 */

__int64 CmpSetIoPriorityThread()
{
  return PsSetIoPriorityThread();
}
