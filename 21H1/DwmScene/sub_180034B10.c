/*
 * XREFs of sub_180034B10 @ 0x180034B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034B10(__int64 a1, int a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __m128i si128; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+30h] [rbp-18h]

  v2 = *(__int64 **)(a1 + 144);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013D7E0);
  v3 = *v2;
  v6 = 3;
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v3 + 192))(v2, si128.m128i_u32[a2]);
}
