/*
 * XREFs of sub_180018AB0 @ 0x180018AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180018AB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_18003EE40;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  a2[1] = v2;
  return a2;
}
