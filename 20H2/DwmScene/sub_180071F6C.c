/*
 * XREFs of sub_180071F6C @ 0x180071F6C
 * Callers:
 *     sub_180071164 @ 0x180071164 (sub_180071164.c)
 *     sub_1800FDA6C @ 0x1800FDA6C (sub_1800FDA6C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180071F6C(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad cast";
  *a1 = &std::bad_cast::`vftable';
  return a1;
}
