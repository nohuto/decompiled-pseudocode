/*
 * XREFs of sub_1800392C0 @ 0x1800392C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800392AC @ 0x1800392AC (sub_1800392AC.c)
 *     sub_1800392E4 @ 0x1800392E4 (sub_1800392E4.c)
 */

__int64 sub_1800392C0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_1800392AC();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_1800392E4();
  *v1 |= 2uLL;
  return 0LL;
}
