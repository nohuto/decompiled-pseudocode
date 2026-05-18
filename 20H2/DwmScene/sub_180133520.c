/*
 * XREFs of sub_180133520 @ 0x180133520
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180133520()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_18020D5C8 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18020D5C8 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)qword_18020D5B8 - *((_QWORD *)qword_18020D5B8 - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18020D5C8 + 1) + 40LL);
        JUMPOUT(0x180133583LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18020D5C8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020D5B8) = 0;
}
