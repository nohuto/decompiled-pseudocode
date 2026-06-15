/*
 * XREFs of sub_1800669B4 @ 0x1800669B4
 * Callers:
 *     sub_1800667A8 @ 0x1800667A8 (sub_1800667A8.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180069060 @ 0x180069060 (sub_180069060.c)
 */

__int64 __fastcall sub_1800669B4(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      v7 = sub_180055F40(0x28uLL);
      if ( v7 )
      {
        v7[2] = 0LL;
        *v7 = &off_180149600;
        v7[1] = 0LL;
        v7[3] = 0LL;
        v7[4] = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      v9 = v7;
      if ( v7 )
      {
        v7[1] = a1;
        *((_DWORD *)v7 + 4) = 3000;
        v7[3] = a2;
        *a3 = v7;
        v9 = 0LL;
      }
      else
      {
        v3 = -2147024882;
      }
    }
    else
    {
      v3 = -2147467261;
    }
  }
  else
  {
    v3 = -2147024809;
  }
  sub_180069060(&v9);
  return v3;
}
