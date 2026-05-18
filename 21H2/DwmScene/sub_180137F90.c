/*
 * XREFs of sub_180137F90 @ 0x180137F90
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180137F90()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180214170 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180214170 + 1) >= 0x1000 )
    {
      v0 = qword_180214158 - *(_QWORD *)(qword_180214158 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180214170 + 40);
        JUMPOUT(0x180137FF3LL);
      }
    }
    j_j__o_free();
  }
  unk_180214168 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180214158) = 0;
}
