/*
 * XREFs of CmpSetIoPriorityThread @ 0x1403304D4
 * Callers:
 *     CmpDoFileWrite @ 0x14064F21C (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14024B340 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
