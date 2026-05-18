/*
 * XREFs of sub_180135160 @ 0x180135160
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180135160()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_180213590 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180213590 + 1) >= 0x1000 )
    {
      v0 = qword_180213578[0] - *(_QWORD *)(qword_180213578[0] - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180213590 + 40);
        JUMPOUT(0x1801351C3LL);
      }
    }
    j_j__o_free();
  }
  unk_180213588 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180213578[0]) = 0;
}
