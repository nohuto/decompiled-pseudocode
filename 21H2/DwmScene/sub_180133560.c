/*
 * XREFs of sub_180133560 @ 0x180133560
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180133560()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212FF0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212FF0 + 1) >= 0x1000 )
    {
      v0 = qword_180212FD8 - *(_QWORD *)(qword_180212FD8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212FF0 + 40);
        JUMPOUT(0x1801335C3LL);
      }
    }
    j_j__o_free();
  }
  unk_180212FE8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212FD8) = 0;
}
