/*
 * XREFs of sub_180134050 @ 0x180134050
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180134050()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212990 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212990 + 1) >= 0x1000 )
    {
      v0 = qword_180212978 - *(_QWORD *)(qword_180212978 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212990 + 40);
        JUMPOUT(0x1801340B3LL);
      }
    }
    j_j__o_free();
  }
  unk_180212988 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212978) = 0;
}
