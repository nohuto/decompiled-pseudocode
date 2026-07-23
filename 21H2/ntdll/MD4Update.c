/*
 * XREFs of MD4Update @ 0x1801104D0
 * Callers:
 *     MD4Final @ 0x18010FE40 (MD4Final.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 *     MD4Transform @ 0x18010FF3C (MD4Transform.c)
 */

void *__fastcall MD4Update(__int64 a1, _OWORD *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  _OWORD *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r9d
  int v8; // ecx
  unsigned int v9; // ebp
  void *result; // rax
  unsigned __int64 v11; // rbp

  v4 = a3;
  v5 = a2;
  v6 = (*(_DWORD *)(a1 + 16) >> 3) & 0x3F;
  v7 = *(_DWORD *)(a1 + 16) + 8 * a3;
  *(_DWORD *)(a1 + 16) = v7;
  v8 = *(_DWORD *)(a1 + 20);
  if ( v7 < 8 * a3 )
    ++v8;
  *(_DWORD *)(a1 + 20) = v8 + (a3 >> 29);
  if ( v6 )
  {
    v9 = v6 + a3;
    if ( v6 + a3 >= 0x40 )
    {
      memmove((void *)(v6 + a1 + 24), a2, 64 - v6);
      v5 = (_OWORD *)((char *)v5 + 64 - v6);
      v4 = v9 - 64;
      MD4Transform((_DWORD *)a1, (_DWORD *)(a1 + 24));
      v6 = 0;
    }
  }
  result = (void *)((unsigned __int8)v5 & 3);
  if ( v4 >= 0x40 )
  {
    v11 = (unsigned __int64)v4 >> 6;
    if ( ((unsigned __int8)v5 & 3) != 0 )
    {
      do
      {
        *(_OWORD *)(a1 + 24) = *v5;
        *(_OWORD *)(a1 + 40) = v5[1];
        *(_OWORD *)(a1 + 56) = v5[2];
        *(_OWORD *)(a1 + 72) = v5[3];
        result = (void *)MD4Transform((_DWORD *)a1, (_DWORD *)(a1 + 24));
        v5 += 4;
        v4 -= 64;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      do
      {
        result = (void *)MD4Transform((_DWORD *)a1, v5);
        v5 += 4;
        v4 -= 64;
        --v11;
      }
      while ( v11 );
    }
  }
  if ( v4 )
    return memmove((void *)(v6 + a1 + 24), v5, v4);
  return result;
}
