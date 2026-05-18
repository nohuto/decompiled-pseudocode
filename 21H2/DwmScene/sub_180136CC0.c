/*
 * XREFs of sub_180136CC0 @ 0x180136CC0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180136CC0()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_180213BE8 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_180213BE8 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)Buf2[0] - *((_QWORD *)Buf2[0] - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_180213BE8 + 1) + 40LL);
        JUMPOUT(0x180136D23LL);
      }
    }
    j_j__o_free();
  }
  xmmword_180213BE8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(Buf2[0]) = 0;
}
