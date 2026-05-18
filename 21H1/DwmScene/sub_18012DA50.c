/*
 * XREFs of sub_18012DA50 @ 0x18012DA50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_18012DA50()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020B418 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020B418 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)aEnabled - *(_QWORD *)(*(_QWORD *)aEnabled - 8LL);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020B418 + 40);
        JUMPOUT(0x18012DAB3LL);
      }
    }
    j_j__o_free();
  }
  *(__m128i *)asc_18020B410 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  aEnabled[0] = 0;
}
