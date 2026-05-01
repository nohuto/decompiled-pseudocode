/*
 * XREFs of sub_18006A338 @ 0x18006A338
 * Callers:
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 * Callees:
 *     sub_180004E94 @ 0x180004E94 (sub_180004E94.c)
 */

BOOLEAN __fastcall sub_18006A338(__int64 a1, char a2)
{
  void *v2; // rbx

  v2 = (void *)(a1 - 24);
  sub_180004E94((_QWORD *)(a1 - 24), a2);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
