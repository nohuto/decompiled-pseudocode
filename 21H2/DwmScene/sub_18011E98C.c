/*
 * XREFs of sub_18011E98C @ 0x18011E98C
 * Callers:
 *     sub_1801201D4 @ 0x1801201D4 (sub_1801201D4.c)
 *     sub_1801201DC @ 0x1801201DC (sub_1801201DC.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18011EA0C @ 0x18011EA0C (sub_18011EA0C.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011E98C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 *v6; // rdi

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_18011EA0C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180122420(v6 + 8);
      unknown_libname_103(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
