/*
 * XREFs of sub_180043CD0 @ 0x180043CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043CBC @ 0x180043CBC (sub_180043CBC.c)
 *     sub_180043CF4 @ 0x180043CF4 (sub_180043CF4.c)
 */

__int64 sub_180043CD0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_180043CBC();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_180043CF4();
  *v1 |= 2uLL;
  return 0LL;
}
