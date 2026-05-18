/*
 * XREFs of sub_1801390A0 @ 0x1801390A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_1801390A0()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_180214678 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_180214678 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)aLook[0] - *((_QWORD *)aLook[0] - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_180214678 + 1) + 40LL);
        JUMPOUT(0x180139103LL);
      }
    }
    j_j__o_free();
  }
  xmmword_180214678 = (__int128)_mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(aLook[0]) = 0;
}
