/*
 * XREFs of sub_18008479C @ 0x18008479C
 * Callers:
 *     sub_18008467C @ 0x18008467C (sub_18008467C.c)
 * Callees:
 *     sub_180036234 @ 0x180036234 (sub_180036234.c)
 */

BOOLEAN __fastcall sub_18008479C(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  sub_180036234((_QWORD *)(a1 - 32), 0);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
