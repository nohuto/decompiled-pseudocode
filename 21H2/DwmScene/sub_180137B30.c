/*
 * XREFs of sub_180137B30 @ 0x180137B30
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180137B30()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180214010 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180214010 + 1) >= 0x1000 )
    {
      v0 = qword_180213FF8 - *(_QWORD *)(qword_180213FF8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180214010 + 40);
        JUMPOUT(0x180137B93LL);
      }
    }
    j_j__o_free();
  }
  unk_180214008 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180213FF8) = 0;
}
