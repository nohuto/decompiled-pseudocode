/*
 * XREFs of sub_180137C80 @ 0x180137C80
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180137C80()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802140B0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802140B0 + 1) >= 0x1000 )
    {
      v0 = qword_180214098 - *(_QWORD *)(qword_180214098 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802140B0 + 40);
        JUMPOUT(0x180137CE3LL);
      }
    }
    j_j__o_free();
  }
  unk_1802140A8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180214098) = 0;
}
