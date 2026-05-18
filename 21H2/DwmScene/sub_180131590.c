/*
 * XREFs of sub_180131590 @ 0x180131590
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180131590()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020F7E0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020F7E0 + 1) >= 0x1000 )
    {
      v0 = qword_18020F7C8 - *(_QWORD *)(qword_18020F7C8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020F7E0 + 40);
        JUMPOUT(0x1801315F3LL);
      }
    }
    j_j__o_free();
  }
  unk_18020F7D8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_18020F7C8) = 0;
}
