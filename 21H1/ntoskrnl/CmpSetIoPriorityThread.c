/*
 * XREFs of CmpSetIoPriorityThread @ 0x140321DB4
 * Callers:
 *     CmpDoFileWrite @ 0x140663CFC (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140234A9C (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
