/*
 * XREFs of sub_180137F70 @ 0x180137F70
 * Callers:
 *     sub_18007C5A4 @ 0x18007C5A4 (sub_18007C5A4.c)
 *     sub_180134082 @ 0x180134082 (sub_180134082.c)
 * Callees:
 *     sub_180138028 @ 0x180138028 (sub_180138028.c)
 */

__int64 __fastcall sub_180137F70(_QWORD *a1, __int64 a2, _QWORD *a3)
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
  sub_180138028(a1 + 1, a2, a3);
  return a2;
}
