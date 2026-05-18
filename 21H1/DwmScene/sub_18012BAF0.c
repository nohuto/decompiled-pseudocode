/*
 * XREFs of sub_18012BAF0 @ 0x18012BAF0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012BAF0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180208598 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180208598 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_180208580 - 8);
      if ( (unsigned __int64)(qword_180208580 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180208598 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_180208590 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_180208580) = 0;
}
