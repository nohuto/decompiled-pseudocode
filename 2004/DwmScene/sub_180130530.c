/*
 * XREFs of sub_180130530 @ 0x180130530
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180130530()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020C0B8 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020C0B8 + 1) >= 0x1000 )
    {
      v0 = qword_18020C0A0 - *(_QWORD *)(qword_18020C0A0 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020C0B8 + 40);
        JUMPOUT(0x180130593LL);
      }
    }
    j_j__o_free();
  }
  unk_18020C0B0 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020C0A0) = 0;
}
