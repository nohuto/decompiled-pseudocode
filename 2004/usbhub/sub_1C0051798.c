/*
 * XREFs of sub_1C0051798 @ 0x1C0051798
 * Callers:
 *     sub_1C0050A44 @ 0x1C0050A44 (sub_1C0050A44.c)
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

char *__fastcall sub_1C0051798(
        int a1,
        char *a2,
        char *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int16 a6,
        unsigned __int16 a7,
        unsigned __int8 *a8)
{
  __int64 v8; // r10
  __int64 v10; // r14
  unsigned __int64 v12; // r14
  unsigned __int8 *v13; // rsi
  SIZE_T v14; // r15
  __m128 *PoolWithTag; // rax
  char *v16; // r13
  unsigned __int64 v17; // rbx
  char *v18; // rbx
  int v19; // edi
  unsigned int i; // ecx
  __int16 v21; // ax

  v8 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)&a2[2 * v10] );
  v12 = 2 * v10;
  v13 = a8;
  v14 = v12 + *(unsigned __int16 *)a4 + 2LL * a5;
  if ( a1 == 2 && a8 )
  {
    do
      ++v8;
    while ( a8[v8] );
    v14 = v14 + 2 * v8 - 2;
  }
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v14, 0x42554855u);
  v16 = (char *)PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, v14);
    v17 = (unsigned int)*a4;
    sub_1C001D080(v16, a3, v17);
    v18 = &v16[v17];
    sub_1C001D080(v18, a2, v12);
    *a4 = v14;
    while ( *(_WORD *)v18 != 110 && a6 )
      v18 += 2;
    if ( a1 )
    {
      v19 = a1 - 1;
      if ( v19 )
      {
        if ( v19 == 1 && a8 )
        {
          for ( i = 0; i < 8; ++i )
          {
            v21 = *v13;
            if ( !(_BYTE)v21 )
              break;
            *(_WORD *)v18 = v21;
            v18 += 2;
            ++v13;
          }
        }
      }
      else if ( a6 == 2 )
      {
        *(_WORD *)v18 = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v18 + 1) = (a7 & 0xF) + 48;
      }
      else if ( a6 == 4 )
      {
        *(_WORD *)v18 = (a7 >> 12) + 48;
        *((_WORD *)v18 + 1) = (HIBYTE(a7) & 0xF) + 48;
        *((_WORD *)v18 + 2) = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v18 + 3) = (a7 & 0xF) + 48;
      }
    }
    else if ( a6 == 2 )
    {
      *(_WORD *)v18 = (unsigned __int8)a0123456789abcd[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v18 + 1) = (unsigned __int8)a0123456789abcd[a7 & 0xF];
    }
    else if ( a6 == 4 )
    {
      *(_WORD *)v18 = (unsigned __int8)a0123456789abcd[(unsigned __int64)a7 >> 12];
      *((_WORD *)v18 + 1) = (unsigned __int8)a0123456789abcd[((unsigned __int64)a7 >> 8) & 0xF];
      *((_WORD *)v18 + 2) = (unsigned __int8)a0123456789abcd[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v18 + 3) = (unsigned __int8)a0123456789abcd[a7 & 0xF];
    }
  }
  else
  {
    *a4 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return v16;
}
