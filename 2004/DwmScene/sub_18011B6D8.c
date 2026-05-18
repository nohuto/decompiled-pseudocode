/*
 * XREFs of sub_18011B6D8 @ 0x18011B6D8
 * Callers:
 *     sub_18011A08C @ 0x18011A08C (sub_18011A08C.c)
 * Callees:
 *     sub_1800899B4 @ 0x1800899B4 (sub_1800899B4.c)
 *     sub_18011B81C @ 0x18011B81C (sub_18011B81C.c)
 */

void __fastcall sub_18011B6D8(__int64 a1)
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
    sub_18011B81C(a1, v7);
  }
}
