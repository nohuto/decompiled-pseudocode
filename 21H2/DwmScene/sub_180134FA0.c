/*
 * XREFs of sub_180134FA0 @ 0x180134FA0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180134FA0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180213570 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213570 + 1) >= 0x1000 )
    {
      v0 = qword_180213558 - *(_QWORD *)(qword_180213558 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213570 + 40);
        JUMPOUT(0x180135003LL);
      }
    }
    j_j__o_free();
  }
  unk_180213568 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180213558) = 0;
}
