/*
 * XREFs of sub_1800728B8 @ 0x1800728B8
 * Callers:
 *     sub_180077A5C @ 0x180077A5C (sub_180077A5C.c)
 *     sub_1800781A0 @ 0x1800781A0 (sub_1800781A0.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180072B24 @ 0x180072B24 (sub_180072B24.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800728B8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_180072B24(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      unknown_libname_103(v6 + 8);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
