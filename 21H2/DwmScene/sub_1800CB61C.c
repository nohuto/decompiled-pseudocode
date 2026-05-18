/*
 * XREFs of sub_1800CB61C @ 0x1800CB61C
 * Callers:
 *     sub_1800BC650 @ 0x1800BC650 (sub_1800BC650.c)
 *     sub_1800BC840 @ 0x1800BC840 (sub_1800BC840.c)
 *     sub_1800BCA38 @ 0x1800BCA38 (sub_1800BCA38.c)
 * Callees:
 *     sub_18008F284 @ 0x18008F284 (sub_18008F284.c)
 *     sub_1800CB96C @ 0x1800CB96C (sub_1800CB96C.c)
 */

void __fastcall sub_1800CB61C(__int64 a1)
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
    v7 = sub_18008F284(a1);
    sub_1800CB96C(a1, v7);
  }
}
