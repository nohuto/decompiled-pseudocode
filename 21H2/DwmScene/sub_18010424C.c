/*
 * XREFs of sub_18010424C @ 0x18010424C
 * Callers:
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010424C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  float v4; // xmm1_4
  __int64 v5; // rax
  __int64 v6; // rcx
  float v7; // xmm0_4
  int v8; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 < 0 )
  {
    v5 = *(_QWORD *)(a1 + 144) & 1LL | (*(_QWORD *)(a1 + 144) >> 1);
    v4 = (float)(int)v5 + (float)(int)v5;
  }
  else
  {
    v4 = (float)(int)v2;
  }
  v6 = *(_QWORD *)(a1 + 136);
  if ( v6 < 0 )
    v7 = (float)(v6 & 1 | (unsigned int)((unsigned __int64)v6 >> 1))
       + (float)(v6 & 1 | (unsigned int)((unsigned __int64)v6 >> 1));
  else
    v7 = (float)(int)v6;
  v8 = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = v8;
  result = a2;
  *(float *)a2 = (float)(v7 - 1.0) / v4;
  *(float *)(a2 + 4) = 0.5 / v4;
  return result;
}
