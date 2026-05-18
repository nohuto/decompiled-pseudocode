/*
 * XREFs of sub_180138CB0 @ 0x180138CB0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180138CB0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180214570 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180214570 + 1) >= 0x1000 )
    {
      v0 = qword_180214558 - *(_QWORD *)(qword_180214558 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180214570 + 40);
        JUMPOUT(0x180138D13LL);
      }
    }
    j_j__o_free();
  }
  unk_180214568 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180214558) = 0;
}
