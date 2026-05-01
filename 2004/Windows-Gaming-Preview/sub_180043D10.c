/*
 * XREFs of sub_180043D10 @ 0x180043D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043CBC @ 0x180043CBC (sub_180043CBC.c)
 *     sub_180043CF4 @ 0x180043CF4 (sub_180043CF4.c)
 */

__int64 sub_180043D10()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_180043CBC();
  *v0 |= 0x18uLL;
  v1 = sub_180043CF4();
  *v1 |= 4uLL;
  return 0LL;
}
