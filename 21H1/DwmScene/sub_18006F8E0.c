/*
 * XREFs of sub_18006F8E0 @ 0x18006F8E0
 * Callers:
 *     sub_18006EDBC @ 0x18006EDBC (sub_18006EDBC.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_18006DB50 @ 0x18006DB50 (sub_18006DB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006F8E0(__int64 **a1, __int64 a2, char a3, unsigned __int64 *a4, _QWORD *a5)
{
  __int64 *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  unsigned __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 result; // rax
  __int64 *v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-40h]
  __int64 **v17; // [rsp+40h] [rbp-38h]

  v17 = a1;
  v16 = a5;
  v8 = *a1;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *a4;
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = *(_QWORD *)(v10 + 32) >= v12;
      else
        v11 = v12 < *(_QWORD *)(v10 + 32);
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  try
  {
    v13 = v9;
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_18006DB50(a1, &v15, 1, v9, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180022400(&v15);
      v13 = v15;
    }
    if ( v13[4] >= *a4 )
    {
      unknown_libname_101(a5 + 8);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_18006DB50(a1, &v15, v11, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_18007B5E0(v17, v16);
    throw;
  }
  return result;
}
