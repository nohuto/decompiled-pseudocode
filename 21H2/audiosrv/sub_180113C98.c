/*
 * XREFs of sub_180113C98 @ 0x180113C98
 * Callers:
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 * Callees:
 *     sub_1800D0A6C @ 0x1800D0A6C (sub_1800D0A6C.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     sub_180113C34 @ 0x180113C34 (sub_180113C34.c)
 */

__int64 __fastcall sub_180113C98(__int64 *a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *(_QWORD *)(v7 + 32) >= v8 )
      {
        if ( *(_BYTE *)(v5 + 25) && v8 < *(_QWORD *)(v7 + 32) )
          v5 = v7;
        v4 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v13 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    sub_1800E3598(&v13);
    v9 = v13;
  }
  v13 = v4;
  if ( v4 == *v2 && (_QWORD *)v5 == v2 )
  {
    sub_1800D0A6C((__int64)a1, (__int64)a1, v2[1]);
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      sub_1800E3598(&v13);
      sub_180113C34((__int64)a1, &v14, v12);
      v4 = v13;
    }
  }
  return v10;
}
