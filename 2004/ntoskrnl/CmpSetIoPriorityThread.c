/*
 * XREFs of CmpSetIoPriorityThread @ 0x14035F764
 * Callers:
 *     CmpDoFileWrite @ 0x14061E5DC (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x1402C78CC (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
