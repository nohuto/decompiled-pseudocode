/*
 * XREFs of sub_18006CFE8 @ 0x18006CFE8
 * Callers:
 *     sub_18007218C @ 0x18007218C (sub_18007218C.c)
 *     sub_1800728D0 @ 0x1800728D0 (sub_1800728D0.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18006D254 @ 0x18006D254 (sub_18006D254.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006CFE8(__int64 *a1, __int64 a2)
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
      sub_18006D254(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      unknown_libname_101(v6 + 8);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
