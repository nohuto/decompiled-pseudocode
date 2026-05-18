/*
 * XREFs of sub_1800D4EA0 @ 0x1800D4EA0
 * Callers:
 *     sub_1800D558C @ 0x1800D558C (sub_1800D558C.c)
 *     sub_1800D5704 @ 0x1800D5704 (sub_1800D5704.c)
 * Callees:
 *     sub_1800D4F0C @ 0x1800D4F0C (sub_1800D4F0C.c)
 *     sub_1800D5594 @ 0x1800D5594 (sub_1800D5594.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D4EA0(__int64 *a1, __int64 a2)
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
      sub_1800D4F0C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_1800D5594(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
