/*
 * XREFs of sub_180132020 @ 0x180132020
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180132020()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020CC80 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020CC80 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aVignette - *(_QWORD *)(*(_QWORD *)aVignette - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020CC80 + 40);
        JUMPOUT(0x180132083LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_18020CC78 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  aVignette[0] = 0;
}
