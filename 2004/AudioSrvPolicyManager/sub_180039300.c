/*
 * XREFs of sub_180039300 @ 0x180039300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800392AC @ 0x1800392AC (sub_1800392AC.c)
 *     sub_1800392E4 @ 0x1800392E4 (sub_1800392E4.c)
 */

__int64 sub_180039300()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_1800392AC();
  *v0 |= 0x18uLL;
  v1 = sub_1800392E4();
  *v1 |= 4uLL;
  return 0LL;
}
