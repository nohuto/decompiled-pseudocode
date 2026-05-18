/*
 * XREFs of sub_18011DF70 @ 0x18011DF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     sub_18011DF98 @ 0x18011DF98 (sub_18011DF98.c)
 */

__int64 sub_18011DF70()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_18011DF90();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_18011DF98();
  *v1 |= 2uLL;
  return 0LL;
}
