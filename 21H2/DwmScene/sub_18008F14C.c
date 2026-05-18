/*
 * XREFs of sub_18008F14C @ 0x18008F14C
 * Callers:
 *     sub_18008AC98 @ 0x18008AC98 (sub_18008AC98.c)
 * Callees:
 *     sub_18008F284 @ 0x18008F284 (sub_18008F284.c)
 *     sub_18008F39C @ 0x18008F39C (sub_18008F39C.c)
 */

void __fastcall sub_18008F14C(__int64 a1)
{
  __int64 v1; // rdx
  float v3; // xmm0_4
  __int64 v4; // rax
  __int64 v5; // rcx
  float v6; // xmm1_4
  __int64 v7; // rax

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
    sub_18008F39C(a1, v7);
  }
}
