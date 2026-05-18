/*
 * XREFs of sub_180133670 @ 0x180133670
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180133670()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_18020D5E8 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18020D5E8 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)aCube[0] - *((_QWORD *)aCube[0] - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18020D5E8 + 1) + 40LL);
        JUMPOUT(0x1801336D3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18020D5E8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(aCube[0]) = 0;
}
