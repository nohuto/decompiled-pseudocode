/*
 * XREFs of sub_18000D558 @ 0x18000D558
 * Callers:
 *     sub_18000CA8C @ 0x18000CA8C (sub_18000CA8C.c)
 * Callees:
 *     sub_18000EA48 @ 0x18000EA48 (sub_18000EA48.c)
 */

char *sub_18000D558(char *a1, char *a2, _QWORD a3, ...)
{
  char *v4; // rdi
  __int64 v5; // rax

  v4 = a1;
  sub_18000EA48(a1);
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
