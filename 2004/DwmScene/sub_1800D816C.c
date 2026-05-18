/*
 * XREFs of sub_1800D816C @ 0x1800D816C
 * Callers:
 *     _setlocale_set_cat_0 @ 0x1800AA5C4 (_setlocale_set_cat_0.c)
 *     sub_1800B5FEC @ 0x1800B5FEC (sub_1800B5FEC.c)
 *     sub_1800B61C4 @ 0x1800B61C4 (sub_1800B61C4.c)
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 *     __RTtypeid @ 0x18011E0C4 (__RTtypeid.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D816C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rsi
  _QWORD *i; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v5 = *(_QWORD **)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 40); i != v5; i += 2 )
  {
    v7 = _RTtypeid(*i);
    if ( !(unsigned int)_std_type_info_compare(*a3 + 8LL, v7 + 8) )
    {
      v8 = (_QWORD *)a2[1];
      if ( (_QWORD *)a2[2] == v8 )
      {
        sub_180010F3C(a2, v8, i);
      }
      else
      {
        *v8 = 0LL;
        v8[1] = 0LL;
        v9 = i[1];
        if ( v9 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        *v8 = *i;
        v8[1] = i[1];
        a2[1] += 16LL;
      }
    }
  }
  return a2;
}
