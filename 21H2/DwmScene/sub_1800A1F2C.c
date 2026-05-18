/*
 * XREFs of sub_1800A1F2C @ 0x1800A1F2C
 * Callers:
 *     sub_1800A46D0 @ 0x1800A46D0 (sub_1800A46D0.c)
 *     sub_1800A4904 @ 0x1800A4904 (sub_1800A4904.c)
 * Callees:
 *     sub_1800A2060 @ 0x1800A2060 (sub_1800A2060.c)
 *     sub_1800A4740 @ 0x1800A4740 (sub_1800A4740.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A1F2C(__int64 *a1, __int64 a2)
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
      sub_1800A2060(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_1800A4740(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
