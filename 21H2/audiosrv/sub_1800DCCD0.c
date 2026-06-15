/*
 * XREFs of sub_1800DCCD0 @ 0x1800DCCD0
 * Callers:
 *     sub_1800E0290 @ 0x1800E0290 (sub_1800E0290.c)
 *     sub_1800E12E0 @ 0x1800E12E0 (sub_1800E12E0.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_1800DCCD0(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax
  std::_Ref_count_base *v3; // rcx

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    sub_180052600(v1);
    v3 = (std::_Ref_count_base *)a1[1];
  }
  if ( v3 )
    sub_180052600(v3);
  sub_18006A148(a1);
  return 0LL;
}
