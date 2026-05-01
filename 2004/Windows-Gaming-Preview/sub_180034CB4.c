/*
 * XREFs of sub_180034CB4 @ 0x180034CB4
 * Callers:
 *     sub_180032A0C @ 0x180032A0C (sub_180032A0C.c)
 *     sub_180034BB0 @ 0x180034BB0 (sub_180034BB0.c)
 *     sub_180034D48 @ 0x180034D48 (sub_180034D48.c)
 *     sub_180034E84 @ 0x180034E84 (sub_180034E84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034CB4(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  int v6; // edx
  unsigned int *v7; // rax
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v2 = (float)(int)a2;
  v3 = v2 / *(float *)(a1 + 28);
  v4 = 0LL;
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = v4 + (unsigned int)(int)v3;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  v6 = 0;
  if ( (unsigned int)v5 > 0x11 )
  {
    v7 = dword_1800524A0;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = dword_1800524A0[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
