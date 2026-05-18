/*
 * XREFs of sub_1800727E0 @ 0x1800727E0
 * Callers:
 *     sub_180077998 @ 0x180077998 (sub_180077998.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 *     sub_180083830 @ 0x180083830 (sub_180083830.c)
 * Callees:
 *     sub_1800729EC @ 0x1800729EC (sub_1800729EC.c)
 *     sub_180077A70 @ 0x180077A70 (sub_180077A70.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800727E0(__int64 *a1, __int64 a2)
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
      sub_1800729EC(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180077A70(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
