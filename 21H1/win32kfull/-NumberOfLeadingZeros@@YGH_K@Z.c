/*
 * XREFs of ?NumberOfLeadingZeros@@YGH_K@Z @ 0x157957
 * Callers:
 *     ?uDiv128by64@@YG_K_K00AA_K@Z @ 0x158D5A (-uDiv128by64@@YG_K_K00AA_K@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall NumberOfLeadingZeros(unsigned __int64 a1)
{
  unsigned int v1; // esi
  int v2; // ecx
  unsigned int v3; // edx

  v1 = HIDWORD(a1);
  v2 = 64;
  if ( HIDWORD(a1) )
  {
    v3 = HIDWORD(a1);
    v1 = 0;
    v2 = 32;
  }
  else
  {
    v3 = a1;
  }
  if ( (unsigned __int64)v3 >> 16 )
  {
    v3 >>= 16;
    v2 -= 16;
    v1 = 0;
  }
  if ( __PAIR64__(v1, v3) >> 8 )
  {
    v3 = __PAIR64__(v1, v3) >> 8;
    v2 -= 8;
    v1 >>= 8;
  }
  if ( __PAIR64__(v1, v3) >> 4 )
  {
    v3 = __PAIR64__(v1, v3) >> 4;
    v2 -= 4;
    v1 >>= 4;
  }
  if ( __PAIR64__(v1, v3) >> 2 )
  {
    v3 = __PAIR64__(v1, v3) >> 2;
    v2 -= 2;
    v1 >>= 2;
  }
  if ( v1 || v3 >= 2 )
    return v2 - 2;
  else
    return v2 - v3;
}
