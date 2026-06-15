/*
 * XREFs of sub_180046480 @ 0x180046480
 * Callers:
 *     sub_180046410 @ 0x180046410 (sub_180046410.c)
 *     sub_1800BD240 @ 0x1800BD240 (sub_1800BD240.c)
 *     sub_1800BD550 @ 0x1800BD550 (sub_1800BD550.c)
 *     sub_1800BD700 @ 0x1800BD700 (sub_1800BD700.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180046480(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
