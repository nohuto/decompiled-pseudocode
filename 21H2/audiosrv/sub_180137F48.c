/*
 * XREFs of sub_180137F48 @ 0x180137F48
 * Callers:
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_1801344D0 @ 0x1801344D0 (sub_1801344D0.c)
 *     sub_180134610 @ 0x180134610 (sub_180134610.c)
 *     sub_180138194 @ 0x180138194 (sub_180138194.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180137F48(__int64 (__fastcall ***a1)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a1 )
    return (**a1)(a1, 1LL);
  return result;
}
