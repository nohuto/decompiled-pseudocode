/*
 * XREFs of sub_180132E20 @ 0x180132E20
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180132E20()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020D260 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020D260 + 1) >= 0x1000 )
    {
      v0 = qword_18020D248 - *(_QWORD *)(qword_18020D248 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020D260 + 40);
        JUMPOUT(0x180132E83LL);
      }
    }
    j_j__o_free();
  }
  unk_18020D258 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020D248) = 0;
}
