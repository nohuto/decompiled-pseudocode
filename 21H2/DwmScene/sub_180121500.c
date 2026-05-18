/*
 * XREFs of sub_180121500 @ 0x180121500
 * Callers:
 *     sub_180121674 @ 0x180121674 (sub_180121674.c)
 * Callees:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     sub_1801215D0 @ 0x1801215D0 (sub_1801215D0.c)
 */

_QWORD *__fastcall sub_180121500(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  _QWORD *j; // rbx
  __int64 **v9; // rax
  _QWORD *v10; // r8
  __int64 i; // rax
  __int64 *v12; // rcx
  char v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD **)a1;
  j = a3;
  if ( a3 == **(_QWORD ***)a1 && a4 == v4 )
  {
    sub_18006E8C4(a1, a1, (__int64 *)v4[1]);
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    *(_QWORD *)(a1 + 8) = 0LL;
    *a2 = **(_QWORD **)a1;
  }
  else
  {
    if ( a3 != a4 )
    {
      do
      {
        v9 = (__int64 **)j[2];
        v10 = j;
        if ( *((_BYTE *)v9 + 25) )
        {
          for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            j = (_QWORD *)i;
          j = (_QWORD *)i;
        }
        else
        {
          v12 = *v9;
          for ( j = (_QWORD *)j[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
            j = v12;
        }
        sub_1801215D0(a1, v14, v10);
      }
      while ( j != a4 );
    }
    *a2 = j;
  }
  return a2;
}
