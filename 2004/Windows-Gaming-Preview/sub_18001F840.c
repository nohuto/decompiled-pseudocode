/*
 * XREFs of sub_18001F840 @ 0x18001F840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F840(__int64 a1, _QWORD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(
           *(_QWORD *)(a1 + 32) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(a1 + 8), 8)),
           *a2);
}
