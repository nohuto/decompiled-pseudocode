/*
 * XREFs of sub_180137AC0 @ 0x180137AC0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180137AC0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180213FF0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213FF0 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aFont - *(_QWORD *)(*(_QWORD *)aFont - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213FF0 + 40);
        JUMPOUT(0x180137B23LL);
      }
    }
    j_j__o_free();
  }
  unk_180213FE8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  aFont[0] = 0;
}
