/*
 * XREFs of sub_180123840 @ 0x180123840
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     sub_180123868 @ 0x180123868 (sub_180123868.c)
 */

__int64 sub_180123840()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_180123860();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_180123868();
  *v1 |= 2uLL;
  return 0LL;
}
