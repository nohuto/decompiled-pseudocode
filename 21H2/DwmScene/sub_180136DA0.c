/*
 * XREFs of sub_180136DA0 @ 0x180136DA0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180136DA0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802216F8 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802216F8 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_1802216E0 - 8);
      if ( (unsigned __int64)(qword_1802216E0 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802216F8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_1802216F0 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_1802216E0) = 0;
}
