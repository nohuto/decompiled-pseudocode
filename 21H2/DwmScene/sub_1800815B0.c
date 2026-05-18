/*
 * XREFs of sub_1800815B0 @ 0x1800815B0
 * Callers:
 *     sub_18008150C @ 0x18008150C (sub_18008150C.c)
 * Callees:
 *     sub_180031070 @ 0x180031070 (sub_180031070.c)
 *     sub_180077B14 @ 0x180077B14 (sub_180077B14.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800815B0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rdi

  i = a3[2];
  v5 = a3;
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = a3[1]; !*(_BYTE *)(i + 25) && v5 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
      v5 = (__int64 *)i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v7 = sub_180031070(a1, a3);
  sub_180077B14((__int64)(v7 + 4));
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
