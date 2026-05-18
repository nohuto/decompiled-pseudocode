/*
 * XREFs of sub_180138070 @ 0x180138070
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180138070()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802141B0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802141B0 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aVignette_0 - *(_QWORD *)(*(_QWORD *)aVignette_0 - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802141B0 + 40);
        JUMPOUT(0x1801380D3LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_1802141A8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  aVignette_0[0] = 0;
}
