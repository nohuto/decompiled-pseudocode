/*
 * XREFs of sub_180048790 @ 0x180048790
 * Callers:
 *     sub_180002AA0 @ 0x180002AA0 (sub_180002AA0.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_18006D910 @ 0x18006D910 (sub_18006D910.c)
 *     sub_180072BB4 @ 0x180072BB4 (sub_180072BB4.c)
 *     sub_1800C2E6C @ 0x1800C2E6C (sub_1800C2E6C.c)
 *     sub_1800C30E0 @ 0x1800C30E0 (sub_1800C30E0.c)
 *     sub_1800C3170 @ 0x1800C3170 (sub_1800C3170.c)
 *     sub_1800C31A0 @ 0x1800C31A0 (sub_1800C31A0.c)
 *     sub_1800CA2FC @ 0x1800CA2FC (sub_1800CA2FC.c)
 *     sub_1800DA8EC @ 0x1800DA8EC (sub_1800DA8EC.c)
 *     sub_1800E87A0 @ 0x1800E87A0 (sub_1800E87A0.c)
 *     sub_1800ED0E0 @ 0x1800ED0E0 (sub_1800ED0E0.c)
 *     sub_1800EFD8C @ 0x1800EFD8C (sub_1800EFD8C.c)
 *     sub_1800F0470 @ 0x1800F0470 (sub_1800F0470.c)
 *     sub_1800F10B0 @ 0x1800F10B0 (sub_1800F10B0.c)
 *     sub_1800F1F00 @ 0x1800F1F00 (sub_1800F1F00.c)
 *     sub_1800FA1F4 @ 0x1800FA1F4 (sub_1800FA1F4.c)
 *     sub_1800FA43C @ 0x1800FA43C (sub_1800FA43C.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FBC38 @ 0x1800FBC38 (sub_1800FBC38.c)
 *     sub_1800FC4C4 @ 0x1800FC4C4 (sub_1800FC4C4.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 *     sub_1800FD1B0 @ 0x1800FD1B0 (sub_1800FD1B0.c)
 *     sub_1800FD528 @ 0x1800FD528 (sub_1800FD528.c)
 *     sub_1800FE268 @ 0x1800FE268 (sub_1800FE268.c)
 *     sub_1800FE430 @ 0x1800FE430 (sub_1800FE430.c)
 *     sub_1800FEE1C @ 0x1800FEE1C (sub_1800FEE1C.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 *     sub_1800FF6F8 @ 0x1800FF6F8 (sub_1800FF6F8.c)
 *     sub_18010D340 @ 0x18010D340 (sub_18010D340.c)
 *     sub_18010DFFC @ 0x18010DFFC (sub_18010DFFC.c)
 *     sub_18011A900 @ 0x18011A900 (sub_18011A900.c)
 *     sub_180136264 @ 0x180136264 (sub_180136264.c)
 *     sub_180136310 @ 0x180136310 (sub_180136310.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180048790(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
