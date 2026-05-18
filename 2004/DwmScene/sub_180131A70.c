/*
 * XREFs of sub_180131A70 @ 0x180131A70
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180131A70()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020CD80 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020CD80 + 1) >= 0x1000 )
    {
      v0 = qword_18020CD68 - *(_QWORD *)(qword_18020CD68 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020CD80 + 40);
        JUMPOUT(0x180131AD3LL);
      }
    }
    j_j__o_free();
  }
  unk_18020CD78 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020CD68) = 0;
}
