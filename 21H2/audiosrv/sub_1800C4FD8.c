/*
 * XREFs of sub_1800C4FD8 @ 0x1800C4FD8
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_18006EE20 @ 0x18006EE20 (sub_18006EE20.c)
 *     sub_1800768E0 @ 0x1800768E0 (sub_1800768E0.c)
 *     sub_1800C55B8 @ 0x1800C55B8 (sub_1800C55B8.c)
 *     sub_1800C59E3 @ 0x1800C59E3 (sub_1800C59E3.c)
 *     sub_1800DDD90 @ 0x1800DDD90 (sub_1800DDD90.c)
 *     unknown_libname_99 @ 0x1800DFD10 (unknown_libname_99.c)
 *     sub_1800F1A50 @ 0x1800F1A50 (sub_1800F1A50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C4FD8(__int64 a1)
{
  return EtwEventActivityIdControl(4LL, a1 + 16);
}
