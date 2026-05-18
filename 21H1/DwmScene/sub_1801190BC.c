/*
 * XREFs of sub_1801190BC @ 0x1801190BC
 * Callers:
 *     sub_18011A904 @ 0x18011A904 (sub_18011A904.c)
 *     sub_18011A90C @ 0x18011A90C (sub_18011A90C.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011913C @ 0x18011913C (sub_18011913C.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1801190BC(__int64 *a1, __int64 a2)
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
      sub_18011913C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18011CB50(v6 + 8);
      unknown_libname_101(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
