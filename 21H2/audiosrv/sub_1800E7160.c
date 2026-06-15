/*
 * XREFs of sub_1800E7160 @ 0x1800E7160
 * Callers:
 *     sub_180032A30 @ 0x180032A30 (sub_180032A30.c)
 *     sub_1800E75B4 @ 0x1800E75B4 (sub_1800E75B4.c)
 *     sub_1800E7A9C @ 0x1800E7A9C (sub_1800E7A9C.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 */

__int64 __fastcall sub_1800E7160(_QWORD *a1, __int64 *a2)
{
  sub_1800461B8(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *))*a1)(*a1, &xmmword_18015B880, a2);
}
