/*
 * XREFs of sub_1800C5D4C @ 0x1800C5D4C
 * Callers:
 *     sub_1800B6D80 @ 0x1800B6D80 (sub_1800B6D80.c)
 *     sub_1800B6F70 @ 0x1800B6F70 (sub_1800B6F70.c)
 *     sub_1800B7168 @ 0x1800B7168 (sub_1800B7168.c)
 * Callees:
 *     sub_1800899B4 @ 0x1800899B4 (sub_1800899B4.c)
 *     sub_1800C609C @ 0x1800C609C (sub_1800C609C.c)
 */

void __fastcall sub_1800C5D4C(__int64 a1)
{
  __int64 v1; // rdx
  float v3; // xmm0_4
  __int64 v4; // rax
  __int64 v5; // rcx
  float v6; // xmm1_4
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)v1;
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 < 0 )
    v6 = (float)(v5 & 1 | (unsigned int)((unsigned __int64)v5 >> 1))
       + (float)(v5 & 1 | (unsigned int)((unsigned __int64)v5 >> 1));
  else
    v6 = (float)(int)v5;
  if ( (float)(v3 / v6) > *(float *)a1 )
  {
    v7 = sub_1800899B4(a1);
    sub_1800C609C(a1, v7);
  }
}
