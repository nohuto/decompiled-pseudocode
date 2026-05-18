/*
 * XREFs of sub_18012F6C0 @ 0x18012F6C0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012F6C0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020C5B8 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020C5B8 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aSkinning - *(_QWORD *)(*(_QWORD *)aSkinning - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020C5B8 + 40);
        JUMPOUT(0x18012F723LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_18020C5B0 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  aSkinning[0] = 0;
}
