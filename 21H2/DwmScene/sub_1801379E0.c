/*
 * XREFs of sub_1801379E0 @ 0x1801379E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_1801379E0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180213CF0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213CF0 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aVignette - *(_QWORD *)(*(_QWORD *)aVignette - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213CF0 + 40);
        JUMPOUT(0x180137A43LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_180213CE8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  aVignette[0] = 0;
}
