/*
 * XREFs of SHA256Update @ 0x180040498
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     SHA256Final @ 0x18004034C (SHA256Final.c)
 * Callees:
 *     SHA256Transform @ 0x1800405B8 (SHA256Transform.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

void *__fastcall SHA256Update(__int64 a1, _OWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _OWORD *v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // r14d
  unsigned int v8; // ebp
  void *result; // rax
  unsigned __int64 v10; // rbp

  v3 = a3;
  v4 = a2;
  v5 = a3 + *(_DWORD *)(a1 + 36);
  v6 = *(_DWORD *)(a1 + 36) & 0x3F;
  *(_DWORD *)(a1 + 36) = v5;
  if ( v5 < a3 )
    ++*(_DWORD *)(a1 + 32);
  if ( v6 )
  {
    v8 = v6 + a3;
    if ( v6 + a3 >= 0x40 )
    {
      memmove((void *)(v6 + a1 + 40), a2, 64 - v6);
      v4 = (_OWORD *)((char *)v4 + 64 - v6);
      v3 = v8 - 64;
      SHA256Transform(a1, a1 + 40);
      v6 = 0;
    }
  }
  result = (void *)((unsigned __int8)v4 & 7);
  if ( v3 >= 0x40 )
  {
    v10 = (unsigned __int64)v3 >> 6;
    if ( ((unsigned __int8)v4 & 7) != 0 )
    {
      do
      {
        *(_OWORD *)(a1 + 40) = *v4;
        *(_OWORD *)(a1 + 56) = v4[1];
        *(_OWORD *)(a1 + 72) = v4[2];
        *(_OWORD *)(a1 + 88) = v4[3];
        result = (void *)SHA256Transform(a1, a1 + 40);
        v4 += 4;
        v3 -= 64;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      do
      {
        result = (void *)SHA256Transform(a1, v4);
        v4 += 4;
        v3 -= 64;
        --v10;
      }
      while ( v10 );
    }
  }
  if ( v3 )
    return memmove((void *)(v6 + a1 + 40), v4, v3);
  return result;
}
