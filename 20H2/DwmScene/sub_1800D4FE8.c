/*
 * XREFs of sub_1800D4FE8 @ 0x1800D4FE8
 * Callers:
 *     sub_1800D3738 @ 0x1800D3738 (sub_1800D3738.c)
 * Callees:
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     sub_180065B6C @ 0x180065B6C (sub_180065B6C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800D4FE8(_QWORD *a1, __int64 *a2, __int64 *a3)
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
  v7 = sub_18002B7A0(a1, a3);
  sub_180065B6C(v7 + 4, 0);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
