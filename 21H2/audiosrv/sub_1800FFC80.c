/*
 * XREFs of sub_1800FFC80 @ 0x1800FFC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F9F94 @ 0x1800F9F94 (sub_1800F9F94.c)
 */

_QWORD *__fastcall sub_1800FFC80(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
    return sub_1800F9F94(v3, a2, a3);
  return result;
}
