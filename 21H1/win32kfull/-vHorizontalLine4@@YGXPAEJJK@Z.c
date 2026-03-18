/*
 * XREFs of ?vHorizontalLine4@@YGXPAEJJK@Z @ 0x24025F
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vHorizontalLine4(unsigned __int8 *a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v4; // edi
  unsigned __int8 *v5; // esi

  v4 = a3 - a2;
  if ( a3 != a2 )
  {
    v5 = &a1[a2 >> 1];
    if ( (a2 & 1) != 0 )
    {
      *v5 ^= (a4 ^ *v5) & 0xF;
      --v4;
      ++v5;
    }
    if ( v4 >> 1 )
    {
      memset(v5, a4, v4 >> 1);
      v5 += v4 >> 1;
      v4 &= 1u;
    }
    if ( v4 )
      *v5 = a4 ^ (a4 ^ *v5) & 0xF;
  }
}
