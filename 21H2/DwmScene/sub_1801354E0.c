/*
 * XREFs of sub_1801354E0 @ 0x1801354E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_1801354E0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212C70 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212C70 + 1) >= 0x1000 )
    {
      v0 = qword_180212C58 - *(_QWORD *)(qword_180212C58 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212C70 + 40);
        JUMPOUT(0x180135543LL);
      }
    }
    j_j__o_free();
  }
  unk_180212C68 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212C58) = 0;
}
