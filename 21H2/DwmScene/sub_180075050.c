/*
 * XREFs of sub_180075050 @ 0x180075050
 * Callers:
 *     sub_18007442C @ 0x18007442C (sub_18007442C.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_1800288B0 @ 0x1800288B0 (sub_1800288B0.c)
 *     sub_180037974 @ 0x180037974 (sub_180037974.c)
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180075050(__int64 **a1, __int64 a2, char a3, _QWORD *a4, _QWORD *a5)
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
        *(_QWORD *)a2 = *sub_180037974(a1, &v17, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180027CD0(&v17);
      v14 = v17;
    }
    if ( (int)_std_type_info_compare(v14[4] + 8, *a4 + 8LL) >= 0 )
    {
      sub_1800288B0((__int64)(a5 + 4), 0);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_180037974(a1, &v17, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_18003DF14((__int64)v19, (__int64)v18);
    throw;
  }
  return result;
}
