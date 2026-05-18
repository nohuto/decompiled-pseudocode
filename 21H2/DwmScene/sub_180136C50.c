/*
 * XREFs of sub_180136C50 @ 0x180136C50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180136C50()
{
  __int64 v0; // rcx

  if ( *((_QWORD *)&xmmword_180213BC8 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_180213BC8 + 1) + 1LL) >= 0x1000 )
    {
      v0 = qword_180213BB8 - *(_QWORD *)(qword_180213BB8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_180213BC8 + 1) + 40LL);
        JUMPOUT(0x180136CB3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_180213BC8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180213BB8) = 0;
}
