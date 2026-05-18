/*
 * XREFs of sub_180134A60 @ 0x180134A60
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180134A60()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212770 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212770 + 1) >= 0x1000 )
    {
      v0 = qword_180212758 - *(_QWORD *)(qword_180212758 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212770 + 40);
        JUMPOUT(0x180134AC3LL);
      }
    }
    j_j__o_free();
  }
  unk_180212768 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212758) = 0;
}
