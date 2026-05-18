/*
 * XREFs of sub_180137D60 @ 0x180137D60
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180137D60()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180214090 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180214090 + 1) >= 0x1000 )
    {
      v0 = qword_180214078 - *(_QWORD *)(qword_180214078 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180214090 + 40);
        JUMPOUT(0x180137DC3LL);
      }
    }
    j_j__o_free();
  }
  unk_180214088 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180214078) = 0;
}
