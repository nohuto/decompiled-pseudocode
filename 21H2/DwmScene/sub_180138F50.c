/*
 * XREFs of sub_180138F50 @ 0x180138F50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180138F50()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_180214698 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_180214698 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)qword_180214688 - *((_QWORD *)qword_180214688 - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_180214698 + 1) + 40LL);
        JUMPOUT(0x180138FB3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_180214698 = (__int128)_mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180214688) = 0;
}
