/*
 * XREFs of sub_18006832C @ 0x18006832C
 * Callers:
 *     sub_180068240 @ 0x180068240 (sub_180068240.c)
 *     sub_1800D60A0 @ 0x1800D60A0 (sub_1800D60A0.c)
 *     sub_1800D61D8 @ 0x1800D61D8 (sub_1800D61D8.c)
 * Callees:
 *     sub_180031070 @ 0x180031070 (sub_180031070.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 *__fastcall sub_18006832C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rax

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
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
