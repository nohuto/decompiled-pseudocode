/*
 * XREFs of sub_180034B80 @ 0x180034B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034D68 @ 0x180034D68 (sub_180034D68.c)
 */

BOOLEAN __fastcall sub_180034B80(void *a1)
{
  sub_180034D68();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
