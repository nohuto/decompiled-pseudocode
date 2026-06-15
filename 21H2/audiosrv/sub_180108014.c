/*
 * XREFs of sub_180108014 @ 0x180108014
 * Callers:
 *     sub_1801067C4 @ 0x1801067C4 (sub_1801067C4.c)
 *     sub_180107670 @ 0x180107670 (sub_180107670.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056C2C @ 0x180056C2C (sub_180056C2C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 */

void __fastcall sub_180108014(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 i; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = sub_1800CF858(a1, *(_QWORD *)(a1 + 8));
  if ( v2 != *(_DWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = sub_180055F40(saturated_mul(v2, 8uLL));
      v5 = v4;
      if ( !v4 )
        sub_1800B8610(-2147024882);
      memset(v4, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v7 + 40);
            v9 = *(_DWORD *)(v7 + 48) % v2;
            *(_QWORD *)(v7 + 40) = v5[v9];
            v5[(unsigned int)v9] = v7;
            v7 = v8;
          }
          while ( v8 );
        }
      }
      sub_180033A70(*(void **)a1);
      *(_QWORD *)a1 = v5;
      *(_DWORD *)(a1 + 16) = v2;
      sub_180056C2C(a1);
    }
    else
    {
      sub_180107110(a1, v2, 0);
    }
  }
}
