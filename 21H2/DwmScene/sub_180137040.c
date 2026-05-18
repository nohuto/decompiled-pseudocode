/*
 * XREFs of sub_180137040 @ 0x180137040
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180137040()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180213F70 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213F70 + 1) >= 0x1000 )
    {
      v0 = qword_180213F58 - *(_QWORD *)(qword_180213F58 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213F70 + 40);
        JUMPOUT(0x1801370A3LL);
      }
    }
    j_j__o_free();
  }
  unk_180213F68 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180213F58) = 0;
}
