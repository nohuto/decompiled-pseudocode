/*
 * XREFs of sub_180133410 @ 0x180133410
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180133410()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212490 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212490 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aEnabled - *(_QWORD *)(*(_QWORD *)aEnabled - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212490 + 40);
        JUMPOUT(0x180133473LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_180212488 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  aEnabled[0] = 0;
}
