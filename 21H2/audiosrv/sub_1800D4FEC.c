/*
 * XREFs of sub_1800D4FEC @ 0x1800D4FEC
 * Callers:
 *     sub_1800D4FD4 @ 0x1800D4FD4 (sub_1800D4FD4.c)
 *     sub_1800D5250 @ 0x1800D5250 (sub_1800D5250.c)
 *     sub_1800D52D0 @ 0x1800D52D0 (sub_1800D52D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D4FEC(_QWORD *a1)
{
  *a1 = &off_180146488;
  _o_free(a1[17]);
  return sub_1800064D0(a1 + 1);
}
