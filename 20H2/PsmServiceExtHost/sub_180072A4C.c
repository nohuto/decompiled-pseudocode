/*
 * XREFs of sub_180072A4C @ 0x180072A4C
 * Callers:
 *     sub_180069BA4 @ 0x180069BA4 (sub_180069BA4.c)
 * Callees:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_180007F50 @ 0x180007F50 (sub_180007F50.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

__int64 __fastcall sub_180072A4C(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int *v5; // rdi
  int v7; // ecx
  _DWORD *i; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  v3 = 0;
  v4 = a2;
  v5 = a3;
  if ( a2 && a3 )
  {
    v7 = 0;
    for ( i = a3; *i <= 0x31u; i += 6 )
    {
      if ( ++v7 >= a2 )
      {
        sub_18001E380();
        if ( *(_DWORD *)(a1 + 1280) )
        {
          sub_18000476C(v9, 2, v4, (__int64)v5, *(_QWORD *)(a1 + 1320));
          if ( (_DWORD)v4 )
          {
            v10 = v4;
            do
            {
              v11 = *v5;
              v12 = v5[4];
              v5 += 6;
              *(_DWORD *)(a1 + 4 * v11 + 1488) = v12;
              --v10;
            }
            while ( v10 );
          }
          sub_180007F50(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 1320));
          v13 = *(_QWORD *)(a1 + 24);
          if ( (*(_BYTE *)(v13 + 160) & 2) == 0 )
            TpPostWork(*(_QWORD *)(v13 + 152));
        }
        else
        {
          v3 = -2147220218;
        }
        sub_18000F390();
        return v3;
      }
    }
  }
  return (unsigned int)-2147024809;
}
