/*
 * XREFs of sub_180132D80 @ 0x180132D80
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180132D80()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212F30 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212F30 + 1) >= 0x1000 )
    {
      v0 = qword_180212F18 - *(_QWORD *)(qword_180212F18 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212F30 + 40);
        JUMPOUT(0x180132DE3LL);
      }
    }
    j_j__o_free();
  }
  unk_180212F28 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212F18) = 0;
}
