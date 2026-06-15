/*
 * XREFs of sub_180105D5C @ 0x180105D5C
 * Callers:
 *     sub_180105669 @ 0x180105669 (sub_180105669.c)
 *     sub_180109200 @ 0x180109200 (sub_180109200.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_180105D5C(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[1];
  if ( v2 )
    sub_180052600(v2);
  sub_18006A148(a1);
  return a1;
}
