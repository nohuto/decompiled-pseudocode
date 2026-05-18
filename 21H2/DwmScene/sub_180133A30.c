/*
 * XREFs of sub_180133A30 @ 0x180133A30
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180133A30()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212950 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212950 + 1) >= 0x1000 )
    {
      v0 = qword_180212938 - *(_QWORD *)(qword_180212938 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212950 + 40);
        JUMPOUT(0x180133A93LL);
      }
    }
    j_j__o_free();
  }
  unk_180212948 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212938) = 0;
}
