/*
 * XREFs of sub_1800DDA3C @ 0x1800DDA3C
 * Callers:
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 *     sub_1800BB8BC @ 0x1800BB8BC (sub_1800BB8BC.c)
 *     sub_1800BBA94 @ 0x1800BBA94 (sub_1800BBA94.c)
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 *     __RTtypeid @ 0x180123994 (__RTtypeid.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DDA3C(__int64 a1, _QWORD *a2, _QWORD *a3)
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
        sub_18001101C(a2, v8, i);
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
