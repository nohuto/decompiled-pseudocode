/*
 * XREFs of sub_18011DFA0 @ 0x18011DFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     sub_18011DF98 @ 0x18011DF98 (sub_18011DF98.c)
 */

__int64 sub_18011DFA0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_18011DF90();
  *v0 |= 0x18uLL;
  v1 = sub_18011DF98();
  *v1 |= 4uLL;
  return 0LL;
}
