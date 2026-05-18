/*
 * XREFs of sub_180138230 @ 0x180138230
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180138230()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802143D0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802143D0 + 1) >= 0x1000 )
    {
      v0 = qword_1802143B8 - *(_QWORD *)(qword_1802143B8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802143D0 + 40);
        JUMPOUT(0x180138293LL);
      }
    }
    j_j__o_free();
  }
  unk_1802143C8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_1802143B8) = 0;
}
