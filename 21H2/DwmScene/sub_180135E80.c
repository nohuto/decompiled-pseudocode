/*
 * XREFs of sub_180135E80 @ 0x180135E80
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180135E80()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180213110 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213110 + 1) >= 0x1000 )
    {
      v0 = qword_1802130F8 - *(_QWORD *)(qword_1802130F8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213110 + 40);
        JUMPOUT(0x180135EE3LL);
      }
    }
    j_j__o_free();
  }
  unk_180213108 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_1802130F8) = 0;
}
