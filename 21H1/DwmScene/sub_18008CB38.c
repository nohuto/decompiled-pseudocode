/*
 * XREFs of sub_18008CB38 @ 0x18008CB38
 * Callers:
 *     sub_180096830 @ 0x180096830 (sub_180096830.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_18008CB38(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 160);
  return _bittest64(&v2, a2);
}
