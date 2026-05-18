/*
 * XREFs of sub_18012BBD0 @ 0x18012BBD0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012BBD0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180208768 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180208768 + 1) >= 0x1000 )
    {
      v0 = qword_180208750 - *(_QWORD *)(qword_180208750 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180208768 + 40);
        JUMPOUT(0x18012BC33LL);
      }
    }
    j_j__o_free();
  }
  unk_180208760 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_180208750) = 0;
}
