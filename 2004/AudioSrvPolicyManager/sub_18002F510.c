/*
 * XREFs of sub_18002F510 @ 0x18002F510
 * Callers:
 *     sub_18002F030 @ 0x18002F030 (sub_18002F030.c)
 *     sub_18002FDFC @ 0x18002FDFC (sub_18002FDFC.c)
 * Callees:
 *     sub_18002F5C8 @ 0x18002F5C8 (sub_18002F5C8.c)
 */

__int64 __fastcall sub_18002F510(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v6; // rcx
  __int64 v7; // r11
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax

  v3 = a3 + 2;
  if ( a3[5] >= 8uLL )
    v3 = (_QWORD *)*v3;
  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  v8 = 2LL * a3[4];
  if ( v8 )
  {
    do
    {
      v9 = *((unsigned __int8 *)v3 + v6++);
      v7 = 0x100000001B3LL * (v9 ^ v7);
    }
    while ( v6 < v8 );
  }
  v10 = a1[3];
  v11 = 2 * (v7 & a1[6]);
  if ( *(_QWORD **)(v10 + 16 * (v7 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v10 + 16 * (v7 & a1[6])) == a3 )
    {
      *(_QWORD *)(v10 + 16 * (v7 & a1[6])) = a1[1];
      v10 = a1[3];
      v12 = a1[1];
    }
    else
    {
      v12 = a3[1];
    }
    *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
  }
  else if ( *(_QWORD **)(v10 + 16 * (v7 & a1[6])) == a3 )
  {
    *(_QWORD *)(v10 + 16 * (v7 & a1[6])) = *a3;
  }
  sub_18002F5C8(a1 + 1, a2);
  return a2;
}
