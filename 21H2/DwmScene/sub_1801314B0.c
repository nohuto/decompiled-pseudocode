/*
 * XREFs of sub_1801314B0 @ 0x1801314B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_1801314B0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18020F618 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18020F618 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_18020F600 - 8);
      if ( (unsigned __int64)(qword_18020F600 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18020F618 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_18020F610 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(qword_18020F600) = 0;
}
