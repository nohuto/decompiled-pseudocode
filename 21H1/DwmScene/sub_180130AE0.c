/*
 * XREFs of sub_180130AE0 @ 0x180130AE0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180130AE0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020C3F8 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020C3F8 + 1) >= 0x1000 )
    {
      v0 = qword_18020C3E0 - *(_QWORD *)(qword_18020C3E0 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020C3F8 + 40);
        JUMPOUT(0x180130B43LL);
      }
    }
    j_j__o_free();
  }
  unk_18020C3F0 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(qword_18020C3E0) = 0;
}
