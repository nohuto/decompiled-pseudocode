/*
 * XREFs of sub_180131600 @ 0x180131600
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180131600()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020F7C0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020F7C0 + 1) >= 0x1000 )
    {
      v0 = qword_18020F7A8 - *(_QWORD *)(qword_18020F7A8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020F7C0 + 40);
        JUMPOUT(0x180131663LL);
      }
    }
    j_j__o_free();
  }
  unk_18020F7B8 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_18020F7A8) = 0;
}
