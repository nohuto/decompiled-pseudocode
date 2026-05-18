/*
 * XREFs of sub_1801348A0 @ 0x1801348A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_1801348A0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802125B0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802125B0 + 1) >= 0x1000 )
    {
      v0 = qword_180212598 - *(_QWORD *)(qword_180212598 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802125B0 + 40);
        JUMPOUT(0x180134903LL);
      }
    }
    j_j__o_free();
  }
  unk_1802125A8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180212598) = 0;
}
