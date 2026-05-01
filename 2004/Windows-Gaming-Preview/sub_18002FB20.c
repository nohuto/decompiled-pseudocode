/*
 * XREFs of sub_18002FB20 @ 0x18002FB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002FB20(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __m128i v4; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v4 = *(__m128i *)(a1 + 72);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) )
  {
    *a2 = 0LL;
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, void *, _QWORD *))(*(_QWORD *)qword_18005AE20 + 40LL))(
             qword_18005AE20,
             *(unsigned int *)(v4.m128i_i64[0] + 4),
             &unk_180051428,
             a2);
  }
  else
  {
    *a2 = v4.m128i_i64[0];
    if ( v4.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4.m128i_i64[0] + 8LL))(v4.m128i_i64[0]);
  }
  return v2;
}
