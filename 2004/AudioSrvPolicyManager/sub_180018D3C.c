/*
 * XREFs of sub_180018D3C @ 0x180018D3C
 * Callers:
 *     sub_180018138 @ 0x180018138 (sub_180018138.c)
 *     sub_180018BEC @ 0x180018BEC (sub_180018BEC.c)
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     sub_180018F1C @ 0x180018F1C (sub_180018F1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180018D3C(__int64 a1, __int64 a2)
{
  double v2; // xmm1_8
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  unsigned __int64 v5; // rcx
  int v6; // edx
  unsigned int *v7; // rax
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1)) + (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1));
  else
    v2 = (double)(int)a2;
  v3 = 0LL;
  v4 = v2 / *(float *)(a1 + 20);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  v6 = 0;
  if ( (unsigned int)v5 > 0x11 )
  {
    v7 = dword_180043230;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = dword_180043230[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
