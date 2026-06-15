/*
 * XREFs of sub_180137DD0 @ 0x180137DD0
 * Callers:
 *     sub_180137BBC @ 0x180137BBC (sub_180137BBC.c)
 * Callees:
 *     sub_180137A98 @ 0x180137A98 (sub_180137A98.c)
 */

void __fastcall sub_180137DD0(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 *i; // r11
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx

  v3 = (unsigned __int64 *)*a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( a2 <= v7 )
  {
    v14 = 0LL;
    i = &v3[a2];
    v15 = a2 & 0x1FFFFFFFFFFFFFFFLL;
    if ( v3 > i )
      v15 = 0LL;
    if ( v15 )
    {
      if ( v15 >= 2 && (v3 > a3 || &v3[v15 - 1] < a3) )
      {
        v16 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v14 += 2LL;
        while ( v14 != v16 );
        v17 = 8 * v16;
        memset64(v3, *a3, v17 >> 3);
        v3 = (unsigned __int64 *)((char *)v3 + v17);
      }
      while ( v14 != v15 )
      {
        ++v14;
        *v3++ = *a3;
      }
    }
  }
  else
  {
    if ( a2 <= (a1[2] - (__int64)v3) >> 3 )
    {
      v8 = 0LL;
      v9 = (unsigned __int64)(a1[1] - (_QWORD)v3 + 7) >> 3;
      if ( (unsigned __int64)v3 > a1[1] )
        v9 = 0LL;
      if ( v9 )
      {
        if ( v9 >= 2 && (v3 > a3 || &v3[v9 - 1] < a3) )
        {
          v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v8 += 2LL;
          while ( v8 != v10 );
          v11 = 8 * v10;
          memset64(v3, *a3, v11 >> 3);
          v3 = (unsigned __int64 *)((char *)v3 + v11);
        }
        while ( v8 != v9 )
        {
          ++v8;
          *v3++ = *a3;
        }
      }
    }
    else
    {
      sub_180137A98(a1, a2);
      v7 = 0LL;
    }
    v12 = a2 - v7;
    for ( i = (unsigned __int64 *)a1[1]; v12; --v12 )
      *i++ = *a3;
  }
  a1[1] = (__int64)i;
}
