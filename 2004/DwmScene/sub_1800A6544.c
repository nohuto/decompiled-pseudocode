/*
 * XREFs of sub_1800A6544 @ 0x1800A6544
 * Callers:
 *     sub_1800A7688 @ 0x1800A7688 (sub_1800A7688.c)
 *     sub_1800A7698 @ 0x1800A7698 (sub_1800A7698.c)
 * Callees:
 *     sub_180072BF0 @ 0x180072BF0 (sub_180072BF0.c)
 *     sub_1800A65B0 @ 0x1800A65B0 (sub_1800A65B0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A6544(__int64 *a1, __int64 a2)
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
      sub_1800A65B0(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180072BF0(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
