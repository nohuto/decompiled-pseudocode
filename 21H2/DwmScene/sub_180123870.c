/*
 * XREFs of sub_180123870 @ 0x180123870
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     sub_180123868 @ 0x180123868 (sub_180123868.c)
 */

__int64 sub_180123870()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_180123860();
  *v0 |= 0x18uLL;
  v1 = sub_180123868();
  *v1 |= 4uLL;
  return 0LL;
}
