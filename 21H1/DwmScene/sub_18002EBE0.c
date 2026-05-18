/*
 * XREFs of sub_18002EBE0 @ 0x18002EBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D08C @ 0x18001D08C (sub_18001D08C.c)
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_18002F578 @ 0x18002F578 (sub_18002F578.c)
 *     sub_180030CCC @ 0x180030CCC (sub_180030CCC.c)
 *     sub_18009ADDC @ 0x18009ADDC (sub_18009ADDC.c)
 *     sub_18009AE50 @ 0x18009AE50 (sub_18009AE50.c)
 *     sub_1800CBA98 @ 0x1800CBA98 (sub_1800CBA98.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002EBE0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm6
  __m128 v11; // xmm0
  _QWORD v13[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-30h]

  if ( a2[3] == 1 )
  {
    sub_18002ED04();
  }
  else
  {
    v6 = a2[4];
    v7 = sub_180030CCC(v6, *a2);
    sub_18002F578(a1, v7, *a2, a2[1], a2[2], v6, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_1800CBA98(v13, a2[4]);
  if ( a1 + 120 != v8 )
    sub_18001D08C((_QWORD *)(a1 + 120), v8);
  if ( v14 >= 0x10 )
  {
    v9 = v13[0];
    if ( v14 + 1 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v13[0] - 8LL);
      if ( (unsigned __int64)(v13[0] - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v14 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  v10 = 0LL;
  v10.m128_f32[0] = (float)(int)sub_18009AE50(a1);
  v11 = 0LL;
  v11.m128_f32[0] = (float)(int)sub_18009ADDC(a1);
  return sub_18009AE6C(a1, _mm_unpacklo_ps(v10, v11).m128_u64[0]);
}
