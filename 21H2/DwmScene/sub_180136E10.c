/*
 * XREFs of sub_180136E10 @ 0x180136E10
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180136E10()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180221728 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180221728 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_180221710 - 8);
      if ( (unsigned __int64)(qword_180221710 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180221728 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_180221720 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_180221710) = 0;
}
