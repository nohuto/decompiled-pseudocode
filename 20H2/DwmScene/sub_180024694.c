/*
 * XREFs of sub_180024694 @ 0x180024694
 * Callers:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_180024550 @ 0x180024550 (sub_180024550.c)
 *     sub_180024710 @ 0x180024710 (sub_180024710.c)
 *     sub_1800264A0 @ 0x1800264A0 (sub_1800264A0.c)
 *     sub_180029CB8 @ 0x180029CB8 (sub_180029CB8.c)
 *     sub_18002C8D0 @ 0x18002C8D0 (sub_18002C8D0.c)
 *     sub_18002CC84 @ 0x18002CC84 (sub_18002CC84.c)
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_18002F578 @ 0x18002F578 (sub_18002F578.c)
 *     sub_18002FB34 @ 0x18002FB34 (sub_18002FB34.c)
 *     sub_18002FE38 @ 0x18002FE38 (sub_18002FE38.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 *     sub_180033220 @ 0x180033220 (sub_180033220.c)
 *     sub_180033A54 @ 0x180033A54 (sub_180033A54.c)
 *     sub_180038780 @ 0x180038780 (sub_180038780.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     _setlocale_set_cat @ 0x18003A1F0 (_setlocale_set_cat.c)
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 *     sub_18003D310 @ 0x18003D310 (sub_18003D310.c)
 *     sub_18003D8B0 @ 0x18003D8B0 (sub_18003D8B0.c)
 *     sub_18003EB90 @ 0x18003EB90 (sub_18003EB90.c)
 *     sub_18003F610 @ 0x18003F610 (sub_18003F610.c)
 *     sub_180040870 @ 0x180040870 (sub_180040870.c)
 *     sub_1800410CC @ 0x1800410CC (sub_1800410CC.c)
 *     sub_180041DB0 @ 0x180041DB0 (sub_180041DB0.c)
 *     sub_180042180 @ 0x180042180 (sub_180042180.c)
 *     sub_180042520 @ 0x180042520 (sub_180042520.c)
 *     sub_1800428C0 @ 0x1800428C0 (sub_1800428C0.c)
 *     sub_180042D80 @ 0x180042D80 (sub_180042D80.c)
 *     sub_180043798 @ 0x180043798 (sub_180043798.c)
 *     sub_180043904 @ 0x180043904 (sub_180043904.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180024694(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 4256);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
