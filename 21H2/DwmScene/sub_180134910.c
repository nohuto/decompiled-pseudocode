/*
 * XREFs of sub_180134910 @ 0x180134910
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180134910()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180212710 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180212710 + 1) >= 0x1000 )
    {
      v0 = qword_1802126F8 - *(_QWORD *)(qword_1802126F8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180212710 + 40);
        JUMPOUT(0x180134973LL);
      }
    }
    j_j__o_free();
  }
  unk_180212708 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_1802126F8) = 0;
}
