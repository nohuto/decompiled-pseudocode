/*
 * XREFs of sub_18003C690 @ 0x18003C690
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 */

BOOLEAN __fastcall sub_18003C690(_QWORD *a1)
{
  sub_180034D90(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
