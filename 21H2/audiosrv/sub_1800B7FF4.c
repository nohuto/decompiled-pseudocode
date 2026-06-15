/*
 * XREFs of sub_1800B7FF4 @ 0x1800B7FF4
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

__int64 *__fastcall sub_1800B7FF4(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  std::_Ref_count_base *v3; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v3 = (std::_Ref_count_base *)a2[1];
  a2[1] = 0LL;
  v4 = qword_18019EAF0;
  qword_18019EAE8 = v2;
  qword_18019EAF0 = v3;
  if ( v4 )
    sub_180052600(v4);
  return &qword_18019EAE8;
}
