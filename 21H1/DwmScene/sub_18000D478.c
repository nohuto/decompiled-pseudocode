/*
 * XREFs of sub_18000D478 @ 0x18000D478
 * Callers:
 *     sub_18000C9AC @ 0x18000C9AC (sub_18000C9AC.c)
 * Callees:
 *     sub_18000E968 @ 0x18000E968 (sub_18000E968.c)
 */

char *sub_18000D478(char *a1, char *a2, _QWORD a3, ...)
{
  char *v4; // rdi
  __int64 v5; // rax

  v4 = a1;
  sub_18000E968(a1);
  if ( a2 != v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v4[2 * v5] );
    v4 += 2 * v5;
  }
  return v4;
}
