/*
 * XREFs of sub_180034C50 @ 0x180034C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180034D68 @ 0x180034D68 (sub_180034D68.c)
 */

BOOLEAN __fastcall sub_180034C50(_QWORD *a1)
{
  _QWORD *v2; // rcx

  sub_180034D68();
  v2 = (_QWORD *)a1[11];
  if ( v2 )
    sub_1800274E0(v2);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
