/*
 * XREFs of sub_1800AB2E0 @ 0x1800AB2E0
 * Callers:
 *     sub_1800AB454 @ 0x1800AB454 (sub_1800AB454.c)
 * Callees:
 *     sub_1800A7C10 @ 0x1800A7C10 (sub_1800A7C10.c)
 *     sub_1800AB3B0 @ 0x1800AB3B0 (sub_1800AB3B0.c)
 */

_QWORD *__fastcall sub_1800AB2E0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
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
    sub_1800A7C10(a1, a1, (__int64 *)v4[1]);
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
        sub_1800AB3B0(a1, v14, v10);
      }
      while ( j != a4 );
    }
    *a2 = j;
  }
  return a2;
}
