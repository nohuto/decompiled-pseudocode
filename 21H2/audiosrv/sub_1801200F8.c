/*
 * XREFs of sub_1801200F8 @ 0x1801200F8
 * Callers:
 *     sub_1801201B0 @ 0x1801201B0 (sub_1801201B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801200F8(__int64 a1)
{
  *(_QWORD *)a1 = off_180155E20;
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 16LL))(qword_18019E5D8);
  return sub_18012E4A0(a1 + 24);
}
