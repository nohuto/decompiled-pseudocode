/*
 * XREFs of sub_1801326B0 @ 0x1801326B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_1801326B0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020D140 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020D140 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aVignette_0 - *(_QWORD *)(*(_QWORD *)aVignette_0 - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020D140 + 40);
        JUMPOUT(0x180132713LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_18020D138 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  aVignette_0[0] = 0;
}
