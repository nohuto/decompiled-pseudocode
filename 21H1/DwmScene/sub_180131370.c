/*
 * XREFs of sub_180131370 @ 0x180131370
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180131370()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18021A398 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18021A398 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_18021A380 - 8);
      if ( (unsigned __int64)(qword_18021A380 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18021A398 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_18021A390 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18021A380) = 0;
}
