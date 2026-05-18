/*
 * XREFs of sub_180136D30 @ 0x180136D30
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180136D30()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802216C8 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802216C8 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_1802216B0 - 8);
      if ( (unsigned __int64)(qword_1802216B0 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802216C8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_1802216C0 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_1802216B0) = 0;
}
