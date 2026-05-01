/*
 * XREFs of sub_18003C5E0 @ 0x18003C5E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180034D68 @ 0x180034D68 (sub_180034D68.c)
 */

BOOLEAN __fastcall sub_18003C5E0(_QWORD *a1)
{
  _QWORD *v2; // rcx

  sub_180034D68((__int64)a1);
  v2 = (_QWORD *)a1[20];
  if ( v2 )
    sub_1800274E0(v2);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
