/*
 * XREFs of sub_18000E988 @ 0x18000E988
 * Callers:
 *     sub_18003B722 @ 0x18003B722 (sub_18003B722.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_18000E988(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx

  v6 = a3 + 2;
  if ( a3[5] >= 8uLL )
    v6 = (_QWORD *)a3[2];
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  v9 = 2LL * a3[4];
  if ( v9 )
  {
    do
    {
      v10 = *((unsigned __int8 *)v6 + v7++);
      v8 = 0x100000001B3LL * (v10 ^ v8);
    }
    while ( v7 < v9 );
  }
  v11 = v8 & a1[6];
  v12 = a1[3];
  v13 = 2 * v11;
  if ( *(_QWORD **)(v12 + 8 * v13 + 8) == a3 )
  {
    if ( *(_QWORD **)(v12 + 8 * v13) == a3 )
    {
      *(_QWORD *)(v12 + 8 * v13) = a1[1];
      v12 = a1[3];
      v14 = a1[1];
    }
    else
    {
      v14 = a3[1];
    }
    *(_QWORD *)(v12 + 8 * v13 + 8) = v14;
  }
  else if ( *(_QWORD **)(v12 + 8 * v13) == a3 )
  {
    *(_QWORD *)(v12 + 8 * v13) = *a3;
  }
  v15 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  sub_180009CF0((__int64)(a3 + 2));
  sub_180039D98(a3);
  *a2 = v15;
  return a2;
}
