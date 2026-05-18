/*
 * XREFs of sub_1800899B4 @ 0x1800899B4
 * Callers:
 *     sub_18008987C @ 0x18008987C (sub_18008987C.c)
 *     sub_1800C5D4C @ 0x1800C5D4C (sub_1800C5D4C.c)
 *     sub_18010B470 @ 0x18010B470 (sub_18010B470.c)
 *     sub_18011B6D8 @ 0x18011B6D8 (sub_18011B6D8.c)
 *     sub_18011B754 @ 0x18011B754 (sub_18011B754.c)
 * Callees:
 *     ceilf @ 0x18011F754 (ceilf.c)
 */

unsigned __int64 __fastcall sub_1800899B4(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  float v3; // xmm0_4
  __int64 v4; // rax
  float v5; // xmm0_4
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v1 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)v1;
  }
  v5 = ceilf(v3 / *(float *)a1);
  v6 = 0LL;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v5;
  result = 8LL;
  if ( v7 > 8 )
    result = v7;
  if ( v2 >= result )
    return v2;
  if ( v2 < 0x200 )
  {
    v2 *= 8LL;
    if ( v2 >= result )
      return v2;
  }
  return result;
}
