/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110
 * Callers:
 *     sub_18000A830 @ 0x18000A830 (sub_18000A830.c)
 *     sub_18000AB20 @ 0x18000AB20 (sub_18000AB20.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180032210 @ 0x180032210 (sub_180032210.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180059F70 @ 0x180059F70 (sub_180059F70.c)
 *     sub_1800612F4 @ 0x1800612F4 (sub_1800612F4.c)
 *     sub_1800652C4 @ 0x1800652C4 (sub_1800652C4.c)
 *     sub_18007CF90 @ 0x18007CF90 (sub_18007CF90.c)
 *     sub_18007D0B0 @ 0x18007D0B0 (sub_18007D0B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
