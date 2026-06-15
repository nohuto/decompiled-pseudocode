/*
 * XREFs of sub_18010CA24 @ 0x18010CA24
 * Callers:
 *     sub_18010CE74 @ 0x18010CE74 (sub_18010CE74.c)
 * Callees:
 *     sub_1800BB3A8 @ 0x1800BB3A8 (sub_1800BB3A8.c)
 */

__int64 __fastcall sub_18010CA24(unsigned int *a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    *a3 = 0LL;
    if ( a2 >= *a1 )
      sub_1800BB3A8(
        (int)retaddr,
        140,
        (int)"onecoreuap\\internal\\avcore\\inc\\ApplicationSpatialInformationWnf.h",
        -2147024809);
    *a3 = (char *)a1 + a2 * a1[18] + 76;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           146,
                           (int)"onecoreuap\\internal\\avcore\\inc\\ApplicationSpatialInformationWnf.h",
                           a4);
  }
  return result;
}
