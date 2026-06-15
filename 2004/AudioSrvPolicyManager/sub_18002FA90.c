/*
 * XREFs of sub_18002FA90 @ 0x18002FA90
 * Callers:
 *     sub_18002F8CC @ 0x18002F8CC (sub_18002F8CC.c)
 * Callees:
 *     sub_18002FB9C @ 0x18002FB9C (sub_18002FB9C.c)
 *     ceilf @ 0x18003ADF7 (ceilf.c)
 */

void __fastcall sub_18002FA90(__int64 a1)
{
  __int64 v1; // rdx
  float v3; // xmm0_4
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm0_4
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

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
  if ( (v5 & 0x8000000000000000uLL) != 0LL )
    v6 = (float)(int)(*(_DWORD *)(a1 + 56) & 1 | (v5 >> 1)) + (float)(int)(*(_DWORD *)(a1 + 56) & 1 | (v5 >> 1));
  else
    v6 = (float)(int)v5;
  if ( (float)(v3 / v6) > *(float *)a1 )
  {
    v7 = ceilf(v3 / *(float *)a1);
    v8 = 0LL;
    if ( v7 >= 9.223372e18 )
    {
      v7 = v7 - 9.223372e18;
      if ( v7 < 9.223372e18 )
        v8 = 0x8000000000000000uLL;
    }
    v9 = v8 + (unsigned int)(int)v7;
    v10 = 8LL;
    if ( v9 > 8 )
      v10 = v9;
    if ( v5 < v10 )
    {
      if ( v5 >= 0x200 || (v5 *= 8LL, v5 < v10) )
        v5 = v10;
    }
    sub_18002FB9C(a1, v5);
  }
}
