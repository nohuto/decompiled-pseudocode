/*
 * XREFs of sub_1800344B0 @ 0x1800344B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180034E48 @ 0x180034E48 (sub_180034E48.c)
 *     sub_18003659C @ 0x18003659C (sub_18003659C.c)
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 *     sub_1800A0720 @ 0x1800A0720 (sub_1800A0720.c)
 *     sub_1800D1368 @ 0x1800D1368 (sub_1800D1368.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800344B0(__int64 a1, unsigned int *a2, __int64 a3)
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
    sub_1800345D4();
  }
  else
  {
    v6 = a2[4];
    v7 = sub_18003659C(v6, *a2);
    sub_180034E48(a1, v7, *a2, a2[1], a2[2], v6, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_1800D1368(v13, a2[4]);
  if ( a1 + 120 != v8 )
    sub_180020E1C((_QWORD *)(a1 + 120), v8);
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
  v10.m128_f32[0] = (float)(int)sub_1800A0720(a1);
  v11 = 0LL;
  v11.m128_f32[0] = (float)(int)sub_1800A06AC(a1);
  return sub_1800A073C(a1, _mm_unpacklo_ps(v10, v11).m128_u64[0]);
}
