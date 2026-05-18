/*
 * XREFs of sub_1801366D0 @ 0x1801366D0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_1801366D0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180213250 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213250 + 1) >= 0x1000 )
    {
      v0 = qword_180213238 - *(_QWORD *)(qword_180213238 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213250 + 40);
        JUMPOUT(0x180136733LL);
      }
    }
    j_j__o_free();
  }
  unk_180213248 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180213238) = 0;
}
