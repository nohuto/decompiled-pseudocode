/*
 * XREFs of sub_180072924 @ 0x180072924
 * Callers:
 *     sub_180077B94 @ 0x180077B94 (sub_180077B94.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 * Callees:
 *     sub_18006B43C @ 0x18006B43C (sub_18006B43C.c)
 *     sub_180072B80 @ 0x180072B80 (sub_180072B80.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180072924(__int64 *a1, __int64 a2)
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
      sub_180072B80(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18006B43C(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
