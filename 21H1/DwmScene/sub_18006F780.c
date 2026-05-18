/*
 * XREFs of sub_18006F780 @ 0x18006F780
 * Callers:
 *     sub_18006EB5C @ 0x18006EB5C (sub_18006EB5C.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 *     sub_1800320A4 @ 0x1800320A4 (sub_1800320A4.c)
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006F780(__int64 **a1, __int64 a2, char a3, _QWORD *a4, _QWORD *a5)
{
  char v6; // al
  __int64 *v9; // rsi
  __int64 v10; // rbx
  char v11; // r15
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 result; // rax
  __int64 *v17; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-48h]
  __int64 **v19; // [rsp+48h] [rbp-40h]

  v6 = a3;
  v19 = a1;
  v18 = a5;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = 1;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v9 = (__int64 *)v10;
    if ( v6 )
    {
      v12 = _std_type_info_compare(*(_QWORD *)(v10 + 32) + 8LL, *a4 + 8LL);
      v11 = v12 >= 0;
    }
    else
    {
      v13 = _std_type_info_compare(*a4 + 8LL, *(_QWORD *)(v10 + 32) + 8LL);
      v11 = v13 < 0;
    }
    if ( v11 )
      v10 = *(_QWORD *)v10;
    else
      v10 = *(_QWORD *)(v10 + 16);
    v6 = a3;
  }
  try
  {
    v14 = v9;
    v17 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *sub_1800320A4(a1, &v17, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180022400(&v17);
      v14 = v17;
    }
    if ( (int)_std_type_info_compare(v14[4] + 8, *a4 + 8LL) >= 0 )
    {
      sub_180022FE0((__int64)(a5 + 4), 0);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800320A4(a1, &v17, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_180038644((__int64)v19, (__int64)v18);
    throw;
  }
  return result;
}
