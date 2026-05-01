/*
 * XREFs of sub_180034CA0 @ 0x180034CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034CD8 @ 0x180034CD8 (sub_180034CD8.c)
 */

BOOLEAN __fastcall sub_180034CA0(void *a1)
{
  sub_180034CD8();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
