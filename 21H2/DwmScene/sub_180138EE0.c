/*
 * XREFs of sub_180138EE0 @ 0x180138EE0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180138EE0()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_180214638 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_180214638 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)qword_180214628 - *((_QWORD *)qword_180214628 - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_180214638 + 1) + 40LL);
        JUMPOUT(0x180138F43LL);
      }
    }
    j_j__o_free();
  }
  xmmword_180214638 = (__int128)_mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180214628) = 0;
}
