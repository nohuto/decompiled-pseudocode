/*
 * XREFs of sub_180043CA0 @ 0x180043CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043CBC @ 0x180043CBC (sub_180043CBC.c)
 */

__int64 sub_180043CA0()
{
  _QWORD *v0; // rax

  v0 = (_QWORD *)sub_180043CBC();
  *v0 |= 0x20uLL;
  return 0LL;
}
