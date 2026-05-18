/*
 * XREFs of sub_180135080 @ 0x180135080
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180135080()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180213630 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213630 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aSkinning - *(_QWORD *)(*(_QWORD *)aSkinning - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213630 + 40);
        JUMPOUT(0x1801350E3LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_180213628 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  aSkinning[0] = 0;
}
