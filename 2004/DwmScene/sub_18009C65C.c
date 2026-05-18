/*
 * XREFs of sub_18009C65C @ 0x18009C65C
 * Callers:
 *     sub_18009EE00 @ 0x18009EE00 (sub_18009EE00.c)
 *     sub_18009F034 @ 0x18009F034 (sub_18009F034.c)
 * Callees:
 *     sub_18009C790 @ 0x18009C790 (sub_18009C790.c)
 *     sub_18009EE70 @ 0x18009EE70 (sub_18009EE70.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009C65C(__int64 *a1, __int64 a2)
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
      sub_18009C790(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18009EE70(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
