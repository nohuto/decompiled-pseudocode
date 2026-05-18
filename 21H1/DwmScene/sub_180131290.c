/*
 * XREFs of sub_180131290 @ 0x180131290
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180131290()
{
  __int64 v0; // rcx

  if ( *((_QWORD *)&xmmword_18020CB58 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18020CB58 + 1) + 1LL) >= 0x1000 )
    {
      v0 = qword_18020CB48 - *(_QWORD *)(qword_18020CB48 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18020CB58 + 1) + 40LL);
        JUMPOUT(0x1801312F3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18020CB58 = (__int128)_mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020CB48) = 0;
}
