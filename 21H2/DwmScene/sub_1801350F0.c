/*
 * XREFs of sub_1801350F0 @ 0x1801350F0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_1801350F0()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_1802135B0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802135B0 + 1) >= 0x1000 )
    {
      v0 = qword_180213598[0] - *(_QWORD *)(qword_180213598[0] - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802135B0 + 40);
        JUMPOUT(0x180135153LL);
      }
    }
    j_j__o_free();
  }
  unk_1802135A8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180213598[0]) = 0;
}
