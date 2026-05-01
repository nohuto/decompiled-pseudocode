/*
 * XREFs of sub_180034F18 @ 0x180034F18
 * Callers:
 *     sub_1800301C4 @ 0x1800301C4 (sub_1800301C4.c)
 *     sub_180032A0C @ 0x180032A0C (sub_180032A0C.c)
 *     sub_180034AFC @ 0x180034AFC (sub_180034AFC.c)
 *     sub_180034BB0 @ 0x180034BB0 (sub_180034BB0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180034F18(__int64 a1)
{
  unsigned __int64 v1; // rdx
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax

  v1 = 0LL;
  v2 = (float)*(int *)(a1 + 24);
  v3 = v2 * *(float *)(a1 + 36);
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v1 = 0x8000000000000000uLL;
  }
  v4 = v2 * *(float *)(a1 + 32);
  v5 = v1 + (unsigned int)(int)v3;
  v6 = 0LL;
  *(_QWORD *)(a1 + 40) = v5;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  result = v6 + (unsigned int)(int)v4;
  if ( result < 0x11 )
    result = 0LL;
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
