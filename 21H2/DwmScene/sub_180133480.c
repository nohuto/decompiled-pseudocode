/*
 * XREFs of sub_180133480 @ 0x180133480
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180133480()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212F50 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212F50 + 1) >= 0x1000 )
    {
      v0 = qword_180212F38 - *(_QWORD *)(qword_180212F38 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212F50 + 40);
        JUMPOUT(0x1801334E3LL);
      }
    }
    j_j__o_free();
  }
  unk_180212F48 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212F38) = 0;
}
