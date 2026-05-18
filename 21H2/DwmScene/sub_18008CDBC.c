/*
 * XREFs of sub_18008CDBC @ 0x18008CDBC
 * Callers:
 *     sub_18008D1E4 @ 0x18008D1E4 (sub_18008D1E4.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 */

_QWORD *__fastcall sub_18008CDBC(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001277C(a2, a1);
  return a2;
}
