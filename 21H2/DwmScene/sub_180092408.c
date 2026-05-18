/*
 * XREFs of sub_180092408 @ 0x180092408
 * Callers:
 *     sub_18009C100 @ 0x18009C100 (sub_18009C100.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_180092408(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 160);
  return _bittest64(&v2, a2);
}
